// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimple_system.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vsimple_system__Syms.h"
#include "Vsimple_system___024root.h"

VL_ATTR_COLD void Vsimple_system___024root___eval_static__TOP(Vsimple_system___024root* vlSelf);

VL_ATTR_COLD void Vsimple_system___024root___eval_static(Vsimple_system___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_system___024root___eval_static\n"); );
    // Body
    Vsimple_system___024root___eval_static__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[8U] = 1U;
    vlSelf->__Vm_traceActivity[7U] = 1U;
    vlSelf->__Vm_traceActivity[6U] = 1U;
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vsimple_system___024root___eval_static__TOP(Vsimple_system___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_system___024root___eval_static__TOP\n"); );
    // Body
    vlSelf->simple_system__DOT__console0__DOT__sim_finish = 0U;
}

VL_ATTR_COLD void Vsimple_system___024root___eval_initial__TOP(Vsimple_system___024root* vlSelf);

VL_ATTR_COLD void Vsimple_system___024root___eval_initial(Vsimple_system___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_system___024root___eval_initial\n"); );
    // Body
    Vsimple_system___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[8U] = 1U;
    vlSelf->__Vm_traceActivity[7U] = 1U;
    vlSelf->__Vm_traceActivity[6U] = 1U;
    vlSelf->__Vm_traceActivity[5U] = 1U;
    vlSelf->__Vm_traceActivity[4U] = 1U;
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = vlSelf->ck_i;
    vlSelf->__Vtrigprevexpr___TOP__n_rst_i__0 = vlSelf->rs_n_i;
}

VL_ATTR_COLD void Vsimple_system___024root___eval_initial__TOP(Vsimple_system___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_system___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->simple_system__DOT__cfg_device_addr_mask[0U] = 0xfff00000U;
    vlSelf->simple_system__DOT__cfg_device_addr_mask[1U] = 0xfff00000U;
    vlSelf->simple_system__DOT__cfg_device_addr_mask[2U] = 0xfff00000U;
    vlSelf->simple_system__DOT__cfg_device_addr_base[0U] = 0x100000U;
    vlSelf->simple_system__DOT__cfg_device_addr_base[1U] = 0x200000U;
    vlSelf->simple_system__DOT__cfg_device_addr_base[2U] = 0x300000U;
    vlSelf->simple_system__DOT__device_rdata[1U] = 0U;
    vlSelf->simple_system__DOT__console0__DOT__log_fd 
        = VL_FOPEN_NN(std::string{"./log/console.log"}
                      , std::string{"w"});
    ;
}

VL_ATTR_COLD void Vsimple_system___024root___eval_final__TOP(Vsimple_system___024root* vlSelf);

VL_ATTR_COLD void Vsimple_system___024root___eval_final(Vsimple_system___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_system___024root___eval_final\n"); );
    // Body
    Vsimple_system___024root___eval_final__TOP(vlSelf);
}

VL_ATTR_COLD void Vsimple_system___024root___eval_final__TOP(Vsimple_system___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_system___024root___eval_final__TOP\n"); );
    // Body
    VL_FCLOSE_I(vlSelf->simple_system__DOT__console0__DOT__log_fd); }

VL_ATTR_COLD void Vsimple_system___024root___eval_triggers__stl(Vsimple_system___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimple_system___024root___dump_triggers__stl(Vsimple_system___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vsimple_system___024root___eval_stl(Vsimple_system___024root* vlSelf);

VL_ATTR_COLD void Vsimple_system___024root___eval_settle(Vsimple_system___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_system___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vsimple_system___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vsimple_system___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/luansh/bench/Cookabarra/rtl/tb/simple_system.v", 25, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vsimple_system___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimple_system___024root___dump_triggers__stl(Vsimple_system___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_system___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<CData/*3:0*/, 256> Vsimple_system__ConstPool__TABLE_hdc1ec586_0;

VL_ATTR_COLD void Vsimple_system___024root___stl_sequent__TOP__0(Vsimple_system___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_system___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ simple_system__DOT__u_bus__DOT____Vlvbound_hbc2eda3a__0;
    simple_system__DOT__u_bus__DOT____Vlvbound_hbc2eda3a__0 = 0;
    CData/*0:0*/ simple_system__DOT__core_top0__DOT__mem0__DOT____VdfgTmp_h03f492d6__0;
    simple_system__DOT__core_top0__DOT__mem0__DOT____VdfgTmp_h03f492d6__0 = 0;
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelf->simple_system__DOT__core_top0__DOT__ctl_set_cause_o 
        = (IData)((4U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ctrl0__DOT__curr_state)));
    vlSelf->simple_system__DOT__core_top0__DOT__ctl_mstatus_ie_set_o 
        = (IData)((8U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ctrl0__DOT__curr_state)));
    vlSelf->simple_system__DOT__core_top0__DOT__ctl_set_epc_o 
        = (IData)((4U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ctrl0__DOT__curr_state)));
    vlSelf->simple_system__DOT__core_top0__DOT__ctl_mstatus_ie_clear_o 
        = (IData)((4U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ctrl0__DOT__curr_state)));
    if ((8U & (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ctrl0__DOT__curr_state))) {
        vlSelf->simple_system__DOT__core_top0__DOT__ctl_flush_o 
            = (1U & (IData)((0U == (7U & (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ctrl0__DOT__curr_state)))));
        vlSelf->simple_system__DOT__core_top0__DOT__ctl_new_pc_o 
            = ((4U & (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ctrl0__DOT__curr_state))
                ? 0U : ((2U & (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ctrl0__DOT__curr_state))
                         ? 0U : ((1U & (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ctrl0__DOT__curr_state))
                                  ? 0U : vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mepc)));
    } else {
        vlSelf->simple_system__DOT__core_top0__DOT__ctl_flush_o 
            = (1U & (IData)((4U == (7U & (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ctrl0__DOT__curr_state)))));
        vlSelf->simple_system__DOT__core_top0__DOT__ctl_new_pc_o 
            = ((4U & (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ctrl0__DOT__curr_state))
                ? ((2U & (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ctrl0__DOT__curr_state))
                    ? 0U : ((1U & (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ctrl0__DOT__curr_state))
                             ? 0U : ((IData)(vlSelf->simple_system__DOT__core_top0__DOT__ctl_ie_type_o)
                                      ? ((1U & vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mtvec)
                                          ? ((0xfffffffcU 
                                              & vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mtvec) 
                                             + ((IData)(vlSelf->simple_system__DOT__core_top0__DOT__ctl_trap_casue_o) 
                                                << 2U))
                                          : (0xfffffffcU 
                                             & vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mtvec))
                                      : (0xfffffffcU 
                                         & vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mtvec))))
                : ((2U & (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ctrl0__DOT__curr_state))
                    ? 0U : ((1U & (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ctrl0__DOT__curr_state))
                             ? 0x80U : 0U)));
    }
    if ((1U & (~ (IData)(vlSelf->rs_n_i)))) {
        vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_waddr_o = 0U;
        vlSelf->simple_system__DOT__core_top0__DOT__mem_excepttype_o = 0U;
        vlSelf->simple_system__DOT____Vcellout__core_top0__ram_ce_o = 0U;
        vlSelf->simple_system__DOT____Vcellout__core_top0__ram_addr_o = 0U;
        vlSelf->simple_system__DOT__core_top0__DOT__mem_pc_o = 0U;
        vlSelf->simple_system__DOT__core_top0__DOT__mem_inst_o = 0x13U;
        vlSelf->simple_system__DOT__core_top0__DOT__mem_rd_addr_o = 0U;
        vlSelf->simple_system__DOT__core_top0__DOT__mem_rd_we_o = 0U;
        vlSelf->simple_system__DOT__core_top0__DOT__mem_csr_we_o = 0U;
        vlSelf->simple_system__DOT__core_top0__DOT__mem_csr_waddr_o = 0U;
        vlSelf->simple_system__DOT__core_top0__DOT__mem_csr_wdata_o = 0U;
        vlSelf->simple_system__DOT__core_top0__DOT__mem0__DOT__mem_we = 0U;
    }
    vlSelf->simple_system__DOT____Vcellout__core_top0__ram_addr_o 
        = vlSelf->simple_system__DOT__core_top0__DOT__mem_mem_addr_i;
    vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__bht_predict_taken_w 
        = (2U <= vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__bht_bim_list_r
           [(0x3fU & (vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o 
                      >> 2U))]);
    vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_waddr_o 
        = vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_addr_i;
    vlSelf->simple_system__DOT__core_top0__DOT__div0__DOT__div_var_w 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->simple_system__DOT__core_top0__DOT__div0__DOT__dividend_r[1U])) 
                             - (QData)((IData)(vlSelf->simple_system__DOT__core_top0__DOT__div0__DOT__divisor_r))));
    vlSelf->simple_system__DOT__core_top0__DOT__mem_pc_o 
        = vlSelf->simple_system__DOT__core_top0__DOT__mem_pc_i;
    vlSelf->simple_system__DOT__core_top0__DOT__mem_inst_o 
        = vlSelf->simple_system__DOT__core_top0__DOT__mem_inst_i;
    vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_rd_entry_r = 0U;
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_rd_entry_r = 0U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [1U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [1U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_rd_entry_r = 1U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [2U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [2U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_rd_entry_r = 2U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [3U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [3U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_rd_entry_r = 3U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [4U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [4U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_rd_entry_r = 4U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [5U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [5U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_rd_entry_r = 5U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [6U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [6U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_rd_entry_r = 6U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [7U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [7U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_rd_entry_r = 7U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [8U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [8U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_rd_entry_r = 8U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [9U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [9U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_rd_entry_r = 9U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0xaU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0xaU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_rd_entry_r = 0xaU;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0xbU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0xbU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_rd_entry_r = 0xbU;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0xcU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0xcU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_rd_entry_r = 0xcU;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0xdU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0xdU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_rd_entry_r = 0xdU;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0xeU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0xeU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_rd_entry_r = 0xeU;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0xfU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0xfU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_rd_entry_r = 0xfU;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x10U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x10U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_rd_entry_r = 0x10U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x11U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x11U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_rd_entry_r = 0x11U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x12U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x12U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_rd_entry_r = 0x12U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x13U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x13U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_rd_entry_r = 0x13U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x14U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x14U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_rd_entry_r = 0x14U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x15U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x15U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_rd_entry_r = 0x15U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x16U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x16U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_rd_entry_r = 0x16U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x17U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x17U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_rd_entry_r = 0x17U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x18U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x18U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_rd_entry_r = 0x18U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x19U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x19U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_rd_entry_r = 0x19U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x1aU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x1aU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_rd_entry_r = 0x1aU;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x1bU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x1bU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_rd_entry_r = 0x1bU;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x1cU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x1cU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_rd_entry_r = 0x1cU;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x1dU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x1dU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_rd_entry_r = 0x1dU;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x1eU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x1eU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_rd_entry_r = 0x1eU;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x1fU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x1fU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_rd_entry_r = 0x1fU;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x20U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x20U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_rd_entry_r = 0x20U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x21U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x21U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_rd_entry_r = 0x21U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x22U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x22U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_rd_entry_r = 0x22U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x23U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x23U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_rd_entry_r = 0x23U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x24U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x24U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_rd_entry_r = 0x24U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x25U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x25U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_rd_entry_r = 0x25U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x26U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x26U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_rd_entry_r = 0x26U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x27U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x27U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_rd_entry_r = 0x27U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x28U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x28U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_rd_entry_r = 0x28U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x29U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x29U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_rd_entry_r = 0x29U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x2aU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x2aU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_rd_entry_r = 0x2aU;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x2bU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x2bU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_rd_entry_r = 0x2bU;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x2cU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x2cU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_rd_entry_r = 0x2cU;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x2dU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x2dU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_rd_entry_r = 0x2dU;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x2eU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x2eU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_rd_entry_r = 0x2eU;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x2fU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x2fU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_rd_entry_r = 0x2fU;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x30U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x30U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_rd_entry_r = 0x30U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x31U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x31U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_rd_entry_r = 0x31U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x32U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x32U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_rd_entry_r = 0x32U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x33U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x33U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_rd_entry_r = 0x33U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x34U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x34U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_rd_entry_r = 0x34U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x35U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x35U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_rd_entry_r = 0x35U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x36U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x36U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_rd_entry_r = 0x36U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x37U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x37U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_rd_entry_r = 0x37U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x38U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x38U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_rd_entry_r = 0x38U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x39U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x39U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_rd_entry_r = 0x39U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x3aU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x3aU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_rd_entry_r = 0x3aU;
    }
    vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r 
        = ((IData)(4U) + vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o);
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_list_r
            [0U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [1U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [1U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_list_r
            [1U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [2U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [2U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_list_r
            [2U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [3U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [3U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_list_r
            [3U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [4U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [4U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_list_r
            [4U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [5U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [5U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_list_r
            [5U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [6U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [6U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_list_r
            [6U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [7U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [7U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_list_r
            [7U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [8U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [8U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_list_r
            [8U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [9U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [9U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_list_r
            [9U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0xaU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0xaU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_list_r
            [0xaU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0xbU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0xbU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_list_r
            [0xbU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0xcU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0xcU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_list_r
            [0xcU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0xdU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0xdU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_list_r
            [0xdU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0xeU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0xeU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_list_r
            [0xeU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0xfU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0xfU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_list_r
            [0xfU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x10U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x10U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_list_r
            [0x10U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x11U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x11U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_list_r
            [0x11U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x12U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x12U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_list_r
            [0x12U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x13U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x13U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_list_r
            [0x13U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x14U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x14U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_list_r
            [0x14U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x15U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x15U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_list_r
            [0x15U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x16U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x16U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_list_r
            [0x16U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x17U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x17U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_list_r
            [0x17U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x18U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x18U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_list_r
            [0x18U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x19U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x19U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_list_r
            [0x19U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x1aU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x1aU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_list_r
            [0x1aU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x1bU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x1bU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_list_r
            [0x1bU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x1cU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x1cU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_list_r
            [0x1cU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x1dU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x1dU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_list_r
            [0x1dU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x1eU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x1eU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_list_r
            [0x1eU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x1fU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x1fU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_list_r
            [0x1fU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x20U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x20U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_list_r
            [0x20U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x21U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x21U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_list_r
            [0x21U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x22U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x22U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_list_r
            [0x22U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x23U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x23U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_list_r
            [0x23U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x24U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x24U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_list_r
            [0x24U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x25U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x25U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_list_r
            [0x25U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x26U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x26U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_list_r
            [0x26U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x27U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x27U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_list_r
            [0x27U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x28U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x28U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_list_r
            [0x28U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x29U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x29U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_list_r
            [0x29U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x2aU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x2aU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_list_r
            [0x2aU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x2bU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x2bU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_list_r
            [0x2bU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x2cU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x2cU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_list_r
            [0x2cU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x2dU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x2dU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_list_r
            [0x2dU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x2eU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x2eU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_list_r
            [0x2eU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x2fU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x2fU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_list_r
            [0x2fU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x30U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x30U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_list_r
            [0x30U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x31U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x31U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_list_r
            [0x31U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x32U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x32U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_list_r
            [0x32U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x33U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x33U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_list_r
            [0x33U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x34U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x34U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_list_r
            [0x34U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x35U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x35U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_list_r
            [0x35U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x36U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x36U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_list_r
            [0x36U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x37U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x37U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_list_r
            [0x37U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x38U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x38U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_list_r
            [0x38U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x39U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x39U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_list_r
            [0x39U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x3aU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x3aU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_list_r
            [0x3aU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x3bU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x3bU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_rd_entry_r = 0x3bU;
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_list_r
            [0x3bU];
    }
    vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r = 0U;
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_list_r
            [0U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [1U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [1U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_list_r
            [1U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [2U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [2U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_list_r
            [2U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [3U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [3U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_list_r
            [3U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [4U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [4U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_list_r
            [4U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [5U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [5U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_list_r
            [5U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [6U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [6U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_list_r
            [6U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [7U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [7U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_list_r
            [7U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [8U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [8U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_list_r
            [8U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [9U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [9U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_list_r
            [9U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0xaU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0xaU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_list_r
            [0xaU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0xbU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0xbU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_list_r
            [0xbU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0xcU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0xcU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_list_r
            [0xcU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0xdU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0xdU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_list_r
            [0xdU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0xeU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0xeU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_list_r
            [0xeU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0xfU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0xfU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_list_r
            [0xfU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x10U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x10U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_list_r
            [0x10U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x11U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x11U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_list_r
            [0x11U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x12U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x12U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_list_r
            [0x12U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x13U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x13U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_list_r
            [0x13U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x14U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x14U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_list_r
            [0x14U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x15U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x15U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_list_r
            [0x15U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x16U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x16U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_list_r
            [0x16U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x17U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x17U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_list_r
            [0x17U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x18U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x18U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_list_r
            [0x18U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x19U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x19U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_list_r
            [0x19U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x1aU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x1aU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_list_r
            [0x1aU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x1bU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x1bU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_list_r
            [0x1bU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x1cU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x1cU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_list_r
            [0x1cU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x1dU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x1dU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_list_r
            [0x1dU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x1eU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x1eU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_list_r
            [0x1eU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x1fU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x1fU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_list_r
            [0x1fU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x20U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x20U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_list_r
            [0x20U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x21U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x21U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_list_r
            [0x21U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x22U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x22U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_list_r
            [0x22U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x23U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x23U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_list_r
            [0x23U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x24U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x24U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_list_r
            [0x24U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x25U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x25U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_list_r
            [0x25U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x26U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x26U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_list_r
            [0x26U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x27U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x27U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_list_r
            [0x27U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x28U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x28U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_list_r
            [0x28U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x29U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x29U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_list_r
            [0x29U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x2aU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x2aU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_list_r
            [0x2aU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x2bU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x2bU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_list_r
            [0x2bU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x2cU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x2cU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_list_r
            [0x2cU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x2dU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x2dU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_list_r
            [0x2dU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x2eU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x2eU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_list_r
            [0x2eU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x2fU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x2fU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_list_r
            [0x2fU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x30U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x30U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_list_r
            [0x30U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x31U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x31U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_list_r
            [0x31U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x32U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x32U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_list_r
            [0x32U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x33U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x33U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_list_r
            [0x33U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x34U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x34U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_list_r
            [0x34U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x35U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x35U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_list_r
            [0x35U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x36U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x36U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_list_r
            [0x36U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x37U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x37U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_list_r
            [0x37U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x38U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x38U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_list_r
            [0x38U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x39U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x39U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_list_r
            [0x39U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x3aU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x3aU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_list_r
            [0x3aU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x3bU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x3bU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_list_r
            [0x3bU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x3cU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x3cU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_rd_entry_r = 0x3cU;
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_list_r
            [0x3cU];
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_list_r
            [0x3cU];
    }
    vlSelf->simple_system__DOT__core_top0__DOT__ctrl0__DOT__eip 
        = ((IData)(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mie_external) 
           & (IData)(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mip_external));
    vlSelf->simple_system__DOT__core_top0__DOT__ctrl0__DOT__sip 
        = ((IData)(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mie_sw) 
           & (IData)(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mip_sw));
    vlSelf->simple_system__DOT__core_top0__DOT__ctrl0__DOT__tip 
        = ((IData)(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mie_timer) 
           & (IData)(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mip_timer));
    vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r = 0U;
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_list_r
            [0U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [1U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [1U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_list_r
            [1U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [2U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [2U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_list_r
            [2U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [3U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [3U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_list_r
            [3U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [4U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [4U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_list_r
            [4U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [5U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [5U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_list_r
            [5U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [6U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [6U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_list_r
            [6U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [7U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [7U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_list_r
            [7U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [8U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [8U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_list_r
            [8U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [9U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [9U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_list_r
            [9U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0xaU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0xaU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_list_r
            [0xaU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0xbU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0xbU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_list_r
            [0xbU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0xcU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0xcU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_list_r
            [0xcU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0xdU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0xdU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_list_r
            [0xdU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0xeU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0xeU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_list_r
            [0xeU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0xfU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0xfU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_list_r
            [0xfU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x10U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x10U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_list_r
            [0x10U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x11U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x11U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_list_r
            [0x11U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x12U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x12U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_list_r
            [0x12U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x13U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x13U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_list_r
            [0x13U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x14U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x14U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_list_r
            [0x14U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x15U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x15U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_list_r
            [0x15U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x16U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x16U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_list_r
            [0x16U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x17U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x17U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_list_r
            [0x17U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x18U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x18U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_list_r
            [0x18U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x19U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x19U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_list_r
            [0x19U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x1aU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x1aU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_list_r
            [0x1aU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x1bU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x1bU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_list_r
            [0x1bU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x1cU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x1cU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_list_r
            [0x1cU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x1dU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x1dU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_list_r
            [0x1dU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x1eU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x1eU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_list_r
            [0x1eU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x1fU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x1fU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_list_r
            [0x1fU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x20U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x20U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_list_r
            [0x20U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x21U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x21U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_list_r
            [0x21U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x22U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x22U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_list_r
            [0x22U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x23U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x23U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_list_r
            [0x23U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x24U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x24U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_list_r
            [0x24U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x25U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x25U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_list_r
            [0x25U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x26U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x26U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_list_r
            [0x26U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x27U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x27U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_list_r
            [0x27U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x28U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x28U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_list_r
            [0x28U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x29U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x29U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_list_r
            [0x29U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x2aU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x2aU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_list_r
            [0x2aU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x2bU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x2bU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_list_r
            [0x2bU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x2cU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x2cU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_list_r
            [0x2cU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x2dU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x2dU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_list_r
            [0x2dU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x2eU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x2eU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_list_r
            [0x2eU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x2fU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x2fU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_list_r
            [0x2fU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x30U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x30U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_list_r
            [0x30U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x31U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x31U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_list_r
            [0x31U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x32U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x32U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_list_r
            [0x32U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x33U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x33U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_list_r
            [0x33U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x34U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x34U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_list_r
            [0x34U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x35U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x35U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_list_r
            [0x35U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x36U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x36U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_list_r
            [0x36U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x37U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x37U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_list_r
            [0x37U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x38U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x38U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_list_r
            [0x38U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x39U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x39U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_list_r
            [0x39U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x3aU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x3aU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_list_r
            [0x3aU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x3bU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x3bU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_list_r
            [0x3bU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x3cU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x3cU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_list_r
            [0x3cU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x3dU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x3dU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_rd_entry_r = 0x3dU;
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_list_r
            [0x3dU];
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_list_r
            [0x3dU];
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_list_r
            [0x3dU];
    }
    vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r = 0U;
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_list_r
            [0U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [1U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [1U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_list_r
            [1U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [2U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [2U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_list_r
            [2U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [3U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [3U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_list_r
            [3U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [4U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [4U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_list_r
            [4U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [5U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [5U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_list_r
            [5U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [6U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [6U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_list_r
            [6U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [7U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [7U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_list_r
            [7U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [8U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [8U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_list_r
            [8U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [9U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [9U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_list_r
            [9U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0xaU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0xaU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_list_r
            [0xaU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0xbU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0xbU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_list_r
            [0xbU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0xcU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0xcU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_list_r
            [0xcU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0xdU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0xdU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_list_r
            [0xdU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0xeU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0xeU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_list_r
            [0xeU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0xfU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0xfU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_list_r
            [0xfU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x10U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x10U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_list_r
            [0x10U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x11U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x11U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_list_r
            [0x11U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x12U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x12U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_list_r
            [0x12U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x13U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x13U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_list_r
            [0x13U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x14U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x14U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_list_r
            [0x14U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x15U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x15U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_list_r
            [0x15U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x16U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x16U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_list_r
            [0x16U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x17U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x17U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_list_r
            [0x17U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x18U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x18U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_list_r
            [0x18U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x19U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x19U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_list_r
            [0x19U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x1aU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x1aU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_list_r
            [0x1aU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x1bU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x1bU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_list_r
            [0x1bU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x1cU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x1cU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_list_r
            [0x1cU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x1dU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x1dU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_list_r
            [0x1dU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x1eU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x1eU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_list_r
            [0x1eU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x1fU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x1fU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_list_r
            [0x1fU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x20U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x20U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_list_r
            [0x20U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x21U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x21U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_list_r
            [0x21U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x22U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x22U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_list_r
            [0x22U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x23U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x23U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_list_r
            [0x23U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x24U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x24U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_list_r
            [0x24U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x25U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x25U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_list_r
            [0x25U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x26U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x26U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_list_r
            [0x26U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x27U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x27U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_list_r
            [0x27U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x28U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x28U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_list_r
            [0x28U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x29U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x29U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_list_r
            [0x29U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x2aU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x2aU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_list_r
            [0x2aU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x2bU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x2bU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_list_r
            [0x2bU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x2cU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x2cU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_list_r
            [0x2cU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x2dU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x2dU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_list_r
            [0x2dU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x2eU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x2eU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_list_r
            [0x2eU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x2fU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x2fU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_list_r
            [0x2fU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x30U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x30U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_list_r
            [0x30U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x31U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x31U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_list_r
            [0x31U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x32U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x32U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_list_r
            [0x32U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x33U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x33U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_list_r
            [0x33U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x34U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x34U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_list_r
            [0x34U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x35U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x35U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_list_r
            [0x35U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x36U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x36U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_list_r
            [0x36U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x37U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x37U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_list_r
            [0x37U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x38U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x38U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_list_r
            [0x38U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x39U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x39U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_list_r
            [0x39U];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x3aU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x3aU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_list_r
            [0x3aU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x3bU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x3bU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_list_r
            [0x3bU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x3cU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x3cU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_list_r
            [0x3cU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x3dU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x3dU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_list_r
            [0x3dU];
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x3eU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x3eU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_rd_entry_r = 0x3eU;
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_list_r
            [0x3eU];
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_list_r
            [0x3eU];
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_list_r
            [0x3eU];
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_list_r
            [0x3eU];
    }
    vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r = 0U;
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r = 1U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [1U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [1U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r = 1U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [2U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [2U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r = 1U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [3U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [3U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r = 1U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [4U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [4U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r = 1U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [5U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [5U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r = 1U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [6U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [6U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r = 1U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [7U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [7U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r = 1U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [8U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [8U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r = 1U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [9U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [9U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r = 1U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0xaU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0xaU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r = 1U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0xbU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0xbU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r = 1U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0xcU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0xcU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r = 1U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0xdU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0xdU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r = 1U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0xeU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0xeU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r = 1U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0xfU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0xfU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r = 1U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x10U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x10U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r = 1U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x11U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x11U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r = 1U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x12U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x12U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r = 1U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x13U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x13U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r = 1U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x14U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x14U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r = 1U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x15U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x15U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r = 1U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x16U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x16U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r = 1U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x17U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x17U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r = 1U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x18U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x18U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r = 1U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x19U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x19U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r = 1U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x1aU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x1aU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r = 1U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x1bU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x1bU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r = 1U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x1cU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x1cU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r = 1U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x1dU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x1dU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r = 1U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x1eU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x1eU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r = 1U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x1fU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x1fU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r = 1U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x20U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x20U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r = 1U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x21U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x21U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r = 1U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x22U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x22U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r = 1U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x23U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x23U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r = 1U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x24U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x24U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r = 1U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x25U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x25U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r = 1U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x26U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x26U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r = 1U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x27U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x27U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r = 1U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x28U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x28U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r = 1U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x29U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x29U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r = 1U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x2aU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x2aU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r = 1U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x2bU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x2bU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r = 1U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x2cU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x2cU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r = 1U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x2dU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x2dU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r = 1U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x2eU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x2eU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r = 1U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x2fU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x2fU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r = 1U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x30U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x30U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r = 1U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x31U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x31U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r = 1U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x32U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x32U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r = 1U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x33U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x33U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r = 1U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x34U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x34U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r = 1U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x35U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x35U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r = 1U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x36U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x36U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r = 1U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x37U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x37U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r = 1U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x38U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x38U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r = 1U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x39U] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x39U])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r = 1U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x3aU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x3aU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r = 1U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x3bU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x3bU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r = 1U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x3cU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x3cU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r = 1U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x3dU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x3dU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r = 1U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x3eU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x3eU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r = 1U;
    }
    if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
          [0x3fU] == vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o) 
         & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
         [0x3fU])) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_rd_entry_r = 0x3fU;
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_list_r
            [0x3fU];
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_list_r
            [0x3fU];
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_list_r
            [0x3fU];
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_list_r
            [0x3fU];
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r = 1U;
    }
    vlSelf->simple_system__DOT__core_top0__DOT__mem_rd_we_o 
        = vlSelf->simple_system__DOT__core_top0__DOT__mem_rd_we_i;
    vlSelf->simple_system__DOT__core_top0__DOT__mem_rd_addr_o 
        = vlSelf->simple_system__DOT__core_top0__DOT__mem_rd_addr_i;
    vlSelf->simple_system__DOT__core_top0__DOT__mem_rd_wdata_o 
        = vlSelf->simple_system__DOT__core_top0__DOT__mem_rd_wd_i;
    vlSelf->simple_system__DOT__device_rvalid[1U] = vlSelf->simple_system__DOT____Vcellout__console0__rvalid_o;
    vlSelf->simple_system__DOT__core_top0__DOT__id_rs1_raddr_o 
        = (0x1fU & (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                    >> 0xfU));
    vlSelf->simple_system__DOT__core_top0__DOT__id_rs2_raddr_o 
        = (0x1fU & (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                    >> 0x14U));
    vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__mul_result_w 
        = ((QData)((IData)((((0x26U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i)) 
                             | (0x28U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i)))
                             ? vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i
                             : ((0x29U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))
                                 ? ((vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i 
                                     >> 0x1fU) ? ((IData)(1U) 
                                                  + 
                                                  (~ vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i))
                                     : vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i)
                                 : ((0x27U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))
                                     ? ((vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i 
                                         >> 0x1fU) ? 
                                        ((IData)(1U) 
                                         + (~ vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i))
                                         : vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i)
                                     : vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i))))) 
           * (QData)((IData)((((0x26U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i)) 
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
                                       : vlSelf->simple_system__DOT__core_top0__DOT__ex_rs2_data_i))))));
    vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__rs1_add_imm_w 
        = (vlSelf->simple_system__DOT__core_top0__DOT__ex_imm_i 
           + vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i);
    vlSelf->simple_system__DOT__core_top0__DOT__mem_csr_we_o 
        = vlSelf->simple_system__DOT__core_top0__DOT__mem_csr_we_i;
    vlSelf->simple_system__DOT__core_top0__DOT__mem_csr_waddr_o 
        = vlSelf->simple_system__DOT__core_top0__DOT__mem_csr_waddr_i;
    vlSelf->simple_system__DOT__core_top0__DOT__mem_csr_wdata_o 
        = vlSelf->simple_system__DOT__core_top0__DOT__mem_csr_wdata_i;
    vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__pre_ins_is_load 
        = ((0xbU == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i)) 
           | ((0xcU == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i)) 
              | ((0xdU == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i)) 
                 | ((0xeU == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i)) 
                    | (0xfU == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))))));
    vlSelf->simple_system__DOT__core_top0__DOT__ex_rd_addr_o 
        = vlSelf->simple_system__DOT__core_top0__DOT__ex_rd_addr_i;
    vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__read_csr_enable 
        = ((0x2eU == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i)) 
           | ((0x2fU == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i)) 
              | ((0x30U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i)) 
                 | ((0x31U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i)) 
                    | ((0x32U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i)) 
                       | (0x33U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i)))))));
    vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT____VdfgExtracted_h8d65eadd__0 
        = ((1U == (0x1fU & (vlSelf->simple_system__DOT__core_top0__DOT__ex_inst_i 
                            >> 0xfU))) | (5U == (0x1fU 
                                                 & (vlSelf->simple_system__DOT__core_top0__DOT__ex_inst_i 
                                                    >> 0xfU))));
    vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__rs1_eq_rs2_w 
        = (vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i 
           == vlSelf->simple_system__DOT__core_top0__DOT__ex_rs2_data_i);
    vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__pc_add_imm_w 
        = (vlSelf->simple_system__DOT__core_top0__DOT__ex_imm_i 
           + vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i);
    vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__rs1_ge_rs2_signed_w 
        = VL_GTES_III(32, vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i, vlSelf->simple_system__DOT__core_top0__DOT__ex_rs2_data_i);
    vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__rs1_ge_rs2_unsigned_w 
        = (vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i 
           >= vlSelf->simple_system__DOT__core_top0__DOT__ex_rs2_data_i);
    vlSelf->simple_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask[0U] 
        = vlSelf->simple_system__DOT__cfg_device_addr_mask
        [0U];
    vlSelf->simple_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask[1U] 
        = vlSelf->simple_system__DOT__cfg_device_addr_mask
        [1U];
    vlSelf->simple_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask[2U] 
        = vlSelf->simple_system__DOT__cfg_device_addr_mask
        [2U];
    vlSelf->simple_system__DOT____Vcellinp__u_bus__cfg_device_addr_base[0U] 
        = vlSelf->simple_system__DOT__cfg_device_addr_base
        [0U];
    vlSelf->simple_system__DOT____Vcellinp__u_bus__cfg_device_addr_base[1U] 
        = vlSelf->simple_system__DOT__cfg_device_addr_base
        [1U];
    vlSelf->simple_system__DOT____Vcellinp__u_bus__cfg_device_addr_base[2U] 
        = vlSelf->simple_system__DOT__cfg_device_addr_base
        [2U];
    vlSelf->simple_system__DOT__host_addr[0U] = vlSelf->simple_system__DOT__core_top0__DOT__mem_mem_addr_i;
    vlSelf->simple_system__DOT__core_top0__DOT__mem0__DOT__load_operation 
        = ((0xdU == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem_uop_i)) 
           | ((0xeU == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem_uop_i)) 
              | (0xfU == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem_uop_i))));
    vlSelf->simple_system__DOT__core_top0__DOT__mem0__DOT__store_operation 
        = ((0x11U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem_uop_i)) 
           | (0x12U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem_uop_i)));
    simple_system__DOT__core_top0__DOT__mem0__DOT____VdfgTmp_h03f492d6__0 
        = (1U & (~ (((~ vlSelf->simple_system__DOT__core_top0__DOT__mem_mem_addr_i) 
                     & ((0x11U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem_uop_i)) 
                        | ((0xdU == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem_uop_i)) 
                           | (0xeU == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem_uop_i))))) 
                    | (((0x12U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem_uop_i)) 
                        | (0xfU == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem_uop_i))) 
                       & (0U == (3U & vlSelf->simple_system__DOT__core_top0__DOT__mem_mem_addr_i))))));
    vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__ras_call_matched_w 
        = ((IData)(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r) 
           & (IData)(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r));
    vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__ras_ret_matched_w 
        = ((IData)(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r) 
           & (IData)(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r));
    if (vlSelf->rs_n_i) {
        vlSelf->simple_system__DOT__core_top0__DOT__ex_div_signed_o = 0U;
        if ((1U & (~ (((((0xbU == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i)) 
                         | (0xcU == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))) 
                        | (0xdU == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))) 
                       | (0xeU == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))) 
                      | (0xfU == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i)))))) {
            if ((((0x10U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i)) 
                  | (0x11U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))) 
                 | (0x12U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i)))) {
                vlSelf->simple_system__DOT__core_top0__DOT__ex_mem_wdata_o 
                    = vlSelf->simple_system__DOT__core_top0__DOT__ex_rs2_data_i;
            }
        }
        vlSelf->simple_system__DOT__core_top0__DOT__ex_div_start_o = 0U;
        vlSelf->simple_system__DOT__core_top0__DOT__ex_dividend_o = 0U;
        vlSelf->simple_system__DOT__core_top0__DOT__ex_divisor_o = 0U;
        vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__stall_req_for_div = 0U;
        if ((0x2aU == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))) {
            vlSelf->simple_system__DOT__core_top0__DOT__ex_div_signed_o = 1U;
            vlSelf->simple_system__DOT__core_top0__DOT__ex_div_start_o 
                = (1U & (~ (IData)(vlSelf->simple_system__DOT__core_top0__DOT__div_ready_o)));
            vlSelf->simple_system__DOT__core_top0__DOT__ex_dividend_o 
                = vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i;
            vlSelf->simple_system__DOT__core_top0__DOT__ex_divisor_o 
                = vlSelf->simple_system__DOT__core_top0__DOT__ex_rs2_data_i;
            vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__stall_req_for_div 
                = (1U & (~ (IData)(vlSelf->simple_system__DOT__core_top0__DOT__div_ready_o)));
            if (vlSelf->simple_system__DOT__core_top0__DOT__div_ready_o) {
                vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__div_result_r 
                    = (IData)(vlSelf->simple_system__DOT__core_top0__DOT__div_result_o);
            }
        } else if ((0x2bU == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))) {
            vlSelf->simple_system__DOT__core_top0__DOT__ex_div_signed_o = 0U;
            vlSelf->simple_system__DOT__core_top0__DOT__ex_div_start_o 
                = (1U & (~ (IData)(vlSelf->simple_system__DOT__core_top0__DOT__div_ready_o)));
            vlSelf->simple_system__DOT__core_top0__DOT__ex_dividend_o 
                = vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i;
            vlSelf->simple_system__DOT__core_top0__DOT__ex_divisor_o 
                = vlSelf->simple_system__DOT__core_top0__DOT__ex_rs2_data_i;
            vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__stall_req_for_div 
                = (1U & (~ (IData)(vlSelf->simple_system__DOT__core_top0__DOT__div_ready_o)));
            if (vlSelf->simple_system__DOT__core_top0__DOT__div_ready_o) {
                vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__div_result_r 
                    = (IData)(vlSelf->simple_system__DOT__core_top0__DOT__div_result_o);
            }
        } else if ((0x2cU == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))) {
            vlSelf->simple_system__DOT__core_top0__DOT__ex_div_signed_o = 1U;
            vlSelf->simple_system__DOT__core_top0__DOT__ex_div_start_o 
                = (1U & (~ (IData)(vlSelf->simple_system__DOT__core_top0__DOT__div_ready_o)));
            vlSelf->simple_system__DOT__core_top0__DOT__ex_dividend_o 
                = vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i;
            vlSelf->simple_system__DOT__core_top0__DOT__ex_divisor_o 
                = vlSelf->simple_system__DOT__core_top0__DOT__ex_rs2_data_i;
            vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__stall_req_for_div 
                = (1U & (~ (IData)(vlSelf->simple_system__DOT__core_top0__DOT__div_ready_o)));
            if (vlSelf->simple_system__DOT__core_top0__DOT__div_ready_o) {
                vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__div_result_r 
                    = (IData)((vlSelf->simple_system__DOT__core_top0__DOT__div_result_o 
                               >> 0x20U));
            }
        } else if ((0x2dU == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))) {
            vlSelf->simple_system__DOT__core_top0__DOT__ex_div_signed_o = 0U;
            vlSelf->simple_system__DOT__core_top0__DOT__ex_div_start_o 
                = (1U & (~ (IData)(vlSelf->simple_system__DOT__core_top0__DOT__div_ready_o)));
            vlSelf->simple_system__DOT__core_top0__DOT__ex_dividend_o 
                = vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i;
            vlSelf->simple_system__DOT__core_top0__DOT__ex_divisor_o 
                = vlSelf->simple_system__DOT__core_top0__DOT__ex_rs2_data_i;
            vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__stall_req_for_div 
                = (1U & (~ (IData)(vlSelf->simple_system__DOT__core_top0__DOT__div_ready_o)));
            if (vlSelf->simple_system__DOT__core_top0__DOT__div_ready_o) {
                vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__div_result_r 
                    = (IData)((vlSelf->simple_system__DOT__core_top0__DOT__div_result_o 
                               >> 0x20U));
            }
        }
        vlSelf->simple_system__DOT____Vcellout__core_top0__ram_sel_o = 0xfU;
        if (((((((((0xbU == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem_uop_i)) 
                   | (0xcU == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem_uop_i))) 
                  | (0xdU == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem_uop_i))) 
                 | (0xeU == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem_uop_i))) 
                | (0xfU == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem_uop_i))) 
               | (0x10U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem_uop_i))) 
              | (0x11U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem_uop_i))) 
             | (0x12U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem_uop_i)))) {
            if ((0xbU == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem_uop_i))) {
                vlSelf->simple_system__DOT____Vcellout__core_top0__ram_sel_o 
                    = ((2U & vlSelf->simple_system__DOT__core_top0__DOT__mem_mem_addr_i)
                        ? ((1U & vlSelf->simple_system__DOT__core_top0__DOT__mem_mem_addr_i)
                            ? 1U : 2U) : ((1U & vlSelf->simple_system__DOT__core_top0__DOT__mem_mem_addr_i)
                                           ? 4U : 8U));
            } else if ((0xcU == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem_uop_i))) {
                vlSelf->simple_system__DOT____Vcellout__core_top0__ram_sel_o 
                    = ((2U & vlSelf->simple_system__DOT__core_top0__DOT__mem_mem_addr_i)
                        ? ((1U & vlSelf->simple_system__DOT__core_top0__DOT__mem_mem_addr_i)
                            ? 1U : 2U) : ((1U & vlSelf->simple_system__DOT__core_top0__DOT__mem_mem_addr_i)
                                           ? 4U : 8U));
            } else if ((0xdU == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem_uop_i))) {
                if ((0U == (3U & vlSelf->simple_system__DOT__core_top0__DOT__mem_mem_addr_i))) {
                    vlSelf->simple_system__DOT____Vcellout__core_top0__ram_sel_o = 0xcU;
                } else if ((2U == (3U & vlSelf->simple_system__DOT__core_top0__DOT__mem_mem_addr_i))) {
                    vlSelf->simple_system__DOT____Vcellout__core_top0__ram_sel_o = 3U;
                }
            } else if ((0xeU == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem_uop_i))) {
                if ((0U == (3U & vlSelf->simple_system__DOT__core_top0__DOT__mem_mem_addr_i))) {
                    vlSelf->simple_system__DOT____Vcellout__core_top0__ram_sel_o = 0xcU;
                } else if ((2U == (3U & vlSelf->simple_system__DOT__core_top0__DOT__mem_mem_addr_i))) {
                    vlSelf->simple_system__DOT____Vcellout__core_top0__ram_sel_o = 3U;
                }
            } else {
                vlSelf->simple_system__DOT____Vcellout__core_top0__ram_sel_o 
                    = ((0xfU == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem_uop_i))
                        ? 0xfU : ((0x10U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem_uop_i))
                                   ? ((2U & vlSelf->simple_system__DOT__core_top0__DOT__mem_mem_addr_i)
                                       ? ((1U & vlSelf->simple_system__DOT__core_top0__DOT__mem_mem_addr_i)
                                           ? 8U : 4U)
                                       : ((1U & vlSelf->simple_system__DOT__core_top0__DOT__mem_mem_addr_i)
                                           ? 2U : 1U))
                                   : ((0x11U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem_uop_i))
                                       ? ((0U == (3U 
                                                  & vlSelf->simple_system__DOT__core_top0__DOT__mem_mem_addr_i))
                                           ? 3U : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & vlSelf->simple_system__DOT__core_top0__DOT__mem_mem_addr_i))
                                                    ? 0xcU
                                                    : 0U))
                                       : 0xfU)));
            }
            if ((0xbU != (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem_uop_i))) {
                if ((0xcU != (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem_uop_i))) {
                    if ((0xdU != (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem_uop_i))) {
                        if ((0xeU != (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem_uop_i))) {
                            if ((0xfU != (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem_uop_i))) {
                                vlSelf->simple_system__DOT____Vcellout__core_top0__ram_data_o 
                                    = ((0x10U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem_uop_i))
                                        ? ((vlSelf->simple_system__DOT__core_top0__DOT__mem_mem_wdata_i 
                                            << 0x18U) 
                                           | ((0xff0000U 
                                               & (vlSelf->simple_system__DOT__core_top0__DOT__mem_mem_wdata_i 
                                                  << 0x10U)) 
                                              | ((0xff00U 
                                                  & (vlSelf->simple_system__DOT__core_top0__DOT__mem_mem_wdata_i 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & vlSelf->simple_system__DOT__core_top0__DOT__mem_mem_wdata_i))))
                                        : ((0x11U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem_uop_i))
                                            ? ((vlSelf->simple_system__DOT__core_top0__DOT__mem_mem_wdata_i 
                                                << 0x10U) 
                                               | (0xffffU 
                                                  & vlSelf->simple_system__DOT__core_top0__DOT__mem_mem_wdata_i))
                                            : vlSelf->simple_system__DOT__core_top0__DOT__mem_mem_wdata_i));
                            }
                        }
                    }
                }
            }
        }
        vlSelf->simple_system__DOT__host_be[0U] = vlSelf->simple_system__DOT____Vcellout__core_top0__ram_sel_o;
    } else {
        vlSelf->simple_system__DOT__core_top0__DOT__ex_div_signed_o = 0U;
        vlSelf->simple_system__DOT__core_top0__DOT__ex_mem_wdata_o = 0U;
        vlSelf->simple_system__DOT__core_top0__DOT__ex_div_start_o = 0U;
        vlSelf->simple_system__DOT__core_top0__DOT__ex_dividend_o = 0U;
        vlSelf->simple_system__DOT__core_top0__DOT__ex_divisor_o = 0U;
        vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__stall_req_for_div = 0U;
        vlSelf->simple_system__DOT____Vcellout__core_top0__ram_sel_o = 0U;
        vlSelf->simple_system__DOT__host_be[0U] = vlSelf->simple_system__DOT____Vcellout__core_top0__ram_sel_o;
        vlSelf->simple_system__DOT____Vcellout__core_top0__ram_data_o = 0U;
    }
    vlSelf->simple_system__DOT__host_wdata[0U] = vlSelf->simple_system__DOT____Vcellout__core_top0__ram_data_o;
    vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o = 0U;
    if (vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__read_csr_enable) {
        vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o 
            = vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_addr_i;
    }
    if (vlSelf->rs_n_i) {
        if ((((((0xbU == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i)) 
                | (0xcU == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))) 
               | (0xdU == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))) 
              | (0xeU == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))) 
             | (0xfU == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i)))) {
            vlSelf->simple_system__DOT__core_top0__DOT__ex_mem_addr_o 
                = vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__rs1_add_imm_w;
        } else if ((((0x10U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i)) 
                     | (0x11U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))) 
                    | (0x12U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i)))) {
            vlSelf->simple_system__DOT__core_top0__DOT__ex_mem_addr_o 
                = vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__rs1_add_imm_w;
        }
        vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__logic_result_r 
            = (((((((((1U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i)) 
                      | (2U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))) 
                     | (0x14U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))) 
                    | (0x15U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))) 
                   | (0x16U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))) 
                  | (0x17U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))) 
                 | (0x18U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))) 
                | (0x1eU == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i)))
                ? ((1U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))
                    ? vlSelf->simple_system__DOT__core_top0__DOT__ex_imm_i
                    : ((2U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))
                        ? vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__pc_add_imm_w
                        : ((0x14U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))
                            ? (1U & (- (IData)(VL_LTS_III(32, vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i, vlSelf->simple_system__DOT__core_top0__DOT__ex_imm_i))))
                            : ((0x15U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))
                                ? (1U & (- (IData)(
                                                   (vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i 
                                                    < vlSelf->simple_system__DOT__core_top0__DOT__ex_imm_i))))
                                : ((0x16U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))
                                    ? (vlSelf->simple_system__DOT__core_top0__DOT__ex_imm_i 
                                       & vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i)
                                    : ((0x17U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))
                                        ? (vlSelf->simple_system__DOT__core_top0__DOT__ex_imm_i 
                                           | vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i)
                                        : ((0x18U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))
                                            ? (vlSelf->simple_system__DOT__core_top0__DOT__ex_imm_i 
                                               ^ vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i)
                                            : (vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i 
                                               & vlSelf->simple_system__DOT__core_top0__DOT__ex_rs2_data_i))))))))
                : ((0x1fU == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))
                    ? (vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i 
                       | vlSelf->simple_system__DOT__core_top0__DOT__ex_rs2_data_i)
                    : ((0x20U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))
                        ? (vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i 
                           ^ vlSelf->simple_system__DOT__core_top0__DOT__ex_rs2_data_i)
                        : ((0x24U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))
                            ? (1U & (- (IData)((1U 
                                                & (~ (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__rs1_ge_rs2_signed_w))))))
                            : ((0x25U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))
                                ? (1U & (- (IData)(
                                                   (1U 
                                                    & (~ (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__rs1_ge_rs2_unsigned_w))))))
                                : 0U)))));
    } else {
        vlSelf->simple_system__DOT__core_top0__DOT__ex_mem_addr_o = 0U;
        vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__logic_result_r = 0U;
    }
    if (vlSelf->rs_n_i) {
        vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__jump_result_r = 0U;
        vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_request_o = 0U;
        vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_taken_o = 0U;
        vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_call_o = 0U;
        vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_ret_o = 0U;
        vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_jmp_o = 0U;
        vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_target_o = 0U;
        vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_redirect_o = 0U;
        vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_redirect_pc_o = 0U;
        vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_tag_o = 0U;
        if (((((((((3U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i)) 
                   | (4U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))) 
                  | (5U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))) 
                 | (6U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))) 
                | (7U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))) 
               | (8U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))) 
              | (9U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))) 
             | (0xaU == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i)))) {
            if ((3U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))) {
                vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__jump_result_r 
                    = ((IData)(4U) + vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i);
                vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_taken_o = 1U;
                vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_target_o 
                    = vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__pc_add_imm_w;
                if (((1U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_rd_addr_i)) 
                     | (5U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_rd_addr_i)))) {
                    vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_call_o = 1U;
                } else {
                    vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_jmp_o = 1U;
                }
            } else if ((4U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))) {
                vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__jump_result_r 
                    = ((IData)(4U) + vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i);
                vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_taken_o = 1U;
                vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_target_o 
                    = (vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i 
                       + vlSelf->simple_system__DOT__core_top0__DOT__ex_imm_i);
                if (((1U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_rd_addr_i)) 
                     | (5U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_rd_addr_i)))) {
                    if (vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT____VdfgExtracted_h8d65eadd__0) {
                        if (((IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_rd_addr_i) 
                             == (0x1fU & (vlSelf->simple_system__DOT__core_top0__DOT__ex_inst_i 
                                          >> 0xfU)))) {
                            vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_call_o = 1U;
                        } else {
                            vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_call_o = 1U;
                            vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_ret_o = 1U;
                        }
                    } else {
                        vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_call_o = 1U;
                    }
                } else if (vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT____VdfgExtracted_h8d65eadd__0) {
                    vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_ret_o = 1U;
                } else {
                    vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_jmp_o = 1U;
                }
            } else if ((5U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))) {
                vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_taken_o 
                    = vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__rs1_eq_rs2_w;
                vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_target_o 
                    = vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__pc_add_imm_w;
            } else if ((6U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))) {
                vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_taken_o 
                    = (1U & (~ (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__rs1_eq_rs2_w)));
                vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_target_o 
                    = vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__pc_add_imm_w;
            } else if ((7U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))) {
                vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_taken_o 
                    = vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__rs1_ge_rs2_signed_w;
                vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_target_o 
                    = vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__pc_add_imm_w;
            } else if ((8U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))) {
                vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_taken_o 
                    = vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__rs1_ge_rs2_unsigned_w;
                vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_target_o 
                    = vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__pc_add_imm_w;
            } else if ((9U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))) {
                vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_taken_o 
                    = (1U & (~ (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__rs1_ge_rs2_signed_w)));
                vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_target_o 
                    = vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__pc_add_imm_w;
            } else {
                vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_taken_o 
                    = (1U & (~ (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__rs1_ge_rs2_unsigned_w)));
                vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_target_o 
                    = vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__pc_add_imm_w;
            }
        }
        if (((((((((3U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i)) 
                   | (4U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))) 
                  | (5U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))) 
                 | (6U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))) 
                | (7U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))) 
               | (8U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))) 
              | (9U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))) 
             | (0xaU == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i)))) {
            vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_request_o = 1U;
            if (vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_taken_o) {
                if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_next_taken_i)) 
                                       | (vlSelf->simple_system__DOT__core_top0__DOT__ex_next_pc_i 
                                          != vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_target_o))))) {
                    vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_redirect_o = 1U;
                    vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_redirect_pc_o 
                        = vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_target_o;
                    vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_tag_o = 1U;
                    VL_WRITEF("BP Miss(pc=%x, next_take=%1#, branch_taken=%1#, next_pc=%x, branch_target=%x is_call=%1#, is_ret=%1#, is_jmp=%1#)\n",
                              32,vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i,
                              1,(IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_next_taken_i),
                              1,vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_taken_o,
                              32,vlSelf->simple_system__DOT__core_top0__DOT__ex_next_pc_i,
                              32,vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_target_o,
                              1,(IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_call_o),
                              1,vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_ret_o,
                              1,(IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_jmp_o));
                } else if (VL_UNLIKELY(vlSelf->simple_system__DOT__core_top0__DOT__ex_next_taken_i)) {
                    VL_WRITEF("miss predicted, pc=%x, branch_taken=%1#, next_take=%1#, next_pc=%x\n",
                              32,vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i,
                              1,(IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_taken_o),
                              1,vlSelf->simple_system__DOT__core_top0__DOT__ex_next_taken_i,
                              32,vlSelf->simple_system__DOT__core_top0__DOT__ex_next_pc_i);
                    vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_redirect_o = 1U;
                    vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_redirect_pc_o 
                        = ((IData)(4U) + vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i);
                    vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_tag_o = 1U;
                }
            }
        }
    } else {
        vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__jump_result_r = 0U;
        vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_request_o = 0U;
        vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_taken_o = 0U;
        vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_call_o = 0U;
        vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_ret_o = 0U;
        vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_jmp_o = 0U;
        vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_target_o = 0U;
        vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_redirect_o = 0U;
        vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_redirect_pc_o = 0U;
        vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_tag_o = 0U;
    }
    vlSelf->simple_system__DOT____Vcellinp__u_bus__host_addr_i[0U] 
        = vlSelf->simple_system__DOT__host_addr[0U];
    vlSelf->simple_system__DOT__core_top0__DOT__mem0__DOT__mem_re 
        = ((0xbU == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem_uop_i)) 
           | ((0xcU == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem_uop_i)) 
              | (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem0__DOT__load_operation)));
    vlSelf->simple_system__DOT__core_top0__DOT__mem0__DOT__mem_we 
        = ((0x10U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem_uop_i)) 
           | (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem0__DOT__store_operation));
    vlSelf->simple_system__DOT__core_top0__DOT__mem0__DOT__load_addr_align_exception 
        = ((IData)(simple_system__DOT__core_top0__DOT__mem0__DOT____VdfgTmp_h03f492d6__0) 
           & (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem0__DOT__load_operation));
    vlSelf->simple_system__DOT__core_top0__DOT__mem0__DOT__store_addr_align_exception 
        = ((IData)(simple_system__DOT__core_top0__DOT__mem0__DOT____VdfgTmp_h03f492d6__0) 
           & (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem0__DOT__store_operation));
    vlSelf->simple_system__DOT____Vcellinp__u_bus__host_be_i[0U] 
        = vlSelf->simple_system__DOT__host_be[0U];
    vlSelf->simple_system__DOT____Vcellinp__u_bus__host_wdata_i[0U] 
        = vlSelf->simple_system__DOT__host_wdata[0U];
    vlSelf->simple_system__DOT__core_top0__DOT__csr_rdata_o 
        = ((((0xfffU & vlSelf->simple_system__DOT__core_top0__DOT__wb_csr_waddr_i) 
             == (0xfffU & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)) 
            & (IData)(vlSelf->simple_system__DOT__core_top0__DOT__wb_csr_we_i))
            ? vlSelf->simple_system__DOT__core_top0__DOT__wb_csr_wdata_i
            : ((0x800U & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)
                ? ((0x400U & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)
                    ? ((0x200U & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)
                        ? ((0x100U & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)
                            ? ((0x80U & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)
                                ? 0U : ((0x40U & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)
                                         ? 0U : ((0x20U 
                                                  & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)
                                                  ? 0U
                                                  : 
                                                 ((0x10U 
                                                   & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)
                                                   ? 
                                                  ((8U 
                                                    & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)
                                                    ? 0U
                                                    : 
                                                   ((4U 
                                                     & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)
                                                     ? 0U
                                                     : 
                                                    ((2U 
                                                      & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)
                                                      ? 
                                                     ((1U 
                                                       & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)
                                                       ? 0U
                                                       : 0x16U)
                                                      : 0U)))
                                                   : 0U))))
                            : 0U) : ((0x100U & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)
                                      ? 0U : ((0x80U 
                                               & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)
                                               ? ((0x40U 
                                                   & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)
                                                   ? 0U
                                                   : 
                                                  ((0x20U 
                                                    & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)
                                                    ? 0U
                                                    : 
                                                   ((0x10U 
                                                     & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)
                                                     ? 0U
                                                     : 
                                                    ((8U 
                                                      & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)
                                                       ? 0U
                                                       : 
                                                      ((2U 
                                                        & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)
                                                        ? 0U
                                                        : 
                                                       ((1U 
                                                         & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)
                                                         ? 0U
                                                         : (IData)(
                                                                   (vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mcycle 
                                                                    >> 0x20U)))))))))
                                               : ((0x40U 
                                                   & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)
                                                   ? 0U
                                                   : 
                                                  ((0x20U 
                                                    & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)
                                                    ? 0U
                                                    : 
                                                   ((0x10U 
                                                     & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)
                                                     ? 0U
                                                     : 
                                                    ((8U 
                                                      & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)
                                                      ? 0U
                                                      : 
                                                     ((4U 
                                                       & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)
                                                       ? 0U
                                                       : 
                                                      ((2U 
                                                        & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)
                                                        ? 0U
                                                        : 
                                                       ((1U 
                                                         & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)
                                                         ? 0U
                                                         : (IData)(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mcycle)))))))))))
                    : ((0x200U & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)
                        ? ((0x100U & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)
                            ? ((0x80U & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)
                                ? ((0x40U & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)
                                    ? 0U : ((0x20U 
                                             & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)
                                             ? 0U : 
                                            ((0x10U 
                                              & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)
                                              ? 0U : 
                                             ((8U & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)
                                               ? 0U
                                               : ((4U 
                                                   & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)
                                                     ? 0U
                                                     : (IData)(
                                                               (vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__minstret 
                                                                >> 0x20U)))
                                                    : 
                                                   ((1U 
                                                     & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)
                                                     ? 0U
                                                     : (IData)(
                                                               (vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mcycle 
                                                                >> 0x20U)))))))))
                                : ((0x40U & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)
                                    ? 0U : ((0x20U 
                                             & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)
                                             ? 0U : 
                                            ((0x10U 
                                              & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)
                                              ? 0U : 
                                             ((8U & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)
                                               ? 0U
                                               : ((4U 
                                                   & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)
                                                   ? 0U
                                                   : 
                                                  ((2U 
                                                    & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)
                                                     ? 0U
                                                     : (IData)(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__minstret))
                                                    : 
                                                   ((1U 
                                                     & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)
                                                     ? 0U
                                                     : (IData)(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mcycle)))))))))
                            : 0U) : 0U)) : ((0x400U 
                                             & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)
                                             ? 0U : 
                                            ((0x200U 
                                              & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)
                                              ? ((0x100U 
                                                  & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)
                                                  ? 
                                                 ((0x80U 
                                                   & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)
                                                   ? 0U
                                                   : 
                                                  ((0x40U 
                                                    & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)
                                                    ? 
                                                   ((0x20U 
                                                     & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)
                                                     ? 0U
                                                     : 
                                                    ((0x10U 
                                                      & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)
                                                      ? 0U
                                                      : 
                                                     ((8U 
                                                       & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)
                                                        ? 
                                                       ((2U 
                                                         & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)
                                                          ? 0U
                                                          : 
                                                         (((IData)(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mip_external) 
                                                           << 0xbU) 
                                                          | (((IData)(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mip_timer) 
                                                              << 7U) 
                                                             | ((IData)(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mip_sw) 
                                                                << 3U)))))
                                                        : 
                                                       ((2U 
                                                         & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)
                                                         ? 
                                                        ((1U 
                                                          & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)
                                                          ? 0U
                                                          : 
                                                         (((IData)(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__int_or_exc) 
                                                           << 0x1fU) 
                                                          | ((vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__cause_rem 
                                                              << 4U) 
                                                             | (IData)(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__cause))))
                                                         : 
                                                        ((1U 
                                                          & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)
                                                          ? vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mepc
                                                          : vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mscratch))))))
                                                    : 
                                                   ((0x20U 
                                                     & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)
                                                     ? 0U
                                                     : 
                                                    ((0x10U 
                                                      & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)
                                                      ? 0U
                                                      : 
                                                     ((8U 
                                                       & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)
                                                       ? 0U
                                                       : 
                                                      ((4U 
                                                        & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)
                                                        ? 
                                                       ((2U 
                                                         & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)
                                                          ? vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mtvec
                                                          : 
                                                         (((IData)(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mie_external) 
                                                           << 0xbU) 
                                                          | (((IData)(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mie_timer) 
                                                              << 7U) 
                                                             | ((IData)(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mie_sw) 
                                                                << 3U)))))
                                                        : 
                                                       ((2U 
                                                         & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)
                                                         ? 0U
                                                         : 
                                                        ((1U 
                                                          & vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o)
                                                          ? 0x40001100U
                                                          : 
                                                         (0x1800U 
                                                          | (((IData)(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mstatus_pie) 
                                                              << 7U) 
                                                             | ((IData)(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mstatus_ie) 
                                                                << 3U)))))))))))
                                                  : 0U)
                                              : 0U))));
    vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__ras_proven_next_index_r 
        = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__ras_proven_cur_index_r;
    if (((IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_request_o) 
         & (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_call_o))) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__ras_proven_next_index_r 
            = (7U & ((IData)(1U) + (IData)(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__ras_proven_cur_index_r)));
    } else if (((IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_request_o) 
                & (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_ret_o))) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__ras_proven_next_index_r 
            = (7U & ((IData)(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__ras_proven_cur_index_r) 
                     - (IData)(1U)));
    }
    vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_write_entry_r = 0U;
    vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_hit_r = 0U;
    vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_alloc_req = 0U;
    if (((IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_request_o) 
         & (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_taken_o))) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__i1 = 0x40U;
        if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
              [0U] == vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i) 
             & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
             [0U])) {
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_write_entry_r = 0U;
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_hit_r = 1U;
        }
        if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
              [1U] == vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i) 
             & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
             [1U])) {
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_write_entry_r = 1U;
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_hit_r = 1U;
        }
        if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
              [2U] == vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i) 
             & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
             [2U])) {
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_write_entry_r = 2U;
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_hit_r = 1U;
        }
        if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
              [3U] == vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i) 
             & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
             [3U])) {
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_write_entry_r = 3U;
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_hit_r = 1U;
        }
        if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
              [4U] == vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i) 
             & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
             [4U])) {
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_write_entry_r = 4U;
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_hit_r = 1U;
        }
        if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
              [5U] == vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i) 
             & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
             [5U])) {
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_write_entry_r = 5U;
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_hit_r = 1U;
        }
        if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
              [6U] == vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i) 
             & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
             [6U])) {
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_write_entry_r = 6U;
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_hit_r = 1U;
        }
        if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
              [7U] == vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i) 
             & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
             [7U])) {
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_write_entry_r = 7U;
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_hit_r = 1U;
        }
        if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
              [8U] == vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i) 
             & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
             [8U])) {
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_write_entry_r = 8U;
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_hit_r = 1U;
        }
        if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
              [9U] == vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i) 
             & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
             [9U])) {
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_write_entry_r = 9U;
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_hit_r = 1U;
        }
        if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
              [0xaU] == vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i) 
             & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
             [0xaU])) {
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_write_entry_r = 0xaU;
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_hit_r = 1U;
        }
        if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
              [0xbU] == vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i) 
             & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
             [0xbU])) {
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_write_entry_r = 0xbU;
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_hit_r = 1U;
        }
        if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
              [0xcU] == vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i) 
             & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
             [0xcU])) {
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_write_entry_r = 0xcU;
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_hit_r = 1U;
        }
        if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
              [0xdU] == vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i) 
             & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
             [0xdU])) {
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_write_entry_r = 0xdU;
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_hit_r = 1U;
        }
        if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
              [0xeU] == vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i) 
             & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
             [0xeU])) {
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_write_entry_r = 0xeU;
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_hit_r = 1U;
        }
        if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
              [0xfU] == vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i) 
             & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
             [0xfU])) {
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_write_entry_r = 0xfU;
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_hit_r = 1U;
        }
        if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
              [0x10U] == vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i) 
             & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
             [0x10U])) {
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_write_entry_r = 0x10U;
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_hit_r = 1U;
        }
        if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
              [0x11U] == vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i) 
             & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
             [0x11U])) {
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_write_entry_r = 0x11U;
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_hit_r = 1U;
        }
        if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
              [0x12U] == vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i) 
             & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
             [0x12U])) {
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_write_entry_r = 0x12U;
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_hit_r = 1U;
        }
        if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
              [0x13U] == vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i) 
             & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
             [0x13U])) {
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_write_entry_r = 0x13U;
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_hit_r = 1U;
        }
        if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
              [0x14U] == vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i) 
             & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
             [0x14U])) {
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_write_entry_r = 0x14U;
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_hit_r = 1U;
        }
        if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
              [0x15U] == vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i) 
             & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
             [0x15U])) {
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_write_entry_r = 0x15U;
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_hit_r = 1U;
        }
        if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
              [0x16U] == vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i) 
             & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
             [0x16U])) {
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_write_entry_r = 0x16U;
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_hit_r = 1U;
        }
        if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
              [0x17U] == vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i) 
             & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
             [0x17U])) {
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_write_entry_r = 0x17U;
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_hit_r = 1U;
        }
        if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
              [0x18U] == vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i) 
             & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
             [0x18U])) {
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_write_entry_r = 0x18U;
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_hit_r = 1U;
        }
        if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
              [0x19U] == vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i) 
             & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
             [0x19U])) {
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_write_entry_r = 0x19U;
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_hit_r = 1U;
        }
        if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
              [0x1aU] == vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i) 
             & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
             [0x1aU])) {
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_write_entry_r = 0x1aU;
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_hit_r = 1U;
        }
        if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
              [0x1bU] == vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i) 
             & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
             [0x1bU])) {
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_write_entry_r = 0x1bU;
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_hit_r = 1U;
        }
        if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
              [0x1cU] == vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i) 
             & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
             [0x1cU])) {
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_write_entry_r = 0x1cU;
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_hit_r = 1U;
        }
        if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
              [0x1dU] == vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i) 
             & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
             [0x1dU])) {
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_write_entry_r = 0x1dU;
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_hit_r = 1U;
        }
        if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
              [0x1eU] == vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i) 
             & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
             [0x1eU])) {
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_write_entry_r = 0x1eU;
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_hit_r = 1U;
        }
        if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
              [0x1fU] == vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i) 
             & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
             [0x1fU])) {
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_write_entry_r = 0x1fU;
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_hit_r = 1U;
        }
        if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
              [0x20U] == vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i) 
             & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
             [0x20U])) {
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_write_entry_r = 0x20U;
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_hit_r = 1U;
        }
        if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
              [0x21U] == vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i) 
             & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
             [0x21U])) {
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_write_entry_r = 0x21U;
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_hit_r = 1U;
        }
        if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
              [0x22U] == vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i) 
             & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
             [0x22U])) {
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_write_entry_r = 0x22U;
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_hit_r = 1U;
        }
        if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
              [0x23U] == vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i) 
             & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
             [0x23U])) {
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_write_entry_r = 0x23U;
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_hit_r = 1U;
        }
        if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
              [0x24U] == vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i) 
             & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
             [0x24U])) {
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_write_entry_r = 0x24U;
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_hit_r = 1U;
        }
        if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
              [0x25U] == vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i) 
             & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
             [0x25U])) {
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_write_entry_r = 0x25U;
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_hit_r = 1U;
        }
        if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
              [0x26U] == vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i) 
             & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
             [0x26U])) {
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_write_entry_r = 0x26U;
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_hit_r = 1U;
        }
        if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
              [0x27U] == vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i) 
             & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
             [0x27U])) {
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_write_entry_r = 0x27U;
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_hit_r = 1U;
        }
        if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
              [0x28U] == vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i) 
             & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
             [0x28U])) {
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_write_entry_r = 0x28U;
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_hit_r = 1U;
        }
        if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
              [0x29U] == vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i) 
             & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
             [0x29U])) {
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_write_entry_r = 0x29U;
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_hit_r = 1U;
        }
        if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
              [0x2aU] == vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i) 
             & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
             [0x2aU])) {
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_write_entry_r = 0x2aU;
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_hit_r = 1U;
        }
        if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
              [0x2bU] == vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i) 
             & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
             [0x2bU])) {
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_write_entry_r = 0x2bU;
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_hit_r = 1U;
        }
        if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
              [0x2cU] == vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i) 
             & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
             [0x2cU])) {
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_write_entry_r = 0x2cU;
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_hit_r = 1U;
        }
        if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
              [0x2dU] == vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i) 
             & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
             [0x2dU])) {
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_write_entry_r = 0x2dU;
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_hit_r = 1U;
        }
        if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
              [0x2eU] == vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i) 
             & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
             [0x2eU])) {
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_write_entry_r = 0x2eU;
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_hit_r = 1U;
        }
        if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
              [0x2fU] == vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i) 
             & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
             [0x2fU])) {
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_write_entry_r = 0x2fU;
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_hit_r = 1U;
        }
        if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
              [0x30U] == vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i) 
             & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
             [0x30U])) {
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_write_entry_r = 0x30U;
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_hit_r = 1U;
        }
        if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
              [0x31U] == vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i) 
             & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
             [0x31U])) {
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_write_entry_r = 0x31U;
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_hit_r = 1U;
        }
        if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
              [0x32U] == vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i) 
             & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
             [0x32U])) {
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_write_entry_r = 0x32U;
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_hit_r = 1U;
        }
        if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
              [0x33U] == vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i) 
             & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
             [0x33U])) {
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_write_entry_r = 0x33U;
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_hit_r = 1U;
        }
        if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
              [0x34U] == vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i) 
             & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
             [0x34U])) {
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_write_entry_r = 0x34U;
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_hit_r = 1U;
        }
        if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
              [0x35U] == vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i) 
             & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
             [0x35U])) {
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_write_entry_r = 0x35U;
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_hit_r = 1U;
        }
        if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
              [0x36U] == vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i) 
             & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
             [0x36U])) {
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_write_entry_r = 0x36U;
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_hit_r = 1U;
        }
        if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
              [0x37U] == vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i) 
             & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
             [0x37U])) {
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_write_entry_r = 0x37U;
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_hit_r = 1U;
        }
        if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
              [0x38U] == vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i) 
             & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
             [0x38U])) {
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_write_entry_r = 0x38U;
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_hit_r = 1U;
        }
        if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
              [0x39U] == vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i) 
             & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
             [0x39U])) {
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_write_entry_r = 0x39U;
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_hit_r = 1U;
        }
        if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
              [0x3aU] == vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i) 
             & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
             [0x3aU])) {
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_write_entry_r = 0x3aU;
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_hit_r = 1U;
        }
        if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
              [0x3bU] == vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i) 
             & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
             [0x3bU])) {
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_write_entry_r = 0x3bU;
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_hit_r = 1U;
        }
        if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
              [0x3cU] == vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i) 
             & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
             [0x3cU])) {
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_write_entry_r = 0x3cU;
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_hit_r = 1U;
        }
        if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
              [0x3dU] == vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i) 
             & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
             [0x3dU])) {
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_write_entry_r = 0x3dU;
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_hit_r = 1U;
        }
        if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
              [0x3eU] == vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i) 
             & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
             [0x3eU])) {
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_write_entry_r = 0x3eU;
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_hit_r = 1U;
        }
        if (((vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r
              [0x3fU] == vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i) 
             & vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r
             [0x3fU])) {
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_write_entry_r = 0x3fU;
            vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_hit_r = 1U;
        }
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_alloc_req 
            = (1U & (~ (IData)(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_hit_r)));
    }
    if (vlSelf->rs_n_i) {
        if (vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_redirect_o) {
            vlSelf->simple_system__DOT__core_top0__DOT__id_inst_o = 0x13U;
            vlSelf->simple_system__DOT__core_top0__DOT__id_rs1_re_o = 0U;
            vlSelf->simple_system__DOT__core_top0__DOT__id_rs1_data_o = 0U;
            vlSelf->simple_system__DOT__core_top0__DOT__id_rs2_re_o = 0U;
            vlSelf->simple_system__DOT__core_top0__DOT__id_rs2_data_o = 0U;
            vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__imm_r = 0U;
            vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__csr_we = 0U;
            vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__csr_addr = 0U;
            vlSelf->simple_system__DOT__core_top0__DOT__id_rd_we_o = 0U;
            vlSelf->simple_system__DOT__core_top0__DOT__id_rd_waddr_o = 0U;
            vlSelf->simple_system__DOT__core_top0__DOT__id_alusel_o = 0U;
            vlSelf->simple_system__DOT__core_top0__DOT__id_uopcode_o = 0U;
            vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__excepttype_ecall = 0U;
            vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__excepttype_mret = 0U;
            vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__excepttype_ebreak = 0U;
            vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__excepttype_illegal_inst = 0U;
            vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__ins_valid_r = 1U;
        } else {
            vlSelf->simple_system__DOT__core_top0__DOT__id_inst_o 
                = vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i;
            vlSelf->simple_system__DOT__core_top0__DOT__id_rs1_re_o = 0U;
            vlSelf->simple_system__DOT__core_top0__DOT__id_rs1_data_o = 0U;
            vlSelf->simple_system__DOT__core_top0__DOT__id_rs2_data_o = 0U;
            vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__excepttype_ebreak = 0U;
            vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__excepttype_illegal_inst = 0U;
            vlSelf->simple_system__DOT__core_top0__DOT__id_rs2_re_o = 0U;
            vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__imm_r = 0U;
            vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__csr_we = 0U;
            vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__csr_addr = 0U;
            vlSelf->simple_system__DOT__core_top0__DOT__id_rd_we_o = 0U;
            vlSelf->simple_system__DOT__core_top0__DOT__id_rd_waddr_o = 0U;
            vlSelf->simple_system__DOT__core_top0__DOT__id_alusel_o = 0U;
            vlSelf->simple_system__DOT__core_top0__DOT__id_uopcode_o = 0U;
            vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__excepttype_ecall = 0U;
            vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__excepttype_mret = 0U;
            vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__ins_valid_r = 0U;
            if ((0x40U & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i)) {
                if (VL_LIKELY((0x20U & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i))) {
                    if ((0x10U & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i)) {
                        if (VL_UNLIKELY((8U & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i))) {
                            VL_WRITEF("invalid instruction opcode_w (%x), pc=%10#,  the instruction is (%x)\n",
                                      7,(0x7fU & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i),
                                      32,vlSelf->simple_system__DOT__core_top0__DOT__id_pc_i,
                                      32,vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i);
                        } else if (VL_UNLIKELY((4U 
                                                & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i))) {
                            VL_WRITEF("invalid instruction opcode_w (%x), pc=%10#,  the instruction is (%x)\n",
                                      7,(0x7fU & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i),
                                      32,vlSelf->simple_system__DOT__core_top0__DOT__id_pc_i,
                                      32,vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i);
                        } else if (VL_LIKELY((2U & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i))) {
                            if (VL_LIKELY((1U & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i))) {
                                vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__csr_addr 
                                    = (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                       >> 0x14U);
                                vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__imm_r 
                                    = (0x1fU & (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                                >> 0xfU));
                                vlSelf->simple_system__DOT__core_top0__DOT__id_rd_waddr_o 
                                    = (0x1fU & (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                                >> 7U));
                                vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__ins_valid_r = 1U;
                                if ((0x4000U & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i)) {
                                    if ((0x2000U & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i)) {
                                        if ((0x1000U 
                                             & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i)) {
                                            vlSelf->simple_system__DOT__core_top0__DOT__id_rd_we_o = 1U;
                                            vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__csr_we = 1U;
                                            vlSelf->simple_system__DOT__core_top0__DOT__id_uopcode_o = 0x33U;
                                            vlSelf->simple_system__DOT__core_top0__DOT__id_alusel_o = 8U;
                                        } else {
                                            vlSelf->simple_system__DOT__core_top0__DOT__id_rd_we_o = 1U;
                                            vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__csr_we = 1U;
                                            vlSelf->simple_system__DOT__core_top0__DOT__id_alusel_o = 8U;
                                            vlSelf->simple_system__DOT__core_top0__DOT__id_uopcode_o = 0x31U;
                                        }
                                    } else if (VL_LIKELY(
                                                         (0x1000U 
                                                          & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i))) {
                                        vlSelf->simple_system__DOT__core_top0__DOT__id_rd_we_o = 1U;
                                        vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__csr_we = 1U;
                                        vlSelf->simple_system__DOT__core_top0__DOT__id_alusel_o = 8U;
                                        vlSelf->simple_system__DOT__core_top0__DOT__id_uopcode_o = 0x2fU;
                                    } else {
                                        VL_WRITEF("invalid fun7 in csr type, pc=%x, inst=%x, fun3=%1#\n",
                                                  32,
                                                  vlSelf->simple_system__DOT__core_top0__DOT__id_pc_i,
                                                  32,
                                                  vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i,
                                                  3,
                                                  (7U 
                                                   & (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                                      >> 0xcU)));
                                        vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__ins_valid_r = 1U;
                                    }
                                } else if ((0x2000U 
                                            & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i)) {
                                    if ((0x1000U & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i)) {
                                        vlSelf->simple_system__DOT__core_top0__DOT__id_rs1_re_o = 1U;
                                        vlSelf->simple_system__DOT__core_top0__DOT__id_rd_we_o = 1U;
                                        vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__csr_we = 1U;
                                        vlSelf->simple_system__DOT__core_top0__DOT__id_alusel_o = 8U;
                                        vlSelf->simple_system__DOT__core_top0__DOT__id_uopcode_o = 0x32U;
                                    } else {
                                        vlSelf->simple_system__DOT__core_top0__DOT__id_rs1_re_o = 1U;
                                        vlSelf->simple_system__DOT__core_top0__DOT__id_rd_we_o = 1U;
                                        vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__csr_we = 1U;
                                        vlSelf->simple_system__DOT__core_top0__DOT__id_alusel_o = 8U;
                                        vlSelf->simple_system__DOT__core_top0__DOT__id_uopcode_o = 0x30U;
                                    }
                                } else if ((0x1000U 
                                            & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i)) {
                                    vlSelf->simple_system__DOT__core_top0__DOT__id_rs1_re_o = 1U;
                                    vlSelf->simple_system__DOT__core_top0__DOT__id_rd_we_o = 1U;
                                    vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__csr_we = 1U;
                                    vlSelf->simple_system__DOT__core_top0__DOT__id_alusel_o = 8U;
                                    vlSelf->simple_system__DOT__core_top0__DOT__id_uopcode_o = 0x2eU;
                                } else {
                                    if ((IData)((0U 
                                                 == 
                                                 (0xfff00000U 
                                                  & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i)))) {
                                        vlSelf->simple_system__DOT__core_top0__DOT__id_alusel_o = 0U;
                                        vlSelf->simple_system__DOT__core_top0__DOT__id_uopcode_o = 0x34U;
                                        vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__excepttype_ecall = 1U;
                                    }
                                    if ((IData)((0x30200000U 
                                                 == 
                                                 (0xfff00000U 
                                                  & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i)))) {
                                        vlSelf->simple_system__DOT__core_top0__DOT__id_alusel_o = 0U;
                                        vlSelf->simple_system__DOT__core_top0__DOT__id_uopcode_o = 0x35U;
                                        vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__excepttype_mret = 1U;
                                    }
                                }
                            } else {
                                VL_WRITEF("invalid instruction opcode_w (%x), pc=%10#,  the instruction is (%x)\n",
                                          7,(0x7fU 
                                             & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i),
                                          32,vlSelf->simple_system__DOT__core_top0__DOT__id_pc_i,
                                          32,vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i);
                            }
                        } else {
                            VL_WRITEF("invalid instruction opcode_w (%x), pc=%10#,  the instruction is (%x)\n",
                                      7,(0x7fU & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i),
                                      32,vlSelf->simple_system__DOT__core_top0__DOT__id_pc_i,
                                      32,vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i);
                        }
                    } else if ((8U & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i)) {
                        if (VL_LIKELY((4U & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i))) {
                            if (VL_LIKELY((2U & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i))) {
                                if (VL_LIKELY((1U & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i))) {
                                    vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__imm_r 
                                        = (((- (IData)(
                                                       (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                                        >> 0x1fU))) 
                                            << 0x14U) 
                                           | ((0xff000U 
                                               & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i) 
                                              | ((0x800U 
                                                  & (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                                     >> 9U)) 
                                                 | (0x7feU 
                                                    & (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                                       >> 0x14U)))));
                                    vlSelf->simple_system__DOT__core_top0__DOT__id_rd_we_o = 1U;
                                    vlSelf->simple_system__DOT__core_top0__DOT__id_rd_waddr_o 
                                        = (0x1fU & 
                                           (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                            >> 7U));
                                    vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__ins_valid_r = 1U;
                                    vlSelf->simple_system__DOT__core_top0__DOT__id_alusel_o = 1U;
                                    vlSelf->simple_system__DOT__core_top0__DOT__id_uopcode_o = 3U;
                                } else {
                                    VL_WRITEF("invalid instruction opcode_w (%x), pc=%10#,  the instruction is (%x)\n",
                                              7,(0x7fU 
                                                 & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i),
                                              32,vlSelf->simple_system__DOT__core_top0__DOT__id_pc_i,
                                              32,vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i);
                                }
                            } else {
                                VL_WRITEF("invalid instruction opcode_w (%x), pc=%10#,  the instruction is (%x)\n",
                                          7,(0x7fU 
                                             & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i),
                                          32,vlSelf->simple_system__DOT__core_top0__DOT__id_pc_i,
                                          32,vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i);
                            }
                        } else {
                            VL_WRITEF("invalid instruction opcode_w (%x), pc=%10#,  the instruction is (%x)\n",
                                      7,(0x7fU & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i),
                                      32,vlSelf->simple_system__DOT__core_top0__DOT__id_pc_i,
                                      32,vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i);
                        }
                    } else if ((4U & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i)) {
                        if (VL_LIKELY((2U & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i))) {
                            if (VL_LIKELY((1U & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i))) {
                                vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__imm_r 
                                    = (((- (IData)(
                                                   (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                        >> 0x14U));
                                vlSelf->simple_system__DOT__core_top0__DOT__id_rs1_re_o = 1U;
                                vlSelf->simple_system__DOT__core_top0__DOT__id_rd_we_o = 1U;
                                vlSelf->simple_system__DOT__core_top0__DOT__id_rd_waddr_o 
                                    = (0x1fU & (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                                >> 7U));
                                vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__ins_valid_r = 1U;
                                vlSelf->simple_system__DOT__core_top0__DOT__id_alusel_o = 1U;
                                vlSelf->simple_system__DOT__core_top0__DOT__id_uopcode_o = 4U;
                            } else {
                                VL_WRITEF("invalid instruction opcode_w (%x), pc=%10#,  the instruction is (%x)\n",
                                          7,(0x7fU 
                                             & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i),
                                          32,vlSelf->simple_system__DOT__core_top0__DOT__id_pc_i,
                                          32,vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i);
                            }
                        } else {
                            VL_WRITEF("invalid instruction opcode_w (%x), pc=%10#,  the instruction is (%x)\n",
                                      7,(0x7fU & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i),
                                      32,vlSelf->simple_system__DOT__core_top0__DOT__id_pc_i,
                                      32,vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i);
                        }
                    } else if (VL_LIKELY((2U & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i))) {
                        if (VL_LIKELY((1U & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i))) {
                            vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__imm_r 
                                = (((- (IData)((vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                                >> 0x1fU))) 
                                    << 0xcU) | ((0x800U 
                                                 & (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                                         >> 7U)))));
                            vlSelf->simple_system__DOT__core_top0__DOT__id_rs1_re_o = 1U;
                            vlSelf->simple_system__DOT__core_top0__DOT__id_rs2_re_o = 1U;
                            vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__ins_valid_r = 1U;
                            vlSelf->simple_system__DOT__core_top0__DOT__id_alusel_o = 1U;
                            if ((0x4000U & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i)) {
                                vlSelf->simple_system__DOT__core_top0__DOT__id_uopcode_o 
                                    = ((0x2000U & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i)
                                        ? ((0x1000U 
                                            & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i)
                                            ? 8U : 0xaU)
                                        : ((0x1000U 
                                            & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i)
                                            ? 7U : 9U));
                            } else if (VL_UNLIKELY(
                                                   (0x2000U 
                                                    & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i))) {
                                VL_WRITEF("Invalid Fun3 In Branch Type(pc=%x, ins=%x, fun3=%1#)\n",
                                          32,vlSelf->simple_system__DOT__core_top0__DOT__id_pc_i,
                                          32,vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i,
                                          3,(7U & (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                                   >> 0xcU)));
                                vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__ins_valid_r = 0U;
                            } else {
                                vlSelf->simple_system__DOT__core_top0__DOT__id_uopcode_o 
                                    = ((0x1000U & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i)
                                        ? 6U : 5U);
                            }
                        } else {
                            VL_WRITEF("invalid instruction opcode_w (%x), pc=%10#,  the instruction is (%x)\n",
                                      7,(0x7fU & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i),
                                      32,vlSelf->simple_system__DOT__core_top0__DOT__id_pc_i,
                                      32,vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i);
                        }
                    } else {
                        VL_WRITEF("invalid instruction opcode_w (%x), pc=%10#,  the instruction is (%x)\n",
                                  7,(0x7fU & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i),
                                  32,vlSelf->simple_system__DOT__core_top0__DOT__id_pc_i,
                                  32,vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i);
                    }
                } else {
                    VL_WRITEF("invalid instruction opcode_w (%x), pc=%10#,  the instruction is (%x)\n",
                              7,(0x7fU & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i),
                              32,vlSelf->simple_system__DOT__core_top0__DOT__id_pc_i,
                              32,vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i);
                }
            } else if ((0x20U & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i)) {
                if ((0x10U & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i)) {
                    if (VL_UNLIKELY((8U & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i))) {
                        VL_WRITEF("invalid instruction opcode_w (%x), pc=%10#,  the instruction is (%x)\n",
                                  7,(0x7fU & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i),
                                  32,vlSelf->simple_system__DOT__core_top0__DOT__id_pc_i,
                                  32,vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i);
                    } else if ((4U & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i)) {
                        if (VL_LIKELY((2U & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i))) {
                            if (VL_LIKELY((1U & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i))) {
                                vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__imm_r 
                                    = (0xfffff000U 
                                       & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i);
                                vlSelf->simple_system__DOT__core_top0__DOT__id_rd_we_o = 1U;
                                vlSelf->simple_system__DOT__core_top0__DOT__id_rd_waddr_o 
                                    = (0x1fU & (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                                >> 7U));
                                vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__ins_valid_r = 1U;
                                vlSelf->simple_system__DOT__core_top0__DOT__id_alusel_o = 2U;
                                vlSelf->simple_system__DOT__core_top0__DOT__id_uopcode_o = 1U;
                            } else {
                                VL_WRITEF("invalid instruction opcode_w (%x), pc=%10#,  the instruction is (%x)\n",
                                          7,(0x7fU 
                                             & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i),
                                          32,vlSelf->simple_system__DOT__core_top0__DOT__id_pc_i,
                                          32,vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i);
                            }
                        } else {
                            VL_WRITEF("invalid instruction opcode_w (%x), pc=%10#,  the instruction is (%x)\n",
                                      7,(0x7fU & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i),
                                      32,vlSelf->simple_system__DOT__core_top0__DOT__id_pc_i,
                                      32,vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i);
                        }
                    } else if (VL_LIKELY((2U & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i))) {
                        if (VL_LIKELY((1U & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i))) {
                            vlSelf->simple_system__DOT__core_top0__DOT__id_rs1_re_o = 1U;
                            vlSelf->simple_system__DOT__core_top0__DOT__id_rs2_re_o = 1U;
                            vlSelf->simple_system__DOT__core_top0__DOT__id_rd_we_o = 1U;
                            vlSelf->simple_system__DOT__core_top0__DOT__id_rd_waddr_o 
                                = (0x1fU & (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                            >> 7U));
                            vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__ins_valid_r = 1U;
                            if (((0U == (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                         >> 0x19U)) 
                                 | (0x20U == (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                              >> 0x19U)))) {
                                if ((0x4000U & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i)) {
                                    if ((0x2000U & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i)) {
                                        if ((0x1000U 
                                             & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i)) {
                                            vlSelf->simple_system__DOT__core_top0__DOT__id_alusel_o = 2U;
                                            vlSelf->simple_system__DOT__core_top0__DOT__id_uopcode_o = 0x1eU;
                                        } else {
                                            vlSelf->simple_system__DOT__core_top0__DOT__id_alusel_o = 2U;
                                            vlSelf->simple_system__DOT__core_top0__DOT__id_uopcode_o = 0x1fU;
                                        }
                                    } else if ((0x1000U 
                                                & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i)) {
                                        if ((0U == 
                                             (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                              >> 0x19U))) {
                                            vlSelf->simple_system__DOT__core_top0__DOT__id_alusel_o = 3U;
                                            vlSelf->simple_system__DOT__core_top0__DOT__id_uopcode_o = 0x22U;
                                        } else {
                                            vlSelf->simple_system__DOT__core_top0__DOT__id_alusel_o = 3U;
                                            vlSelf->simple_system__DOT__core_top0__DOT__id_uopcode_o = 0x23U;
                                        }
                                    } else {
                                        vlSelf->simple_system__DOT__core_top0__DOT__id_alusel_o = 2U;
                                        vlSelf->simple_system__DOT__core_top0__DOT__id_uopcode_o = 0x20U;
                                    }
                                } else if ((0x2000U 
                                            & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i)) {
                                    if ((0x1000U & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i)) {
                                        vlSelf->simple_system__DOT__core_top0__DOT__id_alusel_o = 2U;
                                        vlSelf->simple_system__DOT__core_top0__DOT__id_uopcode_o = 0x25U;
                                    } else {
                                        vlSelf->simple_system__DOT__core_top0__DOT__id_alusel_o = 2U;
                                        vlSelf->simple_system__DOT__core_top0__DOT__id_uopcode_o = 0x24U;
                                    }
                                } else if ((0x1000U 
                                            & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i)) {
                                    vlSelf->simple_system__DOT__core_top0__DOT__id_alusel_o = 3U;
                                    vlSelf->simple_system__DOT__core_top0__DOT__id_uopcode_o = 0x21U;
                                } else if ((0U == (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                                   >> 0x19U))) {
                                    vlSelf->simple_system__DOT__core_top0__DOT__id_alusel_o = 4U;
                                    vlSelf->simple_system__DOT__core_top0__DOT__id_uopcode_o = 0x1cU;
                                } else {
                                    vlSelf->simple_system__DOT__core_top0__DOT__id_alusel_o = 4U;
                                    vlSelf->simple_system__DOT__core_top0__DOT__id_uopcode_o = 0x1dU;
                                }
                            } else if (VL_LIKELY((1U 
                                                  == 
                                                  (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                                   >> 0x19U)))) {
                                if ((0x4000U & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i)) {
                                    if ((0x2000U & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i)) {
                                        if ((0x1000U 
                                             & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i)) {
                                            vlSelf->simple_system__DOT__core_top0__DOT__id_alusel_o = 6U;
                                            vlSelf->simple_system__DOT__core_top0__DOT__id_uopcode_o = 0x2dU;
                                        } else {
                                            vlSelf->simple_system__DOT__core_top0__DOT__id_alusel_o = 6U;
                                            vlSelf->simple_system__DOT__core_top0__DOT__id_uopcode_o = 0x2cU;
                                        }
                                    } else if ((0x1000U 
                                                & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i)) {
                                        vlSelf->simple_system__DOT__core_top0__DOT__id_alusel_o = 6U;
                                        vlSelf->simple_system__DOT__core_top0__DOT__id_uopcode_o = 0x2bU;
                                    } else {
                                        vlSelf->simple_system__DOT__core_top0__DOT__id_alusel_o = 6U;
                                        vlSelf->simple_system__DOT__core_top0__DOT__id_uopcode_o = 0x2aU;
                                    }
                                } else if ((0x2000U 
                                            & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i)) {
                                    if ((0x1000U & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i)) {
                                        vlSelf->simple_system__DOT__core_top0__DOT__id_alusel_o = 5U;
                                        vlSelf->simple_system__DOT__core_top0__DOT__id_uopcode_o = 0x28U;
                                    } else {
                                        vlSelf->simple_system__DOT__core_top0__DOT__id_alusel_o = 5U;
                                        vlSelf->simple_system__DOT__core_top0__DOT__id_uopcode_o = 0x29U;
                                    }
                                } else if ((0x1000U 
                                            & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i)) {
                                    vlSelf->simple_system__DOT__core_top0__DOT__id_alusel_o = 5U;
                                    vlSelf->simple_system__DOT__core_top0__DOT__id_uopcode_o = 0x27U;
                                } else {
                                    vlSelf->simple_system__DOT__core_top0__DOT__id_alusel_o = 5U;
                                    vlSelf->simple_system__DOT__core_top0__DOT__id_uopcode_o = 0x26U;
                                }
                            } else {
                                VL_WRITEF("Invalid Fun7 In R Type(pc=%x, inst=%x, fun3=%1#)\n",
                                          32,vlSelf->simple_system__DOT__core_top0__DOT__id_pc_i,
                                          32,vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i,
                                          3,(7U & (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                                   >> 0xcU)));
                                vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__ins_valid_r = 0U;
                            }
                        } else {
                            VL_WRITEF("invalid instruction opcode_w (%x), pc=%10#,  the instruction is (%x)\n",
                                      7,(0x7fU & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i),
                                      32,vlSelf->simple_system__DOT__core_top0__DOT__id_pc_i,
                                      32,vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i);
                        }
                    } else {
                        VL_WRITEF("invalid instruction opcode_w (%x), pc=%10#,  the instruction is (%x)\n",
                                  7,(0x7fU & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i),
                                  32,vlSelf->simple_system__DOT__core_top0__DOT__id_pc_i,
                                  32,vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i);
                    }
                } else if (VL_UNLIKELY((8U & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i))) {
                    VL_WRITEF("invalid instruction opcode_w (%x), pc=%10#,  the instruction is (%x)\n",
                              7,(0x7fU & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i),
                              32,vlSelf->simple_system__DOT__core_top0__DOT__id_pc_i,
                              32,vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i);
                } else if (VL_UNLIKELY((4U & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i))) {
                    VL_WRITEF("invalid instruction opcode_w (%x), pc=%10#,  the instruction is (%x)\n",
                              7,(0x7fU & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i),
                              32,vlSelf->simple_system__DOT__core_top0__DOT__id_pc_i,
                              32,vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i);
                } else if (VL_LIKELY((2U & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i))) {
                    if (VL_LIKELY((1U & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i))) {
                        vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__imm_r 
                            = (((- (IData)((vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                                  >> 7U))));
                        vlSelf->simple_system__DOT__core_top0__DOT__id_rs1_re_o = 1U;
                        vlSelf->simple_system__DOT__core_top0__DOT__id_rs2_re_o = 1U;
                        vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__ins_valid_r = 1U;
                        vlSelf->simple_system__DOT__core_top0__DOT__id_alusel_o = 7U;
                        if ((0U == (7U & (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                          >> 0xcU)))) {
                            vlSelf->simple_system__DOT__core_top0__DOT__id_uopcode_o = 0x10U;
                        } else if ((1U == (7U & (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                                 >> 0xcU)))) {
                            vlSelf->simple_system__DOT__core_top0__DOT__id_uopcode_o = 0x11U;
                        } else if (VL_LIKELY((2U == 
                                              (7U & 
                                               (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                                >> 0xcU))))) {
                            vlSelf->simple_system__DOT__core_top0__DOT__id_uopcode_o = 0x12U;
                        } else {
                            VL_WRITEF("Invalid Fun3 In Store Type(pc=%x, inst=%x, fun3=%1#)\n",
                                      32,vlSelf->simple_system__DOT__core_top0__DOT__id_pc_i,
                                      32,vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i,
                                      3,(7U & (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                               >> 0xcU)));
                            vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__ins_valid_r = 0U;
                        }
                    } else {
                        VL_WRITEF("invalid instruction opcode_w (%x), pc=%10#,  the instruction is (%x)\n",
                                  7,(0x7fU & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i),
                                  32,vlSelf->simple_system__DOT__core_top0__DOT__id_pc_i,
                                  32,vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i);
                    }
                } else {
                    VL_WRITEF("invalid instruction opcode_w (%x), pc=%10#,  the instruction is (%x)\n",
                              7,(0x7fU & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i),
                              32,vlSelf->simple_system__DOT__core_top0__DOT__id_pc_i,
                              32,vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i);
                }
            } else if ((0x10U & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i)) {
                if (VL_UNLIKELY((8U & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i))) {
                    VL_WRITEF("invalid instruction opcode_w (%x), pc=%10#,  the instruction is (%x)\n",
                              7,(0x7fU & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i),
                              32,vlSelf->simple_system__DOT__core_top0__DOT__id_pc_i,
                              32,vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i);
                } else if ((4U & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i)) {
                    if (VL_LIKELY((2U & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i))) {
                        if (VL_LIKELY((1U & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i))) {
                            vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__imm_r 
                                = (0xfffff000U & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i);
                            vlSelf->simple_system__DOT__core_top0__DOT__id_rd_we_o = 1U;
                            vlSelf->simple_system__DOT__core_top0__DOT__id_rd_waddr_o 
                                = (0x1fU & (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                            >> 7U));
                            vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__ins_valid_r = 1U;
                            vlSelf->simple_system__DOT__core_top0__DOT__id_alusel_o = 2U;
                            vlSelf->simple_system__DOT__core_top0__DOT__id_uopcode_o = 2U;
                        } else {
                            VL_WRITEF("invalid instruction opcode_w (%x), pc=%10#,  the instruction is (%x)\n",
                                      7,(0x7fU & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i),
                                      32,vlSelf->simple_system__DOT__core_top0__DOT__id_pc_i,
                                      32,vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i);
                        }
                    } else {
                        VL_WRITEF("invalid instruction opcode_w (%x), pc=%10#,  the instruction is (%x)\n",
                                  7,(0x7fU & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i),
                                  32,vlSelf->simple_system__DOT__core_top0__DOT__id_pc_i,
                                  32,vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i);
                    }
                } else if (VL_LIKELY((2U & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i))) {
                    if (VL_LIKELY((1U & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i))) {
                        vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__imm_r 
                            = (((- (IData)((vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                            >> 0x1fU))) 
                                << 0xcU) | (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                            >> 0x14U));
                        vlSelf->simple_system__DOT__core_top0__DOT__id_rs1_re_o = 1U;
                        vlSelf->simple_system__DOT__core_top0__DOT__id_rd_we_o = 1U;
                        vlSelf->simple_system__DOT__core_top0__DOT__id_rd_waddr_o 
                            = (0x1fU & (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                        >> 7U));
                        vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__ins_valid_r = 1U;
                        if ((0x4000U & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i)) {
                            if ((0x2000U & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i)) {
                                if ((0x1000U & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i)) {
                                    vlSelf->simple_system__DOT__core_top0__DOT__id_alusel_o = 2U;
                                    vlSelf->simple_system__DOT__core_top0__DOT__id_uopcode_o = 0x16U;
                                } else {
                                    vlSelf->simple_system__DOT__core_top0__DOT__id_alusel_o = 2U;
                                    vlSelf->simple_system__DOT__core_top0__DOT__id_uopcode_o = 0x17U;
                                }
                            } else if ((0x1000U & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i)) {
                                vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__imm_r 
                                    = (0x1fU & (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                                >> 0x14U));
                                if ((0U == (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                            >> 0x1aU))) {
                                    vlSelf->simple_system__DOT__core_top0__DOT__id_alusel_o = 3U;
                                    vlSelf->simple_system__DOT__core_top0__DOT__id_uopcode_o = 0x1aU;
                                } else if (VL_LIKELY(
                                                     (0x10U 
                                                      == 
                                                      (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                                       >> 0x1aU)))) {
                                    vlSelf->simple_system__DOT__core_top0__DOT__id_alusel_o = 3U;
                                    vlSelf->simple_system__DOT__core_top0__DOT__id_uopcode_o = 0x1bU;
                                } else {
                                    VL_WRITEF("Invalid Fun7 (%b) For SRI(pc=%x, inst=%x, fun3=%1#)\n",
                                              6,(vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                                 >> 0x1aU),
                                              32,vlSelf->simple_system__DOT__core_top0__DOT__id_pc_i,
                                              32,vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i,
                                              3,(7U 
                                                 & (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                                    >> 0xcU)));
                                    vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__ins_valid_r = 0U;
                                }
                            } else {
                                vlSelf->simple_system__DOT__core_top0__DOT__id_alusel_o = 2U;
                                vlSelf->simple_system__DOT__core_top0__DOT__id_uopcode_o = 0x18U;
                            }
                        } else if ((0x2000U & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i)) {
                            if ((0x1000U & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i)) {
                                vlSelf->simple_system__DOT__core_top0__DOT__id_alusel_o = 2U;
                                vlSelf->simple_system__DOT__core_top0__DOT__id_uopcode_o = 0x15U;
                            } else {
                                vlSelf->simple_system__DOT__core_top0__DOT__id_alusel_o = 2U;
                                vlSelf->simple_system__DOT__core_top0__DOT__id_uopcode_o = 0x14U;
                            }
                        } else if ((0x1000U & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i)) {
                            vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__imm_r 
                                = (0x1fU & (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                            >> 0x14U));
                            vlSelf->simple_system__DOT__core_top0__DOT__id_alusel_o = 3U;
                            vlSelf->simple_system__DOT__core_top0__DOT__id_uopcode_o = 0x19U;
                        } else {
                            vlSelf->simple_system__DOT__core_top0__DOT__id_alusel_o = 4U;
                            vlSelf->simple_system__DOT__core_top0__DOT__id_uopcode_o = 0x13U;
                        }
                    } else {
                        VL_WRITEF("invalid instruction opcode_w (%x), pc=%10#,  the instruction is (%x)\n",
                                  7,(0x7fU & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i),
                                  32,vlSelf->simple_system__DOT__core_top0__DOT__id_pc_i,
                                  32,vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i);
                    }
                } else {
                    VL_WRITEF("invalid instruction opcode_w (%x), pc=%10#,  the instruction is (%x)\n",
                              7,(0x7fU & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i),
                              32,vlSelf->simple_system__DOT__core_top0__DOT__id_pc_i,
                              32,vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i);
                }
            } else if ((8U & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i)) {
                if (VL_LIKELY((4U & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i))) {
                    if (VL_LIKELY((2U & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i))) {
                        if (VL_UNLIKELY((1U & (~ vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i)))) {
                            VL_WRITEF("invalid instruction opcode_w (%x), pc=%10#,  the instruction is (%x)\n",
                                      7,(0x7fU & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i),
                                      32,vlSelf->simple_system__DOT__core_top0__DOT__id_pc_i,
                                      32,vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i);
                        }
                    } else {
                        VL_WRITEF("invalid instruction opcode_w (%x), pc=%10#,  the instruction is (%x)\n",
                                  7,(0x7fU & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i),
                                  32,vlSelf->simple_system__DOT__core_top0__DOT__id_pc_i,
                                  32,vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i);
                    }
                } else {
                    VL_WRITEF("invalid instruction opcode_w (%x), pc=%10#,  the instruction is (%x)\n",
                              7,(0x7fU & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i),
                              32,vlSelf->simple_system__DOT__core_top0__DOT__id_pc_i,
                              32,vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i);
                }
            } else if (VL_UNLIKELY((4U & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i))) {
                VL_WRITEF("invalid instruction opcode_w (%x), pc=%10#,  the instruction is (%x)\n",
                          7,(0x7fU & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i),
                          32,vlSelf->simple_system__DOT__core_top0__DOT__id_pc_i,
                          32,vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i);
            } else if (VL_LIKELY((2U & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i))) {
                if (VL_LIKELY((1U & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i))) {
                    vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__imm_r 
                        = (((- (IData)((vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                        >> 0x1fU))) 
                            << 0xcU) | (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                        >> 0x14U));
                    vlSelf->simple_system__DOT__core_top0__DOT__id_rs1_re_o = 1U;
                    vlSelf->simple_system__DOT__core_top0__DOT__id_rd_we_o = 1U;
                    vlSelf->simple_system__DOT__core_top0__DOT__id_rd_waddr_o 
                        = (0x1fU & (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                    >> 7U));
                    vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__ins_valid_r = 1U;
                    vlSelf->simple_system__DOT__core_top0__DOT__id_alusel_o = 7U;
                    if ((0x4000U & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i)) {
                        if (VL_UNLIKELY((0x2000U & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i))) {
                            VL_WRITEF("Invalid Fun3 In Load Type(pc=%x, ins=%x, fun3=%1#)\n",
                                      32,vlSelf->simple_system__DOT__core_top0__DOT__id_pc_i,
                                      32,vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i,
                                      3,(7U & (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                               >> 0xcU)));
                            vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__ins_valid_r = 0U;
                        } else {
                            vlSelf->simple_system__DOT__core_top0__DOT__id_uopcode_o 
                                = ((0x1000U & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i)
                                    ? 0xeU : 0xcU);
                        }
                    } else if ((0x2000U & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i)) {
                        if (VL_UNLIKELY((0x1000U & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i))) {
                            VL_WRITEF("Invalid Fun3 In Load Type(pc=%x, ins=%x, fun3=%1#)\n",
                                      32,vlSelf->simple_system__DOT__core_top0__DOT__id_pc_i,
                                      32,vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i,
                                      3,(7U & (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                               >> 0xcU)));
                            vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__ins_valid_r = 0U;
                        } else {
                            vlSelf->simple_system__DOT__core_top0__DOT__id_uopcode_o = 0xfU;
                        }
                    } else {
                        vlSelf->simple_system__DOT__core_top0__DOT__id_uopcode_o 
                            = ((0x1000U & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i)
                                ? 0xdU : 0xbU);
                    }
                } else {
                    VL_WRITEF("invalid instruction opcode_w (%x), pc=%10#,  the instruction is (%x)\n",
                              7,(0x7fU & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i),
                              32,vlSelf->simple_system__DOT__core_top0__DOT__id_pc_i,
                              32,vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i);
                }
            } else {
                VL_WRITEF("invalid instruction opcode_w (%x), pc=%10#,  the instruction is (%x)\n",
                          7,(0x7fU & vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i),
                          32,vlSelf->simple_system__DOT__core_top0__DOT__id_pc_i,
                          32,vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i);
            }
        }
    } else {
        vlSelf->simple_system__DOT__core_top0__DOT__id_inst_o = 0x13U;
        vlSelf->simple_system__DOT__core_top0__DOT__id_rs1_re_o = 0U;
        vlSelf->simple_system__DOT__core_top0__DOT__id_rs2_re_o = 0U;
        vlSelf->simple_system__DOT__core_top0__DOT__id_rs1_raddr_o = 0U;
        vlSelf->simple_system__DOT__core_top0__DOT__id_rs2_raddr_o = 0U;
        vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__imm_r = 0U;
        vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__csr_we = 0U;
        vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__csr_addr = 0U;
        vlSelf->simple_system__DOT__core_top0__DOT__id_rs1_data_o = 0U;
        vlSelf->simple_system__DOT__core_top0__DOT__id_rs2_data_o = 0U;
        vlSelf->simple_system__DOT__core_top0__DOT__id_rd_we_o = 0U;
        vlSelf->simple_system__DOT__core_top0__DOT__id_rd_waddr_o = 0U;
        vlSelf->simple_system__DOT__core_top0__DOT__id_alusel_o = 0U;
        vlSelf->simple_system__DOT__core_top0__DOT__id_uopcode_o = 0U;
        vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__excepttype_ecall = 0U;
        vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__excepttype_mret = 0U;
        vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__excepttype_ebreak = 0U;
        vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__excepttype_illegal_inst = 0U;
        vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__ins_valid_r = 1U;
    }
    __Vtableidx1 = ((((1U & (((IData)(vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mstatus_ie) 
                              & ((IData)(vlSelf->simple_system__DOT__core_top0__DOT__ctrl0__DOT__eip) 
                                 | ((IData)(vlSelf->simple_system__DOT__core_top0__DOT__ctrl0__DOT__tip) 
                                    | (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ctrl0__DOT__sip)))) 
                             | (IData)((((0U != (0x1aU 
                                                 & vlSelf->simple_system__DOT__core_top0__DOT__mem_excepttype_i)) 
                                         | (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem0__DOT__store_addr_align_exception)) 
                                        | (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem0__DOT__load_addr_align_exception)))))
                       ? 4U : ((1U & vlSelf->simple_system__DOT__core_top0__DOT__mem_excepttype_i)
                                ? 8U : 2U)) << 4U) 
                    | (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ctrl0__DOT__curr_state));
    vlSelf->simple_system__DOT__core_top0__DOT__ctrl0__DOT__next_state 
        = Vsimple_system__ConstPool__TABLE_hdc1ec586_0
        [__Vtableidx1];
    vlSelf->__VdfgTmp_hb6145d33__0 = (((IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem0__DOT__load_addr_align_exception) 
                                       << 6U) | (((IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem0__DOT__store_addr_align_exception) 
                                                  << 5U) 
                                                 | (0x1fU 
                                                    & vlSelf->simple_system__DOT__core_top0__DOT__mem_excepttype_i)));
    vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__csr_result_r = 0U;
    if (vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__read_csr_enable) {
        vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__csr_result_r 
            = vlSelf->simple_system__DOT__core_top0__DOT__csr_rdata_o;
        if (((IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem_csr_we_o) 
             & (vlSelf->simple_system__DOT__core_top0__DOT__mem_csr_waddr_o 
                == vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_addr_i))) {
            vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__csr_result_r 
                = vlSelf->simple_system__DOT__core_top0__DOT__mem_csr_wdata_o;
        } else if (((IData)(vlSelf->simple_system__DOT__core_top0__DOT__wb_csr_we_i) 
                    & (vlSelf->simple_system__DOT__core_top0__DOT__wb_csr_waddr_i 
                       == vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_addr_i))) {
            vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__csr_result_r 
                = vlSelf->simple_system__DOT__core_top0__DOT__wb_csr_wdata_i;
        }
    }
    vlSelf->simple_system__DOT__core_top0__DOT__mem_excepttype_o 
        = vlSelf->__VdfgTmp_hb6145d33__0;
    vlSelf->simple_system__DOT__host_we[0U] = ((~ (IData)(
                                                          (0U 
                                                           != (IData)(vlSelf->__VdfgTmp_hb6145d33__0)))) 
                                               & (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem0__DOT__mem_we));
    vlSelf->simple_system__DOT____Vcellout__core_top0__ram_we_o 
        = ((~ (IData)((0U != (IData)(vlSelf->__VdfgTmp_hb6145d33__0)))) 
           & (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem0__DOT__mem_we));
    vlSelf->simple_system__DOT__core_top0__DOT__ex_rd_wdata_o 
        = ((8U & (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_alusel_i))
            ? ((4U & (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_alusel_i))
                ? 0U : ((2U & (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_alusel_i))
                         ? 0U : ((1U & (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_alusel_i))
                                  ? 0U : vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__csr_result_r)))
            : ((4U & (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_alusel_i))
                ? ((2U & (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_alusel_i))
                    ? ((1U & (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_alusel_i))
                        ? 0U : vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__div_result_r)
                    : ((1U & (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_alusel_i))
                        ? ((IData)(vlSelf->rs_n_i)
                            ? ((0x26U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))
                                ? (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__mul_result_w)
                                : ((0x28U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))
                                    ? (IData)((vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__mul_result_w 
                                               >> 0x20U))
                                    : ((0x27U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))
                                        ? (((0U == 
                                             ((2U & 
                                               (vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i 
                                                >> 0x1eU)) 
                                              | (vlSelf->simple_system__DOT__core_top0__DOT__ex_rs2_data_i 
                                                 >> 0x1fU))) 
                                            | (3U == 
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
                                        : ((0x29U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))
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
                            : 0U) : ((IData)(vlSelf->rs_n_i)
                                      ? ((0x13U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))
                                          ? vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__rs1_add_imm_w
                                          : ((0x1cU 
                                              == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))
                                              ? (vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i 
                                                 + vlSelf->simple_system__DOT__core_top0__DOT__ex_rs2_data_i)
                                              : ((0x1dU 
                                                  == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))
                                                  ? 
                                                 (vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i 
                                                  - vlSelf->simple_system__DOT__core_top0__DOT__ex_rs2_data_i)
                                                  : 0U)))
                                      : 0U))) : ((2U 
                                                  & (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_alusel_i))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_alusel_i))
                                                   ? 
                                                  ((IData)(vlSelf->rs_n_i)
                                                    ? 
                                                   ((0x19U 
                                                     == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))
                                                     ? 
                                                    ((0x1fU 
                                                      >= vlSelf->simple_system__DOT__core_top0__DOT__ex_imm_i)
                                                      ? 
                                                     (vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i 
                                                      << vlSelf->simple_system__DOT__core_top0__DOT__ex_imm_i)
                                                      : 0U)
                                                     : 
                                                    ((0x1aU 
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
                                                    : 0U)
                                                   : vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__logic_result_r)
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_alusel_i))
                                                   ? vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__jump_result_r
                                                   : 0U))));
    if (vlSelf->rs_n_i) {
        vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__rs1_load_depend = 0U;
        if ((0U != (0x1fU & (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                             >> 0xfU)))) {
            if ((((IData)(vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__pre_ins_is_load) 
                  & ((IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_rd_addr_o) 
                     == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__id_rs1_raddr_o))) 
                 & (IData)(vlSelf->simple_system__DOT__core_top0__DOT__id_rs1_re_o))) {
                vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__rs1_load_depend = 1U;
            }
        }
        vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__rs2_load_depend = 0U;
        if ((0U != (0x1fU & (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                             >> 0x14U)))) {
            if ((((IData)(vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__pre_ins_is_load) 
                  & ((IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_rd_addr_o) 
                     == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__id_rs2_raddr_o))) 
                 & (IData)(vlSelf->simple_system__DOT__core_top0__DOT__id_rs2_re_o))) {
                vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__rs2_load_depend = 1U;
            }
        }
    } else {
        vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__rs1_load_depend = 0U;
        vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__rs2_load_depend = 0U;
    }
    vlSelf->simple_system__DOT__core_top0__DOT__id_stall_req_o 
        = ((IData)(vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__rs1_load_depend) 
           | (IData)(vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__rs2_load_depend));
    vlSelf->simple_system__DOT____Vcellinp__u_bus__host_we_i[0U] 
        = vlSelf->simple_system__DOT__host_we[0U];
    vlSelf->simple_system__DOT____Vcellout__core_top0__ram_ce_o 
        = ((IData)(vlSelf->simple_system__DOT____Vcellout__core_top0__ram_we_o) 
           | (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem0__DOT__mem_re));
    vlSelf->simple_system__DOT__host_req[0U] = ((IData)(vlSelf->simple_system__DOT____Vcellout__core_top0__ram_we_o) 
                                                | (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem0__DOT__mem_re));
    vlSelf->simple_system__DOT__core_top0__DOT____Vcellinp__bp0__stall_i 
        = ((IData)(vlSelf->rs_n_i) & ((IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__stall_req_for_div) 
                                       | (IData)(vlSelf->simple_system__DOT__core_top0__DOT__id_stall_req_o)));
    vlSelf->simple_system__DOT____Vcellinp__u_bus__host_req_i[0U] 
        = vlSelf->simple_system__DOT__host_req[0U];
    vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__ras_speculative_next_index_r 
        = vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__ras_speculative_cur_index_r;
    if ((((IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_redirect_o) 
          & (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_request_o)) 
         & (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_call_o))) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__ras_speculative_next_index_r 
            = (7U & ((IData)(1U) + (IData)(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__ras_proven_cur_index_r)));
    } else if ((((IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_redirect_o) 
                 & (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_request_o)) 
                & (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_ret_o))) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__ras_speculative_next_index_r 
            = (7U & ((IData)(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__ras_proven_cur_index_r) 
                     - (IData)(1U)));
    } else if (((IData)(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__ras_call_matched_w) 
                & (~ (IData)(vlSelf->simple_system__DOT__core_top0__DOT____Vcellinp__bp0__stall_i)))) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__ras_speculative_next_index_r 
            = (7U & ((IData)(1U) + (IData)(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__ras_speculative_cur_index_r)));
    } else if (((IData)(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__ras_ret_matched_w) 
                & (~ (IData)(vlSelf->simple_system__DOT__core_top0__DOT____Vcellinp__bp0__stall_i)))) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__ras_speculative_next_index_r 
            = (7U & ((IData)(vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__ras_speculative_cur_index_r) 
                     - (IData)(1U)));
    }
    vlSelf->simple_system__DOT__u_bus__DOT__host_sel_req = 0U;
    if (vlSelf->simple_system__DOT____Vcellinp__u_bus__host_req_i
        [0U]) {
        vlSelf->simple_system__DOT__u_bus__DOT__host_sel_req = 0U;
    }
    vlSelf->simple_system__DOT____Vcellout__u_bus__host_gnt_o[0U] = 0U;
    if ((0U >= (IData)(vlSelf->simple_system__DOT__u_bus__DOT__host_sel_req))) {
        simple_system__DOT__u_bus__DOT____Vlvbound_hbc2eda3a__0 
            = (1U & vlSelf->simple_system__DOT____Vcellinp__u_bus__host_req_i
               [vlSelf->simple_system__DOT__u_bus__DOT__host_sel_req]);
        vlSelf->simple_system__DOT____Vcellout__u_bus__host_gnt_o[vlSelf->simple_system__DOT__u_bus__DOT__host_sel_req] 
            = simple_system__DOT__u_bus__DOT____Vlvbound_hbc2eda3a__0;
    } else {
        simple_system__DOT__u_bus__DOT____Vlvbound_hbc2eda3a__0 = 0U;
    }
    vlSelf->simple_system__DOT__u_bus__DOT__host_sel_resp 
        = ((IData)(vlSelf->rs_n_i) & (IData)(vlSelf->simple_system__DOT__u_bus__DOT__host_sel_req));
    vlSelf->simple_system__DOT__u_bus__DOT__device_sel_req = 0U;
    if (((((0U >= (IData)(vlSelf->simple_system__DOT__u_bus__DOT__host_sel_req))
            ? vlSelf->simple_system__DOT____Vcellinp__u_bus__host_addr_i
           [vlSelf->simple_system__DOT__u_bus__DOT__host_sel_req]
            : 0U) & vlSelf->simple_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask
          [0U]) == vlSelf->simple_system__DOT____Vcellinp__u_bus__cfg_device_addr_base
         [0U])) {
        vlSelf->simple_system__DOT__u_bus__DOT__device_sel_req = 0U;
    }
    if (((((0U >= (IData)(vlSelf->simple_system__DOT__u_bus__DOT__host_sel_req))
            ? vlSelf->simple_system__DOT____Vcellinp__u_bus__host_addr_i
           [vlSelf->simple_system__DOT__u_bus__DOT__host_sel_req]
            : 0U) & vlSelf->simple_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask
          [1U]) == vlSelf->simple_system__DOT____Vcellinp__u_bus__cfg_device_addr_base
         [1U])) {
        vlSelf->simple_system__DOT__u_bus__DOT__device_sel_req = 1U;
    }
    if (((((0U >= (IData)(vlSelf->simple_system__DOT__u_bus__DOT__host_sel_req))
            ? vlSelf->simple_system__DOT____Vcellinp__u_bus__host_addr_i
           [vlSelf->simple_system__DOT__u_bus__DOT__host_sel_req]
            : 0U) & vlSelf->simple_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask
          [2U]) == vlSelf->simple_system__DOT____Vcellinp__u_bus__cfg_device_addr_base
         [2U])) {
        vlSelf->simple_system__DOT__u_bus__DOT__device_sel_req = 2U;
    }
    vlSelf->simple_system__DOT__host_gnt[0U] = vlSelf->simple_system__DOT____Vcellout__u_bus__host_gnt_o
        [0U];
    if ((0U == (IData)(vlSelf->simple_system__DOT__u_bus__DOT__device_sel_req))) {
        if ((0U >= (IData)(vlSelf->simple_system__DOT__u_bus__DOT__host_sel_req))) {
            vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h753a4492__0 
                = vlSelf->simple_system__DOT____Vcellinp__u_bus__host_wdata_i
                [vlSelf->simple_system__DOT__u_bus__DOT__host_sel_req];
            vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h36994927__0 
                = vlSelf->simple_system__DOT____Vcellinp__u_bus__host_be_i
                [vlSelf->simple_system__DOT__u_bus__DOT__host_sel_req];
            vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h75688df5__0 
                = vlSelf->simple_system__DOT____Vcellinp__u_bus__host_addr_i
                [vlSelf->simple_system__DOT__u_bus__DOT__host_sel_req];
            vlSelf->simple_system__DOT____Vcellout__u_bus__device_wdata_o[0U] 
                = vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h753a4492__0;
            vlSelf->simple_system__DOT____Vcellout__u_bus__device_be_o[0U] 
                = vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h36994927__0;
            vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h253b5ff2__0 
                = (1U & vlSelf->simple_system__DOT____Vcellinp__u_bus__host_we_i
                   [vlSelf->simple_system__DOT__u_bus__DOT__host_sel_req]);
            vlSelf->simple_system__DOT____Vcellout__u_bus__device_we_o[0U] 
                = vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h253b5ff2__0;
            vlSelf->simple_system__DOT____Vcellout__u_bus__device_addr_o[0U] 
                = vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h75688df5__0;
            vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_hd2efabf0__0 
                = (1U & vlSelf->simple_system__DOT____Vcellinp__u_bus__host_req_i
                   [vlSelf->simple_system__DOT__u_bus__DOT__host_sel_req]);
        } else {
            vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h753a4492__0 = 0U;
            vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h36994927__0 = 0U;
            vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h75688df5__0 = 0U;
            vlSelf->simple_system__DOT____Vcellout__u_bus__device_wdata_o[0U] 
                = vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h753a4492__0;
            vlSelf->simple_system__DOT____Vcellout__u_bus__device_be_o[0U] 
                = vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h36994927__0;
            vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h253b5ff2__0 = 0U;
            vlSelf->simple_system__DOT____Vcellout__u_bus__device_we_o[0U] 
                = vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h253b5ff2__0;
            vlSelf->simple_system__DOT____Vcellout__u_bus__device_addr_o[0U] 
                = vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h75688df5__0;
            vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_hd2efabf0__0 = 0U;
        }
        vlSelf->simple_system__DOT____Vcellout__u_bus__device_req_o[0U] 
            = vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_hd2efabf0__0;
    } else {
        vlSelf->simple_system__DOT____Vcellout__u_bus__device_wdata_o[0U] = 0U;
        vlSelf->simple_system__DOT____Vcellout__u_bus__device_be_o[0U] = 0U;
        vlSelf->simple_system__DOT____Vcellout__u_bus__device_we_o[0U] = 0U;
        vlSelf->simple_system__DOT____Vcellout__u_bus__device_addr_o[0U] = 0U;
        vlSelf->simple_system__DOT____Vcellout__u_bus__device_req_o[0U] = 0U;
    }
    if ((1U == (IData)(vlSelf->simple_system__DOT__u_bus__DOT__device_sel_req))) {
        if ((0U >= (IData)(vlSelf->simple_system__DOT__u_bus__DOT__host_sel_req))) {
            vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h753a4492__0 
                = vlSelf->simple_system__DOT____Vcellinp__u_bus__host_wdata_i
                [vlSelf->simple_system__DOT__u_bus__DOT__host_sel_req];
            vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h36994927__0 
                = vlSelf->simple_system__DOT____Vcellinp__u_bus__host_be_i
                [vlSelf->simple_system__DOT__u_bus__DOT__host_sel_req];
            vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h75688df5__0 
                = vlSelf->simple_system__DOT____Vcellinp__u_bus__host_addr_i
                [vlSelf->simple_system__DOT__u_bus__DOT__host_sel_req];
            vlSelf->simple_system__DOT____Vcellout__u_bus__device_wdata_o[1U] 
                = vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h753a4492__0;
            vlSelf->simple_system__DOT____Vcellout__u_bus__device_be_o[1U] 
                = vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h36994927__0;
            vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h253b5ff2__0 
                = (1U & vlSelf->simple_system__DOT____Vcellinp__u_bus__host_we_i
                   [vlSelf->simple_system__DOT__u_bus__DOT__host_sel_req]);
            vlSelf->simple_system__DOT____Vcellout__u_bus__device_we_o[1U] 
                = vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h253b5ff2__0;
            vlSelf->simple_system__DOT____Vcellout__u_bus__device_addr_o[1U] 
                = vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h75688df5__0;
            vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_hd2efabf0__0 
                = (1U & vlSelf->simple_system__DOT____Vcellinp__u_bus__host_req_i
                   [vlSelf->simple_system__DOT__u_bus__DOT__host_sel_req]);
        } else {
            vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h753a4492__0 = 0U;
            vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h36994927__0 = 0U;
            vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h75688df5__0 = 0U;
            vlSelf->simple_system__DOT____Vcellout__u_bus__device_wdata_o[1U] 
                = vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h753a4492__0;
            vlSelf->simple_system__DOT____Vcellout__u_bus__device_be_o[1U] 
                = vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h36994927__0;
            vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h253b5ff2__0 = 0U;
            vlSelf->simple_system__DOT____Vcellout__u_bus__device_we_o[1U] 
                = vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h253b5ff2__0;
            vlSelf->simple_system__DOT____Vcellout__u_bus__device_addr_o[1U] 
                = vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h75688df5__0;
            vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_hd2efabf0__0 = 0U;
        }
        vlSelf->simple_system__DOT____Vcellout__u_bus__device_req_o[1U] 
            = vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_hd2efabf0__0;
    } else {
        vlSelf->simple_system__DOT____Vcellout__u_bus__device_wdata_o[1U] = 0U;
        vlSelf->simple_system__DOT____Vcellout__u_bus__device_be_o[1U] = 0U;
        vlSelf->simple_system__DOT____Vcellout__u_bus__device_we_o[1U] = 0U;
        vlSelf->simple_system__DOT____Vcellout__u_bus__device_addr_o[1U] = 0U;
        vlSelf->simple_system__DOT____Vcellout__u_bus__device_req_o[1U] = 0U;
    }
    if ((2U == (IData)(vlSelf->simple_system__DOT__u_bus__DOT__device_sel_req))) {
        if ((0U >= (IData)(vlSelf->simple_system__DOT__u_bus__DOT__host_sel_req))) {
            vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h753a4492__0 
                = vlSelf->simple_system__DOT____Vcellinp__u_bus__host_wdata_i
                [vlSelf->simple_system__DOT__u_bus__DOT__host_sel_req];
            vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h36994927__0 
                = vlSelf->simple_system__DOT____Vcellinp__u_bus__host_be_i
                [vlSelf->simple_system__DOT__u_bus__DOT__host_sel_req];
            vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h75688df5__0 
                = vlSelf->simple_system__DOT____Vcellinp__u_bus__host_addr_i
                [vlSelf->simple_system__DOT__u_bus__DOT__host_sel_req];
            vlSelf->simple_system__DOT____Vcellout__u_bus__device_wdata_o[2U] 
                = vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h753a4492__0;
            vlSelf->simple_system__DOT____Vcellout__u_bus__device_be_o[2U] 
                = vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h36994927__0;
            vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h253b5ff2__0 
                = (1U & vlSelf->simple_system__DOT____Vcellinp__u_bus__host_we_i
                   [vlSelf->simple_system__DOT__u_bus__DOT__host_sel_req]);
            vlSelf->simple_system__DOT____Vcellout__u_bus__device_we_o[2U] 
                = vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h253b5ff2__0;
            vlSelf->simple_system__DOT____Vcellout__u_bus__device_addr_o[2U] 
                = vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h75688df5__0;
            vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_hd2efabf0__0 
                = (1U & vlSelf->simple_system__DOT____Vcellinp__u_bus__host_req_i
                   [vlSelf->simple_system__DOT__u_bus__DOT__host_sel_req]);
        } else {
            vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h753a4492__0 = 0U;
            vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h36994927__0 = 0U;
            vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h75688df5__0 = 0U;
            vlSelf->simple_system__DOT____Vcellout__u_bus__device_wdata_o[2U] 
                = vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h753a4492__0;
            vlSelf->simple_system__DOT____Vcellout__u_bus__device_be_o[2U] 
                = vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h36994927__0;
            vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h253b5ff2__0 = 0U;
            vlSelf->simple_system__DOT____Vcellout__u_bus__device_we_o[2U] 
                = vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h253b5ff2__0;
            vlSelf->simple_system__DOT____Vcellout__u_bus__device_addr_o[2U] 
                = vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h75688df5__0;
            vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_hd2efabf0__0 = 0U;
        }
        vlSelf->simple_system__DOT____Vcellout__u_bus__device_req_o[2U] 
            = vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_hd2efabf0__0;
    } else {
        vlSelf->simple_system__DOT____Vcellout__u_bus__device_wdata_o[2U] = 0U;
        vlSelf->simple_system__DOT____Vcellout__u_bus__device_be_o[2U] = 0U;
        vlSelf->simple_system__DOT____Vcellout__u_bus__device_we_o[2U] = 0U;
        vlSelf->simple_system__DOT____Vcellout__u_bus__device_addr_o[2U] = 0U;
        vlSelf->simple_system__DOT____Vcellout__u_bus__device_req_o[2U] = 0U;
    }
    vlSelf->simple_system__DOT__device_wdata[0U] = 
        vlSelf->simple_system__DOT____Vcellout__u_bus__device_wdata_o
        [0U];
    vlSelf->simple_system__DOT__device_wdata[1U] = 
        vlSelf->simple_system__DOT____Vcellout__u_bus__device_wdata_o
        [1U];
    vlSelf->simple_system__DOT__device_wdata[2U] = 
        vlSelf->simple_system__DOT____Vcellout__u_bus__device_wdata_o
        [2U];
    vlSelf->simple_system__DOT__device_be[0U] = vlSelf->simple_system__DOT____Vcellout__u_bus__device_be_o
        [0U];
    vlSelf->simple_system__DOT__device_be[1U] = vlSelf->simple_system__DOT____Vcellout__u_bus__device_be_o
        [1U];
    vlSelf->simple_system__DOT__device_be[2U] = vlSelf->simple_system__DOT____Vcellout__u_bus__device_be_o
        [2U];
    vlSelf->simple_system__DOT__device_we[0U] = vlSelf->simple_system__DOT____Vcellout__u_bus__device_we_o
        [0U];
    vlSelf->simple_system__DOT__device_we[1U] = vlSelf->simple_system__DOT____Vcellout__u_bus__device_we_o
        [1U];
    vlSelf->simple_system__DOT__device_we[2U] = vlSelf->simple_system__DOT____Vcellout__u_bus__device_we_o
        [2U];
    vlSelf->simple_system__DOT__device_addr[0U] = vlSelf->simple_system__DOT____Vcellout__u_bus__device_addr_o
        [0U];
    vlSelf->simple_system__DOT__device_addr[1U] = vlSelf->simple_system__DOT____Vcellout__u_bus__device_addr_o
        [1U];
    vlSelf->simple_system__DOT__device_addr[2U] = vlSelf->simple_system__DOT____Vcellout__u_bus__device_addr_o
        [2U];
    vlSelf->simple_system__DOT__device_req[0U] = vlSelf->simple_system__DOT____Vcellout__u_bus__device_req_o
        [0U];
    vlSelf->simple_system__DOT__device_req[1U] = vlSelf->simple_system__DOT____Vcellout__u_bus__device_req_o
        [1U];
    vlSelf->simple_system__DOT__device_req[2U] = vlSelf->simple_system__DOT____Vcellout__u_bus__device_req_o
        [2U];
    vlSelf->simple_system__DOT__u_timer__DOT__error_d = 0U;
    if ((0U != (0x3ffU & vlSelf->simple_system__DOT__device_addr
                [2U]))) {
        if ((4U != (0x3ffU & vlSelf->simple_system__DOT__device_addr
                    [2U]))) {
            if ((8U != (0x3ffU & vlSelf->simple_system__DOT__device_addr
                        [2U]))) {
                if ((0xcU != (0x3ffU & vlSelf->simple_system__DOT__device_addr
                              [2U]))) {
                    vlSelf->simple_system__DOT__u_timer__DOT__error_d = 1U;
                }
            }
        }
    }
    vlSelf->simple_system__DOT__u_timer__DOT__rdata_d 
        = ((0U == (0x3ffU & vlSelf->simple_system__DOT__device_addr
                   [2U])) ? (IData)(vlSelf->simple_system__DOT__u_timer__DOT__mtime_q)
            : ((4U == (0x3ffU & vlSelf->simple_system__DOT__device_addr
                       [2U])) ? (IData)((vlSelf->simple_system__DOT__u_timer__DOT__mtime_q 
                                         >> 0x20U))
                : ((8U == (0x3ffU & vlSelf->simple_system__DOT__device_addr
                           [2U])) ? (IData)(vlSelf->simple_system__DOT__u_timer__DOT__mtimecmp_q)
                    : ((0xcU == (0x3ffU & vlSelf->simple_system__DOT__device_addr
                                 [2U])) ? (IData)((vlSelf->simple_system__DOT__u_timer__DOT__mtimecmp_q 
                                                   >> 0x20U))
                        : 0U))));
    vlSelf->simple_system__DOT__u_timer__DOT__timer_we 
        = (vlSelf->simple_system__DOT__device_req[2U] 
           & vlSelf->simple_system__DOT__device_we[2U]);
    vlSelf->simple_system__DOT__device_rvalid[0U] = 
        ((~ vlSelf->simple_system__DOT__device_we[0U]) 
         & vlSelf->simple_system__DOT__device_req[0U]);
    vlSelf->simple_system__DOT__device_rvalid[2U] = 
        ((IData)(vlSelf->rs_n_i) & vlSelf->simple_system__DOT__device_req
         [2U]);
    vlSelf->simple_system__DOT__device_rdata[0U] = 
        (vlSelf->simple_system__DOT__device_req[0U]
          ? (vlSelf->simple_system__DOT__device_we[0U]
              ? 0U : vlSelf->simple_system__DOT__data_ram0__DOT__mem
             [(0xfffffU & (vlSelf->simple_system__DOT__device_addr
                           [0U] >> 2U))]) : 0U);
    if (vlSelf->simple_system__DOT__device_req[2U]) {
        vlSelf->simple_system__DOT__device_err[2U] 
            = vlSelf->simple_system__DOT__u_timer__DOT__error_d;
        vlSelf->simple_system__DOT__device_rdata[2U] 
            = vlSelf->simple_system__DOT__u_timer__DOT__rdata_d;
    } else {
        vlSelf->simple_system__DOT__device_err[2U] = 0U;
        vlSelf->simple_system__DOT__device_rdata[2U] = 0U;
    }
    vlSelf->simple_system__DOT__u_timer__DOT__mtime_d 
        = (((QData)((IData)((((IData)(vlSelf->simple_system__DOT__u_timer__DOT__timer_we) 
                              & (4U == (0x3ffU & vlSelf->simple_system__DOT__device_addr
                                        [2U]))) ? (
                                                   (((8U 
                                                      & vlSelf->simple_system__DOT__device_be
                                                      [2U])
                                                      ? 
                                                     (vlSelf->simple_system__DOT__device_wdata
                                                      [2U] 
                                                      >> 0x18U)
                                                      : (IData)(
                                                                (vlSelf->simple_system__DOT__u_timer__DOT__mtime_q 
                                                                 >> 0x38U))) 
                                                    << 0x18U) 
                                                   | ((0xff0000U 
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
                                                                           >> 0x20U)))))))
                              : (IData)(((1ULL + vlSelf->simple_system__DOT__u_timer__DOT__mtime_q) 
                                         >> 0x20U))))) 
            << 0x20U) | (QData)((IData)((((IData)(vlSelf->simple_system__DOT__u_timer__DOT__timer_we) 
                                          & (0U == 
                                             (0x3ffU 
                                              & vlSelf->simple_system__DOT__device_addr
                                              [2U])))
                                          ? ((((8U 
                                                & vlSelf->simple_system__DOT__device_be
                                                [2U])
                                                ? (
                                                   vlSelf->simple_system__DOT__device_wdata
                                                   [2U] 
                                                   >> 0x18U)
                                                : (IData)(
                                                          (vlSelf->simple_system__DOT__u_timer__DOT__mtime_q 
                                                           >> 0x18U))) 
                                              << 0x18U) 
                                             | ((0xff0000U 
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
                                                          : (IData)(vlSelf->simple_system__DOT__u_timer__DOT__mtime_q))))))
                                          : ((IData)(1U) 
                                             + (IData)(vlSelf->simple_system__DOT__u_timer__DOT__mtime_q))))));
    vlSelf->simple_system__DOT__u_timer__DOT__mtimecmp_we 
        = ((IData)(vlSelf->simple_system__DOT__u_timer__DOT__timer_we) 
           & (8U == (0x3ffU & vlSelf->simple_system__DOT__device_addr
                     [2U])));
    vlSelf->simple_system__DOT__u_timer__DOT__mtimecmph_we 
        = ((IData)(vlSelf->simple_system__DOT__u_timer__DOT__timer_we) 
           & (0xcU == (0x3ffU & vlSelf->simple_system__DOT__device_addr
                       [2U])));
    vlSelf->simple_system__DOT____Vcellinp__u_bus__device_rvalid_i[0U] 
        = vlSelf->simple_system__DOT__device_rvalid
        [0U];
    vlSelf->simple_system__DOT____Vcellinp__u_bus__device_rvalid_i[1U] 
        = vlSelf->simple_system__DOT__device_rvalid
        [1U];
    vlSelf->simple_system__DOT____Vcellinp__u_bus__device_rvalid_i[2U] 
        = vlSelf->simple_system__DOT__device_rvalid
        [2U];
    vlSelf->simple_system__DOT____Vcellinp__u_bus__device_err_i[0U] 
        = vlSelf->simple_system__DOT__device_err[0U];
    vlSelf->simple_system__DOT____Vcellinp__u_bus__device_err_i[1U] 
        = vlSelf->simple_system__DOT__device_err[1U];
    vlSelf->simple_system__DOT____Vcellinp__u_bus__device_err_i[2U] 
        = vlSelf->simple_system__DOT__device_err[2U];
    vlSelf->simple_system__DOT____Vcellinp__u_bus__device_rdata_i[0U] 
        = vlSelf->simple_system__DOT__device_rdata[0U];
    vlSelf->simple_system__DOT____Vcellinp__u_bus__device_rdata_i[1U] 
        = vlSelf->simple_system__DOT__device_rdata[1U];
    vlSelf->simple_system__DOT____Vcellinp__u_bus__device_rdata_i[2U] 
        = vlSelf->simple_system__DOT__device_rdata[2U];
    vlSelf->simple_system__DOT__u_timer__DOT__mtimecmp_d 
        = (((QData)((IData)(((IData)(vlSelf->simple_system__DOT__u_timer__DOT__mtimecmph_we)
                              ? ((((8U & vlSelf->simple_system__DOT__device_be
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
                                                                    >> 0x20U)))))))
                              : (IData)((vlSelf->simple_system__DOT__u_timer__DOT__mtimecmp_q 
                                         >> 0x20U))))) 
            << 0x20U) | (QData)((IData)(((IData)(vlSelf->simple_system__DOT__u_timer__DOT__mtimecmp_we)
                                          ? ((((8U 
                                                & vlSelf->simple_system__DOT__device_be
                                                [2U])
                                                ? (
                                                   vlSelf->simple_system__DOT__device_wdata
                                                   [2U] 
                                                   >> 0x18U)
                                                : (IData)(
                                                          (vlSelf->simple_system__DOT__u_timer__DOT__mtimecmp_q 
                                                           >> 0x18U))) 
                                              << 0x18U) 
                                             | ((0xff0000U 
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
                                                          : (IData)(vlSelf->simple_system__DOT__u_timer__DOT__mtimecmp_q))))))
                                          : (IData)(vlSelf->simple_system__DOT__u_timer__DOT__mtimecmp_q)))));
    vlSelf->simple_system__DOT__u_timer__DOT__interrupt_d 
        = ((~ ((IData)(vlSelf->simple_system__DOT__u_timer__DOT__mtimecmp_we) 
               | (IData)(vlSelf->simple_system__DOT__u_timer__DOT__mtimecmph_we))) 
           & ((vlSelf->simple_system__DOT__u_timer__DOT__mtime_q 
               >= vlSelf->simple_system__DOT__u_timer__DOT__mtimecmp_q) 
              | (IData)(vlSelf->simple_system__DOT__u_timer__DOT__interrupt_q)));
    if (vlSelf->rs_n_i) {
        vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_wdata_o = 0U;
        if ((0x2eU == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))) {
            vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_wdata_o 
                = vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i;
        } else if ((0x2fU == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))) {
            vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_wdata_o 
                = vlSelf->simple_system__DOT__core_top0__DOT__ex_imm_i;
        } else if ((0x30U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))) {
            vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_wdata_o 
                = (vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i 
                   | vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__csr_result_r);
        } else if ((0x31U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))) {
            vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_wdata_o 
                = (vlSelf->simple_system__DOT__core_top0__DOT__ex_imm_i 
                   | vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__csr_result_r);
        } else if ((0x32U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))) {
            vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_wdata_o 
                = (vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__csr_result_r 
                   & (~ vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i));
        } else if ((0x33U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i))) {
            vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_wdata_o 
                = (vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__csr_result_r 
                   & (~ vlSelf->simple_system__DOT__core_top0__DOT__ex_imm_i));
        }
        vlSelf->simple_system__DOT__core_top0__DOT__ctl_stall_o 
            = ((IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__stall_req_for_div)
                ? 0xfU : ((IData)(vlSelf->simple_system__DOT__core_top0__DOT__id_stall_req_o)
                           ? 7U : 0U));
        vlSelf->simple_system__DOT__u_bus__DOT__device_sel_resp 
            = vlSelf->simple_system__DOT__u_bus__DOT__device_sel_req;
    } else {
        vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_wdata_o = 0U;
        vlSelf->simple_system__DOT__core_top0__DOT__ctl_stall_o = 0U;
        vlSelf->simple_system__DOT__u_bus__DOT__device_sel_resp = 0U;
    }
    if (vlSelf->simple_system__DOT__u_bus__DOT__host_sel_resp) {
        vlSelf->simple_system__DOT____Vcellout__u_bus__host_rvalid_o[0U] = 0U;
        vlSelf->simple_system__DOT____Vcellout__u_bus__host_err_o[0U] = 0U;
        vlSelf->simple_system__DOT____Vcellout__u_bus__host_rdata_o[0U] = 0U;
    } else {
        if ((2U >= (IData)(vlSelf->simple_system__DOT__u_bus__DOT__device_sel_resp))) {
            vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h07643ed6__0 
                = (1U & vlSelf->simple_system__DOT____Vcellinp__u_bus__device_rvalid_i
                   [vlSelf->simple_system__DOT__u_bus__DOT__device_sel_resp]);
            vlSelf->simple_system__DOT____Vcellout__u_bus__host_rvalid_o[0U] 
                = vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h07643ed6__0;
            vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h659e6344__0 
                = (1U & vlSelf->simple_system__DOT____Vcellinp__u_bus__device_err_i
                   [vlSelf->simple_system__DOT__u_bus__DOT__device_sel_resp]);
            vlSelf->simple_system__DOT____Vcellout__u_bus__host_err_o[0U] 
                = vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h659e6344__0;
            vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h4dcf629a__0 
                = vlSelf->simple_system__DOT____Vcellinp__u_bus__device_rdata_i
                [vlSelf->simple_system__DOT__u_bus__DOT__device_sel_resp];
        } else {
            vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h07643ed6__0 = 0U;
            vlSelf->simple_system__DOT____Vcellout__u_bus__host_rvalid_o[0U] 
                = vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h07643ed6__0;
            vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h659e6344__0 = 0U;
            vlSelf->simple_system__DOT____Vcellout__u_bus__host_err_o[0U] 
                = vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h659e6344__0;
            vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h4dcf629a__0 = 0U;
        }
        vlSelf->simple_system__DOT____Vcellout__u_bus__host_rdata_o[0U] 
            = vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h4dcf629a__0;
    }
    vlSelf->simple_system__DOT__host_rvalid[0U] = vlSelf->simple_system__DOT____Vcellout__u_bus__host_rvalid_o
        [0U];
    vlSelf->simple_system__DOT__host_err[0U] = vlSelf->simple_system__DOT____Vcellout__u_bus__host_err_o
        [0U];
    vlSelf->simple_system__DOT__host_rdata[0U] = vlSelf->simple_system__DOT____Vcellout__u_bus__host_rdata_o
        [0U];
    if (vlSelf->rs_n_i) {
        if (((((((((0xbU == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem_uop_i)) 
                   | (0xcU == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem_uop_i))) 
                  | (0xdU == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem_uop_i))) 
                 | (0xeU == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem_uop_i))) 
                | (0xfU == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem_uop_i))) 
               | (0x10U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem_uop_i))) 
              | (0x11U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem_uop_i))) 
             | (0x12U == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem_uop_i)))) {
            if ((0xbU == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem_uop_i))) {
                vlSelf->simple_system__DOT__core_top0__DOT__mem_rd_wdata_o 
                    = ((2U & vlSelf->simple_system__DOT__core_top0__DOT__mem_mem_addr_i)
                        ? ((1U & vlSelf->simple_system__DOT__core_top0__DOT__mem_mem_addr_i)
                            ? (((- (IData)((vlSelf->simple_system__DOT__host_rdata
                                            [0U] >> 0x1fU))) 
                                << 8U) | (vlSelf->simple_system__DOT__host_rdata
                                          [0U] >> 0x18U))
                            : (((- (IData)((1U & (vlSelf->simple_system__DOT__host_rdata
                                                  [0U] 
                                                  >> 0x17U)))) 
                                << 8U) | (0xffU & (
                                                   vlSelf->simple_system__DOT__host_rdata
                                                   [0U] 
                                                   >> 0x10U))))
                        : ((1U & vlSelf->simple_system__DOT__core_top0__DOT__mem_mem_addr_i)
                            ? (((- (IData)((1U & (vlSelf->simple_system__DOT__host_rdata
                                                  [0U] 
                                                  >> 0xfU)))) 
                                << 8U) | (0xffU & (
                                                   vlSelf->simple_system__DOT__host_rdata
                                                   [0U] 
                                                   >> 8U)))
                            : (((- (IData)((1U & (vlSelf->simple_system__DOT__host_rdata
                                                  [0U] 
                                                  >> 7U)))) 
                                << 8U) | (0xffU & vlSelf->simple_system__DOT__host_rdata
                                          [0U]))));
            } else if ((0xcU == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem_uop_i))) {
                vlSelf->simple_system__DOT__core_top0__DOT__mem_rd_wdata_o 
                    = ((2U & vlSelf->simple_system__DOT__core_top0__DOT__mem_mem_addr_i)
                        ? ((1U & vlSelf->simple_system__DOT__core_top0__DOT__mem_mem_addr_i)
                            ? (vlSelf->simple_system__DOT__host_rdata
                               [0U] >> 0x18U) : (0xffU 
                                                 & (vlSelf->simple_system__DOT__host_rdata
                                                    [0U] 
                                                    >> 0x10U)))
                        : ((1U & vlSelf->simple_system__DOT__core_top0__DOT__mem_mem_addr_i)
                            ? (0xffU & (vlSelf->simple_system__DOT__host_rdata
                                        [0U] >> 8U))
                            : (0xffU & vlSelf->simple_system__DOT__host_rdata
                               [0U])));
            } else if ((0xdU == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem_uop_i))) {
                vlSelf->simple_system__DOT__core_top0__DOT__mem_rd_wdata_o 
                    = ((0U == (3U & vlSelf->simple_system__DOT__core_top0__DOT__mem_mem_addr_i))
                        ? (((- (IData)((1U & (vlSelf->simple_system__DOT__host_rdata
                                              [0U] 
                                              >> 0xfU)))) 
                            << 0x10U) | (0xffffU & 
                                         vlSelf->simple_system__DOT__host_rdata
                                         [0U])) : (
                                                   (2U 
                                                    == 
                                                    (3U 
                                                     & vlSelf->simple_system__DOT__core_top0__DOT__mem_mem_addr_i))
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelf->simple_system__DOT__host_rdata
                                                                 [0U] 
                                                                 >> 0x1fU))) 
                                                     << 0x10U) 
                                                    | (vlSelf->simple_system__DOT__host_rdata
                                                       [0U] 
                                                       >> 0x10U))
                                                    : 0U));
            } else if ((0xeU == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem_uop_i))) {
                vlSelf->simple_system__DOT__core_top0__DOT__mem_rd_wdata_o 
                    = ((0U == (3U & vlSelf->simple_system__DOT__core_top0__DOT__mem_mem_addr_i))
                        ? (0xffffU & vlSelf->simple_system__DOT__host_rdata
                           [0U]) : ((2U == (3U & vlSelf->simple_system__DOT__core_top0__DOT__mem_mem_addr_i))
                                     ? (vlSelf->simple_system__DOT__host_rdata
                                        [0U] >> 0x10U)
                                     : 0U));
            } else if ((0xfU == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem_uop_i))) {
                vlSelf->simple_system__DOT__core_top0__DOT__mem_rd_wdata_o 
                    = vlSelf->simple_system__DOT__host_rdata
                    [0U];
            }
        }
        vlSelf->simple_system__DOT__core_top0__DOT__id_rs1_data_o = 0U;
        if ((0U == (0x1fU & (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                             >> 0xfU)))) {
            vlSelf->simple_system__DOT__core_top0__DOT__id_rs1_data_o = 0U;
        } else if ((1U & (~ (((IData)(vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__pre_ins_is_load) 
                              & ((IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_rd_addr_o) 
                                 == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__id_rs1_raddr_o))) 
                             & (IData)(vlSelf->simple_system__DOT__core_top0__DOT__id_rs1_re_o))))) {
            if ((((IData)(vlSelf->simple_system__DOT__core_top0__DOT__id_rs1_re_o) 
                  & (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_rd_we_i)) 
                 & ((IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_rd_addr_o) 
                    == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__id_rs1_raddr_o)))) {
                vlSelf->simple_system__DOT__core_top0__DOT__id_rs1_data_o 
                    = vlSelf->simple_system__DOT__core_top0__DOT__ex_rd_wdata_o;
            } else if ((((IData)(vlSelf->simple_system__DOT__core_top0__DOT__id_rs1_re_o) 
                         & (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem_rd_we_o)) 
                        & ((IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem_rd_addr_o) 
                           == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__id_rs1_raddr_o)))) {
                vlSelf->simple_system__DOT__core_top0__DOT__id_rs1_data_o 
                    = vlSelf->simple_system__DOT__core_top0__DOT__mem_rd_wdata_o;
            } else if (vlSelf->simple_system__DOT__core_top0__DOT__id_rs1_re_o) {
                vlSelf->simple_system__DOT__core_top0__DOT__id_rs1_data_o 
                    = ((IData)(vlSelf->rs_n_i) ? (
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                                        >> 0xfU)))
                                                    ? 0U
                                                    : 
                                                   ((((IData)(vlSelf->simple_system__DOT__core_top0__DOT__wb_rd_addr_i) 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                                          >> 0xfU))) 
                                                     & ((IData)(vlSelf->simple_system__DOT__core_top0__DOT__id_rs1_re_o) 
                                                        & (IData)(vlSelf->simple_system__DOT__core_top0__DOT__wb_rd_we_i)))
                                                     ? vlSelf->simple_system__DOT__core_top0__DOT__wb_rd_wdata_i
                                                     : 
                                                    ((IData)(vlSelf->simple_system__DOT__core_top0__DOT__id_rs1_re_o)
                                                      ? 
                                                     vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs
                                                     [
                                                     (0x1fU 
                                                      & (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                                         >> 0xfU))]
                                                      : 0U)))
                        : 0U);
            }
        }
        vlSelf->simple_system__DOT__core_top0__DOT__id_rs2_data_o = 0U;
        if ((0U == (0x1fU & (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                             >> 0x14U)))) {
            vlSelf->simple_system__DOT__core_top0__DOT__id_rs2_data_o = 0U;
        } else if ((1U & (~ (((IData)(vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__pre_ins_is_load) 
                              & ((IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_rd_addr_o) 
                                 == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__id_rs2_raddr_o))) 
                             & (IData)(vlSelf->simple_system__DOT__core_top0__DOT__id_rs2_re_o))))) {
            if ((((IData)(vlSelf->simple_system__DOT__core_top0__DOT__id_rs2_re_o) 
                  & (IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_rd_we_i)) 
                 & ((IData)(vlSelf->simple_system__DOT__core_top0__DOT__ex_rd_addr_o) 
                    == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__id_rs2_raddr_o)))) {
                vlSelf->simple_system__DOT__core_top0__DOT__id_rs2_data_o 
                    = vlSelf->simple_system__DOT__core_top0__DOT__ex_rd_wdata_o;
            } else if ((((IData)(vlSelf->simple_system__DOT__core_top0__DOT__id_rs2_re_o) 
                         & (IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem_rd_we_o)) 
                        & ((IData)(vlSelf->simple_system__DOT__core_top0__DOT__mem_rd_addr_o) 
                           == (IData)(vlSelf->simple_system__DOT__core_top0__DOT__id_rs2_raddr_o)))) {
                vlSelf->simple_system__DOT__core_top0__DOT__id_rs2_data_o 
                    = vlSelf->simple_system__DOT__core_top0__DOT__mem_rd_wdata_o;
            } else if (vlSelf->simple_system__DOT__core_top0__DOT__id_rs2_re_o) {
                vlSelf->simple_system__DOT__core_top0__DOT__id_rs2_data_o 
                    = ((IData)(vlSelf->rs_n_i) ? (
                                                   (0U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                                        >> 0x14U)))
                                                    ? 0U
                                                    : 
                                                   ((((IData)(vlSelf->simple_system__DOT__core_top0__DOT__wb_rd_addr_i) 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                                          >> 0x14U))) 
                                                     & ((IData)(vlSelf->simple_system__DOT__core_top0__DOT__id_rs2_re_o) 
                                                        & (IData)(vlSelf->simple_system__DOT__core_top0__DOT__wb_rd_we_i)))
                                                     ? vlSelf->simple_system__DOT__core_top0__DOT__wb_rd_wdata_i
                                                     : 
                                                    ((IData)(vlSelf->simple_system__DOT__core_top0__DOT__id_rs2_re_o)
                                                      ? 
                                                     vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs
                                                     [
                                                     (0x1fU 
                                                      & (vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i 
                                                         >> 0x14U))]
                                                      : 0U)))
                        : 0U);
            }
        }
    } else {
        vlSelf->simple_system__DOT__core_top0__DOT__mem_rd_wdata_o = 0U;
        vlSelf->simple_system__DOT__core_top0__DOT__id_rs1_data_o = 0U;
        vlSelf->simple_system__DOT__core_top0__DOT__id_rs2_data_o = 0U;
    }
}

