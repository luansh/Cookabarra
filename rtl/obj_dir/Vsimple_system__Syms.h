// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSIMPLE_SYSTEM__SYMS_H_
#define VERILATED_VSIMPLE_SYSTEM__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vsimple_system.h"

// INCLUDE MODULE CLASSES
#include "Vsimple_system___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)
using Vsimple_system__Vcb_simutil_get_mem_t = void (*) (Vsimple_system__Syms* __restrict vlSymsp, IData/*31:0*/ index, IData/*31:0*/ &val, IData/*31:0*/ &simutil_get_mem__Vfuncrtn);
using Vsimple_system__Vcb_simutil_memload_t = void (*) (Vsimple_system__Syms* __restrict vlSymsp, std::string file);
using Vsimple_system__Vcb_simutil_set_mem_t = void (*) (Vsimple_system__Syms* __restrict vlSymsp, IData/*31:0*/ index, IData/*31:0*/ val, IData/*31:0*/ &simutil_set_mem__Vfuncrtn);

// SYMS CLASS (contains all model state)
class Vsimple_system__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vsimple_system* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vsimple_system___024root       TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_simple_system__data_ram0;

    // CONSTRUCTORS
    Vsimple_system__Syms(VerilatedContext* contextp, const char* namep, Vsimple_system* modelp);
    ~Vsimple_system__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
