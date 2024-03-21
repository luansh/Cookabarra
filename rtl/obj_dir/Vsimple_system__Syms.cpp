// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vsimple_system__Syms.h"
#include "Vsimple_system.h"
#include "Vsimple_system___024root.h"

void Vsimple_system___024root____Vdpiexp_simple_system__DOT__data_ram0__DOT__simutil_get_mem_TOP(Vsimple_system__Syms* __restrict vlSymsp, IData/*31:0*/ index, IData/*31:0*/ &val, IData/*31:0*/ &simutil_get_mem__Vfuncrtn);
void Vsimple_system___024root____Vdpiexp_simple_system__DOT__data_ram0__DOT__simutil_memload_TOP(Vsimple_system__Syms* __restrict vlSymsp, std::string file);
void Vsimple_system___024root____Vdpiexp_simple_system__DOT__data_ram0__DOT__simutil_set_mem_TOP(Vsimple_system__Syms* __restrict vlSymsp, IData/*31:0*/ index, IData/*31:0*/ val, IData/*31:0*/ &simutil_set_mem__Vfuncrtn);

// FUNCTIONS
Vsimple_system__Syms::~Vsimple_system__Syms()
{
}

Vsimple_system__Syms::Vsimple_system__Syms(VerilatedContext* contextp, const char* namep, Vsimple_system* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_simple_system__data_ram0.configure(this, name(), "simple_system.data_ram0", "data_ram0", -12, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_simple_system__data_ram0.exportInsert(__Vfinal, "simutil_get_mem", (void*)(&Vsimple_system___024root____Vdpiexp_simple_system__DOT__data_ram0__DOT__simutil_get_mem_TOP));
        __Vscope_simple_system__data_ram0.exportInsert(__Vfinal, "simutil_memload", (void*)(&Vsimple_system___024root____Vdpiexp_simple_system__DOT__data_ram0__DOT__simutil_memload_TOP));
        __Vscope_simple_system__data_ram0.exportInsert(__Vfinal, "simutil_set_mem", (void*)(&Vsimple_system___024root____Vdpiexp_simple_system__DOT__data_ram0__DOT__simutil_set_mem_TOP));
    }
}
