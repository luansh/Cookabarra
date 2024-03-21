// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimple_system.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vsimple_system__Syms.h"
#include "Vsimple_system__Syms.h"
#include "Vsimple_system___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimple_system___024root___dump_triggers__stl(Vsimple_system___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vsimple_system___024root___eval_triggers__stl(Vsimple_system___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_system___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (0U == vlSelf->__VstlIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vsimple_system___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
