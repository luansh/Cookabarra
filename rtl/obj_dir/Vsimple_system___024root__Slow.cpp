// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimple_system.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vsimple_system__Syms.h"
#include "Vsimple_system__Syms.h"
#include "Vsimple_system___024root.h"

void Vsimple_system___024root___ctor_var_reset(Vsimple_system___024root* vlSelf);

Vsimple_system___024root::Vsimple_system___024root(Vsimple_system__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vsimple_system___024root___ctor_var_reset(this);
}

void Vsimple_system___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vsimple_system___024root::~Vsimple_system___024root() {
}
