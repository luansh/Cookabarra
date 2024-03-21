// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsimple_system.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vsimple_system__Syms.h"
#include "Vsimple_system___024root.h"

VL_INLINE_OPT void Vsimple_system___024root___nba_comb__TOP__1(Vsimple_system___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_system___024root___nba_comb__TOP__1\n"); );
    // Body
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
    vlSelf->simple_system__DOT____Vcellinp__u_bus__device_rvalid_i[0U] 
        = vlSelf->simple_system__DOT__device_rvalid
        [0U];
    vlSelf->simple_system__DOT____Vcellinp__u_bus__device_rvalid_i[1U] 
        = vlSelf->simple_system__DOT__device_rvalid
        [1U];
    vlSelf->simple_system__DOT____Vcellinp__u_bus__device_rvalid_i[2U] 
        = vlSelf->simple_system__DOT__device_rvalid
        [2U];
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
    vlSelf->simple_system__DOT__device_rdata[2U] = 
        (vlSelf->simple_system__DOT__device_req[2U]
          ? vlSelf->simple_system__DOT__u_timer__DOT__rdata_d
          : 0U);
    if (vlSelf->simple_system__DOT__u_bus__DOT__host_sel_resp) {
        vlSelf->simple_system__DOT____Vcellout__u_bus__host_rvalid_o[0U] = 0U;
    } else {
        vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h07643ed6__0 
            = ((2U >= (IData)(vlSelf->simple_system__DOT__u_bus__DOT__device_sel_resp)) 
               & vlSelf->simple_system__DOT____Vcellinp__u_bus__device_rvalid_i
               [vlSelf->simple_system__DOT__u_bus__DOT__device_sel_resp]);
        vlSelf->simple_system__DOT____Vcellout__u_bus__host_rvalid_o[0U] 
            = vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h07643ed6__0;
    }
    vlSelf->simple_system__DOT__host_rvalid[0U] = vlSelf->simple_system__DOT____Vcellout__u_bus__host_rvalid_o
        [0U];
}

VL_INLINE_OPT void Vsimple_system___024root___nba_comb__TOP__2(Vsimple_system___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_system___024root___nba_comb__TOP__2\n"); );
    // Body
    vlSelf->simple_system__DOT__device_rdata[0U] = 
        (vlSelf->simple_system__DOT__device_req[0U]
          ? (vlSelf->simple_system__DOT__device_we[0U]
              ? 0U : vlSelf->simple_system__DOT__data_ram0__DOT__mem
             [(0xfffffU & (vlSelf->simple_system__DOT__device_addr
                           [0U] >> 2U))]) : 0U);
}

VL_INLINE_OPT void Vsimple_system___024root___nba_comb__TOP__3(Vsimple_system___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_system___024root___nba_comb__TOP__3\n"); );
    // Body
    vlSelf->simple_system__DOT____Vcellinp__u_bus__device_rdata_i[0U] 
        = vlSelf->simple_system__DOT__device_rdata[0U];
    vlSelf->simple_system__DOT____Vcellinp__u_bus__device_rdata_i[1U] 
        = vlSelf->simple_system__DOT__device_rdata[1U];
    vlSelf->simple_system__DOT____Vcellinp__u_bus__device_rdata_i[2U] 
        = vlSelf->simple_system__DOT__device_rdata[2U];
    if (vlSelf->simple_system__DOT__u_bus__DOT__host_sel_resp) {
        vlSelf->simple_system__DOT____Vcellout__u_bus__host_rdata_o[0U] = 0U;
    } else {
        vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h4dcf629a__0 
            = ((2U >= (IData)(vlSelf->simple_system__DOT__u_bus__DOT__device_sel_resp))
                ? vlSelf->simple_system__DOT____Vcellinp__u_bus__device_rdata_i
               [vlSelf->simple_system__DOT__u_bus__DOT__device_sel_resp]
                : 0U);
        vlSelf->simple_system__DOT____Vcellout__u_bus__host_rdata_o[0U] 
            = vlSelf->simple_system__DOT__u_bus__DOT____Vlvbound_h4dcf629a__0;
    }
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

void Vsimple_system___024root___nba_sequent__TOP__0(Vsimple_system___024root* vlSelf);
void Vsimple_system___024root___nba_sequent__TOP__1(Vsimple_system___024root* vlSelf);
void Vsimple_system___024root___nba_sequent__TOP__2(Vsimple_system___024root* vlSelf);
void Vsimple_system___024root___nba_comb__TOP__0(Vsimple_system___024root* vlSelf);
void Vsimple_system___024root___nba_sequent__TOP__3(Vsimple_system___024root* vlSelf);

void Vsimple_system___024root___eval_nba(Vsimple_system___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_system___024root___eval_nba\n"); );
    // Body
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsimple_system___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsimple_system___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsimple_system___024root___nba_sequent__TOP__2(vlSelf);
    }
    if ((6ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsimple_system___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsimple_system___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if ((6ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsimple_system___024root___nba_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsimple_system___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((7ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vsimple_system___024root___nba_comb__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
    }
}

void Vsimple_system___024root___eval_triggers__ico(Vsimple_system___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimple_system___024root___dump_triggers__ico(Vsimple_system___024root* vlSelf);
#endif  // VL_DEBUG
void Vsimple_system___024root___eval_ico(Vsimple_system___024root* vlSelf);
void Vsimple_system___024root___eval_triggers__act(Vsimple_system___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimple_system___024root___dump_triggers__act(Vsimple_system___024root* vlSelf);
#endif  // VL_DEBUG
void Vsimple_system___024root___eval_act(Vsimple_system___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vsimple_system___024root___dump_triggers__nba(Vsimple_system___024root* vlSelf);
#endif  // VL_DEBUG

void Vsimple_system___024root___eval(Vsimple_system___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_system___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<3> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        Vsimple_system___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                Vsimple_system___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/luansh/bench/Cookabarra/rtl/tb/simple_system.v", 25, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            Vsimple_system___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vsimple_system___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vsimple_system___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/luansh/bench/Cookabarra/rtl/tb/simple_system.v", 25, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vsimple_system___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vsimple_system___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/luansh/bench/Cookabarra/rtl/tb/simple_system.v", 25, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vsimple_system___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vsimple_system___024root___eval_debug_assertions(Vsimple_system___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsimple_system__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsimple_system___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->ck_i & 0xfeU))) {
        Verilated::overWidthError("ck_i");}
    if (VL_UNLIKELY((vlSelf->rs_n_i & 0xfeU))) {
        Verilated::overWidthError("rs_n_i");}
    if (VL_UNLIKELY((vlSelf->jtag_TCK & 0xfeU))) {
        Verilated::overWidthError("jtag_TCK");}
    if (VL_UNLIKELY((vlSelf->jtag_TMS & 0xfeU))) {
        Verilated::overWidthError("jtag_TMS");}
    if (VL_UNLIKELY((vlSelf->jtag_TDI & 0xfeU))) {
        Verilated::overWidthError("jtag_TDI");}
}
#endif  // VL_DEBUG