VL_ATTR_COLD void Vsimple_system___024root___eval_stl(Vsimple_system___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_system___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vsimple_system___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
        vlSelf->__Vm_traceActivity[7U] = 1U;
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimple_system___024root___dump_triggers__ico(Vsimple_system___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_system___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
    if ((2ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 1 is active: Internal 'ico' trigger - DPI export trigger\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimple_system___024root___dump_triggers__act(Vsimple_system___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_system___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: Internal 'act' trigger - DPI export trigger\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @ (posedge ck_i)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @ (posedge ck_i or negedge rs_n_i)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimple_system___024root___dump_triggers__nba(Vsimple_system___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_system___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: Internal 'nba' trigger - DPI export trigger\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @ (posedge ck_i)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @ (posedge ck_i or negedge rs_n_i)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsimple_system___024root___ctor_var_reset(Vsimple_system___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_system___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->ck_i = VL_RAND_RESET_I(1);
    vlSelf->rs_n_i = VL_RAND_RESET_I(1);
    vlSelf->jtag_TCK = VL_RAND_RESET_I(1);
    vlSelf->jtag_TMS = VL_RAND_RESET_I(1);
    vlSelf->jtag_TDI = VL_RAND_RESET_I(1);
    vlSelf->jtag_TDO = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__rom_ce = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->simple_system__DOT__host_req[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->simple_system__DOT__host_gnt[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->simple_system__DOT__host_addr[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->simple_system__DOT__host_we[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->simple_system__DOT__host_be[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->simple_system__DOT__host_wdata[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->simple_system__DOT__host_rvalid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->simple_system__DOT__host_rdata[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->simple_system__DOT__host_err[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->simple_system__DOT__device_req[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->simple_system__DOT__device_addr[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->simple_system__DOT__device_we[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->simple_system__DOT__device_be[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->simple_system__DOT__device_wdata[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->simple_system__DOT__device_rvalid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->simple_system__DOT__device_rdata[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->simple_system__DOT__device_err[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->simple_system__DOT__cfg_device_addr_base[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->simple_system__DOT__cfg_device_addr_mask[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->simple_system__DOT____Vcellinp__u_bus__cfg_device_addr_mask[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->simple_system__DOT____Vcellinp__u_bus__cfg_device_addr_base[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->simple_system__DOT____Vcellinp__u_bus__device_err_i[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->simple_system__DOT____Vcellinp__u_bus__device_rdata_i[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->simple_system__DOT____Vcellinp__u_bus__device_rvalid_i[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->simple_system__DOT____Vcellout__u_bus__device_wdata_o[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->simple_system__DOT____Vcellout__u_bus__device_be_o[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->simple_system__DOT____Vcellout__u_bus__device_we_o[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->simple_system__DOT____Vcellout__u_bus__device_addr_o[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->simple_system__DOT____Vcellout__u_bus__device_req_o[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->simple_system__DOT____Vcellout__u_bus__host_err_o[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->simple_system__DOT____Vcellout__u_bus__host_rdata_o[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->simple_system__DOT____Vcellout__u_bus__host_rvalid_o[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->simple_system__DOT____Vcellinp__u_bus__host_wdata_i[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->simple_system__DOT____Vcellinp__u_bus__host_be_i[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->simple_system__DOT____Vcellinp__u_bus__host_we_i[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->simple_system__DOT____Vcellinp__u_bus__host_addr_i[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->simple_system__DOT____Vcellout__u_bus__host_gnt_o[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->simple_system__DOT____Vcellinp__u_bus__host_req_i[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->simple_system__DOT____Vcellout__console0__rvalid_o = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT____Vcellout__core_top0__ram_data_o = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT____Vcellout__core_top0__ram_we_o = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT____Vcellout__core_top0__ram_addr_o = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT____Vcellout__core_top0__ram_sel_o = VL_RAND_RESET_I(4);
    vlSelf->simple_system__DOT____Vcellout__core_top0__ram_ce_o = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__u_bus__DOT__host_sel_req = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__u_bus__DOT__host_sel_resp = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__u_bus__DOT__device_sel_req = VL_RAND_RESET_I(2);
    vlSelf->simple_system__DOT__u_bus__DOT__device_sel_resp = VL_RAND_RESET_I(2);
    vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_hd2efabf0__0 = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h253b5ff2__0 = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h75688df5__0 = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h753a4492__0 = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h36994927__0 = VL_RAND_RESET_I(4);
    vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h07643ed6__0 = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h659e6344__0 = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h4dcf629a__0 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 1048576; ++__Vi0) {
        vlSelf->simple_system__DOT__data_ram0__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simple_system__DOT__console0__DOT__sim_finish = VL_RAND_RESET_I(3);
    vlSelf->simple_system__DOT__console0__DOT__log_fd = 0;
    vlSelf->simple_system__DOT__u_timer__DOT__timer_we = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__u_timer__DOT__mtimecmp_we = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__u_timer__DOT__mtimecmph_we = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__u_timer__DOT__mtime_q = VL_RAND_RESET_Q(64);
    vlSelf->simple_system__DOT__u_timer__DOT__mtime_d = VL_RAND_RESET_Q(64);
    vlSelf->simple_system__DOT__u_timer__DOT__mtimecmp_q = VL_RAND_RESET_Q(64);
    vlSelf->simple_system__DOT__u_timer__DOT__mtimecmp_d = VL_RAND_RESET_Q(64);
    vlSelf->simple_system__DOT__u_timer__DOT__interrupt_q = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__u_timer__DOT__interrupt_d = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__u_timer__DOT__error_d = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__u_timer__DOT__rdata_d = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__core_top0__DOT__ctl_ie_type_o = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__ctl_set_epc_o = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__ctl_set_mtval_o = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__ctl_mtval_o = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__core_top0__DOT__ctl_set_cause_o = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__ctl_trap_casue_o = VL_RAND_RESET_I(4);
    vlSelf->simple_system__DOT__core_top0__DOT__ctl_mstatus_ie_clear_o = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__ctl_mstatus_ie_set_o = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__ctl_stall_o = VL_RAND_RESET_I(6);
    vlSelf->simple_system__DOT__core_top0__DOT__ctl_flush_o = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__ctl_new_pc_o = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__core_top0__DOT__if_pc_o = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__core_top0__DOT__if_branch_slot_end_o = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__id_pc_i = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__core_top0__DOT__id_inst_i = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__core_top0__DOT__id_next_pc_i = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__core_top0__DOT__id_next_taken_i = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__id_branch_slot_end_i = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__id_rs1_re_o = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__id_rs2_re_o = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__id_rs1_raddr_o = VL_RAND_RESET_I(5);
    vlSelf->simple_system__DOT__core_top0__DOT__id_rs2_raddr_o = VL_RAND_RESET_I(5);
    vlSelf->simple_system__DOT__core_top0__DOT__id_stall_req_o = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__id_inst_o = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__core_top0__DOT__id_rs1_data_o = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__core_top0__DOT__id_rs2_data_o = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__core_top0__DOT__id_rd_we_o = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__id_rd_waddr_o = VL_RAND_RESET_I(5);
    vlSelf->simple_system__DOT__core_top0__DOT__id_alusel_o = VL_RAND_RESET_I(4);
    vlSelf->simple_system__DOT__core_top0__DOT__id_uopcode_o = VL_RAND_RESET_I(16);
    vlSelf->simple_system__DOT__core_top0__DOT__ex_pc_i = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__core_top0__DOT__ex_inst_i = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__core_top0__DOT__ex_next_pc_i = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__core_top0__DOT__ex_next_taken_i = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_slot_end_i = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__ex_alusel_i = VL_RAND_RESET_I(4);
    vlSelf->simple_system__DOT__core_top0__DOT__ex_uop_i = VL_RAND_RESET_I(16);
    vlSelf->simple_system__DOT__core_top0__DOT__ex_rs1_data_i = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__core_top0__DOT__ex_rs2_data_i = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__core_top0__DOT__ex_imm_i = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__core_top0__DOT__ex_rd_we_i = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__ex_rd_addr_i = VL_RAND_RESET_I(5);
    vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_we_i = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_addr_i = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__core_top0__DOT__ex_excepttype_i = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__core_top0__DOT__ex_dividend_o = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__core_top0__DOT__ex_divisor_o = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__core_top0__DOT__ex_div_start_o = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__ex_div_annul_o = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__ex_div_signed_o = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_raddr_o = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_tag_o = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_waddr_o = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__core_top0__DOT__ex_csr_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__core_top0__DOT__ex_rd_addr_o = VL_RAND_RESET_I(5);
    vlSelf->simple_system__DOT__core_top0__DOT__ex_rd_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__core_top0__DOT__ex_mem_addr_o = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__core_top0__DOT__ex_mem_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_request_o = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_taken_o = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_call_o = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_ret_o = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_jmp_o = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_target_o = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_redirect_o = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__ex_branch_redirect_pc_o = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__core_top0__DOT__mem_rd_we_i = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__mem_rd_addr_i = VL_RAND_RESET_I(5);
    vlSelf->simple_system__DOT__core_top0__DOT__mem_rd_wd_i = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__core_top0__DOT__mem_uop_i = VL_RAND_RESET_I(16);
    vlSelf->simple_system__DOT__core_top0__DOT__mem_mem_addr_i = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__core_top0__DOT__mem_mem_wdata_i = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__core_top0__DOT__mem_csr_we_i = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__mem_csr_waddr_i = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__core_top0__DOT__mem_csr_wdata_i = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__core_top0__DOT__mem_excepttype_i = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__core_top0__DOT__mem_pc_i = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__core_top0__DOT__mem_inst_i = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__core_top0__DOT__mem_rd_we_o = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__mem_rd_addr_o = VL_RAND_RESET_I(5);
    vlSelf->simple_system__DOT__core_top0__DOT__mem_rd_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__core_top0__DOT__mem_csr_we_o = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__mem_csr_waddr_o = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__core_top0__DOT__mem_csr_wdata_o = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__core_top0__DOT__mem_excepttype_o = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__core_top0__DOT__mem_pc_o = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__core_top0__DOT__mem_inst_o = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__core_top0__DOT__wb_rd_we_i = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__wb_rd_addr_i = VL_RAND_RESET_I(5);
    vlSelf->simple_system__DOT__core_top0__DOT__wb_rd_wdata_i = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__core_top0__DOT__wb_csr_we_i = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__wb_csr_waddr_i = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__core_top0__DOT__wb_csr_wdata_i = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__core_top0__DOT__wb_instret_incr_i = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__div_result_o = VL_RAND_RESET_Q(64);
    vlSelf->simple_system__DOT__core_top0__DOT__div_ready_o = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__csr_rdata_o = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__core_top0__DOT__csr_mstatus_o = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__core_top0__DOT__csr_mie_o = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__core_top0__DOT__csr_mip_o = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__core_top0__DOT__csr_mepc_o = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__core_top0__DOT____Vcellinp__bp0__stall_i = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__bht_bim_list_r[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__bims = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__bht_predict_taken_w = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_valid_list_r[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_list_r[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_list_r[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_list_r[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_source_pc_list_r[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_list_r[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_matched_r = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_call_r = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_ret_r = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_is_jmp_r = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_target_pc_r = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_rd_entry_r = VL_RAND_RESET_I(6);
    vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__ras_call_matched_w = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__ras_ret_matched_w = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_write_entry_r = VL_RAND_RESET_I(6);
    vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_hit_r = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__btb_alloc_req = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__i1 = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__update = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__ras_list_r[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__ras_proven_cur_index_r = VL_RAND_RESET_I(3);
    vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__ras_proven_next_index_r = VL_RAND_RESET_I(3);
    vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__ras_speculative_cur_index_r = VL_RAND_RESET_I(3);
    vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__ras_speculative_next_index_r = VL_RAND_RESET_I(3);
    vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__i3 = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__core_top0__DOT__bp0__DOT__u_lru__DOT__lfsr_r = VL_RAND_RESET_I(6);
    vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__imm_r = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__csr_we = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__csr_addr = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__ins_valid_r = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__rs1_load_depend = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__rs2_load_depend = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__pre_ins_is_load = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__excepttype_mret = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__excepttype_ecall = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__excepttype_ebreak = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__id0__DOT__excepttype_illegal_inst = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__stall_req_for_div = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__pc_add_imm_w = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__rs1_add_imm_w = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__rs1_eq_rs2_w = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__rs1_ge_rs2_signed_w = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__rs1_ge_rs2_unsigned_w = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__csr_result_r = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__div_result_r = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__jump_result_r = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__logic_result_r = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__read_csr_enable = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT__mul_result_w = VL_RAND_RESET_Q(64);
    vlSelf->simple_system__DOT__core_top0__DOT__ex0__DOT____VdfgExtracted_h8d65eadd__0 = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__div0__DOT__div_var_w = VL_RAND_RESET_Q(33);
    vlSelf->simple_system__DOT__core_top0__DOT__div0__DOT__cnt_r = VL_RAND_RESET_I(6);
    vlSelf->simple_system__DOT__core_top0__DOT__div0__DOT__state_r = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(65, vlSelf->simple_system__DOT__core_top0__DOT__div0__DOT__dividend_r);
    vlSelf->simple_system__DOT__core_top0__DOT__div0__DOT__divisor_r = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__core_top0__DOT__ex_mem0__DOT__branch_tag = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__ex_mem0__DOT__branch_pc = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__core_top0__DOT__mem0__DOT__mem_we = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__mem0__DOT__mem_re = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__mem0__DOT__load_operation = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__mem0__DOT__store_operation = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__mem0__DOT__load_addr_align_exception = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__mem0__DOT__store_addr_align_exception = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__ctrl0__DOT__curr_state = VL_RAND_RESET_I(4);
    vlSelf->simple_system__DOT__core_top0__DOT__ctrl0__DOT__next_state = VL_RAND_RESET_I(4);
    vlSelf->simple_system__DOT__core_top0__DOT__ctrl0__DOT__eip = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__ctrl0__DOT__tip = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__ctrl0__DOT__sip = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mcycle = VL_RAND_RESET_Q(64);
    vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__minstret = VL_RAND_RESET_Q(64);
    vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mstatus_pie = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mstatus_ie = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mie_external = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mie_timer = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mie_sw = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mtvec = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mscratch = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mepc = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__cause = VL_RAND_RESET_I(4);
    vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__cause_rem = VL_RAND_RESET_I(27);
    vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__int_or_exc = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mip_external = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mip_timer = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mip_sw = VL_RAND_RESET_I(1);
    vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__mtval = VL_RAND_RESET_I(32);
    vlSelf->simple_system__DOT__core_top0__DOT__csr0__DOT__MISALIGNED_EXCEPTION = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->simple_system__DOT__core_top0__DOT__regfile_ins__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__VdfgTmp_hb6145d33__0 = 0;
    vlSelf->__Vdpi_export_trigger = 0;
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__n_rst_i__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 9; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
