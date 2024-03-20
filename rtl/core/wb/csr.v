  `include "defines.v"

  module csr_file(
    input ck_i,
    input rs_n_i,

    /* --- interrupt signals from clint or plic--------*/
    input irq_software_i,
    input irq_timer_i,
    input irq_external_i,
  //EX --Read-> CSR
    input[`REG_BUS_D] ra_i,           // the register to read
    output reg[`REG_BUS_D] rd_o,           // ouput the register


    /*------ wb module update the csr  --------*/
    input we_i,            // write enable
    input[`REG_BUS_D] wa_i,         // the register to write
    input[`REG_BUS_D] wd_i,         // the data to write

    input ins_ret_inc_i,   // 0 or 1 indicate increase the counter of instret

    /* ---- ctrl update epc, mcause_r, mtval, global ie ----*/
    input ie_type_i,          // interrupt or exception
    input set_cause_i,
    input [3:0] trap_casue_i,

    input set_epc_i,
    input[`REG_BUS_D] epc_i,

    output reg set_mtval_i,
    output reg[`REG_BUS_D] mtval_i,

    input mstatus_ie_clear_i,
    input mstatus_ie_set_i,

    /*-- to control , interrupt enablers, mtvec_r, epc etc-----*/
    output reg mstatus_ie_o,
    output wire mie_external_o,
    output wire mie_timer_o,
    output wire mie_sw_o,

    output wire mip_external_o,
    output wire mip_timer_o,
    output wire mip_software_o,
    output wire[`REG_BUS_D] mtvec_o,
    output wire[`REG_BUS_D] epc_o);

  //Vendor ID
    localparam CSR_MVENDORID_VALUE  = 32'hAAAAAAAA;

  //Architecture ID
    // The marchid CSR is an MXLEN-bit read-only register encoding the base microarchitecture of the
    // hart. This register must be readable in any implementation, but a value of 0 can be returned to
    // indicate the field is not implemented. The combination of mvendorid and marchid should uniquely
    // identify the type of hart microarchitecture that is implemented.
    localparam CSR_MARCHID_VALUE = {1'b0, 31'd22};

    // mimpid
    // The mimpid CSR provides a unique encoding of the version of the processor implementation. This
    // register must be readable in any implementation, but a value of 0 can be returned to indicate that
    // the field is not implemented.
    localparam CSR_MIMPID_VALUE = 32'd0;

    // hardid
    // The mhartid CSR is an MXLEN-bit read-only register containing the integer ID of the hardware
    // thread running the code. This register must be readable in any implementation. Hart IDs might
    // not necessarily be numbered contiguously in a multiprocessor system, but at least one hart must
    // have a hart ID of zero.
    localparam CSR_MHARTID = 32'd0;

    /*--------------------------------------------- MISA ------------------------------------------*/
    // The misa CSR is a WARL read-write register reporting the ISA supported by the hart. This
    // register must be readable in any implementation, but a value of zero can be returned to indicate
    // the misa register has not been implemented
    wire [1:0] mxl; // machine XLEN
    wire [25:0] mextensions; // ISA extensions
    wire [`REG_BUS_D] misa; // machine ISA register
    assign mxl = 2'b01;
    assign mextensions = 26'b00000000000001000100000000;  // i and m
    assign misa = {mxl, 4'b0, mextensions};

    reg[`REG_BUS_DOUBLE] mcycle_r;//开机后，运行的机器周期数目
    reg[`REG_BUS_DOUBLE] minsret_r; //开机后，HART完成的数目

    always @ (posedge ck_i)
      if (rs_n_i == `RST_EN) {mcycle_r, minsret_r} <= {{`ZERO_WORD, `ZERO_WORD}, {`ZERO_WORD, `ZERO_WORD}};
      else
      begin
        mcycle_r <= mcycle_r + 64'd1;
        if (ins_ret_inc_i) minsret_r <= minsret_r + 64'd1;
      end

    /*--------------------------------------------- mstatus_r ----------------------------------------*/
    // {SD(1), WPRI(8), TSR(1), TW(1), TVM(1), MXR(1), SUM(1), MPRV(1), XS(2),
    //  FS(2), MPP(2), WPRI(2), SPP(1), MPIE(1), WPRI(1), SPIE(1), UPIE(1),MIE(1), WPRI(1), SIE(1), UIE(1)}
    // Global interrupt-enable bits, MIE, SIE, and UIE, are provided for each privilege mode.
    // xPIE holds the value of the interrupt-enable bit active prior to the trap, and xPP holds the previous privilege mode.
    reg mstatus_pie_r = 1'b1; // prior interrupt enable
    reg mstatus_ie_r = 1'b0;
    assign mstatus_ie_o = mstatus_ie_r;

    always @ (posedge ck_i)
      if (rs_n_i == `RST_EN) {mstatus_ie_r, mstatus_pie_r} <= 2'b01;
      else if ((wa_i[11:0] == `CSR_MSTATUS_A) && (we_i == `WRITE_ENABLE) ) {mstatus_ie_r, mstatus_pie_r} <= {wd_i[3], wd_i[7]};
      else if (mstatus_ie_clear_i == 1'b1) {mstatus_ie_r, mstatus_pie_r} <= {1'b0, mstatus_ie_r};
      else if (mstatus_ie_set_i == 1'b1) {mstatus_ie_r, mstatus_pie_r} <= {mstatus_pie_r, 1'b1};

    reg[`REG_BUS_D] mstatus_r = {(`REG_BUS_D){1'b0}};
    assign mstatus_r = {19'd0, 2'b11, 3'd0, mstatus_pie_r, 3'd0 , mstatus_ie_r, 3'd0};

    /*--------------------------------------------- mie ----------------------------------------*/
    // mie: {WPRI[31:12], MEIE(1), WPRI(1), SEIE(1), UEIE(1), MTIE(1), WPRI(1), STIE(1), UTIE(1), MSIE(1), WPRI(1), SSIE(1), USIE(1)}
    // MTIE, STIE, and UTIE for M-mode, S-mode, and U-mode timer interrupts respectively.
    // MSIE, SSIE, and USIE fields enable software interrupts in M-mode, S-mode software, and U-mode, respectively.
    // MEIE, SEIE, and UEIE fields enable external interrupts in M-mode, S-mode software, and U-mode, respectively.
    reg[`REG_BUS_D] mie;
    reg mie_external; // external interrupt enable
    reg mie_timer;    // timer interrupt enable
    reg mie_sw;       // software interrupt enable

    assign mie_external_o = mie_external;
    assign mie_timer_o = mie_timer;
    assign mie_sw_o = mie_sw;

    assign mie = {20'b0, mie_external, 3'b0, mie_timer, 3'b0, mie_sw, 3'b0};

    always @ (posedge ck_i) begin
        if (rs_n_i == `RST_EN) begin
            mie_external <= 1'b0;
            mie_timer <= 1'b0;
            mie_sw <= 1'b0;
        end else if ((wa_i[11:0] == `CSR_MIE_A) && (we_i == `WRITE_ENABLE)) begin
            mie_external <= wd_i[11];
            mie_timer <= wd_i[7];
            mie_sw <= wd_i[3];
        end
    end


    /*--------------------------------------------- mtvec_r ----------------------------------------*/
    // The mtvec_r register is an MXLEN-bit read/write register that holds trap vector configuration,
    // consisting of a vector base address (BASE) and a vector mode (MODE).
    // mtvec_r = { base[maxlen-1:2], mode[1:0]}
    // The value in the BASE field must always be aligned on a 4-byte boundary, and the MODE setting may impose
    // additional alignment constraints on the value in the BASE field.
    // when mode =2'b00, direct mode, When MODE=Direct, all traps into machine mode cause_r the pc to be set to the address in the BASE field.
    // when mode =2'b01, Vectored mode, all synchronous exceptions into machine mode cause_r the pc to be set to the address in the BASE
    // field, whereas interrupts cause_r the pc to be set to the address in the BASE field plus four times the interrupt cause_r number.

  ////////////////////////////////////////////////////////////////
  // MTVEC
    reg[`REG_BUS_D] mtvec_r = {(`REG_BUS_D){1'b0}};
    always @ (posedge ck_i)
      if (rs_n_i == `RST_EN) mtvec_r <= `MTVEC_RESET;
      else if ((wa_i[11:0] == `CSR_MTVEC_A) && (we_i == `WRITE_ENABLE)) mtvec_r <= wd_i;

    assign mtvec_o = mtvec_r;
    /*--------------------------------------------- mscratch ----------------------------------------*/
    // mscratch : Typically, it is used to hold a pointer to a machine-mode hart-local context space and swapped
    // with a user register upon entry to an M-mode trap handler.
    reg[`REG_BUS_D] mscratch;

    always @ (posedge ck_i)
      if (rs_n_i == `RST_EN) mscratch <= `ZERO_WORD;
      else if ((wa_i[11:0] == `CSR_MSCRATCH_A) && (we_i == `WRITE_ENABLE)) mscratch <= wd_i;
  ////////////////////////////////////////////////////////////////
  // EPC
    reg[`REG_BUS_D] mepc_r = {(`REG_BUS_D){1'b0}};
    always @ (posedge ck_i)
      if (rs_n_i == `RST_EN) mepc_r <= `ZERO_WORD;
    //中断或者异常发生时，硬件自动设置 epc，保存发生异常的VA地址
      else if (set_epc_i) mepc_r <= {epc_i[31:2], 2'd0};
    //程序指令设置 epc
      else if ((wa_i[11:0] == `CSR_MEPC_A) && (we_i == `WRITE_ENABLE)) mepc_r <= {wd_i[31:2], 2'd0};

    assign epc_o = mepc_r;
  ////////////////////////////////////////////////////////////////
  //MCAUSE
    reg [3:0] cause_r;
    reg [26:0] cause_rem_r;
    reg int_or_exc_r;

    always @ (posedge ck_i)
      if (rs_n_i == `RST_EN) {int_or_exc_r, cause_rem_r, cause_r} <= {1'b0, 27'd0, 4'b0000};
      else if (set_cause_i) {int_or_exc_r, cause_rem_r, cause_r} <= {ie_type_i, 27'd0, trap_casue_i};
      else if ((wa_i[11:0] == `CSR_MCAUSE_A) && (we_i == `WRITE_ENABLE)) {int_or_exc_r, cause_rem_r, cause_r} <= wd_i;

    reg[`REG_BUS_D] mcause_r = {(`REG_BUS_D){1'b0}};
    assign mcause_r = {int_or_exc_r, cause_rem_r, cause_r}; //MSB:中断或者异常，LSBs: mcause

  // MIP
    reg mip_external_r = 1'b0;
    reg mip_software_r = 1'b0;
    reg mip_timer_r = 1'b0;
    always @ (posedge ck_i)
      if (rs_n_i == `RST_EN) {mip_external_r, mip_software_r, mip_timer_r} <= 3'b000;
      else {mip_external_r, mip_software_r, mip_timer_r} <= {irq_external_i, irq_software_i, irq_timer_i};

    assign {mip_external_o, mip_software_o, mip_timer_o} = mip_external_r, mip_software_r, mip_timer_r};

    reg[`REG_BUS_D] mip = {(`REG_BUS_D){1'b0}};
  //仅实现机器模式，用户态、内核态中断未定义
    assign mip = {20'd0, mip_external_r, 3'b0, mip_timer_r, 3'b0, mip_software_r, 3'b0};

    /*--------------------------------------------- mtval ----------------------------------------*/
    // When a trap is taken into M-mode, mtval is either set to zero or written with exception-specific information
    // to assist software in handling the trap.
    // When a hardware breakpoint is triggered, or an instruction-fetch, load, or store address-misaligned,
    // access, or page-fault exception occurs, mtval is written with the faulting virtual address.
    // On an illegal instruction trap, mtval may be written with the first XLEN or ILEN bits of the faulting instruction
    reg[`REG_BUS_D] mtval;
  //wire misalign_exception_w;

    always @ (posedge ck_i)
      if (rs_n_i == `RST_EN) mtval <= 32'd0;
    //硬件根据相关模块的运行错误，向 MTVAL写入错误相关的参数（地址、前缀长度......）
      else if (set_mtval_i) mtval <= mtval_i;
    //软件向 MTVAL寄存器写入数据
      else if ((wa_i[11:0] == `CSR_MTVAL_A) && (we_i == `WRITE_ENABLE)) mtval <= wd_i;

    always @ (*)
    //发生寄存器 Forward
      if ((wa_i[11:0] == ra_i[11:0]) && (we_i == `WRITE_ENABLE)) rd_o = wd_i;
      else
        case (ra_i[11:0])
          `CSR_MSTATUS_A: rd_o = mstatus_r;
          `CSR_MISA_A: rd_o = misa;
          `CSR_MIE_A: rd_o = mie;
          `CSR_MTVEC_A: rd_o = mtvec_r;
          `CSR_MCYCLE_A, `CSR_CYCLE_A: rd_o = mcycle_r[`REG_BUS_D];
          `CSR_MCYCLEH_A, `CSR_CYCLEH_A: rd_o = mcycle_r[63:32];
          `CSR_MINSTRET_A: rd_o = minsret_r[`REG_BUS_D];
          `CSR_MINSTRETH_A: rd_o = minsret_r[63:32];
          `CSR_MSCRATCH_A: rd_o = mscratch;
          `CSR_MEPC_A: rd_o = mepc_r;
          `CSR_MCAUSE_A: rd_o = mcause_r;
          `CSR_MIP_A: rd_o = mip;
          `CSR_MTVAL_A: rd_o = mtval;
          `CSR_MVENDORID_A: rd_o = CSR_MVENDORID_VALUE;
          `CSR_MARCHID_A: rd_o = CSR_MARCHID_VALUE;
          `CSR_MIMPID_A: rd_o = CSR_MIMPID_VALUE;
          `CSR_MHARTID_A: rd_o = CSR_MHARTID;
          default: rd_o = `ZERO_WORD;
        endcase

  endmodule