// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VSIMPLE_SYSTEM__DPI_H_
#define VERILATED_VSIMPLE_SYSTEM__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI EXPORTS
    // DPI export at /home/luansh/bench/Cookabarra/rtl/tb/ram.v:112:18
    extern int simutil_get_mem(int index, svBitVecVal* val);
    // DPI export at /home/luansh/bench/Cookabarra/rtl/tb/ram.v:92:10
    extern void simutil_memload(const char* file);
    // DPI export at /home/luansh/bench/Cookabarra/rtl/tb/ram.v:101:18
    extern int simutil_set_mem(int index, const svBitVecVal* val);

#ifdef __cplusplus
}
#endif

#endif  // guard
