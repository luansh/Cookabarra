// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsimple_system__Syms.h"


void Vsimple_system___024root__trace_chg_sub_0(Vsimple_system___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vsimple_system___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_system___024root__trace_chg_top_0\n"); );
    // Init
    Vsimple_system___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsimple_system___024root*>(voidSelf);
    Vsimple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vsimple_system___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vsimple_system___024root__trace_chg_sub_0(Vsimple_system___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_system___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->simple_system__DOT__cfg_device_addr_base[0]),32);
        bufp->chgIData(oldp+1,(vlSelf->simple_system__DOT__cfg_device_addr_base[1]),32);
        bufp->chgIData(oldp+2,(vlSelf->simple_system__DOT__cfg_device_addr_base[2]),32);
        bufp->chgIData(oldp+3,(vlSelf->simple_system__DOT__cfg_device_addr_mask[0]),32);
        bufp->chgIData(oldp+4,(vlSelf->simple_system__DOT__cfg_device_addr_mask[1]),32);
        bufp->chgIData(oldp+5,(vlSelf->simple_system__DOT__cfg_device_addr_mask[2]),32);
        bufp->chgIData(oldp+6,(vlSelf->simple_system__DOT__console0__DOT__log_fd),32);
        bufp->chgIData(oldp+7,(vlSelf->simple_system__DOT____Vcellinp__u_bus__cfg_device_addr_base[0]),32);
        bufp->chgIData(oldp+8,(vlSelf->simple_system__DOT____Vcellinp__u_bus__cfg_device_addr_base[1]),32);
        bufp->chgIData(oldp+9,(vlSelf->simple_system__DOT____Vcellinp__u_bus__cfg_device_addr_base[2]),32);
        bufp->chgIData(oldp+10,(vlSelf->simple_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask[0]),32);
        bufp->chgIData(oldp+11,(vlSelf->simple_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask[1]),32);
        bufp->chgIData(oldp+12,(vlSelf->simple_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask[2]),32);
    }
    if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity[1U] 
                      | vlSelf->__Vm_traceActivity[3U]) 
                     | vlSelf->__Vm_traceActivity[6U]))) {
        bufp->chgBit(oldp+13,(vlSelf->simple_system__DOT__device_rvalid[0]));
        bufp->chgBit(oldp+14,(vlSelf->simple_system__DOT__device_rvalid[1]));
        bufp->chgBit(oldp+15,(vlSelf->simple_system__DOT__device_rvalid[2]));
        bufp->chgIData(oldp+16,(((((8U & vlSelf->simple_system__DOT__device_be
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
        bufp->chgIData(oldp+17,(((((8U & vlSelf->simple_system__DOT__device_be
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
        bufp->chgIData(oldp+18,(((((8U & vlSelf->simple_system__DOT__device_be
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
        bufp->chgIData(oldp+19,(((((8U & vlSelf->simple_system__DOT__device_be
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
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgCData(oldp+20,(vlSelf->simple_system__DOT__host_be[0]),4);
        bufp->chgIData(oldp+21,(vlSelf->simple_system__DOT__host_wdata[0]),32);
        bufp->chgCData(oldp+22,(vlSelf->simple_system__DOT____Vcellout__core_top0__ram_sel_o),4);
        bufp->chgIData(oldp+23,(vlSelf->simple_system__DOT____Vcellout__core_top0__ram_addr_o),32);
        bufp->chgIData(oldp+24,(vlSelf->simple_system__DOT____Vcellout__core_top0__ram_data_o),32);
        bufp->chgCData(oldp+25,(vlSelf->simple_system__DOT__core_top0__DOT__ctl_stall_o),6);
        bufp->chgBit(oldp+26,(vlSelf->simple_system__DOT__core_top0__DOT__id_rs1_re_o));
        bufp->chgBit(oldp+27,(vlSelf->simple_system__DOT__core_top0__DOT__id_rs2_re_o));
        bufp->chgCData(oldp+28,(vlSelf->simple_system__DOT__core_top0__DOT__id_rs1_raddr_o),5);
        bufp->chgCData(oldp+29,(vlSelf->simple_system__DOT__core_top0__DOT__id_rs2_raddr_o),5);
        bufp->chgBit(oldp+30,(vlSelf->simple_system__DOT__core_top0__DOT__id_stall_req_o));
        bufp->chgIData(oldp+31,(vlSelf->simple_system__DOT__core_top0__DOT__id_inst_o),32);
        bufp->chgIData(oldp+32,(vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__imm_r),32);
        bufp->chgBit(oldp+33,(vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__csr_we));
        bufp->chgIData(oldp+34,(vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__csr_addr),32);
        bufp->chgBit(oldp+35,(vlSelf->simple_system__DOT__core_top0__DOT__id_rd_we_o));
        bufp->chgCData(oldp+36,(vlSelf->simple_system__DOT__core_top0__DOT__id_rd_waddr_o),5);
        bufp->chgCData(oldp+37,(vlSelf->simple_system__DOT__core_top0__DOT__id_alusel_o),4);
        bufp->chgSData(oldp+38,(vlSelf->simple_system__DOT__core_top0__DOT__id_uopcode_o),16);
        bufp->chgIData(oldp+39,((((IData)(vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__excepttype_illegal_inst) 
                                  << 3U) | (((IData)(vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__excepttype_ebreak) 
                                             << 2U) 
                                            | (((IData)(vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__excepttype_ecall) 
                                                << 1U) 
                                               | (IData)(vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__excepttype_mret))))),32);
        bufp->chgIData(oldp+40,(vlSelf->simple_system__DOT__core_top0__DOT__ex_dividend_o),32);
        bufp->chgIData(oldp+41,(vlSelf->simple_system__DOT__core_top0__DOT__ex_divisor_o),32);
        bufp->chgBit(oldp+42,(vlSelf->simple_system__DOT__core_top0__DOT__ex_div_start_o));
        bufp->chgBit(oldp+43,(vlSelf->simple_system__DOT__core_top0__DOT__ex_div_signed_o));
        bufp->chgBit(oldp+44,(vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__stall_req_for_div));
        bufp->chgBit(oldp+45,(vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_tag_o));
        bufp->chgIData(oldp+46,(vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_waddr_o),32);
        bufp->chgIData(oldp+47,(vlSelf->simple_system__DOT__core_top0__DOT__ex_mem_addr_o),32);
        bufp->chgIData(oldp+48,(vlSelf->simple_system__DOT__core_top0__DOT__ex_mem_wdata_o),32);
        bufp->chgBit(oldp+49,(vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_request_o));
        bufp->chgBit(oldp+50,(vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_taken_o));
        bufp->chgBit(oldp+51,(vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_call_o));
        bufp->chgBit(oldp+52,(vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_ret_o));
        bufp->chgBit(oldp+53,(vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_jmp_o));
        bufp->chgIData(oldp+54,(vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_target_o),32);
        bufp->chgBit(oldp+55,(vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_redirect_o));
        bufp->chgIData(oldp+56,(vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_redirect_pc_o),32);
        bufp->chgBit(oldp+57,(vlSelf->simple_system__DOT__core_top0__DOT__mem_rd_we_o));
        bufp->chgCData(oldp+58,(vlSelf->simple_system__DOT__core_top0__DOT__mem_rd_addr_o),5);
        bufp->chgBit(oldp+59,(vlSelf->simple_system__DOT__core_top0__DOT__mem_csr_we_o));
        bufp->chgIData(oldp+60,(vlSelf->simple_system__DOT__core_top0__DOT__mem_csr_waddr_o),32);
        bufp->chgIData(oldp+61,(vlSelf->simple_system__DOT__core_top0__DOT__mem_csr_wdata_o),32);
        bufp->chgIData(oldp+62,(vlSelf->simple_system__DOT__core_top0__DOT__mem_excepttype_o),32);
        bufp->chgIData(oldp+63,(vlSelf->simple_system__DOT__core_top0__DOT__mem_pc_o),32);
        bufp->chgIData(oldp+64,(vlSelf->simple_system__DOT__core_top0__DOT__mem_inst_o),32);
        bufp->chgBit(oldp+65,(vlSelf->simple_system__DOT__core_top0__DOT____Vcellinp__bp0__stall_i));
        bufp->chgIData(oldp+66,(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__i1),32);
        bufp->chgCData(oldp+67,(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__ras_proven_next_index_r),3);
        bufp->chgIData(oldp+68,(vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__div_result_r),32);
        bufp->chgIData(oldp+69,(vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__jump_result_r),32);
        bufp->chgIData(oldp+70,(vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__logic_result_r),32);
        bufp->chgBit(oldp+71,(vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__ins_valid_r));
        bufp->chgBit(oldp+72,(vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__rs1_load_depend));
        bufp->chgBit(oldp+73,(vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__rs2_load_depend));
        bufp->chgBit(oldp+74,(vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__excepttype_mret));
        bufp->chgBit(oldp+75,(vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__excepttype_ecall));
        bufp->chgBit(oldp+76,(vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__excepttype_ebreak));
        bufp->chgBit(oldp+77,(vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__excepttype_illegal_inst));
        bufp->chgBit(oldp+78,(vlSelf->simple_system__DOT__core_top0__DOT__mem0__DOT__mem_we));
        bufp->chgCData(oldp+79,(vlSelf->simple_system__DOT____Vcellinp__u_bus__host_be_i[0]),4);
        bufp->chgIData(oldp+80,(vlSelf->simple_system__DOT____Vcellinp__u_bus__host_wdata_i[0]),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[6U]))) {
        bufp->chgBit(oldp+81,(vlSelf->simple_system__DOT__host_req[0]));
        bufp->chgBit(oldp+82,(vlSelf->simple_system__DOT__host_gnt[0]));
        bufp->chgBit(oldp+83,(vlSelf->simple_system__DOT__host_we[0]));
        bufp->chgBit(oldp+84,(vlSelf->simple_system__DOT__host_err[0]));
        bufp->chgBit(oldp+85,(vlSelf->simple_system__DOT__device_req[0]));
        bufp->chgBit(oldp+86,(vlSelf->simple_system__DOT__device_req[1]));
        bufp->chgBit(oldp+87,(vlSelf->simple_system__DOT__device_req[2]));
        bufp->chgIData(oldp+88,(vlSelf->simple_system__DOT__device_addr[0]),32);
        bufp->chgIData(oldp+89,(vlSelf->simple_system__DOT__device_addr[1]),32);
        bufp->chgIData(oldp+90,(vlSelf->simple_system__DOT__device_addr[2]),32);
        bufp->chgBit(oldp+91,(vlSelf->simple_system__DOT__device_we[0]));
        bufp->chgBit(oldp+92,(vlSelf->simple_system__DOT__device_we[1]));
        bufp->chgBit(oldp+93,(vlSelf->simple_system__DOT__device_we[2]));
        bufp->chgCData(oldp+94,(vlSelf->simple_system__DOT__device_be[0]),4);
        bufp->chgCData(oldp+95,(vlSelf->simple_system__DOT__device_be[1]),4);
        bufp->chgCData(oldp+96,(vlSelf->simple_system__DOT__device_be[2]),4);
        bufp->chgIData(oldp+97,(vlSelf->simple_system__DOT__device_wdata[0]),32);
        bufp->chgIData(oldp+98,(vlSelf->simple_system__DOT__device_wdata[1]),32);
        bufp->chgIData(oldp+99,(vlSelf->simple_system__DOT__device_wdata[2]),32);
        bufp->chgBit(oldp+100,(vlSelf->simple_system__DOT__device_err[0]));
        bufp->chgBit(oldp+101,(vlSelf->simple_system__DOT__device_err[1]));
        bufp->chgBit(oldp+102,(vlSelf->simple_system__DOT__device_err[2]));
        bufp->chgBit(oldp+103,(vlSelf->simple_system__DOT__device_req
                               [1U]));
        bufp->chgBit(oldp+104,(vlSelf->simple_system__DOT__device_we
                               [1U]));
        bufp->chgCData(oldp+105,(vlSelf->simple_system__DOT__device_be
                                 [1U]),4);
        bufp->chgIData(oldp+106,(vlSelf->simple_system__DOT__device_addr
                                 [1U]),32);
        bufp->chgIData(oldp+107,(vlSelf->simple_system__DOT__device_wdata
                                 [1U]),32);
        bufp->chgCData(oldp+108,((0xffU & (vlSelf->simple_system__DOT__device_addr
                                           [1U] >> 2U))),8);
        bufp->chgBit(oldp+109,(vlSelf->simple_system__DOT____Vcellout__core_top0__ram_ce_o));
        bufp->chgBit(oldp+110,(vlSelf->simple_system__DOT____Vcellout__core_top0__ram_we_o));
        bufp->chgIData(oldp+111,(vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_wdata_o),32);
        bufp->chgIData(oldp+112,(vlSelf->simple_system__DOT__core_top0__DOT__ex_rd_wdata_o),32);
        bufp->chgIData(oldp+113,(vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__csr_result_r),32);
        bufp->chgBit(oldp+114,(vlSelf->simple_system__DOT__device_req
                               [0U]));
        bufp->chgIData(oldp+115,(vlSelf->simple_system__DOT__device_addr
                                 [0U]),32);
        bufp->chgBit(oldp+116,(vlSelf->simple_system__DOT__device_we
                               [0U]));
        bufp->chgCData(oldp+117,(vlSelf->simple_system__DOT__device_be
                                 [0U]),4);
        bufp->chgIData(oldp+118,(vlSelf->simple_system__DOT__device_wdata
                                 [0U]),32);
        bufp->chgBit(oldp+119,(((~ vlSelf->simple_system__DOT__device_we
                                 [0U]) & vlSelf->simple_system__DOT__device_req
                                [0U])));
        bufp->chgBit(oldp+120,(vlSelf->simple_system__DOT____Vcellinp__u_bus__host_req_i[0]));
        bufp->chgBit(oldp+121,(vlSelf->simple_system__DOT____Vcellout__u_bus__host_gnt_o[0]));
        bufp->chgBit(oldp+122,(vlSelf->simple_system__DOT____Vcellinp__u_bus__host_we_i[0]));
        bufp->chgBit(oldp+123,(vlSelf->simple_system__DOT____Vcellout__u_bus__host_err_o[0]));
        bufp->chgBit(oldp+124,(vlSelf->simple_system__DOT____Vcellout__u_bus__device_req_o[0]));
        bufp->chgBit(oldp+125,(vlSelf->simple_system__DOT____Vcellout__u_bus__device_req_o[1]));
        bufp->chgBit(oldp+126,(vlSelf->simple_system__DOT____Vcellout__u_bus__device_req_o[2]));
        bufp->chgIData(oldp+127,(vlSelf->simple_system__DOT____Vcellout__u_bus__device_addr_o[0]),32);
        bufp->chgIData(oldp+128,(vlSelf->simple_system__DOT____Vcellout__u_bus__device_addr_o[1]),32);
        bufp->chgIData(oldp+129,(vlSelf->simple_system__DOT____Vcellout__u_bus__device_addr_o[2]),32);
        bufp->chgBit(oldp+130,(vlSelf->simple_system__DOT____Vcellout__u_bus__device_we_o[0]));
        bufp->chgBit(oldp+131,(vlSelf->simple_system__DOT____Vcellout__u_bus__device_we_o[1]));
        bufp->chgBit(oldp+132,(vlSelf->simple_system__DOT____Vcellout__u_bus__device_we_o[2]));
        bufp->chgCData(oldp+133,(vlSelf->simple_system__DOT____Vcellout__u_bus__device_be_o[0]),4);
        bufp->chgCData(oldp+134,(vlSelf->simple_system__DOT____Vcellout__u_bus__device_be_o[1]),4);
        bufp->chgCData(oldp+135,(vlSelf->simple_system__DOT____Vcellout__u_bus__device_be_o[2]),4);
        bufp->chgIData(oldp+136,(vlSelf->simple_system__DOT____Vcellout__u_bus__device_wdata_o[0]),32);
        bufp->chgIData(oldp+137,(vlSelf->simple_system__DOT____Vcellout__u_bus__device_wdata_o[1]),32);
        bufp->chgIData(oldp+138,(vlSelf->simple_system__DOT____Vcellout__u_bus__device_wdata_o[2]),32);
        bufp->chgBit(oldp+139,(vlSelf->simple_system__DOT____Vcellinp__u_bus__device_err_i[0]));
        bufp->chgBit(oldp+140,(vlSelf->simple_system__DOT____Vcellinp__u_bus__device_err_i[1]));
        bufp->chgBit(oldp+141,(vlSelf->simple_system__DOT____Vcellinp__u_bus__device_err_i[2]));
        bufp->chgBit(oldp+142,(vlSelf->simple_system__DOT__u_bus__DOT__host_sel_req));
        bufp->chgBit(oldp+143,(vlSelf->simple_system__DOT__u_bus__DOT__host_sel_resp));
        bufp->chgCData(oldp+144,(vlSelf->simple_system__DOT__u_bus__DOT__device_sel_req),2);
        bufp->chgCData(oldp+145,(vlSelf->simple_system__DOT__u_bus__DOT__device_sel_resp),2);
        bufp->chgBit(oldp+146,(vlSelf->simple_system__DOT__device_req
                               [2U]));
        bufp->chgIData(oldp+147,(vlSelf->simple_system__DOT__device_addr
                                 [2U]),32);
        bufp->chgBit(oldp+148,(vlSelf->simple_system__DOT__device_we
                               [2U]));
        bufp->chgCData(oldp+149,(vlSelf->simple_system__DOT__device_be
                                 [2U]),4);
        bufp->chgIData(oldp+150,(vlSelf->simple_system__DOT__device_wdata
                                 [2U]),32);
        bufp->chgBit(oldp+151,((vlSelf->simple_system__DOT__device_req
                                [2U] & (IData)(vlSelf->simple_system__DOT__u_timer__DOT__error_d))));
        bufp->chgBit(oldp+152,(vlSelf->simple_system__DOT__u_timer__DOT__timer_we));
        bufp->chgBit(oldp+153,(((IData)(vlSelf->simple_system__DOT__u_timer__DOT__timer_we) 
                                & (0U == (0x3ffU & 
                                          vlSelf->simple_system__DOT__device_addr
                                          [2U])))));
        bufp->chgBit(oldp+154,(((IData)(vlSelf->simple_system__DOT__u_timer__DOT__timer_we) 
                                & (4U == (0x3ffU & 
                                          vlSelf->simple_system__DOT__device_addr
                                          [2U])))));
        bufp->chgBit(oldp+155,(vlSelf->simple_system__DOT__u_timer__DOT__mtimecmp_we));
        bufp->chgBit(oldp+156,(vlSelf->simple_system__DOT__u_timer__DOT__mtimecmph_we));
        bufp->chgBit(oldp+157,(vlSelf->simple_system__DOT__u_timer__DOT__error_d));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[7U]))) {
        bufp->chgBit(oldp+158,(vlSelf->simple_system__DOT__host_rvalid[0]));
        bufp->chgBit(oldp+159,(vlSelf->simple_system__DOT__host_rvalid
                               [0U]));
        bufp->chgBit(oldp+160,(vlSelf->simple_system__DOT____Vcellout__u_bus__host_rvalid_o[0]));
        bufp->chgBit(oldp+161,(vlSelf->simple_system__DOT____Vcellinp__u_bus__device_rvalid_i[0]));
        bufp->chgBit(oldp+162,(vlSelf->simple_system__DOT____Vcellinp__u_bus__device_rvalid_i[1]));
        bufp->chgBit(oldp+163,(vlSelf->simple_system__DOT____Vcellinp__u_bus__device_rvalid_i[2]));
        bufp->chgQData(oldp+164,(vlSelf->simple_system__DOT__u_timer__DOT__mtime_d),64);
        bufp->chgQData(oldp+166,(vlSelf->simple_system__DOT__u_timer__DOT__mtimecmp_d),64);
        bufp->chgIData(oldp+168,(vlSelf->simple_system__DOT__u_timer__DOT__rdata_d),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[2U] 
                     | vlSelf->__Vm_traceActivity[8U]))) {
        bufp->chgIData(oldp+169,(vlSelf->simple_system__DOT__host_rdata[0]),32);
        bufp->chgIData(oldp+170,(vlSelf->simple_system__DOT__host_rdata
                                 [0U]),32);
        bufp->chgIData(oldp+171,(vlSelf->simple_system__DOT____Vcellout__u_bus__host_rdata_o[0]),32);
        bufp->chgIData(oldp+172,(vlSelf->simple_system__DOT____Vcellinp__u_bus__device_rdata_i[0]),32);
        bufp->chgIData(oldp+173,(vlSelf->simple_system__DOT____Vcellinp__u_bus__device_rdata_i[1]),32);
        bufp->chgIData(oldp+174,(vlSelf->simple_system__DOT____Vcellinp__u_bus__device_rdata_i[2]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgBit(oldp+175,(vlSelf->simple_system__DOT____Vcellout__console0__rvalid_o));
        bufp->chgCData(oldp+176,(vlSelf->simple_system__DOT__console0__DOT__sim_finish),3);
        bufp->chgIData(oldp+177,(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__bims),32);
        bufp->chgCData(oldp+178,(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__u_lru__DOT__lfsr_r),6);
        bufp->chgIData(oldp+179,(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__update),32);
        bufp->chgQData(oldp+180,(vlSelf->simple_system__DOT__u_timer__DOT__mtime_q),64);
        bufp->chgQData(oldp+182,((1ULL + vlSelf->simple_system__DOT__u_timer__DOT__mtime_q)),64);
        bufp->chgQData(oldp+184,(vlSelf->simple_system__DOT__u_timer__DOT__mtimecmp_q),64);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+186,(vlSelf->simple_system__DOT__rom_ce));
        bufp->chgIData(oldp+187,(vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o),32);
        bufp->chgIData(oldp+188,(vlSelf->simple_system__DOT__host_addr[0]),32);
        bufp->chgBit(oldp+189,(vlSelf->simple_system__DOT__core_top0__DOT__ctl_ie_type_o));
        bufp->chgBit(oldp+190,(vlSelf->simple_system__DOT__core_top0__DOT__ctl_set_epc_o));
        bufp->chgIData(oldp+191,(vlSelf->simple_system__DOT__core_top0__DOT__mem_pc_i),32);
        bufp->chgBit(oldp+192,(vlSelf->simple_system__DOT__core_top0__DOT__ctl_set_mtval_o));
        bufp->chgIData(oldp+193,(vlSelf->simple_system__DOT__core_top0__DOT__ctl_mtval_o),32);
        bufp->chgBit(oldp+194,(vlSelf->simple_system__DOT__core_top0__DOT__ctl_set_cause_o));
        bufp->chgCData(oldp+195,(vlSelf->simple_system__DOT__core_top0__DOT__ctl_trap_casue_o),4);
        bufp->chgBit(oldp+196,(vlSelf->simple_system__DOT__core_top0__DOT__ctl_mstatus_ie_clear_o));
        bufp->chgBit(oldp+197,(vlSelf->simple_system__DOT__core_top0__DOT__ctl_mstatus_ie_set_o));
        bufp->chgBit(oldp+198,(vlSelf->simple_system__DOT__core_top0__DOT__ctl_flush_o));
        bufp->chgIData(oldp+199,(vlSelf->simple_system__DOT__core_top0__DOT__ctl_new_pc_o),32);
        bufp->chgBit(oldp+200,(vlSelf->simple_system__DOT__core_top0__DOT__if_branch_slot_end_o));
        bufp->chgIData(oldp+201,(vlSelf->simple_system__DOT__core_top0__DOT__id_pc_i),32);
        bufp->chgIData(oldp+202,(vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i),32);
        bufp->chgIData(oldp+203,(vlSelf->simple_system__DOT__core_top0__DOT__id_next_pc_i),32);
        bufp->chgBit(oldp+204,(vlSelf->simple_system__DOT__core_top0__DOT__id_next_taken_i));
        bufp->chgBit(oldp+205,(vlSelf->simple_system__DOT__core_top0__DOT__id_branch_slot_end_i));
        bufp->chgIData(oldp+206,(vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i),32);
        bufp->chgIData(oldp+207,(vlSelf->simple_system__DOT__core_top0__DOT__ex_inst_i),32);
        bufp->chgIData(oldp+208,(vlSelf->simple_system__DOT__core_top0__DOT__ex_next_pc_i),32);
        bufp->chgBit(oldp+209,(vlSelf->simple_system__DOT__core_top0__DOT__ex_next_taken_i));
        bufp->chgBit(oldp+210,(vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_slot_end_i));
        bufp->chgCData(oldp+211,(vlSelf->simple_system__DOT__core_top0__DOT__ex_alusel_i),4);
        bufp->chgSData(oldp+212,(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i),16);
        bufp->chgIData(oldp+213,(vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i),32);
        bufp->chgIData(oldp+214,(vlSelf->simple_system__DOT__core_top0__DOT__ex_rs2_data_i),32);
        bufp->chgIData(oldp+215,(vlSelf->simple_system__DOT__core_top0__DOT__ex_imm_i),32);
        bufp->chgBit(oldp+216,(vlSelf->simple_system__DOT__core_top0__DOT__ex_rd_we_i));
        bufp->chgCData(oldp+217,(vlSelf->simple_system__DOT__core_top0__DOT__ex_rd_addr_i),5);
        bufp->chgBit(oldp+218,(vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_we_i));
        bufp->chgIData(oldp+219,(vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_addr_i),32);
        bufp->chgIData(oldp+220,(vlSelf->simple_system__DOT__core_top0__DOT__ex_excepttype_i),32);
        bufp->chgIData(oldp+221,(vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o),32);
        bufp->chgCData(oldp+222,(vlSelf->simple_system__DOT__core_top0__DOT__ex_rd_addr_o),5);
        bufp->chgBit(oldp+223,(vlSelf->simple_system__DOT__core_top0__DOT__mem_rd_we_i));
        bufp->chgCData(oldp+224,(vlSelf->simple_system__DOT__core_top0__DOT__mem_rd_addr_i),5);
        bufp->chgIData(oldp+225,(vlSelf->simple_system__DOT__core_top0__DOT__mem_rd_wd_i),32);
        bufp->chgSData(oldp+226,(vlSelf->simple_system__DOT__core_top0__DOT__mem_uop_i),16);
        bufp->chgIData(oldp+227,(vlSelf->simple_system__DOT__core_top0__DOT__mem_mem_addr_i),32);
        bufp->chgIData(oldp+228,(vlSelf->simple_system__DOT__core_top0__DOT__mem_mem_wdata_i),32);
        bufp->chgBit(oldp+229,(vlSelf->simple_system__DOT__core_top0__DOT__mem_csr_we_i));
        bufp->chgIData(oldp+230,(vlSelf->simple_system__DOT__core_top0__DOT__mem_csr_waddr_i),32);
        bufp->chgIData(oldp+231,(vlSelf->simple_system__DOT__core_top0__DOT__mem_csr_wdata_i),32);
        bufp->chgIData(oldp+232,(vlSelf->simple_system__DOT__core_top0__DOT__mem_excepttype_i),32);
        bufp->chgIData(oldp+233,(vlSelf->simple_system__DOT__core_top0__DOT__mem_inst_i),32);
        bufp->chgBit(oldp+234,(vlSelf->simple_system__DOT__core_top0__DOT__wb_rd_we_i));
        bufp->chgCData(oldp+235,(vlSelf->simple_system__DOT__core_top0__DOT__wb_rd_addr_i),5);
        bufp->chgIData(oldp+236,(vlSelf->simple_system__DOT__core_top0__DOT__wb_rd_wdata_i),32);
        bufp->chgBit(oldp+237,(vlSelf->simple_system__DOT__core_top0__DOT__wb_csr_we_i));
        bufp->chgIData(oldp+238,(vlSelf->simple_system__DOT__core_top0__DOT__wb_csr_waddr_i),32);
        bufp->chgIData(oldp+239,(vlSelf->simple_system__DOT__core_top0__DOT__wb_csr_wdata_i),32);
        bufp->chgBit(oldp+240,(vlSelf->simple_system__DOT__core_top0__DOT__wb_instret_incr_i));
        bufp->chgQData(oldp+241,(vlSelf->simple_system__DOT__core_top0__DOT__div_result_o),64);
        bufp->chgBit(oldp+243,(vlSelf->simple_system__DOT__core_top0__DOT__div_ready_o));
        bufp->chgIData(oldp+244,(vlSelf->simple_system__DOT__core_top0__DOT__csr_rdata_o),32);
        bufp->chgIData(oldp+245,(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mtvec),32);
        bufp->chgBit(oldp+246,(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mstatus_ie));
        bufp->chgBit(oldp+247,(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mie_external));
        bufp->chgBit(oldp+248,(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mie_timer));
        bufp->chgBit(oldp+249,(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mie_sw));
        bufp->chgBit(oldp+250,(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mip_external));
        bufp->chgBit(oldp+251,(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mip_timer));
        bufp->chgBit(oldp+252,(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mip_sw));
        bufp->chgIData(oldp+253,(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mepc),32);
        bufp->chgCData(oldp+254,((0x3fU & (vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i 
                                           >> 2U))),6);
        bufp->chgCData(oldp+255,((0x3fU & (vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o 
                                           >> 2U))),6);
        bufp->chgIData(oldp+256,(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__ras_list_r[0]),32);
        bufp->chgIData(oldp+257,(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__ras_list_r[1]),32);
        bufp->chgIData(oldp+258,(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__ras_list_r[2]),32);
        bufp->chgIData(oldp+259,(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__ras_list_r[3]),32);
        bufp->chgIData(oldp+260,(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__ras_list_r[4]),32);
        bufp->chgIData(oldp+261,(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__ras_list_r[5]),32);
        bufp->chgIData(oldp+262,(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__ras_list_r[6]),32);
        bufp->chgIData(oldp+263,(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__ras_list_r[7]),32);
        bufp->chgCData(oldp+264,(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__ras_proven_cur_index_r),3);
        bufp->chgCData(oldp+265,(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__ras_speculative_cur_index_r),3);
        bufp->chgIData(oldp+266,(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__ras_list_r
                                 [vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__ras_speculative_cur_index_r]),32);
        bufp->chgIData(oldp+267,(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__i3),32);
        bufp->chgQData(oldp+268,(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mcycle),64);
        bufp->chgQData(oldp+270,(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__minstret),64);
        bufp->chgIData(oldp+272,((0x1800U | (((IData)(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mstatus_pie) 
                                              << 7U) 
                                             | ((IData)(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mstatus_ie) 
                                                << 3U)))),32);
        bufp->chgBit(oldp+273,(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mstatus_pie));
        bufp->chgIData(oldp+274,((((IData)(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mie_external) 
                                   << 0xbU) | (((IData)(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mie_timer) 
                                                << 7U) 
                                               | ((IData)(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mie_sw) 
                                                  << 3U)))),32);
        bufp->chgIData(oldp+275,(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mscratch),32);
        bufp->chgIData(oldp+276,((((IData)(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__int_or_exc) 
                                   << 0x1fU) | ((vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__cause_rem 
                                                 << 4U) 
                                                | (IData)(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__cause)))),32);
        bufp->chgCData(oldp+277,(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__cause),4);
        bufp->chgIData(oldp+278,(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__cause_rem),27);
        bufp->chgBit(oldp+279,(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__int_or_exc));
        bufp->chgIData(oldp+280,((((IData)(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mip_external) 
                                   << 0xbU) | (((IData)(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mip_timer) 
                                                << 7U) 
                                               | ((IData)(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mip_sw) 
                                                  << 3U)))),32);
        bufp->chgIData(oldp+281,(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mtval),32);
        bufp->chgCData(oldp+282,(vlSelf->simple_system__DOT__core_top0__DOT__ctrl0__DOT__curr_state),4);
        bufp->chgCData(oldp+283,(vlSelf->simple_system__DOT__core_top0__DOT__ctrl0__DOT__next_state),4);
        bufp->chgBit(oldp+284,((1U & vlSelf->simple_system__DOT__core_top0__DOT__mem_excepttype_i)));
        bufp->chgBit(oldp+285,((1U & (vlSelf->simple_system__DOT__core_top0__DOT__mem_excepttype_i 
                                      >> 1U))));
        bufp->chgBit(oldp+286,((1U & (vlSelf->simple_system__DOT__core_top0__DOT__mem_excepttype_i 
                                      >> 2U))));
        bufp->chgBit(oldp+287,((1U & (vlSelf->simple_system__DOT__core_top0__DOT__mem_excepttype_i 
                                      >> 3U))));
        bufp->chgBit(oldp+288,((1U & (vlSelf->simple_system__DOT__core_top0__DOT__mem_excepttype_i 
                                      >> 4U))));
        bufp->chgBit(oldp+289,(vlSelf->simple_system__DOT__core_top0__DOT__mem0__DOT__store_addr_align_exception));
        bufp->chgBit(oldp+290,(vlSelf->simple_system__DOT__core_top0__DOT__mem0__DOT__load_addr_align_exception));
        bufp->chgBit(oldp+291,(vlSelf->simple_system__DOT__core_top0__DOT__ctrl0__DOT__eip));
        bufp->chgBit(oldp+292,(vlSelf->simple_system__DOT__core_top0__DOT__ctrl0__DOT__tip));
        bufp->chgBit(oldp+293,(vlSelf->simple_system__DOT__core_top0__DOT__ctrl0__DOT__sip));
        bufp->chgBit(oldp+294,(((IData)(vlSelf->simple_system__DOT__core_top0__DOT__ctrl0__DOT__eip) 
                                | ((IData)(vlSelf->simple_system__DOT__core_top0__DOT__ctrl0__DOT__tip) 
                                   | (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ctrl0__DOT__sip)))));
        bufp->chgBit(oldp+295,((1U & (((IData)(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mstatus_ie) 
                                       & ((IData)(vlSelf->simple_system__DOT__core_top0__DOT__ctrl0__DOT__eip) 
                                          | ((IData)(vlSelf->simple_system__DOT__core_top0__DOT__ctrl0__DOT__tip) 
                                             | (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ctrl0__DOT__sip)))) 
                                      | (IData)((((0U 
                                                   != 
                                                   (0x1aU 
                                                    & vlSelf->simple_system__DOT__core_top0__DOT__mem_excepttype_i)) 
                                                  | (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem0__DOT__store_addr_align_exception)) 
                                                 | (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem0__DOT__load_addr_align_exception)))))));
        bufp->chgCData(oldp+296,((3U & vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mtvec)),2);
        bufp->chgIData(oldp+297,((vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mtvec 
                                  >> 2U)),30);
        bufp->chgIData(oldp+298,(((IData)(vlSelf->simple_system__DOT__core_top0__DOT__ctl_ie_type_o)
                                   ? ((1U & vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mtvec)
                                       ? ((0xfffffffcU 
                                           & vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mtvec) 
                                          + ((IData)(vlSelf->simple_system__DOT__core_top0__DOT__ctl_trap_casue_o) 
                                             << 2U))
                                       : (0xfffffffcU 
                                          & vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mtvec))
                                   : (0xfffffffcU & vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mtvec))),32);
        bufp->chgIData(oldp+299,(((1U & vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mtvec)
                                   ? ((0xfffffffcU 
                                       & vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mtvec) 
                                      + ((IData)(vlSelf->simple_system__DOT__core_top0__DOT__ctl_trap_casue_o) 
                                         << 2U)) : 
                                  (0xfffffffcU & vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mtvec))),32);
        bufp->chgIData(oldp+300,(((IData)(vlSelf->simple_system__DOT__core_top0__DOT__ctl_trap_casue_o) 
                                  << 2U)),32);
        bufp->chgQData(oldp+301,(vlSelf->simple_system__DOT__core_top0__DOT__div0__DOT__div_var_w),33);
        bufp->chgCData(oldp+303,(vlSelf->simple_system__DOT__core_top0__DOT__div0__DOT__cnt_r),6);
        bufp->chgCData(oldp+304,(vlSelf->simple_system__DOT__core_top0__DOT__div0__DOT__state_r),2);
        bufp->chgWData(oldp+305,(vlSelf->simple_system__DOT__core_top0__DOT__div0__DOT__dividend_r),65);
        bufp->chgIData(oldp+308,(vlSelf->simple_system__DOT__core_top0__DOT__div0__DOT__divisor_r),32);
        bufp->chgCData(oldp+309,((0x1fU & (vlSelf->simple_system__DOT__core_top0__DOT__ex_inst_i 
                                           >> 0xfU))),5);
        bufp->chgIData(oldp+310,(((IData)(4U) + vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i)),32);
        bufp->chgIData(oldp+311,(vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__pc_add_imm_w),32);
        bufp->chgIData(oldp+312,(vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__rs1_add_imm_w),32);
        bufp->chgIData(oldp+313,((vlSelf->simple_system__DOT__core_top0__DOT__ex_imm_i 
                                  | vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i)),32);
        bufp->chgIData(oldp+314,((vlSelf->simple_system__DOT__core_top0__DOT__ex_imm_i 
                                  & vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i)),32);
        bufp->chgIData(oldp+315,((vlSelf->simple_system__DOT__core_top0__DOT__ex_imm_i 
                                  ^ vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i)),32);
        bufp->chgIData(oldp+316,((vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i 
                                  + vlSelf->simple_system__DOT__core_top0__DOT__ex_rs2_data_i)),32);
        bufp->chgIData(oldp+317,((vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i 
                                  - vlSelf->simple_system__DOT__core_top0__DOT__ex_rs2_data_i)),32);
        bufp->chgIData(oldp+318,((vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i 
                                  & vlSelf->simple_system__DOT__core_top0__DOT__ex_rs2_data_i)),32);
        bufp->chgIData(oldp+319,((vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i 
                                  | vlSelf->simple_system__DOT__core_top0__DOT__ex_rs2_data_i)),32);
        bufp->chgIData(oldp+320,((vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i 
                                  ^ vlSelf->simple_system__DOT__core_top0__DOT__ex_rs2_data_i)),32);
        bufp->chgBit(oldp+321,(vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__rs1_eq_rs2_w));
        bufp->chgBit(oldp+322,(vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__rs1_ge_rs2_signed_w));
        bufp->chgBit(oldp+323,(vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__rs1_ge_rs2_unsigned_w));
        bufp->chgBit(oldp+324,((vlSelf->simple_system__DOT__core_top0__DOT__ex_imm_i 
                                == vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i)));
        bufp->chgBit(oldp+325,(VL_GTES_III(32, vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i, vlSelf->simple_system__DOT__core_top0__DOT__ex_imm_i)));
        bufp->chgBit(oldp+326,((vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i 
                                >= vlSelf->simple_system__DOT__core_top0__DOT__ex_imm_i)));
        bufp->chgIData(oldp+327,((vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i 
                                  >> (0x1fU & vlSelf->simple_system__DOT__core_top0__DOT__ex_rs2_data_i))),32);
        bufp->chgIData(oldp+328,((0xffffffffU >> (0x1fU 
                                                  & vlSelf->simple_system__DOT__core_top0__DOT__ex_rs2_data_i))),32);
        bufp->chgIData(oldp+329,(((0x1fU >= vlSelf->simple_system__DOT__core_top0__DOT__ex_imm_i)
                                   ? (vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i 
                                      >> vlSelf->simple_system__DOT__core_top0__DOT__ex_imm_i)
                                   : 0U)),32);
        bufp->chgIData(oldp+330,(((0x1fU >= vlSelf->simple_system__DOT__core_top0__DOT__ex_imm_i)
                                   ? (0xffffffffU >> vlSelf->simple_system__DOT__core_top0__DOT__ex_imm_i)
                                   : 0U)),32);
        bufp->chgBit(oldp+331,(vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__read_csr_enable));
        bufp->chgIData(oldp+332,((((0x26U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i)) 
                                   | (0x28U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i)))
                                   ? vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i
                                   : ((0x29U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))
                                       ? ((vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i 
                                           >> 0x1fU)
                                           ? ((IData)(1U) 
                                              + (~ vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i))
                                           : vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i)
                                       : ((0x27U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))
                                           ? ((vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i 
                                               >> 0x1fU)
                                               ? ((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i))
                                               : vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i)
                                           : vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i)))),32);
        bufp->chgIData(oldp+333,((((0x26U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i)) 
                                   | (0x28U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i)))
                                   ? vlSelf->simple_system__DOT__core_top0__DOT__ex_rs2_data_i
                                   : ((0x29U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))
                                       ? vlSelf->simple_system__DOT__core_top0__DOT__ex_rs2_data_i
                                       : ((0x27U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))
                                           ? ((vlSelf->simple_system__DOT__core_top0__DOT__ex_rs2_data_i 
                                               >> 0x1fU)
                                               ? ((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->simple_system__DOT__core_top0__DOT__ex_rs2_data_i))
                                               : vlSelf->simple_system__DOT__core_top0__DOT__ex_rs2_data_i)
                                           : vlSelf->simple_system__DOT__core_top0__DOT__ex_rs2_data_i)))),32);
        bufp->chgQData(oldp+334,(vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__mul_result_w),64);
        bufp->chgQData(oldp+336,((1ULL + (~ vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__mul_result_w))),64);
        bufp->chgIData(oldp+338,(((IData)(1U) + (~ vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i))),32);
        bufp->chgIData(oldp+339,(((IData)(1U) + (~ vlSelf->simple_system__DOT__core_top0__DOT__ex_rs2_data_i))),32);
        bufp->chgBit(oldp+340,(vlSelf->simple_system__DOT__core_top0__DOT__ex_mem0__DOT__branch_tag));
        bufp->chgIData(oldp+341,(vlSelf->simple_system__DOT__core_top0__DOT__ex_mem0__DOT__branch_pc),32);
        bufp->chgCData(oldp+342,((0x7fU & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i)),7);
        bufp->chgCData(oldp+343,((0x1fU & (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                           >> 7U))),5);
        bufp->chgCData(oldp+344,((7U & (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+345,((0x1fU & (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+346,((0x1fU & (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+347,((vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                  >> 0x19U)),7);
        bufp->chgBit(oldp+348,(vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__pre_ins_is_load));
        bufp->chgBit(oldp+349,(vlSelf->simple_system__DOT__core_top0__DOT__mem0__DOT__mem_re));
        bufp->chgBit(oldp+350,(((~ vlSelf->simple_system__DOT__core_top0__DOT__mem_mem_addr_i) 
                                & ((0x11U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem_uop_i)) 
                                   | ((0xdU == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem_uop_i)) 
                                      | (0xeU == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem_uop_i)))))));
        bufp->chgBit(oldp+351,((((0x12U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem_uop_i)) 
                                 | (0xfU == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem_uop_i))) 
                                & (0U == (3U & vlSelf->simple_system__DOT__core_top0__DOT__mem_mem_addr_i)))));
        bufp->chgBit(oldp+352,(vlSelf->simple_system__DOT__core_top0__DOT__mem0__DOT__load_operation));
        bufp->chgBit(oldp+353,(vlSelf->simple_system__DOT__core_top0__DOT__mem0__DOT__store_operation));
        bufp->chgIData(oldp+354,(vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs[0]),32);
        bufp->chgIData(oldp+355,(vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs[1]),32);
        bufp->chgIData(oldp+356,(vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs[2]),32);
        bufp->chgIData(oldp+357,(vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs[3]),32);
        bufp->chgIData(oldp+358,(vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs[4]),32);
        bufp->chgIData(oldp+359,(vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs[5]),32);
        bufp->chgIData(oldp+360,(vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs[6]),32);
        bufp->chgIData(oldp+361,(vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs[7]),32);
        bufp->chgIData(oldp+362,(vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs[8]),32);
        bufp->chgIData(oldp+363,(vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs[9]),32);
        bufp->chgIData(oldp+364,(vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs[10]),32);
        bufp->chgIData(oldp+365,(vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs[11]),32);
        bufp->chgIData(oldp+366,(vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs[12]),32);
        bufp->chgIData(oldp+367,(vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs[13]),32);
        bufp->chgIData(oldp+368,(vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs[14]),32);
        bufp->chgIData(oldp+369,(vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs[15]),32);
        bufp->chgIData(oldp+370,(vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs[16]),32);
        bufp->chgIData(oldp+371,(vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs[17]),32);
        bufp->chgIData(oldp+372,(vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs[18]),32);
        bufp->chgIData(oldp+373,(vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs[19]),32);
        bufp->chgIData(oldp+374,(vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs[20]),32);
        bufp->chgIData(oldp+375,(vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs[21]),32);
        bufp->chgIData(oldp+376,(vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs[22]),32);
        bufp->chgIData(oldp+377,(vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs[23]),32);
        bufp->chgIData(oldp+378,(vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs[24]),32);
        bufp->chgIData(oldp+379,(vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs[25]),32);
        bufp->chgIData(oldp+380,(vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs[26]),32);
        bufp->chgIData(oldp+381,(vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs[27]),32);
        bufp->chgIData(oldp+382,(vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs[28]),32);
        bufp->chgIData(oldp+383,(vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs[29]),32);
        bufp->chgIData(oldp+384,(vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs[30]),32);
        bufp->chgIData(oldp+385,(vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs[31]),32);
        bufp->chgIData(oldp+386,(vlSelf->simple_system__DOT____Vcellinp__u_bus__host_addr_i[0]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
        bufp->chgBit(oldp+387,(((IData)(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r) 
                                & ((IData)(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r) 
                                   | ((IData)(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r) 
                                      | ((IData)(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__bht_predict_taken_w) 
                                         | (IData)(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r)))))));
        bufp->chgBit(oldp+388,(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__bht_predict_taken_w));
        bufp->chgBit(oldp+389,(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r));
        bufp->chgBit(oldp+390,(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r));
        bufp->chgBit(oldp+391,(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r));
        bufp->chgBit(oldp+392,(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r));
        bufp->chgIData(oldp+393,(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r),32);
        bufp->chgCData(oldp+394,(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_rd_entry_r),6);
        bufp->chgBit(oldp+395,(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__ras_call_matched_w));
        bufp->chgBit(oldp+396,(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__ras_ret_matched_w));
    }
    bufp->chgBit(oldp+397,(vlSelf->ck_i));
    bufp->chgBit(oldp+398,(vlSelf->rs_n_i));
    bufp->chgBit(oldp+399,(vlSelf->jtag_TCK));
    bufp->chgBit(oldp+400,(vlSelf->jtag_TMS));
    bufp->chgBit(oldp+401,(vlSelf->jtag_TDI));
    bufp->chgBit(oldp+402,(vlSelf->jtag_TDO));
    bufp->chgIData(oldp+403,(((IData)(vlSelf->simple_system__DOT__rom_ce)
                               ? vlSelf->simple_system__DOT__data_ram0__DOT__mem
                              [(0xfffffU & (vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o 
                                            >> 2U))]
                               : 0x13U)),32);
    bufp->chgBit(oldp+404,(vlSelf->simple_system__DOT__u_timer__DOT__interrupt_q));
    bufp->chgIData(oldp+405,(vlSelf->simple_system__DOT__device_rdata[0]),32);
    bufp->chgIData(oldp+406,(vlSelf->simple_system__DOT__device_rdata[1]),32);
    bufp->chgIData(oldp+407,(vlSelf->simple_system__DOT__device_rdata[2]),32);
    bufp->chgIData(oldp+408,(((IData)(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__ras_ret_matched_w)
                               ? vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__ras_list_r
                              [vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__ras_speculative_cur_index_r]
                               : (((IData)(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r) 
                                   & ((IData)(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__bht_predict_taken_w) 
                                      | ((IData)(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r) 
                                         | (IData)(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r))))
                                   ? vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r
                                   : ((IData)(4U) + vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o)))),32);
    bufp->chgIData(oldp+409,(vlSelf->simple_system__DOT__core_top0__DOT__id_rs1_data_o),32);
    bufp->chgIData(oldp+410,(vlSelf->simple_system__DOT__core_top0__DOT__id_rs2_data_o),32);
    bufp->chgIData(oldp+411,(vlSelf->simple_system__DOT__core_top0__DOT__mem_rd_wdata_o),32);
    bufp->chgIData(oldp+412,(((IData)(vlSelf->rs_n_i)
                               ? ((0U == (0x1fU & (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                                   >> 0xfU)))
                                   ? 0U : ((((IData)(vlSelf->simple_system__DOT__core_top0__DOT__wb_rd_addr_i) 
                                             == (0x1fU 
                                                 & (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                                    >> 0xfU))) 
                                            & ((IData)(vlSelf->simple_system__DOT__core_top0__DOT__id_rs1_re_o) 
                                               & (IData)(vlSelf->simple_system__DOT__core_top0__DOT__wb_rd_we_i)))
                                            ? vlSelf->simple_system__DOT__core_top0__DOT__wb_rd_wdata_i
                                            : ((IData)(vlSelf->simple_system__DOT__core_top0__DOT__id_rs1_re_o)
                                                ? vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs
                                               [(0x1fU 
                                                 & (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                                    >> 0xfU))]
                                                : 0U)))
                               : 0U)),32);
    bufp->chgIData(oldp+413,(((IData)(vlSelf->rs_n_i)
                               ? ((0U == (0x1fU & (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                                   >> 0x14U)))
                                   ? 0U : ((((IData)(vlSelf->simple_system__DOT__core_top0__DOT__wb_rd_addr_i) 
                                             == (0x1fU 
                                                 & (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                                    >> 0x14U))) 
                                            & ((IData)(vlSelf->simple_system__DOT__core_top0__DOT__id_rs2_re_o) 
                                               & (IData)(vlSelf->simple_system__DOT__core_top0__DOT__wb_rd_we_i)))
                                            ? vlSelf->simple_system__DOT__core_top0__DOT__wb_rd_wdata_i
                                            : ((IData)(vlSelf->simple_system__DOT__core_top0__DOT__id_rs2_re_o)
                                                ? vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs
                                               [(0x1fU 
                                                 & (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                                    >> 0x14U))]
                                                : 0U)))
                               : 0U)),32);
    bufp->chgCData(oldp+414,(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_write_entry_r),6);
    bufp->chgBit(oldp+415,(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_hit_r));
    bufp->chgBit(oldp+416,(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_alloc_req));
    bufp->chgCData(oldp+417,(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__ras_speculative_next_index_r),3);
    bufp->chgIData(oldp+418,(((IData)(vlSelf->rs_n_i)
                               ? ((0x13U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))
                                   ? vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__rs1_add_imm_w
                                   : ((0x1cU == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))
                                       ? (vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i 
                                          + vlSelf->simple_system__DOT__core_top0__DOT__ex_rs2_data_i)
                                       : ((0x1dU == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))
                                           ? (vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i 
                                              - vlSelf->simple_system__DOT__core_top0__DOT__ex_rs2_data_i)
                                           : 0U))) : 0U)),32);
    bufp->chgIData(oldp+419,(((IData)(vlSelf->rs_n_i)
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
                                               ? ((vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i 
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
    bufp->chgIData(oldp+420,(((IData)(vlSelf->rs_n_i)
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
    bufp->chgIData(oldp+421,((vlSelf->simple_system__DOT__device_req
                              [0U] ? (vlSelf->simple_system__DOT__device_we
                                      [0U] ? 0U : vlSelf->simple_system__DOT__data_ram0__DOT__mem
                                      [(0xfffffU & 
                                        (vlSelf->simple_system__DOT__device_addr
                                         [0U] >> 2U))])
                               : 0U)),32);
    bufp->chgBit(oldp+422,(((IData)(vlSelf->rs_n_i) 
                            & vlSelf->simple_system__DOT__device_req
                            [2U])));
    bufp->chgIData(oldp+423,((vlSelf->simple_system__DOT__device_req
                              [2U] ? vlSelf->simple_system__DOT__u_timer__DOT__rdata_d
                               : 0U)),32);
    bufp->chgBit(oldp+424,(((~ ((IData)(vlSelf->simple_system__DOT__u_timer__DOT__mtimecmp_we) 
                                | (IData)(vlSelf->simple_system__DOT__u_timer__DOT__mtimecmph_we))) 
                            & ((vlSelf->simple_system__DOT__u_timer__DOT__mtime_q 
                                >= vlSelf->simple_system__DOT__u_timer__DOT__mtimecmp_q) 
                               | (IData)(vlSelf->simple_system__DOT__u_timer__DOT__interrupt_q)))));
}

void Vsimple_system___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_system___024root__trace_cleanup\n"); );
    // Init
    Vsimple_system___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsimple_system___024root*>(voidSelf);
    Vsimple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[6U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[7U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[8U] = 0U;
}
