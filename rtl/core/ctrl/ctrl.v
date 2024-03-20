/*-------------------------------------------------------------------------
// Module:  ctrl
// File:  ctrl.v
// Author:  shawn Liu
// E-mail:  shawn110285@gmail.com
// Description: the control module
// (1) handle the stall request from ifu, idu, exu, slu and control the pipeline
// (2) handle the interrupt and exeception.
--------------------------------------------------------------------------*/

`include "defines.v"

  module ctrl(
    input ck_i,
    input rs_n_i,

    input[`REG_BUS_D] exception_i,
    input[`REG_BUS_D] pc_i,
    input[`REG_BUS_D] ins_i,

    /* ----- stall request from other modules --------*/
    input stallreq_from_if_i,
    input stallreq_from_id_i,
    input stallreq_from_ex_i,
    input stallreq_from_mem_i,

    /* ------------  signals from CSR  ---------------*/
    input mstatus_ie_i,  // global interrupt enabled or not
    input mie_external_i,  // external interrupt enbled or not
    input mie_timer_i,   // timer interrupt enabled or not
    input mie_sw_i,    // sw interrupt enabled or not

    input mip_external_i,   // external interrupt pending
    input mip_timer_i,    // timer interrupt pending
    input mip_sw_i,     // sw interrupt pending

    input[`REG_BUS_D] mtvec_i,      // the trap vector
    input[`REG_BUS_D] epc_i,      // get the epc for the mret instruction

    /* ------------  signals from CSR  ---------------*/
    output reg ie_type_o,
    output reg set_cause_o,
    output reg[3:0] trap_cause_o,

    output reg set_epc_o,
    output reg[`REG_BUS_D] epc_o,

    output reg set_mtval_o,
    output reg[`REG_BUS_D] mtval_o,

    output reg mstatus_ie_clear_o,
    output reg mstatus_ie_set_o,

    /* ---signals to other stages of the pipeline  ----*/
    output reg[5:0] stall_o,   // stall request to PC,IF_ID, ID_EX, EX_MEM, MEM_WB， one bit for one stage respectively
   // flush the whole pipleline, exception or interrupt happens
    output reg flush_o,
   // notify the ifu to fetch the instruction from the new PC
    output reg[`REG_BUS_D] new_pc_o);

  //0:IF/1:IF_ID/2:ID_EX/3:EX_MEM/4:MEM_WB
    always @ (*)
      if (rs_n_i == `RST_EN) stall_o = 6'b000000;
      else if (stallreq_from_mem_i == `STOP) stall_o = 6'b011111; //暂停 LSU
      else if (stallreq_from_ex_i == `STOP) stall_o = 6'b001111;//暂停EX
      else if (stallreq_from_id_i == `STOP) stall_o = 6'b000111;//暂停ID
      else if (stallreq_from_if_i == `STOP) stall_o = 6'b000111;//暂停IF
      else stall_o = 6'b000000;

    /* --------------------- handle the the interrupt and exceptions -------------------*/
    // state registers
    reg [3:0] cur_state_r;
    reg [3:0] next_state_r;

    // machine states
    parameter STATE_RESET = 4'b0001;
    parameter STATE_OPERATING = 4'b0010;
    parameter STATE_TRAP_TAKEN = 4'b0100;
    parameter STATE_TRAP_RETURN = 4'b1000;

    //exception_i ={25'b0 ,misaligned_load, misaligned_store, illegal_ins, misaligned_ins, ebreak, ecall, mret}
    wire mret;
    wire ecall;
    wire ebreak;
    wire misaligned_ins;
    wire illegal_ins;
    wire misaligned_store;
    wire misaligned_load;

    assign {misaligned_load, misaligned_store, illegal_ins, misaligned_ins, ebreak, ecall, mret} = exception_i[6:0];

    /* check there is a interrupt on pending*/
    wire eip;
    wire tip;
    wire sip;
    wire ip;

    assign eip = mie_external_i & mip_external_i;
    assign tip = mie_timer_i &  mip_timer_i;
    assign sip = mie_sw_i & mip_sw_i;
    assign ip = eip | tip | sip;

    /* an interrupt or an exception, need to be processed */
    wire trap_happened;
    assign trap_happened = (mstatus_ie_i & ip) | ecall | misaligned_ins | illegal_ins | misaligned_store | misaligned_load;

    always @ (*)
      case (cur_state_r)
        STATE_RESET: next_state_r = STATE_OPERATING;
        STATE_OPERATING:
          if (trap_happened) next_state_r = STATE_TRAP_TAKEN;
          else if (mret) next_state_r = STATE_TRAP_RETURN;
          else next_state_r = STATE_OPERATING;
        STATE_TRAP_TAKEN: next_state_r = STATE_OPERATING;
        STATE_TRAP_RETURN: next_state_r = STATE_OPERATING;
        default: next_state_r = STATE_OPERATING;
      endcase

    always @ (posedge ck_i)
      cur_state_r <= (rs_n_i == `RST_EN) ? STATE_RESET : next_state_r;

    assign epc_o = pc_i;

    reg [29:0] mtvec_base_r; // machine trap base address
    reg [1:0] mtvec_mode_r; // machine trap mode

    assign {mtvec_base_r, mtvec_mode_r} = mtvec_i;

    reg[`REG_BUS_D] trap_mux_out_r = {(REG_BUS_D){1'b0}};
    wire [`REG_BUS_D] vec_mux_out_w;
    wire [`REG_BUS_D] base_offset_w;

    // mtvec = { base[maxlen-1:2], mode[1:0]}
    // The value in the BASE field must always be aligned on a 4-byte boundary, and the MODE setting may impose
    // additional alignment constraints on the value in the BASE field.
    // when mode =2'b00, direct mode, When MODE=Direct, all traps into machine mode cause the pc to be set to the address in the BASE field.
    // when mode =2'b01, Vectored mode, all synchronous exceptions into machine mode cause the pc to be set to the address in the BASE
    // field, whereas interrupts cause the pc to be set to the address in the BASE field plus four times the interrupt cause number.

  //mtvec 最低位为 1，对于中断，使用向量地址模式（每种中断对应一个向量地址）
    assign base_offset_w = {26'd0, trap_cause_o, 2'd0};
    assign vec_mux_out_w = mtvec_i[0] ? {mtvec_base_r, 2'd0} + base_offset_w : {mtvec_base_r, 2'd0};
  //ie_type_o=0 使用基址模式，即所有中断（异常）均在使用同一个 ISR
    assign trap_mux_out_r = ie_type_o ? vec_mux_out_w : {mtvec_base_r, 2'd0};

    always @ (*)
      case (cur_state_r)
        STATE_RESET:
        begin
          flush_o = 1'b0;
          new_pc_o = `REBOOT_A;
          set_epc_o = 1'b0;
          set_cause_o = 1'b0;
          mstatus_ie_clear_o = 1'b0;
          mstatus_ie_set_o = 1'b0;
        end
        STATE_OPERATING:
        begin
          flush_o = 1'b0;
          new_pc_o = `ZERO_WORD;
          set_epc_o = 1'b0;
          set_cause_o = 1'b0;
          mstatus_ie_clear_o = 1'b0;
          mstatus_ie_set_o = 1'b0;
        end
      //发生异常时，输出异常处理函数地址
        STATE_TRAP_TAKEN:
        begin
          flush_o = 1'b1;
          new_pc_o = trap_mux_out_r;
          set_epc_o = 1'b1; //更新EPC/MCAUSE
          set_cause_o = 1'b1;
          mstatus_ie_clear_o = 1'b1;   // disable the mie bit in the mstatus
          mstatus_ie_set_o = 1'b0;
        end
      //异常处理完成，返回发生异常处之后的地址，继续执行
        STATE_TRAP_RETURN:
        begin
          flush_o = 1'b1;
          new_pc_o = epc_i;
          set_epc_o = 1'b0;
          set_cause_o = 1'b0;
          mstatus_ie_clear_o = 1'b0;
          mstatus_ie_set_o = 1'b1;    //enable the mie
        end
        default:
        begin
          flush_o = 1'b0;
          new_pc_o = `ZERO_WORD;
          set_epc_o = 1'b0;
          set_cause_o = 1'b0;
          mstatus_ie_clear_o = 1'b0;
          mstatus_ie_set_o = 1'b0;
        end
      endcase

    always @ (posedge ck_i)
      if (rs_n_i == `RST_EN) {ie_type_o, trap_cause_o, set_mtval_o, mtval_o} <= {1'b0, 4'b0, 1'b0, `ZERO_WORD};
      else if (cur_state_r == STATE_OPERATING)
        if (mstatus_ie_i & eip) {ie_type_o, trap_cause_o} <= {1'b1, `MCAUSE_INT_EXTERNAL};
        else if (mstatus_ie_i & sip) {ie_type_o, trap_cause_o} <= {1'b1, `MCAUSE_INT_SOFTWARE};
        else if (mstatus_ie_i & tip) {ie_type_o, trap_cause_o} <= {1'b1, `MCAUSE_INT_TIMER};
        else if (misaligned_ins) {ie_type_o, trap_cause_o, set_mtval_o, mtval_o} <= {1'b0, `MCAUSE_TRAP_INSTRUCTION_ADDRESS_MISALIGN, 1'b1, pc_i};
        else if (illegal_ins) {ie_type_o, trap_cause_o, set_mtval_o, mtval_o} <= {1'b0, `MCAUSE_TRAP_INSTRUCTION_ILLEGAL, 1'b1, ins_i}; //非法指令的具体值
        else if (ebreak) {ie_type_o, trap_cause_o, set_mtval_o, mtval_o} <= {1'b0, `MCAUSE_TRAP_INSTRUCTION_EBREAK, 1'b1, pc_i};
        else if (misaligned_store) {ie_type_o, trap_cause_o, set_mtval_o, mtval_o} <= {1'b0, `MCAUSE_TRAP_STORE_DATA_MISALIGN, 1'b1, pc_i};
        else if (misaligned_load) {ie_type_o, trap_cause_o, set_mtval_o, mtval_o} <= {1'b0, `MCAUSE_TRAP_LOAD_DATA_MISALIGN, 1'b1, pc_i};
        else if (ecall) {ie_type_o, trap_cause_o} <= {1'b0, `MCAUSE_TRAP_INSTRUCTION_ECALL};

  endmodule