  `include "defines.v"

  module core_top(
    input ck_i,
    input rs_n_i,

    // signal to rom, to read the instruction
    output wire rom_ce_o,
    output wire[`REG_BUS_D] rom_addr_o,
    input[`REG_BUS_D] rom_data_i,

    // signal to ram, to read/write the data
    output wire ram_ce_o,
    output wire[3:0] ram_sel_o,
    output wire[`REG_BUS_D] ram_addr_o,
    output wire ram_we_o,
    output wire[`REG_BUS_D] ram_data_o,
    input ram_data_rvalid,
    input[`REG_BUS_D] ram_data_i,

    // interrupt signal
      input irq_software_i,
      input irq_timer_i,
      input irq_external_i
  );

    //------------ signal from ctrl unit  -----------
      wire ctrl_ie_type_o;
      wire ctrl_set_epc_o;
      wire[`REG_BUS_D] ctrl_epc_o;

      wire ctrl_set_mtval_o;
      wire[`REG_BUS_D] ctrl_mtval_o;

      wire ctrl_set_cause_o;
      wire[3:0] ctrl_trap_casue_o;

      wire ctrl_mstatus_ie_clear_o;
      wire ctrl_mstatus_ie_set_o;

    wire[5:0] ctrl_stall_o;
    wire ctrl_flush_o;
    wire[`REG_BUS_D] ctrl_new_pc_o;


      //------- signals from if  ----
    wire[`INS_BUS_A] if_pc_o;
      assign rom_addr_o = if_pc_o;

      wire if_stall_req_o;
    wire[`INS_BUS_A] if_next_pc_o;
      wire if_next_taken_o;
    wire if_branch_slot_end_o;

      //wire[`INS_BUS_A] if_next_pc_o;
    //wire[1:0] if_next_taken_o;

      //------signals from branch prediction ---
      wire[`INS_BUS_A] bp_next_pc_o;
    wire bp_next_taken_o;

      //-------signals from if_id ----
    wire[`INS_BUS_A] id_pc_i;
    wire[`INS_BUS_D] id_inst_i;
    wire[`INS_BUS_A] id_next_pc_i;
      wire id_next_taken_i;
      wire id_branch_slot_end_i;

      //-------signals from id -------

      //id --> reg
      wire id_rs1_re_o;
      wire id_rs2_re_o;
      wire[`REG_BUS_A] id_rs1_ra_o;
      wire[`REG_BUS_A] id_rs2_ra_o;

      //id --> ctrl
      wire id_stall_req_o;

  //id -> id_ex
    wire[`REG_BUS_D] id_inst_o;
    wire[`REG_BUS_D] id_imm_o;
    wire[`INS_BUS_A] id_next_pc_o;
      wire id_next_taken_o;
      wire id_branch_slot_end_o;

    wire id_csr_we_o;
    wire[`REG_BUS_D] id_csr_addr_o;

    wire[`REG_BUS_D] id_rs1_data_o;
    wire[`REG_BUS_D] id_rs2_data_o;
    wire id_rd_we_o;
    wire[`REG_BUS_A] id_rd_waddr_o;

    wire[`AluSelBus] id_alusel_o;
    wire[`AluOpBus] id_uopcode_o;

      wire[`REG_BUS_D] id_pc_o;
    wire[`REG_BUS_D] id_excepttype_o;

      //-------signals from id_ex -------
  //ID -> EX
    wire[`REG_BUS_D] id_ex_pc_w;
      wire[`REG_BUS_D] ex_inst_i;
    wire[`INS_BUS_A] ex_next_pc_i;
      wire ex_next_taken_i;
      wire ex_branch_slot_end_i;

    wire[`AluSelBus] ex_alusel_i;
    wire[`AluOpBus] ex_uop_i;

    wire[`REG_BUS_D] ex_rs1_data_i;
    wire[`REG_BUS_D] ex_rs2_data_i;
    wire[`REG_BUS_D] ex_imm_i;
    wire ex_rd_we_i;
    wire[`REG_BUS_A] ex_rd_addr_i;

    wire ex_csr_we_i;
    wire[`REG_BUS_D] ex_csr_addr_i;

    wire[`REG_BUS_D] ex_excepttype_i;

      //-------signals from ex -------
      // ex --> div
    wire[`REG_BUS_D] ex_dividend_o;
    wire[`REG_BUS_D] ex_divisor_o;
    wire ex_div_start_o;
    wire ex_div_annul_o;
    wire ex_div_signed_o;

      // ex --> ctrl
      wire ex_stall_req_o;

      // ex --> csr
      wire[`REG_BUS_D] ex_csr_raddr_o;

    // ex --> ex_mem
      wire[`REG_BUS_D] ex_pc_o;   //to branch prediction as well
    wire[`REG_BUS_D] ex_inst_o;

      wire ex_branch_tag_o;
      wire ex_branch_slot_end_o;

    wire ex_csr_we_o;
    wire[`REG_BUS_D] ex_csr_waddr_o;
    wire[`REG_BUS_D] ex_csr_wdata_o;

    wire ex_rd_we_o;
    wire[`REG_BUS_A] ex_rd_addr_o;
    wire[`REG_BUS_D] ex_rd_wdata_o;

    wire[`AluOpBus] ex_uopcode_o;
    wire[`REG_BUS_D] ex_mem_addr_o;
    wire[`REG_BUS_D] ex_mem_wdata_o;

      wire[`REG_BUS_D] ex_excepttype_o;

      // ex --> branch prediction
    wire ex_branch_request_o;
    wire ex_branch_taken_o;
    wire ex_branch_call_o;
    wire ex_branch_ret_o;
    wire ex_branch_jmp_o;
    wire[`REG_BUS_D] ex_branch_target_o;

      wire ex_branch_redirect_o;   //miss predicted, redirect the pc
    wire[`REG_BUS_D] ex_branch_redirect_pc_o;


      //-------signals from ex_mem -------
    wire mem_rd_we_i;
    wire[`REG_BUS_A] mem_rd_addr_i;
    wire[`REG_BUS_D] mem_rd_wd_i;

    wire[`AluOpBus] mem_uop_i;
    wire[`REG_BUS_D] mem_mem_addr_i;
    wire[`REG_BUS_D] mem_mem_wdata_i;

    wire mem_csr_we_i;
    wire[`REG_BUS_D] mem_csr_waddr_i;
    wire[`REG_BUS_D] mem_csr_wdata_i;

      wire[`REG_BUS_D] mem_excepttype_i;
    wire[`REG_BUS_D] mem_pc_i;
    wire[`REG_BUS_D] mem_inst_i;


      //-------signals from mem -----------
    wire mem_rd_we_o;
    wire[`REG_BUS_A] mem_rd_addr_o;
    wire[`REG_BUS_D] mem_rd_wdata_o;

    wire mem_csr_we_o;
    wire[`REG_BUS_D] mem_csr_waddr_o;
    wire[`REG_BUS_D] mem_csr_wdata_o;

      wire mem_stall_req_o;
    wire[`REG_BUS_D] mem_excepttype_o;
    wire[`REG_BUS_D] mem_pc_o;
    wire[`REG_BUS_D] mem_inst_o;


      //----------- signals sourced from mem_wb ----
    wire wb_rd_we_i;
    wire[`REG_BUS_A] wb_rd_wa_i;
    wire[`REG_BUS_D] wb_rd_wd_i;

    wire wb_csr_we_i;
    wire[`REG_BUS_D] wb_csr_waddr_i;
    wire[`REG_BUS_D] wb_csr_wdata_i;

      wire wb_instret_incr_i;


      //------------ signals from div -----------------------
    wire[`REG_BUS_DOUBLE] div_result_o;
    wire div_ready_o;


    //------------ signals from reg file -------------------
      wire[`REG_BUS_D] reg_rs1_rd_o;
      wire[`REG_BUS_D] id_rs2_rd_o;


      //-------------------- signals from csr -----------------
      wire[`REG_BUS_D] csr_rdata_o;

      wire[`REG_BUS_D] csr_mstatus_o;    // mstatus
      wire[`REG_BUS_D] csr_mie_o;
      wire[`REG_BUS_D] csr_mip_o;
      wire[`REG_BUS_D] csr_mtvec_o;      // mtvec
      wire[`REG_BUS_D] csr_mepc_o;       // mepc

      wire csr_mstatus_ie_o;
      wire csr_mie_external_o;
      wire csr_mie_timer_o;
      wire csr_mie_sw_o;
      wire csr_mip_external_o;
    wire csr_mip_timer_o;
      wire csr_mip_sw_o;

      wire[`REG_BUS_D] csr_mtvec_o;
    wire[`REG_BUS_D] csr_epc_o;

      //ifu instantiate
    ifu ifu0(
      .ck_i(ck_i),
      .rs_n_i(rs_n_i),

      // from the control unit
      .stall_i(ctrl_stall_o),
      .flush_i(ctrl_flush_o),
      .new_pc_i(ctrl_new_pc_o),

          // from bp
      .next_pc_i (bp_next_pc_o),
      .next_taken_i(bp_next_taken_o),

      // from exe unit
      .branch_redirect_i(ex_branch_redirect_o),
      .branch_redirect_pc_i(ex_branch_redirect_pc_o),

          // to rom and to bp
      .pc_o(if_pc_o),
      .ce_o(rom_ce_o),     //connect to outside rom

      // to ctrl
      .stall_req_o(if_stall_req_o),

      // to exe unit
          .next_pc_o(if_next_pc_o),
      .next_taken_o(if_next_taken_o),
      .branch_slot_end_o(if_branch_slot_end_o)
    );


    branch_prediction bp0(
      .ck_i(ck_i),
      .rs_n_i(rs_n_i),

      .branch_source_i(ex_pc_o),   // the pc caused the branch
      .branch_request_i(ex_branch_request_o),  // is this instruction a branch/jump ?
      .branch_is_taken_i(ex_branch_taken_o),
      .branch_is_call_i(ex_branch_call_o),
      .branch_is_ret_i(ex_branch_ret_o),
      .branch_is_jmp_i(ex_branch_jmp_o),
      .branch_target_i(ex_branch_target_o),   // the acually branch target pc
      .branch_mispredict_i(ex_branch_redirect_o),

      //input signals from fetch unit
      .pc_i (if_pc_o),
      .stall_i(ctrl_stall_o[0]),

      // output signals to fetch unit
      .next_pc_o (bp_next_pc_o),    // next predicted pc
      .next_taken_o (bp_next_taken_o)  // branch take or not, forward to execute via fetch module
    );


      //if_id instantiate
    if_id if_id0(
      .ck_i(ck_i),
      .rs_n_i(rs_n_i),

      //from ctrl unit
      .stall_i(ctrl_stall_o),
      .flush_i(ctrl_flush_o),

      //from if
      .pc_i(if_pc_o),
          .next_pc_i(if_next_pc_o),
          .next_taken_i(if_next_taken_o),
          .branch_slot_end_i(if_branch_slot_end_o),

      //from rom
      .ins_i(rom_data_i),

      .branch_redirect_i(ex_branch_redirect_o),

      // to id
      .pc_o(id_pc_i),
      .ins_o(id_inst_i),
          .next_pc_o(id_next_pc_i),
          .next_taken_o(id_next_taken_i),
      .branch_slot_end_o(id_branch_slot_end_i)
    );


      //instantiate id
    id id0(
      .rs_n_i(rs_n_i),

      //signal from the if_id
      .pc_i(id_pc_i),
      .ins_i(id_inst_i),
          .next_pc_i(id_next_pc_i),
          .next_taken_i(id_next_taken_i),
          .branch_slot_end_i(id_branch_slot_end_i),

      //signal to read regfile
      .rs1_re_o(id_rs1_re_o),
      .rs2_re_o(id_rs2_re_o),
      .rs1_ra_o(id_rs1_ra_o),
      .rs2_ra_o(id_rs2_ra_o),

          // signal from regfile
      .rs1_rd_i(reg_rs1_rd_o),
      .rs2_rd_i(id_rs2_rd_o),

        //bypass from the ex
      .branch_redirect_i(ex_branch_redirect_o),
          .ex_uop_i(ex_uopcode_o),
      .ex_rd_we_i(ex_rd_we_o),
      .ex_rd_wa_i(ex_rd_addr_o),
      .ex_rd_wd_i(ex_rd_wdata_o),

        //bypass the dest rd in mem to decode
      .mem_rd_we_i(mem_rd_we_o),
      .mem_rd_wa_i(mem_rd_addr_o),
      .mem_rd_wd_i(mem_rd_wdata_o),

          //signal to ctrl
      .stall_req_o(id_stall_req_o),

      //signals to id_ex
          .pc_o(id_pc_o),
      .ins_o(id_inst_o),
          .next_pc_o(id_next_pc_o),
          .next_taken_o(id_next_taken_o),
      .branch_slot_end_o(id_branch_slot_end_o),

      .imm_o(id_imm_o),

      .csr_we_o(id_csr_we_o),
      .csr_addr_o(id_csr_addr_o),

      .rs1_data_o(id_rs1_data_o),
      .rs2_data_o(id_rs2_data_o),
      .rd_we_o(id_rd_we_o),
      .rd_wa_o(id_rd_waddr_o),

      .alusel_o(id_alusel_o),
      .uop_o(id_uopcode_o),

          .exception_o(id_excepttype_o)
    );

    id_ex id_ex_ins(
      .ck_i(ck_i),
      .rs_n_i(rs_n_i),

      //signal from the ctrl unit
      .stall_i(ctrl_stall_o),
      .flush_i(ctrl_flush_o),

      //signal from id
      .pc_i(id_pc_o),
          .ins_i(id_inst_o),
          .next_pc_i(id_next_pc_o),
          .next_taken_i(id_next_taken_o),
      .branch_slot_end_i(id_branch_slot_end_o),

      .alusel_i(id_alusel_o),
      .uop_i(id_uopcode_o),

      .rs1_d_i(id_rs1_data_o),
      .rs2_d_i(id_rs2_data_o),
          .imm_i(id_imm_o),
      .rd_we_i(id_rd_we_o),
      .rd_wa_i(id_rd_waddr_o),

      .csr_we_i(id_csr_we_o),
          .csr_addr_i(id_csr_addr_o),

      .exception_i(id_excepttype_o),

      //signal to ex
      .pc_o(id_ex_pc_w),
      .ins_o(ex_inst_i),
          .next_pc_o(ex_next_pc_i),
          .next_taken_o(ex_next_taken_i),
          .branch_slot_end_o(ex_branch_slot_end_i),

      .alusel_o(ex_alusel_i),
      .uop_o(ex_uop_i),

      .rs1_data_o(ex_rs1_data_i),
      .rs2_data_o(ex_rs2_data_i),
      .imm_o(ex_imm_i),
      .rd_we_o(ex_rd_we_i),
      .rd_a_o(ex_rd_addr_i),

      .csr_we_o(ex_csr_we_i),
          .csr_addr_o(ex_csr_addr_i),

      .exception_o(ex_excepttype_i)
    );

  //EX模块：组合逻辑
    ex ex_ins(
      .rs_n_i(rs_n_i),

      //from the id_ex
      .pc_i(id_ex_pc_w),
      .ins_i(ex_inst_i),
      .next_pc_i(ex_next_pc_i),
      .next_taken_i(ex_next_taken_i),
      .branch_slot_end_i(ex_branch_slot_end_i),

      .alusel_i(ex_alusel_i),
      .uop_i(ex_uop_i),

      .rs1_d_i(ex_rs1_data_i),
      .rs2_d_i(ex_rs2_data_i),
      .imm_i(ex_imm_i),
      .rd_we_i(ex_rd_we_i),
      .rd_wa_i(ex_rd_addr_i),

      .csr_we_i(ex_csr_we_i),
          .csr_addr_i(ex_csr_addr_i),
          .exception_i(ex_excepttype_i),

          // to div module
      .dividend_o(ex_dividend_o),
      .divisor_o(ex_divisor_o),
      .div_start_o(ex_div_start_o),
      .div_signed_o(ex_div_signed_o),
          // result from div module
      .div_result_i(div_result_o),
      .div_ready_i(div_ready_o),

          // to control unit
      .stall_req_o(ex_stall_req_o),

          // read the csr
      .csr_raddr_o(ex_csr_raddr_o),
      .csr_rdata_i(csr_rdata_o),

      //forward the csr updating from mem stage
        .mem_csr_we_i(mem_csr_we_o),
      .mem_csr_waddr_i(mem_csr_waddr_o),
      .mem_csr_wdata_i(mem_csr_wdata_o),

      //forward the csr updating from write back stage
        .wb_csr_we_i(wb_csr_we_i),
      .wb_csr_waddr_i(wb_csr_waddr_i),
      .wb_csr_wdata_i(wb_csr_wdata_i),


      //pass down the signals to next pipeline stage
      .pc_o(ex_pc_o),
      .ins_o(ex_inst_o),

      // branch
          .branch_request_o (ex_branch_request_o),  // is this instruction a branch/jump ?
          .branch_is_taken_o (ex_branch_taken_o),
          .branch_is_call_o (ex_branch_call_o),
          .branch_is_ret_o (ex_branch_ret_o),
          .branch_is_jmp_o (ex_branch_jmp_o),
          .branch_target_o (ex_branch_target_o),   // the acually branch target pc
      .branch_redirect_o(ex_branch_redirect_o),
      .branch_redirect_pc_o(ex_branch_redirect_pc_o),
      .branch_tag_o(ex_branch_tag_o),
          .branch_slot_end_o(ex_branch_slot_end_o),

      .csr_we_o(ex_csr_we_o),
      .csr_wa_o(ex_csr_waddr_o),
      .csr_wd_o(ex_csr_wdata_o),

      .rd_we_o(ex_rd_we_o),    //foward the rd info to idu meanwhile
      .rd_a_o(ex_rd_addr_o),
      .rd_wd_o(ex_rd_wdata_o),

      .uop_o(ex_uopcode_o),
      .mem_a_o(ex_mem_addr_o),
      .mem_wd_o(ex_mem_wdata_o),

      .exception_o(ex_excepttype_o)
    );


    div div0(
      .ck_i(ck_i),
      .rs_n_i(rs_n_i),
        // from the ex
      .div_signed_i(ex_div_signed_o),
      .dividend_i(ex_dividend_o),
      .divisor_i(ex_divisor_o),
      .start_i(ex_div_start_o),
      .annul_i(1'b0),
        // to exu
      .result_o(div_result_o),
      .ready_o(div_ready_o)
    );

      ex_mem ex_mem0(
      .ck_i(ck_i),
      .rs_n_i(rs_n_i),

        //from ctrl unit
        .stall_i(ctrl_stall_o),
        .flush_i(ctrl_flush_o),

      //from the exu
      .pc_i(ex_pc_o),
      .ins_i(ex_inst_o),

          .branch_tag_i(ex_branch_tag_o),
      .branch_slot_end_i(ex_branch_slot_end_o),

      .rd_we_i(ex_rd_we_o),
      .rd_wa_i(ex_rd_addr_o),
      .rd_wd_i(ex_rd_wdata_o),

        .uop_i(ex_uopcode_o),
      .mem_a_i(ex_mem_addr_o),
      .mem_wd_i(ex_mem_wdata_o),

      .csr_we_i(ex_csr_we_o),
      .csr_wa_i(ex_csr_waddr_o),
      .csr_wd_i(ex_csr_wdata_o),

          .exception_i(ex_excepttype_o),

      // pass down to lsu
      .rd_we_o(mem_rd_we_i),    //forward to id meanwhile
      .rd_a_o(mem_rd_addr_i),
      .rd_wd_o(mem_rd_wd_i),

      // load or store
        .uop_o(mem_uop_i),

      // store to the memory
      .mem_a_o(mem_mem_addr_i),
      .mem_wd_o(mem_mem_wdata_i),

      .csr_we_o(mem_csr_we_i),    //forward to ex meanwhile
      .csr_wa_o(mem_csr_waddr_i),
      .csr_wd_o(mem_csr_wdata_i),

      .exception_o(mem_excepttype_i),
      .pc_o(mem_pc_i),
      .ins_o(mem_inst_i)
    );

    mem mem0(
      .rs_n_i(rs_n_i),

      // signals from exu
          .exception_i(mem_excepttype_i),
      .pc_i(mem_pc_i),
      .ins_i(mem_inst_i),

      // GPR
      .rd_we_i(mem_rd_we_i),
      .rd_wa_i(mem_rd_addr_i),
      .rd_wd_i(mem_rd_wd_i),

          .uop_i(mem_uop_i),
      .mem_a_i(mem_mem_addr_i),
      .mem_wd_i(mem_mem_wdata_i),

      // read or write the memory
      .mem_a_o(ram_addr_o),
      .mem_we_o(ram_we_o),
      .mem_sel_o(ram_sel_o),
      .mem_data_o(ram_data_o),
      .mem_ce_o(ram_ce_o),
      .mem_data_i(ram_data_i),

        // CSR write signals
      .csr_we_i(mem_csr_we_i),
      .csr_wa_i(mem_csr_waddr_i),
      .csr_wd_i(mem_csr_wdata_i),

          //回写阶段的指令是否要写CSR，用来检测数据相关
          .wb_csr_we_i(wb_csr_we_i),
      .wb_csr_waddr_i(wb_csr_waddr_i),
          .wb_csr_wdata_i(wb_csr_wdata_i),


      //pass down to mem_wb stage
      //GPR
      .rd_we_o(mem_rd_we_o),
      .rd_a_o(mem_rd_addr_o),
      .rd_wd_o(mem_rd_wdata_o),

          // CSR
      .csr_we_o(mem_csr_we_o),
      .csr_wa_o(mem_csr_waddr_o),
      .csr_wd_o(mem_csr_wdata_o),

          // stall req and execeptions
      .stall_req_o(mem_stall_req_o),
      .exception_o(mem_excepttype_o),
      .pc_o(mem_pc_o),
      .ins_o(mem_inst_o)

    );

    mem_wb mem_wb0(
      .ck_i(ck_i),
      .rs_n_i(rs_n_i),

          //wires from ctrl unit
          .stall_i(ctrl_stall_o),
      .flush_i(ctrl_flush_o),

      //from mem
      .rd_we_i(mem_rd_we_o),
      .rd_wa_i(mem_rd_addr_o),
      .rd_wd_i(mem_rd_wdata_o),

      .csr_we_i(mem_csr_we_o),
      .csr_wa_i(mem_csr_waddr_o),
      .csr_wd_i(mem_csr_wdata_o),

      // pass down to write back stage, update the csr and gpr
      .rd_we_o(wb_rd_we_i),
      .rd_a_o(wb_rd_wa_i),
      .rd_wd_o(wb_rd_wd_i),

      .csr_we_o(wb_csr_we_i),
      .csr_wa_o(wb_csr_waddr_i),
      .csr_wd_o(wb_csr_wdata_i),

      .instret_incr_o(wb_instret_incr_i)
    );


    ctrl ctrl0(
      .ck_i(ck_i),
      .rs_n_i(rs_n_i),
        //from mem
          .exception_i(mem_excepttype_o),
      .pc_i(mem_pc_o),
      .ins_i(mem_inst_o),
          //from if, id, eu, mem
          .stallreq_from_if_i(if_stall_req_o),
      .stallreq_from_id_i(id_stall_req_o),
      .stallreq_from_ex_i(ex_stall_req_o),
      .stallreq_from_mem_i(mem_stall_req_o),

          //from csr
          .mstatus_ie_i(csr_mstatus_ie_o),

          .mie_external_i(csr_mie_external_o),
          .mie_timer_i(csr_mie_timer_o),
          .mie_sw_i (csr_mie_sw_o),

          .mip_external_i(csr_mip_external_o),
      .mip_timer_i(csr_mip_timer_o),
          .mip_sw_i(csr_mip_sw_o),

          .mtvec_i(csr_mtvec_o),
      .epc_i(csr_epc_o),

          // to csr
          .ie_type_o(ctrl_ie_type_o),
          .set_cause_o(ctrl_set_cause_o),
          .trap_cause_o(ctrl_trap_casue_o),

          .set_epc_o(ctrl_set_epc_o),
          .epc_o(ctrl_epc_o),

          .set_mtval_o(ctrl_set_mtval_o),
          .mtval_o(ctrl_mtval_o),


          .mstatus_ie_clear_o(ctrl_mstatus_ie_clear_o),
          .mstatus_ie_set_o(ctrl_mstatus_ie_set_o),

          //output the control signals
      .stall_o(ctrl_stall_o),
      .flush_o(ctrl_flush_o),
          .new_pc_o(ctrl_new_pc_o)
    );



    csr_file csr0(
      .ck_i(ck_i),
      .rs_n_i(rs_n_i),

      .irq_software_i(irq_software_i),
      .irq_timer_i(irq_timer_i),
      .irq_external_i(irq_external_i),

          // read csr
      .ra_i(ex_csr_raddr_o),
      .rd_o(csr_rdata_o),

          //write csr
      .we_i(wb_csr_we_i),
      .wa_i(wb_csr_waddr_i),
      .wd_i(wb_csr_wdata_i),

          .ins_ret_inc_i(wb_instret_incr_i),

          //from control
          .ie_type_i(ctrl_ie_type_o),
          .set_cause_i(ctrl_set_cause_o),
          .trap_casue_i(ctrl_trap_casue_o),

          .set_epc_i(ctrl_set_epc_o),
          .epc_i(ctrl_epc_o),

          .set_mtval_i(ctrl_set_mtval_o),
          .mtval_i(ctrl_mtval_o),

          .mstatus_ie_clear_i(ctrl_mstatus_ie_clear_o),
          .mstatus_ie_set_i(ctrl_mstatus_ie_set_o),

      // to control
          .mstatus_ie_o(csr_mstatus_ie_o),

          .mie_external_o(csr_mie_external_o),
          .mie_timer_o(csr_mie_timer_o),
          .mie_sw_o(csr_mie_sw_o),

          .mip_external_o(csr_mip_external_o),
      .mip_timer_o(csr_mip_timer_o),
          .mip_software_o(csr_mip_sw_o),

          .mtvec_o(csr_mtvec_o),
      .epc_o(csr_epc_o)
    );

  regfile regfile_ins(
    .ck_i(ck_i),
    .rs_n_i(rs_n_i),

    .rd_we_i(wb_rd_we_i),
    .rd_wa_i(wb_rd_wa_i),
    .rd_wd_i(wb_rd_wd_i),

    .rs1_re_i(id_rs1_re_o),
    .rs1_ra_i(id_rs1_ra_o),
    .rs1_rd_o(reg_rs1_rd_o),

    .rs2_re_i(id_rs2_re_o),
    .rs2_ra_i(id_rs2_ra_o),
    .rs2_rd_o(id_rs2_rd_o));

  endmodule