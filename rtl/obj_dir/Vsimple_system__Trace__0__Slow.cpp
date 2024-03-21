// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsimple_system__Syms.h"


VL_ATTR_COLD void Vsimple_system___024root__trace_init_sub__TOP__0(Vsimple_system___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_system___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+398,"ck_i", false,-1);
    tracep->declBit(c+399,"rs_n_i", false,-1);
    tracep->declBit(c+400,"jtag_TCK", false,-1);
    tracep->declBit(c+401,"jtag_TMS", false,-1);
    tracep->declBit(c+402,"jtag_TDI", false,-1);
    tracep->declBit(c+403,"jtag_TDO", false,-1);
    tracep->pushNamePrefix("simple_system ");
    tracep->declBit(c+398,"ck_i", false,-1);
    tracep->declBit(c+399,"rs_n_i", false,-1);
    tracep->declBit(c+400,"jtag_TCK", false,-1);
    tracep->declBit(c+401,"jtag_TMS", false,-1);
    tracep->declBit(c+402,"jtag_TDI", false,-1);
    tracep->declBit(c+403,"jtag_TDO", false,-1);
    tracep->declBus(c+426,"NrDevices", false,-1, 31,0);
    tracep->declBus(c+427,"NrHosts", false,-1, 31,0);
    tracep->declBit(c+187,"rom_ce", false,-1);
    tracep->declBus(c+188,"inst_addr", false,-1, 31,0);
    tracep->declBus(c+404,"inst", false,-1, 31,0);
    tracep->declBit(c+405,"timer_irq_O", false,-1);
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+82+i*1,"host_req", true,(i+0));
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+83+i*1,"host_gnt", true,(i+0));
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+189+i*1,"host_addr", true,(i+0), 31,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+84+i*1,"host_we", true,(i+0));
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+21+i*1,"host_be", true,(i+0), 3,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+22+i*1,"host_wdata", true,(i+0), 31,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+159+i*1,"host_rvalid", true,(i+0));
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+170+i*1,"host_rdata", true,(i+0), 31,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+85+i*1,"host_err", true,(i+0));
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBit(c+86+i*1,"device_req", true,(i+0));
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+89+i*1,"device_addr", true,(i+0), 31,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBit(c+92+i*1,"device_we", true,(i+0));
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+95+i*1,"device_be", true,(i+0), 3,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+98+i*1,"device_wdata", true,(i+0), 31,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBit(c+14+i*1,"device_rvalid", true,(i+0));
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+406+i*1,"device_rdata", true,(i+0), 31,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBit(c+101+i*1,"device_err", true,(i+0));
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+1+i*1,"cfg_device_addr_base", true,(i+0), 31,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+4+i*1,"cfg_device_addr_mask", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("console0 ");
    tracep->declBit(c+428,"FlushOnChar", false,-1);
    tracep->declBit(c+398,"ck_i", false,-1);
    tracep->declBit(c+399,"rst_ni", false,-1);
    tracep->declBit(c+104,"req_i", false,-1);
    tracep->declBit(c+105,"we_i", false,-1);
    tracep->declBus(c+106,"be_i", false,-1, 3,0);
    tracep->declBus(c+107,"addr_i", false,-1, 31,0);
    tracep->declBus(c+108,"wdata_i", false,-1, 31,0);
    tracep->declBit(c+176,"rvalid_o", false,-1);
    tracep->declBus(c+429,"rdata_o", false,-1, 31,0);
    tracep->declBus(c+430,"CHAR_OUT_ADDR", false,-1, 7,0);
    tracep->declBus(c+431,"SIM_CTRL_ADDR", false,-1, 7,0);
    tracep->declBus(c+109,"ctl_addr", false,-1, 7,0);
    tracep->declBus(c+177,"sim_finish", false,-1, 2,0);
    tracep->declBus(c+7,"log_fd", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("core_top0 ");
    tracep->declBit(c+398,"ck_i", false,-1);
    tracep->declBit(c+399,"rs_n_i", false,-1);
    tracep->declBit(c+187,"rom_ce_o", false,-1);
    tracep->declBus(c+188,"rom_addr_o", false,-1, 31,0);
    tracep->declBus(c+404,"rom_data_i", false,-1, 31,0);
    tracep->declBit(c+110,"ram_ce_o", false,-1);
    tracep->declBus(c+23,"ram_sel_o", false,-1, 3,0);
    tracep->declBus(c+24,"ram_addr_o", false,-1, 31,0);
    tracep->declBit(c+111,"ram_we_o", false,-1);
    tracep->declBus(c+25,"ram_data_o", false,-1, 31,0);
    tracep->declBit(c+160,"ram_data_rvalid", false,-1);
    tracep->declBus(c+171,"ram_data_i", false,-1, 31,0);
    tracep->declBit(c+432,"irq_software_i", false,-1);
    tracep->declBit(c+405,"irq_timer_i", false,-1);
    tracep->declBit(c+432,"irq_external_i", false,-1);
    tracep->declBit(c+190,"ctl_ie_type_o", false,-1);
    tracep->declBit(c+191,"ctl_set_epc_o", false,-1);
    tracep->declBus(c+192,"ctl_epc_o", false,-1, 31,0);
    tracep->declBit(c+193,"ctl_set_mtval_o", false,-1);
    tracep->declBus(c+194,"ctl_mtval_o", false,-1, 31,0);
    tracep->declBit(c+195,"ctl_set_cause_o", false,-1);
    tracep->declBus(c+196,"ctl_trap_casue_o", false,-1, 3,0);
    tracep->declBit(c+197,"ctl_mstatus_ie_clear_o", false,-1);
    tracep->declBit(c+198,"ctl_mstatus_ie_set_o", false,-1);
    tracep->declBus(c+26,"ctl_stall_o", false,-1, 5,0);
    tracep->declBit(c+199,"ctl_flush_o", false,-1);
    tracep->declBus(c+200,"ctl_new_pc_o", false,-1, 31,0);
    tracep->declBus(c+188,"if_pc_o", false,-1, 31,0);
    tracep->declBit(c+432,"if_stall_req_o", false,-1);
    tracep->declBus(c+409,"if_next_pc_o", false,-1, 31,0);
    tracep->declBit(c+388,"if_next_taken_o", false,-1);
    tracep->declBit(c+201,"if_branch_slot_end_o", false,-1);
    tracep->declBus(c+409,"bp_next_pc_o", false,-1, 31,0);
    tracep->declBit(c+388,"bp_next_taken_o", false,-1);
    tracep->declBus(c+202,"id_pc_i", false,-1, 31,0);
    tracep->declBus(c+203,"id_inst_i", false,-1, 31,0);
    tracep->declBus(c+204,"id_next_pc_i", false,-1, 31,0);
    tracep->declBit(c+205,"id_next_taken_i", false,-1);
    tracep->declBit(c+206,"id_branch_slot_end_i", false,-1);
    tracep->declBit(c+27,"id_rs1_re_o", false,-1);
    tracep->declBit(c+28,"id_rs2_re_o", false,-1);
    tracep->declBus(c+29,"id_rs1_ra_o", false,-1, 4,0);
    tracep->declBus(c+30,"id_rs2_ra_o", false,-1, 4,0);
    tracep->declBit(c+31,"id_stall_req_o", false,-1);
    tracep->declBus(c+32,"id_inst_o", false,-1, 31,0);
    tracep->declBus(c+33,"id_imm_o", false,-1, 31,0);
    tracep->declBus(c+204,"id_next_pc_o", false,-1, 31,0);
    tracep->declBit(c+205,"id_next_taken_o", false,-1);
    tracep->declBit(c+206,"id_branch_slot_end_o", false,-1);
    tracep->declBit(c+34,"id_csr_we_o", false,-1);
    tracep->declBus(c+35,"id_csr_addr_o", false,-1, 31,0);
    tracep->declBus(c+410,"id_rs1_data_o", false,-1, 31,0);
    tracep->declBus(c+411,"id_rs2_data_o", false,-1, 31,0);
    tracep->declBit(c+36,"id_rd_we_o", false,-1);
    tracep->declBus(c+37,"id_rd_waddr_o", false,-1, 4,0);
    tracep->declBus(c+38,"id_alusel_o", false,-1, 3,0);
    tracep->declBus(c+39,"id_uopcode_o", false,-1, 15,0);
    tracep->declBus(c+202,"id_pc_o", false,-1, 31,0);
    tracep->declBus(c+40,"id_excepttype_o", false,-1, 31,0);
    tracep->declBus(c+207,"ex_pc_i", false,-1, 31,0);
    tracep->declBus(c+208,"ex_inst_i", false,-1, 31,0);
    tracep->declBus(c+209,"ex_next_pc_i", false,-1, 31,0);
    tracep->declBit(c+210,"ex_next_taken_i", false,-1);
    tracep->declBit(c+211,"ex_branch_slot_end_i", false,-1);
    tracep->declBus(c+212,"ex_alusel_i", false,-1, 3,0);
    tracep->declBus(c+213,"ex_uop_i", false,-1, 15,0);
    tracep->declBus(c+214,"ex_rs1_data_i", false,-1, 31,0);
    tracep->declBus(c+215,"ex_rs2_data_i", false,-1, 31,0);
    tracep->declBus(c+216,"ex_imm_i", false,-1, 31,0);
    tracep->declBit(c+217,"ex_rd_we_i", false,-1);
    tracep->declBus(c+218,"ex_rd_addr_i", false,-1, 4,0);
    tracep->declBit(c+219,"ex_csr_we_i", false,-1);
    tracep->declBus(c+220,"ex_csr_addr_i", false,-1, 31,0);
    tracep->declBus(c+221,"ex_excepttype_i", false,-1, 31,0);
    tracep->declBus(c+41,"ex_dividend_o", false,-1, 31,0);
    tracep->declBus(c+42,"ex_divisor_o", false,-1, 31,0);
    tracep->declBit(c+43,"ex_div_start_o", false,-1);
    tracep->declBit(c+433,"ex_div_annul_o", false,-1);
    tracep->declBit(c+44,"ex_div_signed_o", false,-1);
    tracep->declBit(c+45,"ex_stall_req_o", false,-1);
    tracep->declBus(c+222,"ex_csr_raddr_o", false,-1, 31,0);
    tracep->declBus(c+207,"ex_pc_o", false,-1, 31,0);
    tracep->declBus(c+208,"ex_inst_o", false,-1, 31,0);
    tracep->declBit(c+46,"ex_branch_tag_o", false,-1);
    tracep->declBit(c+211,"ex_branch_slot_end_o", false,-1);
    tracep->declBit(c+219,"ex_csr_we_o", false,-1);
    tracep->declBus(c+47,"ex_csr_waddr_o", false,-1, 31,0);
    tracep->declBus(c+112,"ex_csr_wdata_o", false,-1, 31,0);
    tracep->declBit(c+217,"ex_rd_we_o", false,-1);
    tracep->declBus(c+223,"ex_rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+113,"ex_rd_wdata_o", false,-1, 31,0);
    tracep->declBus(c+213,"ex_uopcode_o", false,-1, 15,0);
    tracep->declBus(c+48,"ex_mem_addr_o", false,-1, 31,0);
    tracep->declBus(c+49,"ex_mem_wdata_o", false,-1, 31,0);
    tracep->declBus(c+221,"ex_excepttype_o", false,-1, 31,0);
    tracep->declBit(c+50,"ex_branch_request_o", false,-1);
    tracep->declBit(c+51,"ex_branch_taken_o", false,-1);
    tracep->declBit(c+52,"ex_branch_call_o", false,-1);
    tracep->declBit(c+53,"ex_branch_ret_o", false,-1);
    tracep->declBit(c+54,"ex_branch_jmp_o", false,-1);
    tracep->declBus(c+55,"ex_branch_target_o", false,-1, 31,0);
    tracep->declBit(c+56,"ex_branch_redirect_o", false,-1);
    tracep->declBus(c+57,"ex_branch_redirect_pc_o", false,-1, 31,0);
    tracep->declBit(c+224,"mem_rd_we_i", false,-1);
    tracep->declBus(c+225,"mem_rd_addr_i", false,-1, 4,0);
    tracep->declBus(c+226,"mem_rd_wd_i", false,-1, 31,0);
    tracep->declBus(c+227,"mem_uop_i", false,-1, 15,0);
    tracep->declBus(c+228,"mem_mem_addr_i", false,-1, 31,0);
    tracep->declBus(c+229,"mem_mem_wdata_i", false,-1, 31,0);
    tracep->declBit(c+230,"mem_csr_we_i", false,-1);
    tracep->declBus(c+231,"mem_csr_waddr_i", false,-1, 31,0);
    tracep->declBus(c+232,"mem_csr_wdata_i", false,-1, 31,0);
    tracep->declBus(c+233,"mem_excepttype_i", false,-1, 31,0);
    tracep->declBus(c+192,"mem_pc_i", false,-1, 31,0);
    tracep->declBus(c+234,"mem_inst_i", false,-1, 31,0);
    tracep->declBit(c+58,"mem_rd_we_o", false,-1);
    tracep->declBus(c+59,"mem_rd_addr_o", false,-1, 4,0);
    tracep->declBus(c+412,"mem_rd_wdata_o", false,-1, 31,0);
    tracep->declBit(c+60,"mem_csr_we_o", false,-1);
    tracep->declBus(c+61,"mem_csr_waddr_o", false,-1, 31,0);
    tracep->declBus(c+62,"mem_csr_wdata_o", false,-1, 31,0);
    tracep->declBit(c+432,"mem_stall_req_o", false,-1);
    tracep->declBus(c+63,"mem_excepttype_o", false,-1, 31,0);
    tracep->declBus(c+64,"mem_pc_o", false,-1, 31,0);
    tracep->declBus(c+65,"mem_inst_o", false,-1, 31,0);
    tracep->declBit(c+235,"wb_rd_we_i", false,-1);
    tracep->declBus(c+236,"wb_rd_wa_i", false,-1, 4,0);
    tracep->declBus(c+237,"wb_rd_wd_i", false,-1, 31,0);
    tracep->declBit(c+238,"wb_csr_we_i", false,-1);
    tracep->declBus(c+239,"wb_csr_waddr_i", false,-1, 31,0);
    tracep->declBus(c+240,"wb_csr_wdata_i", false,-1, 31,0);
    tracep->declBit(c+241,"wb_instret_incr_i", false,-1);
    tracep->declQuad(c+242,"div_result_o", false,-1, 63,0);
    tracep->declBit(c+244,"div_ready_o", false,-1);
    tracep->declBus(c+413,"reg_rs1_rd_o", false,-1, 31,0);
    tracep->declBus(c+414,"id_rs2_rd_o", false,-1, 31,0);
    tracep->declBus(c+245,"csr_rdata_o", false,-1, 31,0);
    tracep->declBus(c+434,"csr_mstatus_o", false,-1, 31,0);
    tracep->declBus(c+435,"csr_mie_o", false,-1, 31,0);
    tracep->declBus(c+436,"csr_mip_o", false,-1, 31,0);
    tracep->declBus(c+246,"csr_mtvec_o", false,-1, 31,0);
    tracep->declBus(c+437,"csr_mepc_o", false,-1, 31,0);
    tracep->declBit(c+247,"csr_mstatus_ie_o", false,-1);
    tracep->declBit(c+248,"csr_mie_external_o", false,-1);
    tracep->declBit(c+249,"csr_mie_timer_o", false,-1);
    tracep->declBit(c+250,"csr_mie_sw_o", false,-1);
    tracep->declBit(c+251,"csr_mip_external_o", false,-1);
    tracep->declBit(c+252,"csr_mip_timer_o", false,-1);
    tracep->declBit(c+253,"csr_mip_sw_o", false,-1);
    tracep->declBus(c+254,"csr_epc_o", false,-1, 31,0);
    tracep->pushNamePrefix("bp0 ");
    tracep->declBus(c+438,"RAS_ENTRIES", false,-1, 31,0);
    tracep->declBus(c+439,"BTB_ENTRIES", false,-1, 31,0);
    tracep->declBus(c+439,"BHT_ENTRIES", false,-1, 31,0);
    tracep->declBit(c+398,"ck_i", false,-1);
    tracep->declBit(c+399,"rs_n_i", false,-1);
    tracep->declBus(c+207,"branch_source_i", false,-1, 31,0);
    tracep->declBit(c+50,"branch_request_i", false,-1);
    tracep->declBit(c+51,"branch_is_taken_i", false,-1);
    tracep->declBit(c+52,"branch_is_call_i", false,-1);
    tracep->declBit(c+53,"branch_is_ret_i", false,-1);
    tracep->declBit(c+54,"branch_is_jmp_i", false,-1);
    tracep->declBus(c+55,"branch_target_i", false,-1, 31,0);
    tracep->declBit(c+56,"branch_mispredict_i", false,-1);
    tracep->declBus(c+188,"pc_i", false,-1, 31,0);
    tracep->declBit(c+66,"stall_i", false,-1);
    tracep->declBus(c+409,"next_pc_o", false,-1, 31,0);
    tracep->declBit(c+388,"next_taken_o", false,-1);
    tracep->declBus(c+440,"BHT_ENTRIES_WIDTH", false,-1, 31,0);
    tracep->declBus(c+440,"BTB_ENTRIES_WIDTH", false,-1, 31,0);
    tracep->declBus(c+441,"RAS_ENTRIES_WIDTH", false,-1, 31,0);
    tracep->declBus(c+255,"bht_write_entry_w", false,-1, 5,0);
    tracep->declBus(c+178,"bims", false,-1, 31,0);
    tracep->declBus(c+256,"bht_read_entry_w", false,-1, 5,0);
    tracep->declBit(c+389,"bht_predict_taken_w", false,-1);
    tracep->declBit(c+390,"btb_is_matched_r", false,-1);
    tracep->declBit(c+391,"btb_is_call_r", false,-1);
    tracep->declBit(c+392,"btb_is_ret_r", false,-1);
    tracep->declBit(c+393,"btb_is_jmp_r", false,-1);
    tracep->declBus(c+394,"btb_target_pc_r", false,-1, 31,0);
    tracep->declBus(c+395,"btb_rd_entry_r", false,-1, 5,0);
    tracep->declBus(c+442,"query", false,-1, 31,0);
    tracep->declBit(c+396,"ras_call_matched_w", false,-1);
    tracep->declBit(c+397,"ras_ret_matched_w", false,-1);
    tracep->declBus(c+415,"btb_write_entry_r", false,-1, 5,0);
    tracep->declBus(c+179,"btb_alloc_entry_w", false,-1, 5,0);
    tracep->declBit(c+416,"btb_hit_r", false,-1);
    tracep->declBit(c+417,"btb_alloc_req", false,-1);
    tracep->declBus(c+67,"i1", false,-1, 31,0);
    tracep->declBus(c+180,"update", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+257+i*1,"ras_list_r", true,(i+0), 31,0);
    }
    tracep->declBus(c+265,"ras_proven_cur_index_r", false,-1, 2,0);
    tracep->declBus(c+68,"ras_proven_next_index_r", false,-1, 2,0);
    tracep->declBus(c+266,"ras_speculative_cur_index_r", false,-1, 2,0);
    tracep->declBus(c+418,"ras_speculative_next_index_r", false,-1, 2,0);
    tracep->declBus(c+267,"ras_pd_pc_w", false,-1, 31,0);
    tracep->declBus(c+268,"i3", false,-1, 31,0);
    tracep->pushNamePrefix("u_lru ");
    tracep->declBus(c+439,"DEPTH", false,-1, 31,0);
    tracep->declBit(c+398,"ck_i", false,-1);
    tracep->declBit(c+399,"rs_n_i", false,-1);
    tracep->declBit(c+417,"alloc_i", false,-1);
    tracep->declBus(c+179,"alloc_entry_o", false,-1, 5,0);
    tracep->declBus(c+440,"A_W", false,-1, 31,0);
    tracep->declBus(c+179,"lfsr_r", false,-1, 5,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("csr0 ");
    tracep->declBit(c+398,"ck_i", false,-1);
    tracep->declBit(c+399,"rs_n_i", false,-1);
    tracep->declBit(c+432,"irq_software_i", false,-1);
    tracep->declBit(c+405,"irq_timer_i", false,-1);
    tracep->declBit(c+432,"irq_external_i", false,-1);
    tracep->declBus(c+222,"raddr_i", false,-1, 31,0);
    tracep->declBus(c+245,"rdata_o", false,-1, 31,0);
    tracep->declBit(c+238,"we_i", false,-1);
    tracep->declBus(c+239,"waddr_i", false,-1, 31,0);
    tracep->declBus(c+240,"wdata_i", false,-1, 31,0);
    tracep->declBit(c+241,"instret_incr_i", false,-1);
    tracep->declBit(c+190,"ie_type_i", false,-1);
    tracep->declBit(c+195,"set_cause_i", false,-1);
    tracep->declBus(c+196,"trap_casue_i", false,-1, 3,0);
    tracep->declBit(c+191,"set_epc_i", false,-1);
    tracep->declBus(c+192,"epc_i", false,-1, 31,0);
    tracep->declBit(c+193,"set_mtval_i", false,-1);
    tracep->declBus(c+194,"mtval_i", false,-1, 31,0);
    tracep->declBit(c+197,"mstatus_ie_clear_i", false,-1);
    tracep->declBit(c+198,"mstatus_ie_set_i", false,-1);
    tracep->declBit(c+247,"mstatus_ie_o", false,-1);
    tracep->declBit(c+248,"mie_external_o", false,-1);
    tracep->declBit(c+249,"mie_timer_o", false,-1);
    tracep->declBit(c+250,"mie_sw_o", false,-1);
    tracep->declBit(c+251,"mip_external_o", false,-1);
    tracep->declBit(c+252,"mip_timer_o", false,-1);
    tracep->declBit(c+253,"mip_software_o", false,-1);
    tracep->declBus(c+246,"mtvec_o", false,-1, 31,0);
    tracep->declBus(c+254,"epc_o", false,-1, 31,0);
    tracep->declBus(c+429,"CSR_MVENDORID_VALUE", false,-1, 31,0);
    tracep->declBus(c+443,"CSR_MARCHID_VALUE", false,-1, 31,0);
    tracep->declBus(c+429,"CSR_MIMPID_VALUE", false,-1, 31,0);
    tracep->declBus(c+429,"CSR_MHARTID", false,-1, 31,0);
    tracep->declBus(c+444,"mxl", false,-1, 1,0);
    tracep->declBus(c+445,"mextensions", false,-1, 25,0);
    tracep->declBus(c+446,"misa", false,-1, 31,0);
    tracep->declQuad(c+269,"mcycle", false,-1, 63,0);
    tracep->declQuad(c+271,"minstret", false,-1, 63,0);
    tracep->declBus(c+273,"mstatus", false,-1, 31,0);
    tracep->declBit(c+274,"mstatus_pie", false,-1);
    tracep->declBit(c+247,"mstatus_ie", false,-1);
    tracep->declBus(c+275,"mie", false,-1, 31,0);
    tracep->declBit(c+248,"mie_external", false,-1);
    tracep->declBit(c+249,"mie_timer", false,-1);
    tracep->declBit(c+250,"mie_sw", false,-1);
    tracep->declBus(c+246,"mtvec", false,-1, 31,0);
    tracep->declBus(c+276,"mscratch", false,-1, 31,0);
    tracep->declBus(c+254,"mepc", false,-1, 31,0);
    tracep->declBus(c+277,"mcause", false,-1, 31,0);
    tracep->declBus(c+278,"cause", false,-1, 3,0);
    tracep->declBus(c+279,"cause_rem", false,-1, 26,0);
    tracep->declBit(c+280,"int_or_exc", false,-1);
    tracep->declBus(c+281,"mip", false,-1, 31,0);
    tracep->declBit(c+251,"mip_external", false,-1);
    tracep->declBit(c+252,"mip_timer", false,-1);
    tracep->declBit(c+253,"mip_sw", false,-1);
    tracep->declBus(c+282,"mtval", false,-1, 31,0);
    tracep->declBit(c+447,"MISALIGNED_EXCEPTION", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ctrl0 ");
    tracep->declBit(c+398,"ck_i", false,-1);
    tracep->declBit(c+399,"rs_n_i", false,-1);
    tracep->declBus(c+63,"exception_i", false,-1, 31,0);
    tracep->declBus(c+64,"pc_i", false,-1, 31,0);
    tracep->declBus(c+65,"ins_i", false,-1, 31,0);
    tracep->declBit(c+432,"stall_req_from_if_i", false,-1);
    tracep->declBit(c+31,"stall_req_from_id_i", false,-1);
    tracep->declBit(c+45,"stall_req_from_ex_i", false,-1);
    tracep->declBit(c+432,"stall_req_from_mem_i", false,-1);
    tracep->declBit(c+247,"mstatus_ie_i", false,-1);
    tracep->declBit(c+248,"mie_external_i", false,-1);
    tracep->declBit(c+249,"mie_timer_i", false,-1);
    tracep->declBit(c+250,"mie_sw_i", false,-1);
    tracep->declBit(c+251,"mip_external_i", false,-1);
    tracep->declBit(c+252,"mip_timer_i", false,-1);
    tracep->declBit(c+253,"mip_sw_i", false,-1);
    tracep->declBus(c+246,"mtvec_i", false,-1, 31,0);
    tracep->declBus(c+254,"epc_i", false,-1, 31,0);
    tracep->declBit(c+190,"ie_type_o", false,-1);
    tracep->declBit(c+195,"set_cause_o", false,-1);
    tracep->declBus(c+196,"trap_casue_o", false,-1, 3,0);
    tracep->declBit(c+191,"set_epc_o", false,-1);
    tracep->declBus(c+192,"epc_o", false,-1, 31,0);
    tracep->declBit(c+193,"set_mtval_o", false,-1);
    tracep->declBus(c+194,"mtval_o", false,-1, 31,0);
    tracep->declBit(c+197,"mstatus_ie_clear_o", false,-1);
    tracep->declBit(c+198,"mstatus_ie_set_o", false,-1);
    tracep->declBus(c+26,"stall_o", false,-1, 5,0);
    tracep->declBit(c+199,"flush_o", false,-1);
    tracep->declBus(c+200,"new_pc_o", false,-1, 31,0);
    tracep->declBus(c+283,"curr_state", false,-1, 3,0);
    tracep->declBus(c+284,"next_state", false,-1, 3,0);
    tracep->declBus(c+448,"STATE_RESET", false,-1, 3,0);
    tracep->declBus(c+449,"STATE_OPERATING", false,-1, 3,0);
    tracep->declBus(c+450,"STATE_TRAP_TAKEN", false,-1, 3,0);
    tracep->declBus(c+451,"STATE_TRAP_RETURN", false,-1, 3,0);
    tracep->declBit(c+285,"mret", false,-1);
    tracep->declBit(c+286,"ecall", false,-1);
    tracep->declBit(c+287,"ebreak", false,-1);
    tracep->declBit(c+288,"misaligned_inst", false,-1);
    tracep->declBit(c+289,"illegal_inst", false,-1);
    tracep->declBit(c+290,"misaligned_store", false,-1);
    tracep->declBit(c+291,"misaligned_load", false,-1);
    tracep->declBit(c+292,"eip", false,-1);
    tracep->declBit(c+293,"tip", false,-1);
    tracep->declBit(c+294,"sip", false,-1);
    tracep->declBit(c+295,"ip", false,-1);
    tracep->declBit(c+296,"trap_happened", false,-1);
    tracep->declBus(c+297,"mtvec_mode", false,-1, 1,0);
    tracep->declBus(c+298,"mtvec_base", false,-1, 29,0);
    tracep->declBus(c+299,"trap_mux_out", false,-1, 31,0);
    tracep->declBus(c+300,"vec_mux_out", false,-1, 31,0);
    tracep->declBus(c+301,"base_offset", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("div0 ");
    tracep->declBit(c+398,"ck_i", false,-1);
    tracep->declBit(c+399,"rs_n_i", false,-1);
    tracep->declBit(c+44,"div_signed_i", false,-1);
    tracep->declBus(c+41,"dividend_i", false,-1, 31,0);
    tracep->declBus(c+42,"divisor_i", false,-1, 31,0);
    tracep->declBit(c+432,"annul_i", false,-1);
    tracep->declBit(c+43,"start_i", false,-1);
    tracep->declBit(c+244,"ready_o", false,-1);
    tracep->declQuad(c+242,"result_o", false,-1, 63,0);
    tracep->declQuad(c+302,"div_var_w", false,-1, 32,0);
    tracep->declBus(c+304,"cnt_r", false,-1, 5,0);
    tracep->declBus(c+305,"state_r", false,-1, 1,0);
    tracep->declArray(c+306,"dividend_r", false,-1, 64,0);
    tracep->declBus(c+309,"divisor_r", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex0 ");
    tracep->declBit(c+399,"rs_n_i", false,-1);
    tracep->declBus(c+207,"pc_i", false,-1, 31,0);
    tracep->declBus(c+208,"ins_i", false,-1, 31,0);
    tracep->declBus(c+209,"next_pc_i", false,-1, 31,0);
    tracep->declBit(c+210,"next_taken_i", false,-1);
    tracep->declBit(c+211,"branch_slot_end_i", false,-1);
    tracep->declBus(c+212,"alusel_i", false,-1, 3,0);
    tracep->declBus(c+213,"uop_i", false,-1, 15,0);
    tracep->declBus(c+214,"rs1_d_i", false,-1, 31,0);
    tracep->declBus(c+215,"rs2_d_i", false,-1, 31,0);
    tracep->declBus(c+216,"imm_i", false,-1, 31,0);
    tracep->declBit(c+217,"rd_we_i", false,-1);
    tracep->declBus(c+218,"rd_wa_i", false,-1, 4,0);
    tracep->declBit(c+219,"csr_we_i", false,-1);
    tracep->declBus(c+220,"csr_addr_i", false,-1, 31,0);
    tracep->declBus(c+221,"exception_i", false,-1, 31,0);
    tracep->declBus(c+41,"dividend_o", false,-1, 31,0);
    tracep->declBus(c+42,"divisor_o", false,-1, 31,0);
    tracep->declBit(c+43,"div_start_o", false,-1);
    tracep->declBit(c+44,"div_signed_o", false,-1);
    tracep->declQuad(c+242,"div_result_i", false,-1, 63,0);
    tracep->declBit(c+244,"div_ready_i", false,-1);
    tracep->declBit(c+45,"stall_req_o", false,-1);
    tracep->declBus(c+222,"csr_raddr_o", false,-1, 31,0);
    tracep->declBus(c+245,"csr_rdata_i", false,-1, 31,0);
    tracep->declBit(c+60,"mem_csr_we_i", false,-1);
    tracep->declBus(c+61,"mem_csr_waddr_i", false,-1, 31,0);
    tracep->declBus(c+62,"mem_csr_wdata_i", false,-1, 31,0);
    tracep->declBit(c+238,"wb_csr_we_i", false,-1);
    tracep->declBus(c+239,"wb_csr_waddr_i", false,-1, 31,0);
    tracep->declBus(c+240,"wb_csr_wdata_i", false,-1, 31,0);
    tracep->declBus(c+207,"pc_o", false,-1, 31,0);
    tracep->declBus(c+208,"ins_o", false,-1, 31,0);
    tracep->declBit(c+50,"branch_request_o", false,-1);
    tracep->declBit(c+51,"branch_is_taken_o", false,-1);
    tracep->declBit(c+52,"branch_is_call_o", false,-1);
    tracep->declBit(c+53,"branch_is_ret_o", false,-1);
    tracep->declBit(c+54,"branch_is_jmp_o", false,-1);
    tracep->declBus(c+55,"branch_target_o", false,-1, 31,0);
    tracep->declBit(c+56,"branch_redirect_o", false,-1);
    tracep->declBus(c+57,"branch_redirect_pc_o", false,-1, 31,0);
    tracep->declBit(c+46,"branch_tag_o", false,-1);
    tracep->declBit(c+211,"branch_slot_end_o", false,-1);
    tracep->declBit(c+219,"csr_we_o", false,-1);
    tracep->declBus(c+47,"csr_wa_o", false,-1, 31,0);
    tracep->declBus(c+112,"csr_wd_o", false,-1, 31,0);
    tracep->declBit(c+217,"rd_we_o", false,-1);
    tracep->declBus(c+223,"rd_a_o", false,-1, 4,0);
    tracep->declBus(c+113,"rd_wd_o", false,-1, 31,0);
    tracep->declBus(c+213,"uop_o", false,-1, 15,0);
    tracep->declBus(c+48,"mem_a_o", false,-1, 31,0);
    tracep->declBus(c+49,"mem_wd_o", false,-1, 31,0);
    tracep->declBus(c+221,"exception_o", false,-1, 31,0);
    tracep->declBit(c+45,"stall_req_for_div", false,-1);
    tracep->declBus(c+310,"rs1_w", false,-1, 4,0);
    tracep->declBus(c+311,"pc_plus_4_w", false,-1, 31,0);
    tracep->declBus(c+312,"pc_add_imm_w", false,-1, 31,0);
    tracep->declBus(c+313,"rs1_add_imm_w", false,-1, 31,0);
    tracep->declBus(c+314,"rs1_or_imm_w", false,-1, 31,0);
    tracep->declBus(c+315,"rs1_and_imm_w", false,-1, 31,0);
    tracep->declBus(c+316,"rs1_xor_imm_w", false,-1, 31,0);
    tracep->declBus(c+317,"rs1_add_rs2_w", false,-1, 31,0);
    tracep->declBus(c+318,"rs1_sub_rs2_w", false,-1, 31,0);
    tracep->declBus(c+319,"rs1_and_rs2_w", false,-1, 31,0);
    tracep->declBus(c+320,"rs1_or_rs2_w", false,-1, 31,0);
    tracep->declBus(c+321,"rs1_xor_rs2_w", false,-1, 31,0);
    tracep->declBit(c+322,"rs1_eq_rs2_w", false,-1);
    tracep->declBit(c+323,"rs1_ge_rs2_signed_w", false,-1);
    tracep->declBit(c+324,"rs1_ge_rs2_unsigned_w", false,-1);
    tracep->declBit(c+325,"rs1_eq_imm_w", false,-1);
    tracep->declBit(c+326,"rs1_ge_imm_signed_w", false,-1);
    tracep->declBit(c+327,"rs1_ge_imm_unsigned_w", false,-1);
    tracep->declBus(c+328,"sr_shift_w", false,-1, 31,0);
    tracep->declBus(c+329,"sr_shift_mask_w", false,-1, 31,0);
    tracep->declBus(c+330,"sri_shift_w", false,-1, 31,0);
    tracep->declBus(c+331,"sri_shift_mask_w", false,-1, 31,0);
    tracep->declBus(c+419,"arithmetic_result_r", false,-1, 31,0);
    tracep->declBus(c+114,"csr_result_r", false,-1, 31,0);
    tracep->declBus(c+69,"div_result_r", false,-1, 31,0);
    tracep->declBus(c+70,"jump_result_r", false,-1, 31,0);
    tracep->declBus(c+71,"logic_result_r", false,-1, 31,0);
    tracep->declBus(c+420,"mul_result_r", false,-1, 31,0);
    tracep->declBus(c+421,"shift_result_r", false,-1, 31,0);
    tracep->declBit(c+332,"read_csr_enable", false,-1);
    tracep->declBus(c+333,"mul_op1_r", false,-1, 31,0);
    tracep->declBus(c+334,"mul_op2_r", false,-1, 31,0);
    tracep->declQuad(c+335,"mul_result_w", false,-1, 63,0);
    tracep->declQuad(c+337,"mul_result_invert_w", false,-1, 63,0);
    tracep->declBus(c+339,"rs1_d_invert_r", false,-1, 31,0);
    tracep->declBus(c+340,"rs2_d_invert_r", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ex_mem0 ");
    tracep->declBit(c+398,"ck_i", false,-1);
    tracep->declBit(c+399,"rs_n_i", false,-1);
    tracep->declBus(c+26,"stall_i", false,-1, 5,0);
    tracep->declBit(c+199,"flush_i", false,-1);
    tracep->declBus(c+207,"pc_i", false,-1, 31,0);
    tracep->declBus(c+208,"ins_i", false,-1, 31,0);
    tracep->declBit(c+46,"branch_tag_i", false,-1);
    tracep->declBit(c+211,"branch_slot_end_i", false,-1);
    tracep->declBit(c+217,"rd_we_i", false,-1);
    tracep->declBus(c+223,"rd_wa_i", false,-1, 4,0);
    tracep->declBus(c+113,"rd_wd_i", false,-1, 31,0);
    tracep->declBus(c+213,"uop_i", false,-1, 15,0);
    tracep->declBus(c+48,"mem_a_i", false,-1, 31,0);
    tracep->declBus(c+49,"mem_wd_i", false,-1, 31,0);
    tracep->declBit(c+219,"csr_we_i", false,-1);
    tracep->declBus(c+47,"csr_wa_i", false,-1, 31,0);
    tracep->declBus(c+112,"csr_wd_i", false,-1, 31,0);
    tracep->declBus(c+221,"exception_i", false,-1, 31,0);
    tracep->declBit(c+224,"rd_we_o", false,-1);
    tracep->declBus(c+225,"rd_a_o", false,-1, 4,0);
    tracep->declBus(c+226,"rd_wd_o", false,-1, 31,0);
    tracep->declBus(c+227,"uop_o", false,-1, 15,0);
    tracep->declBus(c+228,"mem_a_o", false,-1, 31,0);
    tracep->declBus(c+229,"mem_wd_o", false,-1, 31,0);
    tracep->declBit(c+230,"csr_we_o", false,-1);
    tracep->declBus(c+231,"csr_wa_o", false,-1, 31,0);
    tracep->declBus(c+232,"csr_wd_o", false,-1, 31,0);
    tracep->declBus(c+233,"exception_o", false,-1, 31,0);
    tracep->declBus(c+192,"pc_o", false,-1, 31,0);
    tracep->declBus(c+234,"ins_o", false,-1, 31,0);
    tracep->declBit(c+341,"branch_tag", false,-1);
    tracep->declBus(c+342,"branch_pc", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id0 ");
    tracep->declBit(c+399,"rs_n_i", false,-1);
    tracep->declBus(c+202,"pc_i", false,-1, 31,0);
    tracep->declBus(c+203,"ins_i", false,-1, 31,0);
    tracep->declBit(c+206,"branch_slot_end_i", false,-1);
    tracep->declBus(c+204,"next_pc_i", false,-1, 31,0);
    tracep->declBit(c+205,"next_taken_i", false,-1);
    tracep->declBit(c+27,"rs1_re_o", false,-1);
    tracep->declBit(c+28,"rs2_re_o", false,-1);
    tracep->declBus(c+29,"rs1_ra_o", false,-1, 4,0);
    tracep->declBus(c+30,"rs2_ra_o", false,-1, 4,0);
    tracep->declBus(c+413,"rs1_rd_i", false,-1, 31,0);
    tracep->declBus(c+414,"rs2_rd_i", false,-1, 31,0);
    tracep->declBit(c+56,"branch_redirect_i", false,-1);
    tracep->declBus(c+213,"ex_uop_i", false,-1, 15,0);
    tracep->declBit(c+217,"ex_rd_we_i", false,-1);
    tracep->declBus(c+223,"ex_rd_wa_i", false,-1, 4,0);
    tracep->declBus(c+113,"ex_rd_wd_i", false,-1, 31,0);
    tracep->declBit(c+58,"mem_rd_we_i", false,-1);
    tracep->declBus(c+59,"mem_rd_wa_i", false,-1, 4,0);
    tracep->declBus(c+412,"mem_rd_wd_i", false,-1, 31,0);
    tracep->declBit(c+31,"stall_req_o", false,-1);
    tracep->declBus(c+202,"pc_o", false,-1, 31,0);
    tracep->declBus(c+32,"ins_o", false,-1, 31,0);
    tracep->declBus(c+204,"next_pc_o", false,-1, 31,0);
    tracep->declBit(c+205,"next_taken_o", false,-1);
    tracep->declBit(c+206,"branch_slot_end_o", false,-1);
    tracep->declBus(c+33,"imm_o", false,-1, 31,0);
    tracep->declBit(c+34,"csr_we_o", false,-1);
    tracep->declBus(c+35,"csr_addr_o", false,-1, 31,0);
    tracep->declBus(c+410,"rs1_data_o", false,-1, 31,0);
    tracep->declBus(c+411,"rs2_data_o", false,-1, 31,0);
    tracep->declBit(c+36,"rd_we_o", false,-1);
    tracep->declBus(c+37,"rd_wa_o", false,-1, 4,0);
    tracep->declBus(c+38,"alusel_o", false,-1, 3,0);
    tracep->declBus(c+39,"uop_o", false,-1, 15,0);
    tracep->declBus(c+40,"exception_o", false,-1, 31,0);
    tracep->declBus(c+343,"opcode_w", false,-1, 6,0);
    tracep->declBus(c+344,"rd_w", false,-1, 4,0);
    tracep->declBus(c+345,"fun3", false,-1, 2,0);
    tracep->declBus(c+346,"rs1_w", false,-1, 4,0);
    tracep->declBus(c+347,"rs2_w", false,-1, 4,0);
    tracep->declBus(c+348,"fun7", false,-1, 6,0);
    tracep->declBus(c+33,"imm_r", false,-1, 31,0);
    tracep->declBit(c+34,"csr_we", false,-1);
    tracep->declBus(c+35,"csr_addr", false,-1, 31,0);
    tracep->declBit(c+72,"ins_valid_r", false,-1);
    tracep->declBit(c+73,"rs1_load_depend", false,-1);
    tracep->declBit(c+74,"rs2_load_depend", false,-1);
    tracep->declBit(c+349,"pre_ins_is_load", false,-1);
    tracep->declBit(c+75,"excepttype_mret", false,-1);
    tracep->declBit(c+76,"excepttype_ecall", false,-1);
    tracep->declBit(c+77,"excepttype_ebreak", false,-1);
    tracep->declBit(c+78,"excepttype_illegal_inst", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("id_ex0 ");
    tracep->declBit(c+398,"ck_i", false,-1);
    tracep->declBit(c+399,"rs_n_i", false,-1);
    tracep->declBus(c+26,"stall_i", false,-1, 5,0);
    tracep->declBit(c+199,"flush_i", false,-1);
    tracep->declBus(c+202,"pc_i", false,-1, 31,0);
    tracep->declBus(c+32,"ins_i", false,-1, 31,0);
    tracep->declBus(c+204,"next_pc_i", false,-1, 31,0);
    tracep->declBit(c+205,"next_taken_i", false,-1);
    tracep->declBit(c+206,"branch_slot_end_i", false,-1);
    tracep->declBus(c+38,"alusel_i", false,-1, 3,0);
    tracep->declBus(c+39,"uop_i", false,-1, 15,0);
    tracep->declBus(c+410,"rs1_d_i", false,-1, 31,0);
    tracep->declBus(c+411,"rs2_d_i", false,-1, 31,0);
    tracep->declBus(c+33,"imm_i", false,-1, 31,0);
    tracep->declBit(c+36,"rd_we_i", false,-1);
    tracep->declBus(c+37,"rd_wa_i", false,-1, 4,0);
    tracep->declBit(c+34,"csr_we_i", false,-1);
    tracep->declBus(c+35,"csr_addr_i", false,-1, 31,0);
    tracep->declBus(c+40,"exception_i", false,-1, 31,0);
    tracep->declBus(c+207,"pc_o", false,-1, 31,0);
    tracep->declBus(c+208,"ins_o", false,-1, 31,0);
    tracep->declBus(c+209,"next_pc_o", false,-1, 31,0);
    tracep->declBit(c+210,"next_taken_o", false,-1);
    tracep->declBit(c+211,"branch_slot_end_o", false,-1);
    tracep->declBus(c+212,"alusel_o", false,-1, 3,0);
    tracep->declBus(c+213,"uop_o", false,-1, 15,0);
    tracep->declBus(c+214,"rs1_data_o", false,-1, 31,0);
    tracep->declBus(c+215,"rs2_data_o", false,-1, 31,0);
    tracep->declBus(c+216,"imm_o", false,-1, 31,0);
    tracep->declBit(c+217,"rd_we_o", false,-1);
    tracep->declBit(c+219,"csr_we_o", false,-1);
    tracep->declBus(c+218,"rd_a_o", false,-1, 4,0);
    tracep->declBus(c+220,"csr_addr_o", false,-1, 31,0);
    tracep->declBus(c+221,"exception_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("if_id0 ");
    tracep->declBit(c+398,"ck_i", false,-1);
    tracep->declBit(c+399,"rs_n_i", false,-1);
    tracep->declBus(c+26,"stall_i", false,-1, 5,0);
    tracep->declBit(c+199,"flush_i", false,-1);
    tracep->declBus(c+188,"pc_i", false,-1, 31,0);
    tracep->declBus(c+409,"next_pc_i", false,-1, 31,0);
    tracep->declBit(c+388,"next_taken_i", false,-1);
    tracep->declBit(c+201,"branch_slot_end_i", false,-1);
    tracep->declBus(c+404,"ins_i", false,-1, 31,0);
    tracep->declBit(c+56,"branch_redirect_i", false,-1);
    tracep->declBus(c+202,"pc_o", false,-1, 31,0);
    tracep->declBus(c+203,"ins_o", false,-1, 31,0);
    tracep->declBus(c+204,"next_pc_o", false,-1, 31,0);
    tracep->declBit(c+205,"next_taken_o", false,-1);
    tracep->declBit(c+206,"branch_slot_end_o", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ifu0 ");
    tracep->declBit(c+398,"ck_i", false,-1);
    tracep->declBit(c+399,"rs_n_i", false,-1);
    tracep->declBus(c+26,"stall_i", false,-1, 5,0);
    tracep->declBit(c+199,"flush_i", false,-1);
    tracep->declBus(c+200,"new_pc_i", false,-1, 31,0);
    tracep->declBus(c+409,"next_pc_i", false,-1, 31,0);
    tracep->declBit(c+388,"next_taken_i", false,-1);
    tracep->declBit(c+56,"branch_redirect_i", false,-1);
    tracep->declBus(c+57,"branch_redirect_pc_i", false,-1, 31,0);
    tracep->declBus(c+188,"pc_o", false,-1, 31,0);
    tracep->declBit(c+187,"ce_o", false,-1);
    tracep->declBit(c+432,"stall_req_o", false,-1);
    tracep->declBus(c+409,"next_pc_o", false,-1, 31,0);
    tracep->declBit(c+388,"next_taken_o", false,-1);
    tracep->declBit(c+201,"branch_slot_end_o", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem0 ");
    tracep->declBit(c+399,"rs_n_i", false,-1);
    tracep->declBus(c+233,"exception_i", false,-1, 31,0);
    tracep->declBus(c+192,"pc_i", false,-1, 31,0);
    tracep->declBus(c+234,"ins_i", false,-1, 31,0);
    tracep->declBit(c+224,"rd_we_i", false,-1);
    tracep->declBus(c+225,"rd_wa_i", false,-1, 4,0);
    tracep->declBus(c+226,"rd_wd_i", false,-1, 31,0);
    tracep->declBus(c+227,"uop_i", false,-1, 15,0);
    tracep->declBus(c+228,"mem_a_i", false,-1, 31,0);
    tracep->declBus(c+229,"mem_wd_i", false,-1, 31,0);
    tracep->declBus(c+24,"mem_a_o", false,-1, 31,0);
    tracep->declBit(c+111,"mem_we_o", false,-1);
    tracep->declBus(c+23,"mem_sel_o", false,-1, 3,0);
    tracep->declBus(c+25,"mem_data_o", false,-1, 31,0);
    tracep->declBit(c+110,"mem_ce_o", false,-1);
    tracep->declBus(c+171,"mem_data_i", false,-1, 31,0);
    tracep->declBit(c+230,"csr_we_i", false,-1);
    tracep->declBus(c+231,"csr_wa_i", false,-1, 31,0);
    tracep->declBus(c+232,"csr_wd_i", false,-1, 31,0);
    tracep->declBit(c+238,"wb_csr_we_i", false,-1);
    tracep->declBus(c+239,"wb_csr_waddr_i", false,-1, 31,0);
    tracep->declBus(c+240,"wb_csr_wdata_i", false,-1, 31,0);
    tracep->declBit(c+58,"rd_we_o", false,-1);
    tracep->declBus(c+59,"rd_a_o", false,-1, 4,0);
    tracep->declBus(c+412,"rd_wd_o", false,-1, 31,0);
    tracep->declBit(c+60,"csr_we_o", false,-1);
    tracep->declBus(c+61,"csr_wa_o", false,-1, 31,0);
    tracep->declBus(c+62,"csr_wd_o", false,-1, 31,0);
    tracep->declBit(c+432,"stall_req_o", false,-1);
    tracep->declBus(c+63,"exception_o", false,-1, 31,0);
    tracep->declBus(c+64,"pc_o", false,-1, 31,0);
    tracep->declBus(c+65,"ins_o", false,-1, 31,0);
    tracep->declBit(c+79,"mem_we", false,-1);
    tracep->declBit(c+350,"mem_re", false,-1);
    tracep->declBit(c+351,"addr_align_halfword", false,-1);
    tracep->declBit(c+352,"addr_align_word", false,-1);
    tracep->declBit(c+353,"load_operation", false,-1);
    tracep->declBit(c+354,"store_operation", false,-1);
    tracep->declBit(c+291,"load_addr_align_exception", false,-1);
    tracep->declBit(c+290,"store_addr_align_exception", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mem_wb0 ");
    tracep->declBit(c+398,"ck_i", false,-1);
    tracep->declBit(c+399,"rs_n_i", false,-1);
    tracep->declBus(c+26,"stall_i", false,-1, 5,0);
    tracep->declBit(c+199,"flush_i", false,-1);
    tracep->declBit(c+58,"rd_we_i", false,-1);
    tracep->declBus(c+59,"rd_wa_i", false,-1, 4,0);
    tracep->declBus(c+412,"rd_wd_i", false,-1, 31,0);
    tracep->declBit(c+60,"csr_we_i", false,-1);
    tracep->declBus(c+61,"csr_wa_i", false,-1, 31,0);
    tracep->declBus(c+62,"csr_wd_i", false,-1, 31,0);
    tracep->declBit(c+235,"rd_we_o", false,-1);
    tracep->declBus(c+236,"rd_a_o", false,-1, 4,0);
    tracep->declBus(c+237,"rd_wd_o", false,-1, 31,0);
    tracep->declBit(c+238,"csr_we_o", false,-1);
    tracep->declBus(c+239,"csr_wa_o", false,-1, 31,0);
    tracep->declBus(c+240,"csr_wd_o", false,-1, 31,0);
    tracep->declBit(c+241,"instret_incr_o", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile_ins ");
    tracep->declBit(c+398,"ck_i", false,-1);
    tracep->declBit(c+399,"rs_n_i", false,-1);
    tracep->declBit(c+235,"rd_we_i", false,-1);
    tracep->declBus(c+236,"rd_wa_i", false,-1, 4,0);
    tracep->declBus(c+237,"rd_wd_i", false,-1, 31,0);
    tracep->declBit(c+27,"rs1_re_i", false,-1);
    tracep->declBus(c+29,"rs1_ra_i", false,-1, 4,0);
    tracep->declBus(c+413,"rs1_rd_o", false,-1, 31,0);
    tracep->declBit(c+28,"rs2_re_i", false,-1);
    tracep->declBus(c+30,"rs2_ra_i", false,-1, 4,0);
    tracep->declBus(c+414,"rs2_rd_o", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+355+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("data_ram0 ");
    tracep->declBit(c+398,"ck_i", false,-1);
    tracep->declBit(c+115,"ce_i", false,-1);
    tracep->declBus(c+116,"addr_i", false,-1, 31,0);
    tracep->declBit(c+117,"we_i", false,-1);
    tracep->declBus(c+118,"sel_i", false,-1, 3,0);
    tracep->declBus(c+119,"data_i", false,-1, 31,0);
    tracep->declBit(c+120,"rvalid_o", false,-1);
    tracep->declBus(c+422,"data_o", false,-1, 31,0);
    tracep->declBit(c+187,"inst_ce_i", false,-1);
    tracep->declBus(c+188,"pc_i", false,-1, 31,0);
    tracep->declBus(c+404,"ins_o", false,-1, 31,0);
    tracep->declBus(c+452,"CHAR_OUT_ADDR", false,-1, 31,0);
    tracep->declBus(c+453,"SIM_CTRL_ADDR", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("u_bus ");
    tracep->declBus(c+426,"NrDevices", false,-1, 31,0);
    tracep->declBus(c+427,"NrHosts", false,-1, 31,0);
    tracep->declBus(c+454,"DataWidth", false,-1, 31,0);
    tracep->declBus(c+454,"AddressWidth", false,-1, 31,0);
    tracep->declBit(c+398,"ck_i", false,-1);
    tracep->declBit(c+399,"rst_ni", false,-1);
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+121+i*1,"host_req_i", true,(i+0));
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+122+i*1,"host_gnt_o", true,(i+0));
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+387+i*1,"host_addr_i", true,(i+0), 31,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+123+i*1,"host_we_i", true,(i+0));
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+80+i*1,"host_be_i", true,(i+0), 3,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+81+i*1,"host_wdata_i", true,(i+0), 31,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+161+i*1,"host_rvalid_o", true,(i+0));
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBus(c+172+i*1,"host_rdata_o", true,(i+0), 31,0);
    }
    for (int i = 0; i < 1; ++i) {
        tracep->declBit(c+124+i*1,"host_err_o", true,(i+0));
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBit(c+125+i*1,"device_req_o", true,(i+0));
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+128+i*1,"device_addr_o", true,(i+0), 31,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBit(c+131+i*1,"device_we_o", true,(i+0));
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+134+i*1,"device_be_o", true,(i+0), 3,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+137+i*1,"device_wdata_o", true,(i+0), 31,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBit(c+162+i*1,"device_rvalid_i", true,(i+0));
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+173+i*1,"device_rdata_i", true,(i+0), 31,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBit(c+140+i*1,"device_err_i", true,(i+0));
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+8+i*1,"cfg_device_addr_base", true,(i+0), 31,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+11+i*1,"cfg_device_addr_mask", true,(i+0), 31,0);
    }
    tracep->declBus(c+455,"NumBitsHostSel", false,-1, 31,0);
    tracep->declBus(c+456,"NumBitsDeviceSel", false,-1, 31,0);
    tracep->declBus(c+143,"host_sel_req", false,-1, 0,0);
    tracep->declBus(c+144,"host_sel_resp", false,-1, 0,0);
    tracep->declBus(c+145,"device_sel_req", false,-1, 1,0);
    tracep->declBus(c+146,"device_sel_resp", false,-1, 1,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+457,"host", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+458,"device", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+458,"device", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+459,"host", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("u_timer ");
    tracep->declBus(c+460,"DataWidth", false,-1, 31,0);
    tracep->declBus(c+460,"AddressWidth", false,-1, 31,0);
    tracep->declBit(c+398,"ck_i", false,-1);
    tracep->declBit(c+399,"rst_ni", false,-1);
    tracep->declBit(c+147,"timer_req_i", false,-1);
    tracep->declBus(c+148,"timer_addr_i", false,-1, 31,0);
    tracep->declBit(c+149,"timer_we_i", false,-1);
    tracep->declBus(c+150,"timer_be_i", false,-1, 3,0);
    tracep->declBus(c+151,"timer_wdata_i", false,-1, 31,0);
    tracep->declBit(c+423,"timer_rvalid_o", false,-1);
    tracep->declBus(c+424,"timer_rdata_o", false,-1, 31,0);
    tracep->declBit(c+152,"timer_err_o", false,-1);
    tracep->declBit(c+405,"timer_intr_o", false,-1);
    tracep->declBus(c+461,"TW", false,-1, 31,0);
    tracep->declBus(c+462,"ADDR_OFFSET", false,-1, 31,0);
    tracep->declBus(c+463,"MTIME_LOW", false,-1, 9,0);
    tracep->declBus(c+464,"MTIME_HIGH", false,-1, 9,0);
    tracep->declBus(c+465,"MTIMECMP_LOW", false,-1, 9,0);
    tracep->declBus(c+466,"MTIMECMP_HIGH", false,-1, 9,0);
    tracep->declBit(c+153,"timer_we", false,-1);
    tracep->declBit(c+154,"mtime_we", false,-1);
    tracep->declBit(c+155,"mtimeh_we", false,-1);
    tracep->declBit(c+156,"mtimecmp_we", false,-1);
    tracep->declBit(c+157,"mtimecmph_we", false,-1);
    tracep->declBus(c+17,"mtime_wdata", false,-1, 31,0);
    tracep->declBus(c+18,"mtimeh_wdata", false,-1, 31,0);
    tracep->declBus(c+19,"mtimecmp_wdata", false,-1, 31,0);
    tracep->declBus(c+20,"mtimecmph_wdata", false,-1, 31,0);
    tracep->declQuad(c+181,"mtime_q", false,-1, 63,0);
    tracep->declQuad(c+165,"mtime_d", false,-1, 63,0);
    tracep->declQuad(c+183,"mtime_inc", false,-1, 63,0);
    tracep->declQuad(c+185,"mtimecmp_q", false,-1, 63,0);
    tracep->declQuad(c+167,"mtimecmp_d", false,-1, 63,0);
    tracep->declBit(c+405,"interrupt_q", false,-1);
    tracep->declBit(c+425,"interrupt_d", false,-1);
    tracep->declBit(c+152,"error_q", false,-1);
    tracep->declBit(c+158,"error_d", false,-1);
    tracep->declBus(c+424,"rdata_q", false,-1, 31,0);
    tracep->declBus(c+169,"rdata_d", false,-1, 31,0);
    tracep->declBit(c+423,"rvalid_q", false,-1);
    tracep->pushNamePrefix("gen_byte_wdata ");
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vsimple_system___024root__trace_init_top(Vsimple_system___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_system___024root__trace_init_top\n"); );
    // Body
    Vsimple_system___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vsimple_system___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsimple_system___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vsimple_system___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vsimple_system___024root__trace_register(Vsimple_system___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_system___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vsimple_system___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vsimple_system___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vsimple_system___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vsimple_system___024root__trace_full_sub_0(Vsimple_system___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vsimple_system___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_system___024root__trace_full_top_0\n"); );
    // Init
    Vsimple_system___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsimple_system___024root*>(voidSelf);
    Vsimple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vsimple_system___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vsimple_system___024root__trace_full_sub_0(Vsimple_system___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_system___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->simple_system__DOT__cfg_device_addr_base[0]),32);
    bufp->fullIData(oldp+2,(vlSelf->simple_system__DOT__cfg_device_addr_base[1]),32);
    bufp->fullIData(oldp+3,(vlSelf->simple_system__DOT__cfg_device_addr_base[2]),32);
    bufp->fullIData(oldp+4,(vlSelf->simple_system__DOT__cfg_device_addr_mask[0]),32);
    bufp->fullIData(oldp+5,(vlSelf->simple_system__DOT__cfg_device_addr_mask[1]),32);
    bufp->fullIData(oldp+6,(vlSelf->simple_system__DOT__cfg_device_addr_mask[2]),32);
    bufp->fullIData(oldp+7,(vlSelf->simple_system__DOT__console0__DOT__log_fd),32);
    bufp->fullIData(oldp+8,(vlSelf->simple_system__DOT____Vcellinp__u_bus__cfg_device_addr_base[0]),32);
    bufp->fullIData(oldp+9,(vlSelf->simple_system__DOT____Vcellinp__u_bus__cfg_device_addr_base[1]),32);
    bufp->fullIData(oldp+10,(vlSelf->simple_system__DOT____Vcellinp__u_bus__cfg_device_addr_base[2]),32);
    bufp->fullIData(oldp+11,(vlSelf->simple_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask[0]),32);
    bufp->fullIData(oldp+12,(vlSelf->simple_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask[1]),32);
    bufp->fullIData(oldp+13,(vlSelf->simple_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask[2]),32);
    bufp->fullBit(oldp+14,(vlSelf->simple_system__DOT__device_rvalid[0]));
    bufp->fullBit(oldp+15,(vlSelf->simple_system__DOT__device_rvalid[1]));
    bufp->fullBit(oldp+16,(vlSelf->simple_system__DOT__device_rvalid[2]));
    bufp->fullIData(oldp+17,(((((8U & vlSelf->simple_system__DOT__device_be
                                 [2U]) ? (vlSelf->simple_system__DOT__device_wdata
                                          [2U] >> 0x18U)
                                 : (IData)((vlSelf->simple_system__DOT__u_timer__DOT__mtime_q 
                                            >> 0x18U))) 
                               << 0x18U) | ((0xff0000U 
                                             & (((4U 
                                                  & vlSelf->simple_system__DOT__device_be
                                                  [2U])
                                                  ? 
                                                 (vlSelf->simple_system__DOT__device_wdata
                                                  [2U] 
                                                  >> 0x10U)
                                                  : (IData)(
                                                            (vlSelf->simple_system__DOT__u_timer__DOT__mtime_q 
                                                             >> 0x10U))) 
                                                << 0x10U)) 
                                            | ((0xff00U 
                                                & (((2U 
                                                     & vlSelf->simple_system__DOT__device_be
                                                     [2U])
                                                     ? 
                                                    (vlSelf->simple_system__DOT__device_wdata
                                                     [2U] 
                                                     >> 8U)
                                                     : (IData)(
                                                               (vlSelf->simple_system__DOT__u_timer__DOT__mtime_q 
                                                                >> 8U))) 
                                                   << 8U)) 
                                               | (0xffU 
                                                  & ((1U 
                                                      & vlSelf->simple_system__DOT__device_be
                                                      [2U])
                                                      ? 
                                                     vlSelf->simple_system__DOT__device_wdata
                                                     [2U]
                                                      : (IData)(vlSelf->simple_system__DOT__u_timer__DOT__mtime_q))))))),32);
    bufp->fullIData(oldp+18,(((((8U & vlSelf->simple_system__DOT__device_be
                                 [2U]) ? (vlSelf->simple_system__DOT__device_wdata
                                          [2U] >> 0x18U)
                                 : (IData)((vlSelf->simple_system__DOT__u_timer__DOT__mtime_q 
                                            >> 0x38U))) 
                               << 0x18U) | ((0xff0000U 
                                             & (((4U 
                                                  & vlSelf->simple_system__DOT__device_be
                                                  [2U])
                                                  ? 
                                                 (vlSelf->simple_system__DOT__device_wdata
                                                  [2U] 
                                                  >> 0x10U)
                                                  : (IData)(
                                                            (vlSelf->simple_system__DOT__u_timer__DOT__mtime_q 
                                                             >> 0x30U))) 
                                                << 0x10U)) 
                                            | ((0xff00U 
                                                & (((2U 
                                                     & vlSelf->simple_system__DOT__device_be
                                                     [2U])
                                                     ? 
                                                    (vlSelf->simple_system__DOT__device_wdata
                                                     [2U] 
                                                     >> 8U)
                                                     : (IData)(
                                                               (vlSelf->simple_system__DOT__u_timer__DOT__mtime_q 
                                                                >> 0x28U))) 
                                                   << 8U)) 
                                               | (0xffU 
                                                  & ((1U 
                                                      & vlSelf->simple_system__DOT__device_be
                                                      [2U])
                                                      ? 
                                                     vlSelf->simple_system__DOT__device_wdata
                                                     [2U]
                                                      : (IData)(
                                                                (vlSelf->simple_system__DOT__u_timer__DOT__mtime_q 
                                                                 >> 0x20U)))))))),32);
    bufp->fullIData(oldp+19,(((((8U & vlSelf->simple_system__DOT__device_be
                                 [2U]) ? (vlSelf->simple_system__DOT__device_wdata
                                          [2U] >> 0x18U)
                                 : (IData)((vlSelf->simple_system__DOT__u_timer__DOT__mtimecmp_q 
                                            >> 0x18U))) 
                               << 0x18U) | ((0xff0000U 
                                             & (((4U 
                                                  & vlSelf->simple_system__DOT__device_be
                                                  [2U])
                                                  ? 
                                                 (vlSelf->simple_system__DOT__device_wdata
                                                  [2U] 
                                                  >> 0x10U)
                                                  : (IData)(
                                                            (vlSelf->simple_system__DOT__u_timer__DOT__mtimecmp_q 
                                                             >> 0x10U))) 
                                                << 0x10U)) 
                                            | ((0xff00U 
                                                & (((2U 
                                                     & vlSelf->simple_system__DOT__device_be
                                                     [2U])
                                                     ? 
                                                    (vlSelf->simple_system__DOT__device_wdata
                                                     [2U] 
                                                     >> 8U)
                                                     : (IData)(
                                                               (vlSelf->simple_system__DOT__u_timer__DOT__mtimecmp_q 
                                                                >> 8U))) 
                                                   << 8U)) 
                                               | (0xffU 
                                                  & ((1U 
                                                      & vlSelf->simple_system__DOT__device_be
                                                      [2U])
                                                      ? 
                                                     vlSelf->simple_system__DOT__device_wdata
                                                     [2U]
                                                      : (IData)(vlSelf->simple_system__DOT__u_timer__DOT__mtimecmp_q))))))),32);
    bufp->fullIData(oldp+20,(((((8U & vlSelf->simple_system__DOT__device_be
                                 [2U]) ? (vlSelf->simple_system__DOT__device_wdata
                                          [2U] >> 0x18U)
                                 : (IData)((vlSelf->simple_system__DOT__u_timer__DOT__mtimecmp_q 
                                            >> 0x38U))) 
                               << 0x18U) | ((0xff0000U 
                                             & (((4U 
                                                  & vlSelf->simple_system__DOT__device_be
                                                  [2U])
                                                  ? 
                                                 (vlSelf->simple_system__DOT__device_wdata
                                                  [2U] 
                                                  >> 0x10U)
                                                  : (IData)(
                                                            (vlSelf->simple_system__DOT__u_timer__DOT__mtimecmp_q 
                                                             >> 0x30U))) 
                                                << 0x10U)) 
                                            | ((0xff00U 
                                                & (((2U 
                                                     & vlSelf->simple_system__DOT__device_be
                                                     [2U])
                                                     ? 
                                                    (vlSelf->simple_system__DOT__device_wdata
                                                     [2U] 
                                                     >> 8U)
                                                     : (IData)(
                                                               (vlSelf->simple_system__DOT__u_timer__DOT__mtimecmp_q 
                                                                >> 0x28U))) 
                                                   << 8U)) 
                                               | (0xffU 
                                                  & ((1U 
                                                      & vlSelf->simple_system__DOT__device_be
                                                      [2U])
                                                      ? 
                                                     vlSelf->simple_system__DOT__device_wdata
                                                     [2U]
                                                      : (IData)(
                                                                (vlSelf->simple_system__DOT__u_timer__DOT__mtimecmp_q 
                                                                 >> 0x20U)))))))),32);
    bufp->fullCData(oldp+21,(vlSelf->simple_system__DOT__host_be[0]),4);
    bufp->fullIData(oldp+22,(vlSelf->simple_system__DOT__host_wdata[0]),32);
    bufp->fullCData(oldp+23,(vlSelf->simple_system__DOT____Vcellout__core_top0__ram_sel_o),4);
    bufp->fullIData(oldp+24,(vlSelf->simple_system__DOT____Vcellout__core_top0__ram_addr_o),32);
    bufp->fullIData(oldp+25,(vlSelf->simple_system__DOT____Vcellout__core_top0__ram_data_o),32);
    bufp->fullCData(oldp+26,(vlSelf->simple_system__DOT__core_top0__DOT__ctl_stall_o),6);
    bufp->fullBit(oldp+27,(vlSelf->simple_system__DOT__core_top0__DOT__id_rs1_re_o));
    bufp->fullBit(oldp+28,(vlSelf->simple_system__DOT__core_top0__DOT__id_rs2_re_o));
    bufp->fullCData(oldp+29,(vlSelf->simple_system__DOT__core_top0__DOT__id_rs1_raddr_o),5);
    bufp->fullCData(oldp+30,(vlSelf->simple_system__DOT__core_top0__DOT__id_rs2_raddr_o),5);
    bufp->fullBit(oldp+31,(vlSelf->simple_system__DOT__core_top0__DOT__id_stall_req_o));
    bufp->fullIData(oldp+32,(vlSelf->simple_system__DOT__core_top0__DOT__id_inst_o),32);
    bufp->fullIData(oldp+33,(vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__imm_r),32);
    bufp->fullBit(oldp+34,(vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__csr_we));
    bufp->fullIData(oldp+35,(vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__csr_addr),32);
    bufp->fullBit(oldp+36,(vlSelf->simple_system__DOT__core_top0__DOT__id_rd_we_o));
    bufp->fullCData(oldp+37,(vlSelf->simple_system__DOT__core_top0__DOT__id_rd_waddr_o),5);
    bufp->fullCData(oldp+38,(vlSelf->simple_system__DOT__core_top0__DOT__id_alusel_o),4);
    bufp->fullSData(oldp+39,(vlSelf->simple_system__DOT__core_top0__DOT__id_uopcode_o),16);
    bufp->fullIData(oldp+40,((((IData)(vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__excepttype_illegal_inst) 
                               << 3U) | (((IData)(vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__excepttype_ebreak) 
                                          << 2U) | 
                                         (((IData)(vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__excepttype_ecall) 
                                           << 1U) | (IData)(vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__excepttype_mret))))),32);
    bufp->fullIData(oldp+41,(vlSelf->simple_system__DOT__core_top0__DOT__ex_dividend_o),32);
    bufp->fullIData(oldp+42,(vlSelf->simple_system__DOT__core_top0__DOT__ex_divisor_o),32);
    bufp->fullBit(oldp+43,(vlSelf->simple_system__DOT__core_top0__DOT__ex_div_start_o));
    bufp->fullBit(oldp+44,(vlSelf->simple_system__DOT__core_top0__DOT__ex_div_signed_o));
    bufp->fullBit(oldp+45,(vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__stall_req_for_div));
    bufp->fullBit(oldp+46,(vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_tag_o));
    bufp->fullIData(oldp+47,(vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_waddr_o),32);
    bufp->fullIData(oldp+48,(vlSelf->simple_system__DOT__core_top0__DOT__ex_mem_addr_o),32);
    bufp->fullIData(oldp+49,(vlSelf->simple_system__DOT__core_top0__DOT__ex_mem_wdata_o),32);
    bufp->fullBit(oldp+50,(vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_request_o));
    bufp->fullBit(oldp+51,(vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_taken_o));
    bufp->fullBit(oldp+52,(vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_call_o));
    bufp->fullBit(oldp+53,(vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_ret_o));
    bufp->fullBit(oldp+54,(vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_jmp_o));
    bufp->fullIData(oldp+55,(vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_target_o),32);
    bufp->fullBit(oldp+56,(vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_redirect_o));
    bufp->fullIData(oldp+57,(vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_redirect_pc_o),32);
    bufp->fullBit(oldp+58,(vlSelf->simple_system__DOT__core_top0__DOT__mem_rd_we_o));
    bufp->fullCData(oldp+59,(vlSelf->simple_system__DOT__core_top0__DOT__mem_rd_addr_o),5);
    bufp->fullBit(oldp+60,(vlSelf->simple_system__DOT__core_top0__DOT__mem_csr_we_o));
    bufp->fullIData(oldp+61,(vlSelf->simple_system__DOT__core_top0__DOT__mem_csr_waddr_o),32);
    bufp->fullIData(oldp+62,(vlSelf->simple_system__DOT__core_top0__DOT__mem_csr_wdata_o),32);
    bufp->fullIData(oldp+63,(vlSelf->simple_system__DOT__core_top0__DOT__mem_excepttype_o),32);
    bufp->fullIData(oldp+64,(vlSelf->simple_system__DOT__core_top0__DOT__mem_pc_o),32);
    bufp->fullIData(oldp+65,(vlSelf->simple_system__DOT__core_top0__DOT__mem_inst_o),32);
    bufp->fullBit(oldp+66,(vlSelf->simple_system__DOT__core_top0__DOT____Vcellinp__bp0__stall_i));
    bufp->fullIData(oldp+67,(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__i1),32);
    bufp->fullCData(oldp+68,(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__ras_proven_next_index_r),3);
    bufp->fullIData(oldp+69,(vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__div_result_r),32);
    bufp->fullIData(oldp+70,(vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__jump_result_r),32);
    bufp->fullIData(oldp+71,(vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__logic_result_r),32);
    bufp->fullBit(oldp+72,(vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__ins_valid_r));
    bufp->fullBit(oldp+73,(vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__rs1_load_depend));
    bufp->fullBit(oldp+74,(vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__rs2_load_depend));
    bufp->fullBit(oldp+75,(vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__excepttype_mret));
    bufp->fullBit(oldp+76,(vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__excepttype_ecall));
    bufp->fullBit(oldp+77,(vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__excepttype_ebreak));
    bufp->fullBit(oldp+78,(vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__excepttype_illegal_inst));
    bufp->fullBit(oldp+79,(vlSelf->simple_system__DOT__core_top0__DOT__mem0__DOT__mem_we));
    bufp->fullCData(oldp+80,(vlSelf->simple_system__DOT____Vcellinp__u_bus__host_be_i[0]),4);
    bufp->fullIData(oldp+81,(vlSelf->simple_system__DOT____Vcellinp__u_bus__host_wdata_i[0]),32);
    bufp->fullBit(oldp+82,(vlSelf->simple_system__DOT__host_req[0]));
    bufp->fullBit(oldp+83,(vlSelf->simple_system__DOT__host_gnt[0]));
    bufp->fullBit(oldp+84,(vlSelf->simple_system__DOT__host_we[0]));
    bufp->fullBit(oldp+85,(vlSelf->simple_system__DOT__host_err[0]));
    bufp->fullBit(oldp+86,(vlSelf->simple_system__DOT__device_req[0]));
    bufp->fullBit(oldp+87,(vlSelf->simple_system__DOT__device_req[1]));
    bufp->fullBit(oldp+88,(vlSelf->simple_system__DOT__device_req[2]));
    bufp->fullIData(oldp+89,(vlSelf->simple_system__DOT__device_addr[0]),32);
    bufp->fullIData(oldp+90,(vlSelf->simple_system__DOT__device_addr[1]),32);
    bufp->fullIData(oldp+91,(vlSelf->simple_system__DOT__device_addr[2]),32);
    bufp->fullBit(oldp+92,(vlSelf->simple_system__DOT__device_we[0]));
    bufp->fullBit(oldp+93,(vlSelf->simple_system__DOT__device_we[1]));
    bufp->fullBit(oldp+94,(vlSelf->simple_system__DOT__device_we[2]));
    bufp->fullCData(oldp+95,(vlSelf->simple_system__DOT__device_be[0]),4);
    bufp->fullCData(oldp+96,(vlSelf->simple_system__DOT__device_be[1]),4);
    bufp->fullCData(oldp+97,(vlSelf->simple_system__DOT__device_be[2]),4);
    bufp->fullIData(oldp+98,(vlSelf->simple_system__DOT__device_wdata[0]),32);
    bufp->fullIData(oldp+99,(vlSelf->simple_system__DOT__device_wdata[1]),32);
    bufp->fullIData(oldp+100,(vlSelf->simple_system__DOT__device_wdata[2]),32);
    bufp->fullBit(oldp+101,(vlSelf->simple_system__DOT__device_err[0]));
    bufp->fullBit(oldp+102,(vlSelf->simple_system__DOT__device_err[1]));
    bufp->fullBit(oldp+103,(vlSelf->simple_system__DOT__device_err[2]));
    bufp->fullBit(oldp+104,(vlSelf->simple_system__DOT__device_req
                            [1U]));
    bufp->fullBit(oldp+105,(vlSelf->simple_system__DOT__device_we
                            [1U]));
    bufp->fullCData(oldp+106,(vlSelf->simple_system__DOT__device_be
                              [1U]),4);
    bufp->fullIData(oldp+107,(vlSelf->simple_system__DOT__device_addr
                              [1U]),32);
    bufp->fullIData(oldp+108,(vlSelf->simple_system__DOT__device_wdata
                              [1U]),32);
    bufp->fullCData(oldp+109,((0xffU & (vlSelf->simple_system__DOT__device_addr
                                        [1U] >> 2U))),8);
    bufp->fullBit(oldp+110,(vlSelf->simple_system__DOT____Vcellout__core_top0__ram_ce_o));
    bufp->fullBit(oldp+111,(vlSelf->simple_system__DOT____Vcellout__core_top0__ram_we_o));
    bufp->fullIData(oldp+112,(vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_wdata_o),32);
    bufp->fullIData(oldp+113,(vlSelf->simple_system__DOT__core_top0__DOT__ex_rd_wdata_o),32);
    bufp->fullIData(oldp+114,(vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__csr_result_r),32);
    bufp->fullBit(oldp+115,(vlSelf->simple_system__DOT__device_req
                            [0U]));
    bufp->fullIData(oldp+116,(vlSelf->simple_system__DOT__device_addr
                              [0U]),32);
    bufp->fullBit(oldp+117,(vlSelf->simple_system__DOT__device_we
                            [0U]));
    bufp->fullCData(oldp+118,(vlSelf->simple_system__DOT__device_be
                              [0U]),4);
    bufp->fullIData(oldp+119,(vlSelf->simple_system__DOT__device_wdata
                              [0U]),32);
    bufp->fullBit(oldp+120,(((~ vlSelf->simple_system__DOT__device_we
                              [0U]) & vlSelf->simple_system__DOT__device_req
                             [0U])));
    bufp->fullBit(oldp+121,(vlSelf->simple_system__DOT____Vcellinp__u_bus__host_req_i[0]));
    bufp->fullBit(oldp+122,(vlSelf->simple_system__DOT____Vcellout__u_bus__host_gnt_o[0]));
    bufp->fullBit(oldp+123,(vlSelf->simple_system__DOT____Vcellinp__u_bus__host_we_i[0]));
    bufp->fullBit(oldp+124,(vlSelf->simple_system__DOT____Vcellout__u_bus__host_err_o[0]));
    bufp->fullBit(oldp+125,(vlSelf->simple_system__DOT____Vcellout__u_bus__device_req_o[0]));
    bufp->fullBit(oldp+126,(vlSelf->simple_system__DOT____Vcellout__u_bus__device_req_o[1]));
    bufp->fullBit(oldp+127,(vlSelf->simple_system__DOT____Vcellout__u_bus__device_req_o[2]));
    bufp->fullIData(oldp+128,(vlSelf->simple_system__DOT____Vcellout__u_bus__device_addr_o[0]),32);
    bufp->fullIData(oldp+129,(vlSelf->simple_system__DOT____Vcellout__u_bus__device_addr_o[1]),32);
    bufp->fullIData(oldp+130,(vlSelf->simple_system__DOT____Vcellout__u_bus__device_addr_o[2]),32);
    bufp->fullBit(oldp+131,(vlSelf->simple_system__DOT____Vcellout__u_bus__device_we_o[0]));
    bufp->fullBit(oldp+132,(vlSelf->simple_system__DOT____Vcellout__u_bus__device_we_o[1]));
    bufp->fullBit(oldp+133,(vlSelf->simple_system__DOT____Vcellout__u_bus__device_we_o[2]));
    bufp->fullCData(oldp+134,(vlSelf->simple_system__DOT____Vcellout__u_bus__device_be_o[0]),4);
    bufp->fullCData(oldp+135,(vlSelf->simple_system__DOT____Vcellout__u_bus__device_be_o[1]),4);
    bufp->fullCData(oldp+136,(vlSelf->simple_system__DOT____Vcellout__u_bus__device_be_o[2]),4);
    bufp->fullIData(oldp+137,(vlSelf->simple_system__DOT____Vcellout__u_bus__device_wdata_o[0]),32);
    bufp->fullIData(oldp+138,(vlSelf->simple_system__DOT____Vcellout__u_bus__device_wdata_o[1]),32);
    bufp->fullIData(oldp+139,(vlSelf->simple_system__DOT____Vcellout__u_bus__device_wdata_o[2]),32);
    bufp->fullBit(oldp+140,(vlSelf->simple_system__DOT____Vcellinp__u_bus__device_err_i[0]));
    bufp->fullBit(oldp+141,(vlSelf->simple_system__DOT____Vcellinp__u_bus__device_err_i[1]));
    bufp->fullBit(oldp+142,(vlSelf->simple_system__DOT____Vcellinp__u_bus__device_err_i[2]));
    bufp->fullBit(oldp+143,(vlSelf->simple_system__DOT__u_bus__DOT__host_sel_req));
    bufp->fullBit(oldp+144,(vlSelf->simple_system__DOT__u_bus__DOT__host_sel_resp));
    bufp->fullCData(oldp+145,(vlSelf->simple_system__DOT__u_bus__DOT__device_sel_req),2);
    bufp->fullCData(oldp+146,(vlSelf->simple_system__DOT__u_bus__DOT__device_sel_resp),2);
    bufp->fullBit(oldp+147,(vlSelf->simple_system__DOT__device_req
                            [2U]));
    bufp->fullIData(oldp+148,(vlSelf->simple_system__DOT__device_addr
                              [2U]),32);
    bufp->fullBit(oldp+149,(vlSelf->simple_system__DOT__device_we
                            [2U]));
    bufp->fullCData(oldp+150,(vlSelf->simple_system__DOT__device_be
                              [2U]),4);
    bufp->fullIData(oldp+151,(vlSelf->simple_system__DOT__device_wdata
                              [2U]),32);
    bufp->fullBit(oldp+152,((vlSelf->simple_system__DOT__device_req
                             [2U] & (IData)(vlSelf->simple_system__DOT__u_timer__DOT__error_d))));
    bufp->fullBit(oldp+153,(vlSelf->simple_system__DOT__u_timer__DOT__timer_we));
    bufp->fullBit(oldp+154,(((IData)(vlSelf->simple_system__DOT__u_timer__DOT__timer_we) 
                             & (0U == (0x3ffU & vlSelf->simple_system__DOT__device_addr
                                       [2U])))));
    bufp->fullBit(oldp+155,(((IData)(vlSelf->simple_system__DOT__u_timer__DOT__timer_we) 
                             & (4U == (0x3ffU & vlSelf->simple_system__DOT__device_addr
                                       [2U])))));
    bufp->fullBit(oldp+156,(vlSelf->simple_system__DOT__u_timer__DOT__mtimecmp_we));
    bufp->fullBit(oldp+157,(vlSelf->simple_system__DOT__u_timer__DOT__mtimecmph_we));
    bufp->fullBit(oldp+158,(vlSelf->simple_system__DOT__u_timer__DOT__error_d));
    bufp->fullBit(oldp+159,(vlSelf->simple_system__DOT__host_rvalid[0]));
    bufp->fullBit(oldp+160,(vlSelf->simple_system__DOT__host_rvalid
                            [0U]));
    bufp->fullBit(oldp+161,(vlSelf->simple_system__DOT____Vcellout__u_bus__host_rvalid_o[0]));
    bufp->fullBit(oldp+162,(vlSelf->simple_system__DOT____Vcellinp__u_bus__device_rvalid_i[0]));
    bufp->fullBit(oldp+163,(vlSelf->simple_system__DOT____Vcellinp__u_bus__device_rvalid_i[1]));
    bufp->fullBit(oldp+164,(vlSelf->simple_system__DOT____Vcellinp__u_bus__device_rvalid_i[2]));
    bufp->fullQData(oldp+165,(vlSelf->simple_system__DOT__u_timer__DOT__mtime_d),64);
    bufp->fullQData(oldp+167,(vlSelf->simple_system__DOT__u_timer__DOT__mtimecmp_d),64);
    bufp->fullIData(oldp+169,(vlSelf->simple_system__DOT__u_timer__DOT__rdata_d),32);
    bufp->fullIData(oldp+170,(vlSelf->simple_system__DOT__host_rdata[0]),32);
    bufp->fullIData(oldp+171,(vlSelf->simple_system__DOT__host_rdata
                              [0U]),32);
    bufp->fullIData(oldp+172,(vlSelf->simple_system__DOT____Vcellout__u_bus__host_rdata_o[0]),32);
    bufp->fullIData(oldp+173,(vlSelf->simple_system__DOT____Vcellinp__u_bus__device_rdata_i[0]),32);
    bufp->fullIData(oldp+174,(vlSelf->simple_system__DOT____Vcellinp__u_bus__device_rdata_i[1]),32);
    bufp->fullIData(oldp+175,(vlSelf->simple_system__DOT____Vcellinp__u_bus__device_rdata_i[2]),32);
    bufp->fullBit(oldp+176,(vlSelf->simple_system__DOT____Vcellout__console0__rvalid_o));
    bufp->fullCData(oldp+177,(vlSelf->simple_system__DOT__console0__DOT__sim_finish),3);
    bufp->fullIData(oldp+178,(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__bims),32);
    bufp->fullCData(oldp+179,(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__u_lru__DOT__lfsr_r),6);
    bufp->fullIData(oldp+180,(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__update),32);
    bufp->fullQData(oldp+181,(vlSelf->simple_system__DOT__u_timer__DOT__mtime_q),64);
    bufp->fullQData(oldp+183,((1ULL + vlSelf->simple_system__DOT__u_timer__DOT__mtime_q)),64);
    bufp->fullQData(oldp+185,(vlSelf->simple_system__DOT__u_timer__DOT__mtimecmp_q),64);
    bufp->fullBit(oldp+187,(vlSelf->simple_system__DOT__rom_ce));
    bufp->fullIData(oldp+188,(vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o),32);
    bufp->fullIData(oldp+189,(vlSelf->simple_system__DOT__host_addr[0]),32);
    bufp->fullBit(oldp+190,(vlSelf->simple_system__DOT__core_top0__DOT__ctl_ie_type_o));
    bufp->fullBit(oldp+191,(vlSelf->simple_system__DOT__core_top0__DOT__ctl_set_epc_o));
    bufp->fullIData(oldp+192,(vlSelf->simple_system__DOT__core_top0__DOT__mem_pc_i),32);
    bufp->fullBit(oldp+193,(vlSelf->simple_system__DOT__core_top0__DOT__ctl_set_mtval_o));
    bufp->fullIData(oldp+194,(vlSelf->simple_system__DOT__core_top0__DOT__ctl_mtval_o),32);
    bufp->fullBit(oldp+195,(vlSelf->simple_system__DOT__core_top0__DOT__ctl_set_cause_o));
    bufp->fullCData(oldp+196,(vlSelf->simple_system__DOT__core_top0__DOT__ctl_trap_casue_o),4);
    bufp->fullBit(oldp+197,(vlSelf->simple_system__DOT__core_top0__DOT__ctl_mstatus_ie_clear_o));
    bufp->fullBit(oldp+198,(vlSelf->simple_system__DOT__core_top0__DOT__ctl_mstatus_ie_set_o));
    bufp->fullBit(oldp+199,(vlSelf->simple_system__DOT__core_top0__DOT__ctl_flush_o));
    bufp->fullIData(oldp+200,(vlSelf->simple_system__DOT__core_top0__DOT__ctl_new_pc_o),32);
    bufp->fullBit(oldp+201,(vlSelf->simple_system__DOT__core_top0__DOT__if_branch_slot_end_o));
    bufp->fullIData(oldp+202,(vlSelf->simple_system__DOT__core_top0__DOT__id_pc_i),32);
    bufp->fullIData(oldp+203,(vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i),32);
    bufp->fullIData(oldp+204,(vlSelf->simple_system__DOT__core_top0__DOT__id_next_pc_i),32);
    bufp->fullBit(oldp+205,(vlSelf->simple_system__DOT__core_top0__DOT__id_next_taken_i));
    bufp->fullBit(oldp+206,(vlSelf->simple_system__DOT__core_top0__DOT__id_branch_slot_end_i));
    bufp->fullIData(oldp+207,(vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i),32);
    bufp->fullIData(oldp+208,(vlSelf->simple_system__DOT__core_top0__DOT__ex_inst_i),32);
    bufp->fullIData(oldp+209,(vlSelf->simple_system__DOT__core_top0__DOT__ex_next_pc_i),32);
    bufp->fullBit(oldp+210,(vlSelf->simple_system__DOT__core_top0__DOT__ex_next_taken_i));
    bufp->fullBit(oldp+211,(vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_slot_end_i));
    bufp->fullCData(oldp+212,(vlSelf->simple_system__DOT__core_top0__DOT__ex_alusel_i),4);
    bufp->fullSData(oldp+213,(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i),16);
    bufp->fullIData(oldp+214,(vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i),32);
    bufp->fullIData(oldp+215,(vlSelf->simple_system__DOT__core_top0__DOT__ex_rs2_data_i),32);
    bufp->fullIData(oldp+216,(vlSelf->simple_system__DOT__core_top0__DOT__ex_imm_i),32);
    bufp->fullBit(oldp+217,(vlSelf->simple_system__DOT__core_top0__DOT__ex_rd_we_i));
    bufp->fullCData(oldp+218,(vlSelf->simple_system__DOT__core_top0__DOT__ex_rd_addr_i),5);
    bufp->fullBit(oldp+219,(vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_we_i));
    bufp->fullIData(oldp+220,(vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_addr_i),32);
    bufp->fullIData(oldp+221,(vlSelf->simple_system__DOT__core_top0__DOT__ex_excepttype_i),32);
    bufp->fullIData(oldp+222,(vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o),32);
    bufp->fullCData(oldp+223,(vlSelf->simple_system__DOT__core_top0__DOT__ex_rd_addr_o),5);
    bufp->fullBit(oldp+224,(vlSelf->simple_system__DOT__core_top0__DOT__mem_rd_we_i));
    bufp->fullCData(oldp+225,(vlSelf->simple_system__DOT__core_top0__DOT__mem_rd_addr_i),5);
    bufp->fullIData(oldp+226,(vlSelf->simple_system__DOT__core_top0__DOT__mem_rd_wd_i),32);
    bufp->fullSData(oldp+227,(vlSelf->simple_system__DOT__core_top0__DOT__mem_uop_i),16);
    bufp->fullIData(oldp+228,(vlSelf->simple_system__DOT__core_top0__DOT__mem_mem_addr_i),32);
    bufp->fullIData(oldp+229,(vlSelf->simple_system__DOT__core_top0__DOT__mem_mem_wdata_i),32);
    bufp->fullBit(oldp+230,(vlSelf->simple_system__DOT__core_top0__DOT__mem_csr_we_i));
    bufp->fullIData(oldp+231,(vlSelf->simple_system__DOT__core_top0__DOT__mem_csr_waddr_i),32);
    bufp->fullIData(oldp+232,(vlSelf->simple_system__DOT__core_top0__DOT__mem_csr_wdata_i),32);
    bufp->fullIData(oldp+233,(vlSelf->simple_system__DOT__core_top0__DOT__mem_excepttype_i),32);
    bufp->fullIData(oldp+234,(vlSelf->simple_system__DOT__core_top0__DOT__mem_inst_i),32);
    bufp->fullBit(oldp+235,(vlSelf->simple_system__DOT__core_top0__DOT__wb_rd_we_i));
    bufp->fullCData(oldp+236,(vlSelf->simple_system__DOT__core_top0__DOT__wb_rd_addr_i),5);
    bufp->fullIData(oldp+237,(vlSelf->simple_system__DOT__core_top0__DOT__wb_rd_wdata_i),32);
    bufp->fullBit(oldp+238,(vlSelf->simple_system__DOT__core_top0__DOT__wb_csr_we_i));
    bufp->fullIData(oldp+239,(vlSelf->simple_system__DOT__core_top0__DOT__wb_csr_waddr_i),32);
    bufp->fullIData(oldp+240,(vlSelf->simple_system__DOT__core_top0__DOT__wb_csr_wdata_i),32);
    bufp->fullBit(oldp+241,(vlSelf->simple_system__DOT__core_top0__DOT__wb_instret_incr_i));
    bufp->fullQData(oldp+242,(vlSelf->simple_system__DOT__core_top0__DOT__div_result_o),64);
    bufp->fullBit(oldp+244,(vlSelf->simple_system__DOT__core_top0__DOT__div_ready_o));
    bufp->fullIData(oldp+245,(vlSelf->simple_system__DOT__core_top0__DOT__csr_rdata_o),32);
    bufp->fullIData(oldp+246,(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mtvec),32);
    bufp->fullBit(oldp+247,(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mstatus_ie));
    bufp->fullBit(oldp+248,(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mie_external));
    bufp->fullBit(oldp+249,(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mie_timer));
    bufp->fullBit(oldp+250,(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mie_sw));
    bufp->fullBit(oldp+251,(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mip_external));
    bufp->fullBit(oldp+252,(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mip_timer));
    bufp->fullBit(oldp+253,(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mip_sw));
    bufp->fullIData(oldp+254,(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mepc),32);
    bufp->fullCData(oldp+255,((0x3fU & (vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i 
                                        >> 2U))),6);
    bufp->fullCData(oldp+256,((0x3fU & (vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o 
                                        >> 2U))),6);
    bufp->fullIData(oldp+257,(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__ras_list_r[0]),32);
    bufp->fullIData(oldp+258,(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__ras_list_r[1]),32);
    bufp->fullIData(oldp+259,(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__ras_list_r[2]),32);
    bufp->fullIData(oldp+260,(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__ras_list_r[3]),32);
    bufp->fullIData(oldp+261,(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__ras_list_r[4]),32);
    bufp->fullIData(oldp+262,(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__ras_list_r[5]),32);
    bufp->fullIData(oldp+263,(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__ras_list_r[6]),32);
    bufp->fullIData(oldp+264,(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__ras_list_r[7]),32);
    bufp->fullCData(oldp+265,(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__ras_proven_cur_index_r),3);
    bufp->fullCData(oldp+266,(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__ras_speculative_cur_index_r),3);
    bufp->fullIData(oldp+267,(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__ras_list_r
                              [vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__ras_speculative_cur_index_r]),32);
    bufp->fullIData(oldp+268,(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__i3),32);
    bufp->fullQData(oldp+269,(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mcycle),64);
    bufp->fullQData(oldp+271,(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__minstret),64);
    bufp->fullIData(oldp+273,((0x1800U | (((IData)(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mstatus_pie) 
                                           << 7U) | 
                                          ((IData)(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mstatus_ie) 
                                           << 3U)))),32);
    bufp->fullBit(oldp+274,(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mstatus_pie));
    bufp->fullIData(oldp+275,((((IData)(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mie_external) 
                                << 0xbU) | (((IData)(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mie_timer) 
                                             << 7U) 
                                            | ((IData)(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mie_sw) 
                                               << 3U)))),32);
    bufp->fullIData(oldp+276,(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mscratch),32);
    bufp->fullIData(oldp+277,((((IData)(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__int_or_exc) 
                                << 0x1fU) | ((vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__cause_rem 
                                              << 4U) 
                                             | (IData)(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__cause)))),32);
    bufp->fullCData(oldp+278,(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__cause),4);
    bufp->fullIData(oldp+279,(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__cause_rem),27);
    bufp->fullBit(oldp+280,(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__int_or_exc));
    bufp->fullIData(oldp+281,((((IData)(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mip_external) 
                                << 0xbU) | (((IData)(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mip_timer) 
                                             << 7U) 
                                            | ((IData)(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mip_sw) 
                                               << 3U)))),32);
    bufp->fullIData(oldp+282,(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mtval),32);
    bufp->fullCData(oldp+283,(vlSelf->simple_system__DOT__core_top0__DOT__ctrl0__DOT__curr_state),4);
    bufp->fullCData(oldp+284,(vlSelf->simple_system__DOT__core_top0__DOT__ctrl0__DOT__next_state),4);
    bufp->fullBit(oldp+285,((1U & vlSelf->simple_system__DOT__core_top0__DOT__mem_excepttype_i)));
    bufp->fullBit(oldp+286,((1U & (vlSelf->simple_system__DOT__core_top0__DOT__mem_excepttype_i 
                                   >> 1U))));
    bufp->fullBit(oldp+287,((1U & (vlSelf->simple_system__DOT__core_top0__DOT__mem_excepttype_i 
                                   >> 2U))));
    bufp->fullBit(oldp+288,((1U & (vlSelf->simple_system__DOT__core_top0__DOT__mem_excepttype_i 
                                   >> 3U))));
    bufp->fullBit(oldp+289,((1U & (vlSelf->simple_system__DOT__core_top0__DOT__mem_excepttype_i 
                                   >> 4U))));
    bufp->fullBit(oldp+290,(vlSelf->simple_system__DOT__core_top0__DOT__mem0__DOT__store_addr_align_exception));
    bufp->fullBit(oldp+291,(vlSelf->simple_system__DOT__core_top0__DOT__mem0__DOT__load_addr_align_exception));
    bufp->fullBit(oldp+292,(vlSelf->simple_system__DOT__core_top0__DOT__ctrl0__DOT__eip));
    bufp->fullBit(oldp+293,(vlSelf->simple_system__DOT__core_top0__DOT__ctrl0__DOT__tip));
    bufp->fullBit(oldp+294,(vlSelf->simple_system__DOT__core_top0__DOT__ctrl0__DOT__sip));
    bufp->fullBit(oldp+295,(((IData)(vlSelf->simple_system__DOT__core_top0__DOT__ctrl0__DOT__eip) 
                             | ((IData)(vlSelf->simple_system__DOT__core_top0__DOT__ctrl0__DOT__tip) 
                                | (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ctrl0__DOT__sip)))));
    bufp->fullBit(oldp+296,((1U & (((IData)(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mstatus_ie) 
                                    & ((IData)(vlSelf->simple_system__DOT__core_top0__DOT__ctrl0__DOT__eip) 
                                       | ((IData)(vlSelf->simple_system__DOT__core_top0__DOT__ctrl0__DOT__tip) 
                                          | (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ctrl0__DOT__sip)))) 
                                   | (IData)((((0U 
                                                != 
                                                (0x1aU 
                                                 & vlSelf->simple_system__DOT__core_top0__DOT__mem_excepttype_i)) 
                                               | (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem0__DOT__store_addr_align_exception)) 
                                              | (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem0__DOT__load_addr_align_exception)))))));
    bufp->fullCData(oldp+297,((3U & vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mtvec)),2);
    bufp->fullIData(oldp+298,((vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mtvec 
                               >> 2U)),30);
    bufp->fullIData(oldp+299,(((IData)(vlSelf->simple_system__DOT__core_top0__DOT__ctl_ie_type_o)
                                ? ((1U & vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mtvec)
                                    ? ((0xfffffffcU 
                                        & vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mtvec) 
                                       + ((IData)(vlSelf->simple_system__DOT__core_top0__DOT__ctl_trap_casue_o) 
                                          << 2U)) : 
                                   (0xfffffffcU & vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mtvec))
                                : (0xfffffffcU & vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mtvec))),32);
    bufp->fullIData(oldp+300,(((1U & vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mtvec)
                                ? ((0xfffffffcU & vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mtvec) 
                                   + ((IData)(vlSelf->simple_system__DOT__core_top0__DOT__ctl_trap_casue_o) 
                                      << 2U)) : (0xfffffffcU 
                                                 & vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mtvec))),32);
    bufp->fullIData(oldp+301,(((IData)(vlSelf->simple_system__DOT__core_top0__DOT__ctl_trap_casue_o) 
                               << 2U)),32);
    bufp->fullQData(oldp+302,(vlSelf->simple_system__DOT__core_top0__DOT__div0__DOT__div_var_w),33);
    bufp->fullCData(oldp+304,(vlSelf->simple_system__DOT__core_top0__DOT__div0__DOT__cnt_r),6);
    bufp->fullCData(oldp+305,(vlSelf->simple_system__DOT__core_top0__DOT__div0__DOT__state_r),2);
    bufp->fullWData(oldp+306,(vlSelf->simple_system__DOT__core_top0__DOT__div0__DOT__dividend_r),65);
    bufp->fullIData(oldp+309,(vlSelf->simple_system__DOT__core_top0__DOT__div0__DOT__divisor_r),32);
    bufp->fullCData(oldp+310,((0x1fU & (vlSelf->simple_system__DOT__core_top0__DOT__ex_inst_i 
                                        >> 0xfU))),5);
    bufp->fullIData(oldp+311,(((IData)(4U) + vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i)),32);
    bufp->fullIData(oldp+312,(vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__pc_add_imm_w),32);
    bufp->fullIData(oldp+313,(vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__rs1_add_imm_w),32);
    bufp->fullIData(oldp+314,((vlSelf->simple_system__DOT__core_top0__DOT__ex_imm_i 
                               | vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i)),32);
    bufp->fullIData(oldp+315,((vlSelf->simple_system__DOT__core_top0__DOT__ex_imm_i 
                               & vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i)),32);
    bufp->fullIData(oldp+316,((vlSelf->simple_system__DOT__core_top0__DOT__ex_imm_i 
                               ^ vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i)),32);
    bufp->fullIData(oldp+317,((vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i 
                               + vlSelf->simple_system__DOT__core_top0__DOT__ex_rs2_data_i)),32);
    bufp->fullIData(oldp+318,((vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i 
                               - vlSelf->simple_system__DOT__core_top0__DOT__ex_rs2_data_i)),32);
    bufp->fullIData(oldp+319,((vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i 
                               & vlSelf->simple_system__DOT__core_top0__DOT__ex_rs2_data_i)),32);
    bufp->fullIData(oldp+320,((vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i 
                               | vlSelf->simple_system__DOT__core_top0__DOT__ex_rs2_data_i)),32);
    bufp->fullIData(oldp+321,((vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i 
                               ^ vlSelf->simple_system__DOT__core_top0__DOT__ex_rs2_data_i)),32);
    bufp->fullBit(oldp+322,(vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__rs1_eq_rs2_w));
    bufp->fullBit(oldp+323,(vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__rs1_ge_rs2_signed_w));
    bufp->fullBit(oldp+324,(vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__rs1_ge_rs2_unsigned_w));
    bufp->fullBit(oldp+325,((vlSelf->simple_system__DOT__core_top0__DOT__ex_imm_i 
                             == vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i)));
    bufp->fullBit(oldp+326,(VL_GTES_III(32, vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i, vlSelf->simple_system__DOT__core_top0__DOT__ex_imm_i)));
    bufp->fullBit(oldp+327,((vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i 
                             >= vlSelf->simple_system__DOT__core_top0__DOT__ex_imm_i)));
    bufp->fullIData(oldp+328,((vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i 
                               >> (0x1fU & vlSelf->simple_system__DOT__core_top0__DOT__ex_rs2_data_i))),32);
    bufp->fullIData(oldp+329,((0xffffffffU >> (0x1fU 
                                               & vlSelf->simple_system__DOT__core_top0__DOT__ex_rs2_data_i))),32);
    bufp->fullIData(oldp+330,(((0x1fU >= vlSelf->simple_system__DOT__core_top0__DOT__ex_imm_i)
                                ? (vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i 
                                   >> vlSelf->simple_system__DOT__core_top0__DOT__ex_imm_i)
                                : 0U)),32);
    bufp->fullIData(oldp+331,(((0x1fU >= vlSelf->simple_system__DOT__core_top0__DOT__ex_imm_i)
                                ? (0xffffffffU >> vlSelf->simple_system__DOT__core_top0__DOT__ex_imm_i)
                                : 0U)),32);
    bufp->fullBit(oldp+332,(vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__read_csr_enable));
    bufp->fullIData(oldp+333,((((0x26U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i)) 
                                | (0x28U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i)))
                                ? vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i
                                : ((0x29U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))
                                    ? ((vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i 
                                        >> 0x1fU) ? 
                                       ((IData)(1U) 
                                        + (~ vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i))
                                        : vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i)
                                    : ((0x27U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))
                                        ? ((vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i 
                                            >> 0x1fU)
                                            ? ((IData)(1U) 
                                               + (~ vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i))
                                            : vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i)
                                        : vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i)))),32);
    bufp->fullIData(oldp+334,((((0x26U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i)) 
                                | (0x28U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i)))
                                ? vlSelf->simple_system__DOT__core_top0__DOT__ex_rs2_data_i
                                : ((0x29U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))
                                    ? vlSelf->simple_system__DOT__core_top0__DOT__ex_rs2_data_i
                                    : ((0x27U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))
                                        ? ((vlSelf->simple_system__DOT__core_top0__DOT__ex_rs2_data_i 
                                            >> 0x1fU)
                                            ? ((IData)(1U) 
                                               + (~ vlSelf->simple_system__DOT__core_top0__DOT__ex_rs2_data_i))
                                            : vlSelf->simple_system__DOT__core_top0__DOT__ex_rs2_data_i)
                                        : vlSelf->simple_system__DOT__core_top0__DOT__ex_rs2_data_i)))),32);
    bufp->fullQData(oldp+335,(vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__mul_result_w),64);
    bufp->fullQData(oldp+337,((1ULL + (~ vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__mul_result_w))),64);
    bufp->fullIData(oldp+339,(((IData)(1U) + (~ vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i))),32);
    bufp->fullIData(oldp+340,(((IData)(1U) + (~ vlSelf->simple_system__DOT__core_top0__DOT__ex_rs2_data_i))),32);
    bufp->fullBit(oldp+341,(vlSelf->simple_system__DOT__core_top0__DOT__ex_mem0__DOT__branch_tag));
    bufp->fullIData(oldp+342,(vlSelf->simple_system__DOT__core_top0__DOT__ex_mem0__DOT__branch_pc),32);
    bufp->fullCData(oldp+343,((0x7fU & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i)),7);
    bufp->fullCData(oldp+344,((0x1fU & (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                        >> 7U))),5);
    bufp->fullCData(oldp+345,((7U & (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+346,((0x1fU & (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+347,((0x1fU & (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+348,((vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                               >> 0x19U)),7);
    bufp->fullBit(oldp+349,(vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__pre_ins_is_load));
    bufp->fullBit(oldp+350,(vlSelf->simple_system__DOT__core_top0__DOT__mem0__DOT__mem_re));
    bufp->fullBit(oldp+351,(((~ vlSelf->simple_system__DOT__core_top0__DOT__mem_mem_addr_i) 
                             & ((0x11U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem_uop_i)) 
                                | ((0xdU == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem_uop_i)) 
                                   | (0xeU == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem_uop_i)))))));
    bufp->fullBit(oldp+352,((((0x12U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem_uop_i)) 
                              | (0xfU == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem_uop_i))) 
                             & (0U == (3U & vlSelf->simple_system__DOT__core_top0__DOT__mem_mem_addr_i)))));
    bufp->fullBit(oldp+353,(vlSelf->simple_system__DOT__core_top0__DOT__mem0__DOT__load_operation));
    bufp->fullBit(oldp+354,(vlSelf->simple_system__DOT__core_top0__DOT__mem0__DOT__store_operation));
    bufp->fullIData(oldp+355,(vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs[0]),32);
    bufp->fullIData(oldp+356,(vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs[1]),32);
    bufp->fullIData(oldp+357,(vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs[2]),32);
    bufp->fullIData(oldp+358,(vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs[3]),32);
    bufp->fullIData(oldp+359,(vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs[4]),32);
    bufp->fullIData(oldp+360,(vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs[5]),32);
    bufp->fullIData(oldp+361,(vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs[6]),32);
    bufp->fullIData(oldp+362,(vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs[7]),32);
    bufp->fullIData(oldp+363,(vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs[8]),32);
    bufp->fullIData(oldp+364,(vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs[9]),32);
    bufp->fullIData(oldp+365,(vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs[10]),32);
    bufp->fullIData(oldp+366,(vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs[11]),32);
    bufp->fullIData(oldp+367,(vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs[12]),32);
    bufp->fullIData(oldp+368,(vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs[13]),32);
    bufp->fullIData(oldp+369,(vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs[14]),32);
    bufp->fullIData(oldp+370,(vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs[15]),32);
    bufp->fullIData(oldp+371,(vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs[16]),32);
    bufp->fullIData(oldp+372,(vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs[17]),32);
    bufp->fullIData(oldp+373,(vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs[18]),32);
    bufp->fullIData(oldp+374,(vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs[19]),32);
    bufp->fullIData(oldp+375,(vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs[20]),32);
    bufp->fullIData(oldp+376,(vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs[21]),32);
    bufp->fullIData(oldp+377,(vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs[22]),32);
    bufp->fullIData(oldp+378,(vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs[23]),32);
    bufp->fullIData(oldp+379,(vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs[24]),32);
    bufp->fullIData(oldp+380,(vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs[25]),32);
    bufp->fullIData(oldp+381,(vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs[26]),32);
    bufp->fullIData(oldp+382,(vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs[27]),32);
    bufp->fullIData(oldp+383,(vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs[28]),32);
    bufp->fullIData(oldp+384,(vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs[29]),32);
    bufp->fullIData(oldp+385,(vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs[30]),32);
    bufp->fullIData(oldp+386,(vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs[31]),32);
    bufp->fullIData(oldp+387,(vlSelf->simple_system__DOT____Vcellinp__u_bus__host_addr_i[0]),32);
    bufp->fullBit(oldp+388,(((IData)(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r) 
                             & ((IData)(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r) 
                                | ((IData)(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r) 
                                   | ((IData)(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__bht_predict_taken_w) 
                                      | (IData)(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r)))))));
    bufp->fullBit(oldp+389,(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__bht_predict_taken_w));
    bufp->fullBit(oldp+390,(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r));
    bufp->fullBit(oldp+391,(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r));
    bufp->fullBit(oldp+392,(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r));
    bufp->fullBit(oldp+393,(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r));
    bufp->fullIData(oldp+394,(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r),32);
    bufp->fullCData(oldp+395,(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_rd_entry_r),6);
    bufp->fullBit(oldp+396,(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__ras_call_matched_w));
    bufp->fullBit(oldp+397,(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__ras_ret_matched_w));
    bufp->fullBit(oldp+398,(vlSelf->ck_i));
    bufp->fullBit(oldp+399,(vlSelf->rs_n_i));
    bufp->fullBit(oldp+400,(vlSelf->jtag_TCK));
    bufp->fullBit(oldp+401,(vlSelf->jtag_TMS));
    bufp->fullBit(oldp+402,(vlSelf->jtag_TDI));
    bufp->fullBit(oldp+403,(vlSelf->jtag_TDO));
    bufp->fullIData(oldp+404,(((IData)(vlSelf->simple_system__DOT__rom_ce)
                                ? vlSelf->simple_system__DOT__data_ram0__DOT__mem
                               [(0xfffffU & (vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o 
                                             >> 2U))]
                                : 0x13U)),32);
    bufp->fullBit(oldp+405,(vlSelf->simple_system__DOT__u_timer__DOT__interrupt_q));
    bufp->fullIData(oldp+406,(vlSelf->simple_system__DOT__device_rdata[0]),32);
    bufp->fullIData(oldp+407,(vlSelf->simple_system__DOT__device_rdata[1]),32);
    bufp->fullIData(oldp+408,(vlSelf->simple_system__DOT__device_rdata[2]),32);
    bufp->fullIData(oldp+409,(((IData)(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__ras_ret_matched_w)
                                ? vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__ras_list_r
                               [vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__ras_speculative_cur_index_r]
                                : (((IData)(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r) 
                                    & ((IData)(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__bht_predict_taken_w) 
                                       | ((IData)(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r) 
                                          | (IData)(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r))))
                                    ? vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r
                                    : ((IData)(4U) 
                                       + vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o)))),32);
    bufp->fullIData(oldp+410,(vlSelf->simple_system__DOT__core_top0__DOT__id_rs1_data_o),32);
    bufp->fullIData(oldp+411,(vlSelf->simple_system__DOT__core_top0__DOT__id_rs2_data_o),32);
    bufp->fullIData(oldp+412,(vlSelf->simple_system__DOT__core_top0__DOT__mem_rd_wdata_o),32);
    bufp->fullIData(oldp+413,(((IData)(vlSelf->rs_n_i)
                                ? ((0U == (0x1fU & 
                                           (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                            >> 0xfU)))
                                    ? 0U : ((((IData)(vlSelf->simple_system__DOT__core_top0__DOT__wb_rd_addr_i) 
                                              == (0x1fU 
                                                  & (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                                     >> 0xfU))) 
                                             & ((IData)(vlSelf->simple_system__DOT__core_top0__DOT__id_rs1_re_o) 
                                                & (IData)(vlSelf->simple_system__DOT__core_top0__DOT__wb_rd_we_i)))
                                             ? vlSelf->simple_system__DOT__core_top0__DOT__wb_rd_wdata_i
                                             : ((IData)(vlSelf->simple_system__DOT__core_top0__DOT__id_rs1_re_o)
                                                 ? 
                                                vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs
                                                [(0x1fU 
                                                  & (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                                     >> 0xfU))]
                                                 : 0U)))
                                : 0U)),32);
    bufp->fullIData(oldp+414,(((IData)(vlSelf->rs_n_i)
                                ? ((0U == (0x1fU & 
                                           (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                            >> 0x14U)))
                                    ? 0U : ((((IData)(vlSelf->simple_system__DOT__core_top0__DOT__wb_rd_addr_i) 
                                              == (0x1fU 
                                                  & (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                                     >> 0x14U))) 
                                             & ((IData)(vlSelf->simple_system__DOT__core_top0__DOT__id_rs2_re_o) 
                                                & (IData)(vlSelf->simple_system__DOT__core_top0__DOT__wb_rd_we_i)))
                                             ? vlSelf->simple_system__DOT__core_top0__DOT__wb_rd_wdata_i
                                             : ((IData)(vlSelf->simple_system__DOT__core_top0__DOT__id_rs2_re_o)
                                                 ? 
                                                vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs
                                                [(0x1fU 
                                                  & (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                                     >> 0x14U))]
                                                 : 0U)))
                                : 0U)),32);
    bufp->fullCData(oldp+415,(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_write_entry_r),6);
    bufp->fullBit(oldp+416,(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_hit_r));
    bufp->fullBit(oldp+417,(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_alloc_req));
    bufp->fullCData(oldp+418,(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__ras_speculative_next_index_r),3);
    bufp->fullIData(oldp+419,(((IData)(vlSelf->rs_n_i)
                                ? ((0x13U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))
                                    ? vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__rs1_add_imm_w
                                    : ((0x1cU == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))
                                        ? (vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i 
                                           + vlSelf->simple_system__DOT__core_top0__DOT__ex_rs2_data_i)
                                        : ((0x1dU == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))
                                            ? (vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i 
                                               - vlSelf->simple_system__DOT__core_top0__DOT__ex_rs2_data_i)
                                            : 0U)))
                                : 0U)),32);
    bufp->fullIData(oldp+420,(((IData)(vlSelf->rs_n_i)
                                ? ((0x26U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))
                                    ? (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__mul_result_w)
                                    : ((0x28U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))
                                        ? (IData)((vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__mul_result_w 
                                                   >> 0x20U))
                                        : ((0x27U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))
                                            ? (((0U 
                                                 == 
                                                 ((2U 
                                                   & (vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i 
                                                      >> 0x1eU)) 
                                                  | (vlSelf->simple_system__DOT__core_top0__DOT__ex_rs2_data_i 
                                                     >> 0x1fU))) 
                                                | (3U 
                                                   == 
                                                   ((2U 
                                                     & (vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i 
                                                        >> 0x1eU)) 
                                                    | (vlSelf->simple_system__DOT__core_top0__DOT__ex_rs2_data_i 
                                                       >> 0x1fU))))
                                                ? (IData)(
                                                          (vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__mul_result_w 
                                                           >> 0x20U))
                                                : (IData)(
                                                          ((1ULL 
                                                            + 
                                                            (~ vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__mul_result_w)) 
                                                           >> 0x20U)))
                                            : ((0x29U 
                                                == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))
                                                ? (
                                                   (vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i 
                                                    >> 0x1fU)
                                                    ? (IData)(
                                                              ((1ULL 
                                                                + 
                                                                (~ vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__mul_result_w)) 
                                                               >> 0x20U))
                                                    : (IData)(
                                                              (vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__mul_result_w 
                                                               >> 0x20U)))
                                                : 0U))))
                                : 0U)),32);
    bufp->fullIData(oldp+421,(((IData)(vlSelf->rs_n_i)
                                ? ((0x19U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))
                                    ? ((0x1fU >= vlSelf->simple_system__DOT__core_top0__DOT__ex_imm_i)
                                        ? (vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i 
                                           << vlSelf->simple_system__DOT__core_top0__DOT__ex_imm_i)
                                        : 0U) : ((0x1aU 
                                                  == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))
                                                  ? 
                                                 ((0x1fU 
                                                   >= vlSelf->simple_system__DOT__core_top0__DOT__ex_imm_i)
                                                   ? 
                                                  (vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i 
                                                   >> vlSelf->simple_system__DOT__core_top0__DOT__ex_imm_i)
                                                   : 0U)
                                                  : 
                                                 ((0x1bU 
                                                   == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))
                                                   ? 
                                                  (((0x1fU 
                                                     >= vlSelf->simple_system__DOT__core_top0__DOT__ex_imm_i)
                                                     ? 
                                                    (vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i 
                                                     >> vlSelf->simple_system__DOT__core_top0__DOT__ex_imm_i)
                                                     : 0U) 
                                                   | ((- (IData)(
                                                                 (vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i 
                                                                  >> 0x1fU))) 
                                                      & (~ 
                                                         ((0x1fU 
                                                           >= vlSelf->simple_system__DOT__core_top0__DOT__ex_imm_i)
                                                           ? 
                                                          (0xffffffffU 
                                                           >> vlSelf->simple_system__DOT__core_top0__DOT__ex_imm_i)
                                                           : 0U))))
                                                   : 
                                                  ((0x21U 
                                                    == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))
                                                    ? 
                                                   (vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i 
                                                    << 
                                                    (0x1fU 
                                                     & vlSelf->simple_system__DOT__core_top0__DOT__ex_rs2_data_i))
                                                    : 
                                                   ((0x22U 
                                                     == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))
                                                     ? 
                                                    (vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i 
                                                     >> 
                                                     (0x1fU 
                                                      & vlSelf->simple_system__DOT__core_top0__DOT__ex_rs2_data_i))
                                                     : 
                                                    ((0x23U 
                                                      == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))
                                                      ? 
                                                     (((vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i 
                                                        >> 
                                                        (0x1fU 
                                                         & vlSelf->simple_system__DOT__core_top0__DOT__ex_rs2_data_i)) 
                                                       & (0xffffffffU 
                                                          >> 
                                                          (0x1fU 
                                                           & vlSelf->simple_system__DOT__core_top0__DOT__ex_rs2_data_i))) 
                                                      | ((- (IData)(
                                                                    (vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i 
                                                                     >> 0x1fU))) 
                                                         & (~ 
                                                            (0xffffffffU 
                                                             >> 
                                                             (0x1fU 
                                                              & vlSelf->simple_system__DOT__core_top0__DOT__ex_rs2_data_i)))))
                                                      : 0U))))))
                                : 0U)),32);
    bufp->fullIData(oldp+422,((vlSelf->simple_system__DOT__device_req
                               [0U] ? (vlSelf->simple_system__DOT__device_we
                                       [0U] ? 0U : 
                                       vlSelf->simple_system__DOT__data_ram0__DOT__mem
                                       [(0xfffffU & 
                                         (vlSelf->simple_system__DOT__device_addr
                                          [0U] >> 2U))])
                                : 0U)),32);
    bufp->fullBit(oldp+423,(((IData)(vlSelf->rs_n_i) 
                             & vlSelf->simple_system__DOT__device_req
                             [2U])));
    bufp->fullIData(oldp+424,((vlSelf->simple_system__DOT__device_req
                               [2U] ? vlSelf->simple_system__DOT__u_timer__DOT__rdata_d
                                : 0U)),32);
    bufp->fullBit(oldp+425,(((~ ((IData)(vlSelf->simple_system__DOT__u_timer__DOT__mtimecmp_we) 
                                 | (IData)(vlSelf->simple_system__DOT__u_timer__DOT__mtimecmph_we))) 
                             & ((vlSelf->simple_system__DOT__u_timer__DOT__mtime_q 
                                 >= vlSelf->simple_system__DOT__u_timer__DOT__mtimecmp_q) 
                                | (IData)(vlSelf->simple_system__DOT__u_timer__DOT__interrupt_q)))));
    bufp->fullIData(oldp+426,(3U),32);
    bufp->fullIData(oldp+427,(1U),32);
    bufp->fullBit(oldp+428,(1U));
    bufp->fullIData(oldp+429,(0U),32);
    bufp->fullCData(oldp+430,(0U),8);
    bufp->fullCData(oldp+431,(2U),8);
    bufp->fullBit(oldp+432,(0U));
    bufp->fullBit(oldp+433,(vlSelf->simple_system__DOT__core_top0__DOT__ex_div_annul_o));
    bufp->fullIData(oldp+434,(vlSelf->simple_system__DOT__core_top0__DOT__csr_mstatus_o),32);
    bufp->fullIData(oldp+435,(vlSelf->simple_system__DOT__core_top0__DOT__csr_mie_o),32);
    bufp->fullIData(oldp+436,(vlSelf->simple_system__DOT__core_top0__DOT__csr_mip_o),32);
    bufp->fullIData(oldp+437,(vlSelf->simple_system__DOT__core_top0__DOT__csr_mepc_o),32);
    bufp->fullIData(oldp+438,(8U),32);
    bufp->fullIData(oldp+439,(0x40U),32);
    bufp->fullIData(oldp+440,(6U),32);
    bufp->fullIData(oldp+441,(3U),32);
    bufp->fullIData(oldp+442,(0x40U),32);
    bufp->fullIData(oldp+443,(0x16U),32);
    bufp->fullCData(oldp+444,(1U),2);
    bufp->fullIData(oldp+445,(0x1100U),26);
    bufp->fullIData(oldp+446,(0x40001100U),32);
    bufp->fullBit(oldp+447,(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__MISALIGNED_EXCEPTION));
    bufp->fullCData(oldp+448,(1U),4);
    bufp->fullCData(oldp+449,(2U),4);
    bufp->fullCData(oldp+450,(4U),4);
    bufp->fullCData(oldp+451,(8U),4);
    bufp->fullIData(oldp+452,(0x20000U),32);
    bufp->fullIData(oldp+453,(0x20002U),32);
    bufp->fullIData(oldp+454,(0x20U),32);
    bufp->fullIData(oldp+455,(1U),32);
    bufp->fullIData(oldp+456,(2U),32);
    bufp->fullIData(oldp+457,(0xffffffffU),32);
    bufp->fullIData(oldp+458,(3U),32);
    bufp->fullIData(oldp+459,(1U),32);
    bufp->fullIData(oldp+460,(0x20U),32);
    bufp->fullIData(oldp+461,(0x40U),32);
    bufp->fullIData(oldp+462,(0xaU),32);
    bufp->fullSData(oldp+463,(0U),10);
    bufp->fullSData(oldp+464,(4U),10);
    bufp->fullSData(oldp+465,(8U),10);
    bufp->fullSData(oldp+466,(0xcU),10);
}
