// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimple_system.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vsimple_system__Syms.h"
#include "Vsimple_system__Syms.h"
#include "Vsimple_system___024root.h"

void Vsimple_system___024root____Vdpiexp_simple_system__DOT__data_ram0__DOT__simutil_memload_TOP(Vsimple_system__Syms* __restrict vlSymsp, std::string file) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_system___024root____Vdpiexp_simple_system__DOT__data_ram0__DOT__simutil_memload_TOP\n"); );
    // Init
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    VL_READMEM_N(true, 32, 1048576, 0, VL_CVT_PACK_STR_NN(file)
                 ,  &(vlSymsp->TOP.simple_system__DOT__data_ram0__DOT__mem)
                 , 0, ~0ULL);
}

void Vsimple_system___024root____Vdpiexp_simple_system__DOT__data_ram0__DOT__simutil_set_mem_TOP(Vsimple_system__Syms* __restrict vlSymsp, IData/*31:0*/ index, IData/*31:0*/ val, IData/*31:0*/ &simutil_set_mem__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_system___024root____Vdpiexp_simple_system__DOT__data_ram0__DOT__simutil_set_mem_TOP\n"); );
    // Init
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    {
        if (VL_LTES_III(32, 0x100000U, index)) {
            simutil_set_mem__Vfuncrtn = 0U;
            goto __Vlabel1;
        }
        vlSymsp->TOP.simple_system__DOT__data_ram0__DOT__mem[(0xfffffU 
                                                              & index)] 
            = val;
        simutil_set_mem__Vfuncrtn = 1U;
        __Vlabel1: ;
    }
}

void Vsimple_system___024root____Vdpiexp_simple_system__DOT__data_ram0__DOT__simutil_get_mem_TOP(Vsimple_system__Syms* __restrict vlSymsp, IData/*31:0*/ index, IData/*31:0*/ &val, IData/*31:0*/ &simutil_get_mem__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_system___024root____Vdpiexp_simple_system__DOT__data_ram0__DOT__simutil_get_mem_TOP\n"); );
    // Init
    // Body
    {
        if (VL_LTES_III(32, 0x100000U, index)) {
            simutil_get_mem__Vfuncrtn = 0U;
            goto __Vlabel2;
        }
        val = 0U;
        val = vlSymsp->TOP.simple_system__DOT__data_ram0__DOT__mem
            [(0xfffffU & index)];
        simutil_get_mem__Vfuncrtn = 1U;
        __Vlabel2: ;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimple_system___024root___dump_triggers__ico(Vsimple_system___024root* vlSelf);
#endif  // VL_DEBUG

void Vsimple_system___024root___eval_triggers__ico(Vsimple_system___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_system___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (0U == vlSelf->__VicoIterCount));
    vlSelf->__VicoTriggered.set(1U, (IData)(vlSelf->__Vdpi_export_trigger));
    vlSelf->__Vdpi_export_trigger = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsimple_system___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimple_system___024root___dump_triggers__act(Vsimple_system___024root* vlSelf);
#endif  // VL_DEBUG

void Vsimple_system___024root___eval_triggers__act(Vsimple_system___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_system___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (IData)(vlSelf->__Vdpi_export_trigger));
    vlSelf->__Vdpi_export_trigger = 0U;
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->ck_i) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk_i__0))));
    vlSelf->__VactTriggered.set(2U, (((IData)(vlSelf->ck_i) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clk_i__0))) 
                                     | ((~ (IData)(vlSelf->rs_n_i)) 
                                        & (IData)(vlSelf->__Vtrigprevexpr___TOP__n_rst_i__0))));
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = vlSelf->ck_i;
    vlSelf->__Vtrigprevexpr___TOP__n_rst_i__0 = vlSelf->rs_n_i;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsimple_system___024root___dump_triggers__act(vlSelf);
    }
#endif
}
