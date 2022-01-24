// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Z80.h for the primary calling header

#include "verilated.h"

#include "Z80___024root.h"

VL_INLINE_OPT void Z80___024root___sequent__TOP__7(Z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Z80___024root___sequent__TOP__7\n"); );
    // Init
    SData/*15:0*/ tv80n__DOT__i_tv80_core__DOT__PC16_B;
    SData/*15:0*/ tv80n__DOT__i_tv80_core__DOT__ID16_B;
    CData/*2:0*/ tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD;
    CData/*1:0*/ tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR;
    // Body
    tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD 
        = (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                 >> 3U));
    vlSelf->tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS 
        = (7U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR));
    tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR 
        = (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                 >> 4U));
    vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 1U;
    vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 
        ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))
          ? 4U : 3U);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0U;
    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0U;
    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To = 0U;
    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 7U;
    if ((0U == (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                        } else if (
                                                   (2U 
                                                    & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                        }
                                    } else {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                                = (
                                                   (8U 
                                                    & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                                   | (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                                = (7U 
                                                   | (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To));
                                        }
                                    }
                                } else if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__cc 
                                                = (7U 
                                                   & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U));
                                            vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__FF 
                                                = vlSelf->tv80n__DOT__i_tv80_core__DOT__F;
                                            vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__Vfuncout 
                                                = (1U 
                                                   & ((4U 
                                                       & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__cc))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__cc))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__cc))
                                                         ? 
                                                        ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__FF) 
                                                         >> 7U)
                                                         : 
                                                        (~ 
                                                         ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__FF) 
                                                          >> 7U)))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__cc))
                                                         ? 
                                                        ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__FF) 
                                                         >> 2U)
                                                         : 
                                                        (~ 
                                                         ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__FF) 
                                                          >> 2U))))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__cc))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__cc))
                                                         ? (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__FF)
                                                         : 
                                                        (~ (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__FF)))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__cc))
                                                         ? 
                                                        ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__FF) 
                                                         >> 6U)
                                                         : 
                                                        (~ 
                                                         ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__FF) 
                                                          >> 6U))))));
                                            if (vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__Vfuncout) {
                                                vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                                vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                            } else {
                                                vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                            }
                                        } else if (
                                                   (8U 
                                                    & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                        }
                                    }
                                }
                            } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                }
                            } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 6U;
                            } else {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc 
                                        = (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U));
                                    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF 
                                        = vlSelf->tv80n__DOT__i_tv80_core__DOT__F;
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                                    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__Vfuncout 
                                        = (1U & ((4U 
                                                  & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc))
                                                    ? 
                                                   ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF) 
                                                    >> 7U)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF) 
                                                     >> 7U)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc))
                                                    ? 
                                                   ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF) 
                                                    >> 2U)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF) 
                                                     >> 2U))))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc))
                                                    ? (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF)
                                                    : 
                                                   (~ (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc))
                                                    ? 
                                                   ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF) 
                                                    >> 6U)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF) 
                                                     >> 6U))))));
                                    if (vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__Vfuncout) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    } else {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 1U;
                                    }
                                } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                                }
                            }
                        } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                    } else if ((2U 
                                                & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                    }
                                } else {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                            = ((8U 
                                                & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                               | (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                            = (7U | (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To));
                                    }
                                }
                            } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                        = ((3U == (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                            ? 7U : 
                                           ((IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                            << 1U));
                                } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                        = ((3U == (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                            ? 0xbU : 
                                           (1U | ((IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                                  << 1U)));
                                }
                            } else {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc 
                                            = (7U & 
                                               ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U));
                                        vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF 
                                            = vlSelf->tv80n__DOT__i_tv80_core__DOT__F;
                                        vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__Vfuncout 
                                            = (1U & 
                                               ((4U 
                                                 & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc))
                                                   ? 
                                                  ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF) 
                                                   >> 7U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF) 
                                                    >> 7U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc))
                                                   ? 
                                                  ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF) 
                                                   >> 2U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF) 
                                                    >> 2U))))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc))
                                                   ? (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF)
                                                   : 
                                                  (~ (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc))
                                                   ? 
                                                  ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF) 
                                                   >> 6U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF) 
                                                    >> 6U))))));
                                        if (vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__Vfuncout) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                        } else {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                    }
                                }
                            }
                        } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            }
                        } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((3U == (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                        ? 0xbU : ((8U 
                                                   & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                                  | (1U 
                                                     | ((IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                                        << 1U))));
                            } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((3U == (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                        ? 7U : ((8U 
                                                 & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                                | ((IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                                   << 1U)));
                            }
                        } else {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc 
                                    = (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U));
                                vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF 
                                    = vlSelf->tv80n__DOT__i_tv80_core__DOT__F;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                                vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__Vfuncout 
                                    = (1U & ((4U & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc))
                                              ? ((2U 
                                                  & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc))
                                                   ? 
                                                  ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF) 
                                                   >> 7U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF) 
                                                    >> 7U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc))
                                                   ? 
                                                  ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF) 
                                                   >> 2U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF) 
                                                    >> 2U))))
                                              : ((2U 
                                                  & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc))
                                                   ? (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF)
                                                   : 
                                                  (~ (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc))
                                                   ? 
                                                  ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF) 
                                                   >> 6U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF) 
                                                    >> 6U))))));
                                if (vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__Vfuncout) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                } else {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 1U;
                                }
                            } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            }
                        }
                    } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                    } else if ((2U 
                                                & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                    }
                                } else {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                            = ((8U 
                                                & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                               | (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                            = (7U | (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To));
                                    }
                                }
                            } else if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc 
                                            = (7U & 
                                               ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U));
                                        vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF 
                                            = vlSelf->tv80n__DOT__i_tv80_core__DOT__F;
                                        vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__Vfuncout 
                                            = (1U & 
                                               ((4U 
                                                 & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc))
                                                   ? 
                                                  ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF) 
                                                   >> 7U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF) 
                                                    >> 7U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc))
                                                   ? 
                                                  ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF) 
                                                   >> 2U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF) 
                                                    >> 2U))))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc))
                                                   ? (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF)
                                                   : 
                                                  (~ (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc))
                                                   ? 
                                                  ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF) 
                                                   >> 6U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF) 
                                                    >> 6U))))));
                                        if (vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__Vfuncout) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                        } else {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                    }
                                }
                            }
                        } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            }
                        } else if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc 
                                    = (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U));
                                vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF 
                                    = vlSelf->tv80n__DOT__i_tv80_core__DOT__F;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                                vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__Vfuncout 
                                    = (1U & ((4U & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc))
                                              ? ((2U 
                                                  & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc))
                                                   ? 
                                                  ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF) 
                                                   >> 7U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF) 
                                                    >> 7U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc))
                                                   ? 
                                                  ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF) 
                                                   >> 2U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF) 
                                                    >> 2U))))
                                              : ((2U 
                                                  & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc))
                                                   ? (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF)
                                                   : 
                                                  (~ (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc))
                                                   ? 
                                                  ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF) 
                                                   >> 6U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF) 
                                                    >> 6U))))));
                                if (vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__Vfuncout) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                } else {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 1U;
                                }
                            } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            }
                        }
                    } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                }
                            } else {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                        = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                           | (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                        = (7U | (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To));
                                }
                            }
                        } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = ((3U == (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                        ? 7U : ((IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                                << 1U));
                            } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = ((3U == (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                        ? 0xbU : (1U 
                                                  | ((IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                                     << 1U)));
                            }
                        } else {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc 
                                        = (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U));
                                    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF 
                                        = vlSelf->tv80n__DOT__i_tv80_core__DOT__F;
                                    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__Vfuncout 
                                        = (1U & ((4U 
                                                  & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc))
                                                    ? 
                                                   ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF) 
                                                    >> 7U)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF) 
                                                     >> 7U)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc))
                                                    ? 
                                                   ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF) 
                                                    >> 2U)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF) 
                                                     >> 2U))))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc))
                                                    ? (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF)
                                                    : 
                                                   (~ (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc))
                                                    ? 
                                                   ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF) 
                                                    >> 6U)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF) 
                                                     >> 6U))))));
                                    if (vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__Vfuncout) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                    } else {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                    }
                                } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                }
                            }
                        }
                    } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To = 5U;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 5U;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                            } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To = 4U;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 4U;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            } else if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                            }
                        } else {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        }
                    } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((3U == (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                    ? 0xbU : ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                              | (1U 
                                                 | ((IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                                    << 1U))));
                        } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((3U == (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                    ? 7U : ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                            | ((IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                               << 1U)));
                        }
                    } else {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc 
                                = (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 3U));
                            vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF 
                                = vlSelf->tv80n__DOT__i_tv80_core__DOT__F;
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                            vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__Vfuncout 
                                = (1U & ((4U & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc))
                                          ? ((2U & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc))
                                              ? ((1U 
                                                  & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc))
                                                  ? 
                                                 ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF) 
                                                  >> 7U)
                                                  : 
                                                 (~ 
                                                  ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF) 
                                                   >> 7U)))
                                              : ((1U 
                                                  & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc))
                                                  ? 
                                                 ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF) 
                                                  >> 2U)
                                                  : 
                                                 (~ 
                                                  ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF) 
                                                   >> 2U))))
                                          : ((2U & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc))
                                              ? ((1U 
                                                  & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc))
                                                  ? (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF)
                                                  : 
                                                 (~ (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF)))
                                              : ((1U 
                                                  & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc))
                                                  ? 
                                                 ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF) 
                                                  >> 6U)
                                                  : 
                                                 (~ 
                                                  ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF) 
                                                   >> 6U))))));
                            if (vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__Vfuncout) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            } else {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 1U;
                            }
                        } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        }
                    }
                } else if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                    } else if ((2U 
                                                & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                    }
                                } else {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                            = ((8U 
                                                & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                               | (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                            = (7U | (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To));
                                    }
                                }
                            } else if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc 
                                            = (7U & 
                                               ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U));
                                        vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF 
                                            = vlSelf->tv80n__DOT__i_tv80_core__DOT__F;
                                        vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__Vfuncout 
                                            = (1U & 
                                               ((4U 
                                                 & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc))
                                                   ? 
                                                  ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF) 
                                                   >> 7U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF) 
                                                    >> 7U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc))
                                                   ? 
                                                  ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF) 
                                                   >> 2U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF) 
                                                    >> 2U))))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc))
                                                   ? (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF)
                                                   : 
                                                  (~ (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc))
                                                   ? 
                                                  ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF) 
                                                   >> 6U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF) 
                                                    >> 6U))))));
                                        if (vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__Vfuncout) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                        } else {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                        }
                                    } else if ((8U 
                                                & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                    }
                                }
                            }
                        } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 4U;
                                }
                            } else {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            }
                        } else if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc 
                                    = (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U));
                                vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF 
                                    = vlSelf->tv80n__DOT__i_tv80_core__DOT__F;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                                vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__Vfuncout 
                                    = (1U & ((4U & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc))
                                              ? ((2U 
                                                  & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc))
                                                   ? 
                                                  ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF) 
                                                   >> 7U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF) 
                                                    >> 7U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc))
                                                   ? 
                                                  ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF) 
                                                   >> 2U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF) 
                                                    >> 2U))))
                                              : ((2U 
                                                  & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc))
                                                   ? (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF)
                                                   : 
                                                  (~ (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc))
                                                   ? 
                                                  ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF) 
                                                   >> 6U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF) 
                                                    >> 6U))))));
                                if (vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__Vfuncout) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                } else {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 1U;
                                }
                            } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            }
                        }
                    } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                }
                            } else {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                        = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                           | (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                        = (7U | (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To));
                                }
                            }
                        } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = ((3U == (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                        ? 7U : ((IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                                << 1U));
                            } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = ((3U == (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                        ? 0xbU : (1U 
                                                  | ((IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                                     << 1U)));
                            }
                        } else {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc 
                                        = (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U));
                                    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF 
                                        = vlSelf->tv80n__DOT__i_tv80_core__DOT__F;
                                    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__Vfuncout 
                                        = (1U & ((4U 
                                                  & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc))
                                                    ? 
                                                   ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF) 
                                                    >> 7U)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF) 
                                                     >> 7U)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc))
                                                    ? 
                                                   ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF) 
                                                    >> 2U)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF) 
                                                     >> 2U))))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc))
                                                    ? (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF)
                                                    : 
                                                   (~ (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc))
                                                    ? 
                                                   ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF) 
                                                    >> 6U)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF) 
                                                     >> 6U))))));
                                    if (vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__Vfuncout) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                    } else {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                    }
                                } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                }
                            }
                        }
                    } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 4U;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                            }
                        } else {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        }
                    } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((3U == (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                    ? 0xbU : ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                              | (1U 
                                                 | ((IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                                    << 1U))));
                        } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((3U == (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                    ? 7U : ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                            | ((IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                               << 1U)));
                        }
                    } else {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc 
                                = (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 3U));
                            vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF 
                                = vlSelf->tv80n__DOT__i_tv80_core__DOT__F;
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                            vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__Vfuncout 
                                = (1U & ((4U & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc))
                                          ? ((2U & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc))
                                              ? ((1U 
                                                  & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc))
                                                  ? 
                                                 ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF) 
                                                  >> 7U)
                                                  : 
                                                 (~ 
                                                  ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF) 
                                                   >> 7U)))
                                              : ((1U 
                                                  & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc))
                                                  ? 
                                                 ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF) 
                                                  >> 2U)
                                                  : 
                                                 (~ 
                                                  ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF) 
                                                   >> 2U))))
                                          : ((2U & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc))
                                              ? ((1U 
                                                  & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc))
                                                  ? (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF)
                                                  : 
                                                 (~ (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF)))
                                              : ((1U 
                                                  & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc))
                                                  ? 
                                                 ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF) 
                                                  >> 6U)
                                                  : 
                                                 (~ 
                                                  ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF) 
                                                   >> 6U))))));
                            if (vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__Vfuncout) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            } else {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 1U;
                            }
                        } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        }
                    }
                } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                }
                            } else {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                        = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                           | (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                        = (7U | (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To));
                                }
                            }
                        } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                }
                            }
                        } else {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc 
                                        = (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U));
                                    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF 
                                        = vlSelf->tv80n__DOT__i_tv80_core__DOT__F;
                                    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__Vfuncout 
                                        = (1U & ((4U 
                                                  & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc))
                                                    ? 
                                                   ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF) 
                                                    >> 7U)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF) 
                                                     >> 7U)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc))
                                                    ? 
                                                   ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF) 
                                                    >> 2U)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF) 
                                                     >> 2U))))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc))
                                                    ? (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF)
                                                    : 
                                                   (~ (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc))
                                                    ? 
                                                   ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF) 
                                                    >> 6U)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF) 
                                                     >> 6U))))));
                                    if (vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__Vfuncout) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                    } else {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                    }
                                } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                                }
                            }
                        }
                    } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        }
                    } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        }
                    } else {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc 
                                = (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 3U));
                            vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF 
                                = vlSelf->tv80n__DOT__i_tv80_core__DOT__F;
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                            vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__Vfuncout 
                                = (1U & ((4U & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc))
                                          ? ((2U & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc))
                                              ? ((1U 
                                                  & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc))
                                                  ? 
                                                 ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF) 
                                                  >> 7U)
                                                  : 
                                                 (~ 
                                                  ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF) 
                                                   >> 7U)))
                                              : ((1U 
                                                  & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc))
                                                  ? 
                                                 ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF) 
                                                  >> 2U)
                                                  : 
                                                 (~ 
                                                  ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF) 
                                                   >> 2U))))
                                          : ((2U & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc))
                                              ? ((1U 
                                                  & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc))
                                                  ? (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF)
                                                  : 
                                                 (~ (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF)))
                                              : ((1U 
                                                  & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc))
                                                  ? 
                                                 ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF) 
                                                  >> 6U)
                                                  : 
                                                 (~ 
                                                  ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF) 
                                                   >> 6U))))));
                            if (vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__Vfuncout) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            } else {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 1U;
                            }
                        } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        }
                    }
                } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                            } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                            }
                        } else {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                       | (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = (7U | (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To));
                            }
                        }
                    } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((3U == (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                    ? 7U : ((IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                            << 1U));
                        } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((3U == (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                    ? 0xbU : (1U | 
                                              ((IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                               << 1U)));
                        }
                    } else {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 1U)))) {
                            if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc 
                                    = (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U));
                                vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF 
                                    = vlSelf->tv80n__DOT__i_tv80_core__DOT__F;
                                vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__Vfuncout 
                                    = (1U & ((4U & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc))
                                              ? ((2U 
                                                  & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc))
                                                   ? 
                                                  ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF) 
                                                   >> 7U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF) 
                                                    >> 7U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc))
                                                   ? 
                                                  ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF) 
                                                   >> 2U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF) 
                                                    >> 2U))))
                                              : ((2U 
                                                  & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc))
                                                   ? (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF)
                                                   : 
                                                  (~ (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc))
                                                   ? 
                                                  ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF) 
                                                   >> 6U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF) 
                                                    >> 6U))))));
                                if (vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__Vfuncout) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
                                } else {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                }
                            } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
                            }
                        }
                    }
                } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                    } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((3U == (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                ? 0xbU : ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                          | (1U | ((IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                                   << 1U))));
                    } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((3U == (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                ? 7U : ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                        | ((IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                           << 1U)));
                    }
                } else {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc 
                            = (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                     >> 3U));
                        vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF 
                            = vlSelf->tv80n__DOT__i_tv80_core__DOT__F;
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                        vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__Vfuncout 
                            = (1U & ((4U & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc))
                                      ? ((2U & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc))
                                          ? ((1U & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc))
                                              ? ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF) 
                                                 >> 7U)
                                              : (~ 
                                                 ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF) 
                                                  >> 7U)))
                                          : ((1U & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc))
                                              ? ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF) 
                                                 >> 2U)
                                              : (~ 
                                                 ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF) 
                                                  >> 2U))))
                                      : ((2U & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc))
                                          ? ((1U & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc))
                                              ? (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF)
                                              : (~ (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF)))
                                          : ((1U & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc))
                                              ? ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF) 
                                                 >> 6U)
                                              : (~ 
                                                 ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF) 
                                                  >> 6U))))));
                        if (vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__Vfuncout) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        } else {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 1U;
                        }
                    } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                    } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                    }
                }
            } else if ((6U == (7U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                           | (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = (7U | (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To));
                }
            } else {
                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                    = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                       | (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                    = (7U | (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To));
            }
        } else if ((0x40U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((0x36U != (0x3fU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                if ((6U == (7U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                    }
                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                    }
                } else if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 3U)))) {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = vlSelf->tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS;
                    }
                } else {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                           | (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS));
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                           | (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                }
            }
        } else if ((0x20U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                            = vlSelf->tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS;
                                    }
                                } else {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                            = ((8U 
                                                & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                               | (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                                    }
                                }
                            }
                        } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                                } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                        = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                           | (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                                }
                            } else {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                       | (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                            }
                        } else if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                       | (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                            }
                        } else {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                        }
                    } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 6U;
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 
                                = (0xcU | (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR));
                        } else {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                            if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                            }
                        }
                    } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (5U | (8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)));
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((((0U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                   >> 4U))) 
                                     | (1U == (3U & 
                                               ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U)))) 
                                    | (2U == (3U & 
                                              ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))))
                                    ? ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                       | (1U | (6U 
                                                & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U))))
                                    : 8U);
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                        } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (4U | (8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)));
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((((0U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                   >> 4U))) 
                                     | (1U == (3U & 
                                               ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U)))) 
                                    | (2U == (3U & 
                                              ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))))
                                    ? ((9U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                       | (6U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))
                                    : 9U);
                        }
                    } else {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            if ((0U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d 
                                    = ((0x40U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F))
                                        ? 2U : 3U);
                            } else if ((1U == (3U & 
                                               ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d 
                                    = ((0x40U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F))
                                        ? 3U : 2U);
                            } else if ((2U == (3U & 
                                               ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d 
                                    = ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F))
                                        ? 2U : 3U);
                            } else if ((3U == (3U & 
                                               ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d 
                                    = ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F))
                                        ? 3U : 2U);
                            }
                        } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                        }
                    }
                } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                        = vlSelf->tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS;
                                }
                            } else {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                        = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                           | (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                                }
                            }
                        }
                    } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                       | (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                            }
                        } else {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                        }
                    } else if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                        }
                    } else {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                    }
                } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 6U;
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 
                            = (4U | (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR));
                    } else {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 1U)))) {
                            if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                            }
                        }
                    }
                } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((3U == (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                ? 8U : ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                        | (1U | ((IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                                 << 1U))));
                    } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((3U == (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                                ? 9U : ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                        | ((IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                           << 1U)));
                    }
                } else {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        if ((0U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d 
                                = ((0x40U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F))
                                    ? 2U : 3U);
                        } else if ((1U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d 
                                = ((0x40U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F))
                                    ? 3U : 2U);
                        } else if ((2U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d 
                                = ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F))
                                    ? 2U : 3U);
                        } else if ((3U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d 
                                = ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F))
                                    ? 3U : 2U);
                        }
                    } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                    }
                }
            } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                        = vlSelf->tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS;
                                }
                            } else {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                        = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                           | (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                                }
                            }
                        }
                    } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                       | (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                            }
                        } else {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                        }
                    } else if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                        }
                    } else {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                    }
                } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 6U;
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 
                            = (0xcU | (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR));
                    } else {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 1U)))) {
                            if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                            } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = (5U | (8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)));
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                            } else if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = (4U | (8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)));
                            }
                        }
                    }
                } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (5U | (8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)));
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((((0U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))) 
                                 | (1U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))) 
                                | (2U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U))))
                                ? ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (1U | (6U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U))))
                                : 8U);
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                    } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (4U | (8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)));
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((((0U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))) 
                                 | (1U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))) 
                                | (2U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U))))
                                ? ((9U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (6U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                            >> 3U)))
                                : 9U);
                    }
                } else {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        if ((0U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d 
                                = ((0x40U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F))
                                    ? 2U : 3U);
                        } else if ((1U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d 
                                = ((0x40U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F))
                                    ? 3U : 2U);
                        } else if ((2U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d 
                                = ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F))
                                    ? 2U : 3U);
                        } else if ((3U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d 
                                = ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F))
                                    ? 3U : 2U);
                        }
                    } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                    }
                }
            } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (7U | (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To));
                    } else if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = vlSelf->tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS;
                        }
                    } else {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                        }
                    }
                } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                        }
                    } else {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                    }
                } else if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 3U)))) {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                    } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                    }
                } else {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                           | (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                }
            } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 6U;
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 
                        = (4U | (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR));
                } else {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                  >> 1U)))) {
                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 5U;
                        } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 4U;
                        }
                    }
                }
            } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((3U == (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                            ? 8U : ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                    | (1U | ((IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                             << 1U))));
                } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((3U == (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                            ? 9U : ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                    | ((IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                       << 1U)));
                }
            } else {
                vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    if ((0U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d 
                            = ((0x40U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F))
                                ? 2U : 3U);
                    } else if ((1U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d 
                            = ((0x40U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F))
                                ? 3U : 2U);
                    } else if ((2U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d 
                            = ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F))
                                ? 2U : 3U);
                    } else if ((3U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d 
                            = ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F))
                                ? 3U : 2U);
                    }
                } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                }
            }
        } else if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (7U | (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To));
                        } else if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = vlSelf->tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS;
                            }
                        } else {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                       | (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                            }
                        }
                    } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                       | (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                            }
                        } else {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                        }
                    } else if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                        }
                    } else {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                    }
                } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 6U;
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 
                            = (0xcU | (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR));
                    } else {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 1U;
                        }
                    }
                } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (5U | (8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)));
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((((0U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))) 
                                 | (1U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))) 
                                | (2U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U))))
                                ? ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (1U | (6U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U))))
                                : 8U);
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                    } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (4U | (8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)));
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((((0U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))) 
                                 | (1U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))) 
                                | (2U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U))))
                                ? ((9U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (6U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                            >> 3U)))
                                : 9U);
                    }
                } else {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                  >> 1U)))) {
                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                        }
                    }
                }
            } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (7U | (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To));
                    } else if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = vlSelf->tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS;
                        }
                    } else {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                        }
                    }
                } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                        }
                    } else {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                    }
                } else if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 3U)))) {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                    } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                    }
                } else {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                           | (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                }
            } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 6U;
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 
                        = (4U | (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR));
                } else {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 1U;
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                    }
                }
            } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((3U == (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                            ? 8U : ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                    | (1U | ((IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                             << 1U))));
                } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((3U == (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                            ? 9U : ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                    | ((IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                       << 1U)));
                }
            } else {
                vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = (8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To));
                } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                     >> 1U)))) {
                    if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                    }
                }
            }
        } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (7U | (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To));
                    } else if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = vlSelf->tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS;
                        }
                    } else {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                        }
                    }
                } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                        }
                    } else {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                    }
                } else if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 3U)))) {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                    } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                    }
                } else {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                           | (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                }
            } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 6U;
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 
                        = (0xcU | (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR));
                } else {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                    }
                }
            } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = (5U | (8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)));
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = ((((0U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                           >> 4U))) 
                             | (1U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 4U)))) 
                            | (2U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                            >> 4U))))
                            ? ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                               | (1U | (6U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U))))
                            : 8U);
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = (4U | (8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)));
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = ((((0U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                           >> 4U))) 
                             | (1U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 4U)))) 
                            | (2U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                            >> 4U))))
                            ? ((9U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                               | (6U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                        >> 3U))) : 9U);
                }
            }
        } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = (7U | (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To));
                } else if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 3U)))) {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = vlSelf->tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS;
                    }
                } else {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                    }
                }
            } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 3U)))) {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                    } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                    }
                } else {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                           | (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                }
            } else if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                     >> 3U)))) {
                vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                           | (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
                }
            } else {
                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                    = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                       | (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD));
            }
        } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 6U;
                vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 
                    = (4U | (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR));
            } else {
                vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                }
            }
        } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
            vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                    = ((3U == (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                        ? 8U : ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                | (1U | ((IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                         << 1U))));
            } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                    = ((3U == (IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR))
                        ? 9U : ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                | ((IData)(tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR) 
                                   << 1U)));
            }
        } else if (vlSelf->tv80n__DOT__i_tv80_core__DOT__NMICycle) {
            vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
            } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
            } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
            }
        } else if (vlSelf->tv80n__DOT__i_tv80_core__DOT__IntCycle) {
            vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 5U;
            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xdU;
            } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xfU;
                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xcU;
            } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
            }
        }
    } else if ((1U == (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ISet))) {
        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
            = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
               | (7U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)));
        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
            = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
               | (7U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)));
        if ((0x80U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((IData)((0U != (0x41U 
                                                & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                            }
                        }
                    }
                }
            } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((IData)((0U != (0x41U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                        }
                    }
                }
            }
        } else if ((0x40U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (7U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)));
                        }
                    } else {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                        if ((IData)((0U != (0x41U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                        }
                    }
                } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                           | (7U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)));
                }
            } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                    = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                       | (7U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)));
            }
        } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((IData)((0U != (0x41U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                    } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                    }
                }
            }
        }
    } else if ((0x80U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                      >> 6U)))) {
            if ((0x20U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To = 0U;
                            } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 6U;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 
                                    = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))
                                        ? 0xeU : 6U);
                            } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 
                                    = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))
                                        ? 0xaU : 2U);
                            } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                            }
                        } else {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 0xaU;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To = 0U;
                            } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 6U;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 
                                    = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))
                                        ? 0xeU : 6U);
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                            } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                            }
                        }
                    } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xcU;
                        } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 6U;
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (7U | (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To));
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 
                                = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))
                                    ? 0xeU : 6U);
                        } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                        } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                        }
                    } else {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 0xcU;
                        } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 6U;
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (7U | (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To));
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 1U;
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 
                                = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))
                                    ? 0xeU : 6U);
                        } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 
                                = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))
                                    ? 0xdU : 5U);
                        } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                        }
                    }
                }
            }
        }
    } else if ((0x40U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
        if ((0x20U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                                } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                                }
                            } else {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To = 0xaU;
                            }
                        }
                    } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                        = ((3U == (3U 
                                                   & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                      >> 4U)))
                                            ? 8U : 
                                           ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                            | (1U | 
                                               (6U 
                                                & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U)))));
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                } else if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                        = ((3U == (3U 
                                                   & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                      >> 4U)))
                                            ? 9U : 
                                           ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                            | (6U & 
                                               ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U))));
                                }
                            }
                        } else {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = (5U | (8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)));
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = ((((0U == (3U 
                                                 & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                    >> 4U))) 
                                         | (1U == (3U 
                                                   & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                      >> 4U)))) 
                                        | (2U == (3U 
                                                  & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                     >> 4U))))
                                        ? ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                           | (1U | 
                                              (6U & 
                                               ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U))))
                                        : 8U);
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                            } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = (4U | (8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)));
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = ((((0U == (3U 
                                                 & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                    >> 4U))) 
                                         | (1U == (3U 
                                                   & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                      >> 4U)))) 
                                        | (2U == (3U 
                                                  & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                     >> 4U))))
                                        ? ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                           | (6U & 
                                              ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                               >> 3U)))
                                        : 9U);
                            }
                        }
                    } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                            >> 3U)));
                            if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = (8U | (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To));
                            }
                        }
                    } else {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                        } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            if ((6U != (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                       | (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)));
                            }
                        }
                    }
                } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                            } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            }
                        } else {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To = 0xaU;
                        }
                    }
                } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 1U)))) {
                            if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = ((3U == (3U & 
                                               ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U)))
                                        ? 8U : (1U 
                                                | (6U 
                                                   & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U))));
                            } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = ((3U == (3U & 
                                               ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U)))
                                        ? 9U : (6U 
                                                & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U)));
                            }
                        }
                    } else {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (5U | (8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)));
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((((0U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                   >> 4U))) 
                                     | (1U == (3U & 
                                               ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U)))) 
                                    | (2U == (3U & 
                                              ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))))
                                    ? ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                       | (1U | (6U 
                                                & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U))))
                                    : 8U);
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                        } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (4U | (8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)));
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((((0U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                   >> 4U))) 
                                     | (1U == (3U & 
                                               ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U)))) 
                                    | (2U == (3U & 
                                              ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))))
                                    ? ((9U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                       | (6U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))
                                    : 9U);
                        }
                    }
                } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                               | (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                        >> 3U)));
                        if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = (8U | (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To));
                        }
                    }
                } else {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                    } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        if ((6U != (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                            >> 3U)));
                        }
                    }
                }
            } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                    = (6U | (8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)));
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = (7U | (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To));
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                            }
                        }
                    } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        }
                    } else {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To = 0xaU;
                    }
                } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 1U)))) {
                            if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                            } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((3U == (3U & 
                                               ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U)))
                                        ? 8U : ((8U 
                                                 & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                                | (1U 
                                                   | (6U 
                                                      & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                         >> 3U)))));
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                            } else if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((3U == (3U & 
                                               ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U)))
                                        ? 9U : ((8U 
                                                 & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                                | (6U 
                                                   & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U))));
                            }
                        }
                    } else {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (5U | (8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)));
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((((0U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                   >> 4U))) 
                                     | (1U == (3U & 
                                               ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U)))) 
                                    | (2U == (3U & 
                                              ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))))
                                    ? ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                       | (1U | (6U 
                                                & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U))))
                                    : 8U);
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                        } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (4U | (8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)));
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((((0U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                   >> 4U))) 
                                     | (1U == (3U & 
                                               ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U)))) 
                                    | (2U == (3U & 
                                              ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))))
                                    ? ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                       | (6U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))
                                    : 9U);
                        }
                    }
                } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                               | (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                        >> 3U)));
                        if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = (8U | (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To));
                        }
                    }
                } else {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                    } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        if ((6U != (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                            >> 3U)));
                        }
                    }
                }
            } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 4U;
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = (6U | (8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)));
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (7U | (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To));
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
                        }
                    }
                } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                    } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                    } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                    }
                } else {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To = 0xaU;
                }
            } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                  >> 1U)))) {
                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((3U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))
                                    ? 8U : (1U | (6U 
                                                  & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                     >> 3U))));
                        } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((3U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))
                                    ? 9U : (6U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)));
                        }
                    }
                } else {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (5U | (8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)));
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((((0U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))) 
                                 | (1U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))) 
                                | (2U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U))))
                                ? ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (1U | (6U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U))))
                                : 8U);
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                    } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (4U | (8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)));
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((((0U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))) 
                                 | (1U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))) 
                                | (2U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U))))
                                ? ((9U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (6U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                            >> 3U)))
                                : 9U);
                    }
                }
            } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                           | (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                    >> 3U)));
                    if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = (8U | (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To));
                    }
                }
            } else {
                vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    if ((6U != (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                        >> 3U)));
                    }
                }
            }
        } else if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                        }
                    } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                        } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        }
                    } else {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To = 0xaU;
                    }
                } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 1U)))) {
                            if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                            } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((3U == (3U & 
                                               ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U)))
                                        ? 8U : ((8U 
                                                 & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                                | (1U 
                                                   | (6U 
                                                      & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                         >> 3U)))));
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                            } else if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                    = ((3U == (3U & 
                                               ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U)))
                                        ? 9U : ((8U 
                                                 & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                                | (6U 
                                                   & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U))));
                            }
                        }
                    } else {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (5U | (8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)));
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((((0U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                   >> 4U))) 
                                     | (1U == (3U & 
                                               ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U)))) 
                                    | (2U == (3U & 
                                              ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))))
                                    ? ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                       | (1U | (6U 
                                                & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U))))
                                    : 8U);
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                        } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = (4U | (8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)));
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((((0U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                   >> 4U))) 
                                     | (1U == (3U & 
                                               ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U)))) 
                                    | (2U == (3U & 
                                              ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))))
                                    ? ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                       | (6U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))
                                    : 9U);
                        }
                    }
                } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                               | (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                        >> 3U)));
                        if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = (8U | (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To));
                        }
                    }
                } else {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                    } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        if ((6U != (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                   | (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                            >> 3U)));
                        }
                    }
                }
            } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                    }
                } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                    } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                    } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                    }
                } else {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To = 0xaU;
                }
            } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                  >> 1U)))) {
                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((3U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))
                                    ? 8U : (1U | (6U 
                                                  & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                     >> 3U))));
                        } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                                = ((3U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))
                                    ? 9U : (6U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)));
                        }
                    }
                } else {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (5U | (8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)));
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((((0U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))) 
                                 | (1U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))) 
                                | (2U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U))))
                                ? ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (1U | (6U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U))))
                                : 8U);
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                    } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (4U | (8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)));
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((((0U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))) 
                                 | (1U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))) 
                                | (2U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U))))
                                ? ((9U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (6U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                            >> 3U)))
                                : 9U);
                    }
                }
            } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                           | (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                    >> 3U)));
                    if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = (8U | (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To));
                    }
                }
            } else {
                vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    if ((6U != (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                        >> 3U)));
                    }
                }
            }
        } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                    }
                } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                    } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                    } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                    }
                } else {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To = 0xaU;
                }
            } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                  >> 1U)))) {
                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                        } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((3U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))
                                    ? 8U : ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                            | (1U | 
                                               (6U 
                                                & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U)))));
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                        } else if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                                = ((3U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))
                                    ? 9U : ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                                            | (6U & 
                                               ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U))));
                        }
                    }
                } else {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (5U | (8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)));
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((((0U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))) 
                                 | (1U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))) 
                                | (2U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U))))
                                ? ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (1U | (6U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U))))
                                : 8U);
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                    } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = (4U | (8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)));
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((((0U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                               >> 4U))) 
                                 | (1U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 4U)))) 
                                | (2U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 4U))))
                                ? ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                                   | (6U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                            >> 3U)))
                                : 9U);
                    }
                }
            } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                           | (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                    >> 3U)));
                    if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = (8U | (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To));
                    }
                }
            } else {
                vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    if ((6U != (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                            = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                               | (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                        >> 3U)));
                    }
                }
            }
        } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
                }
            } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 5U;
                } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = 7U;
                }
            } else {
                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = 7U;
                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To = 0xaU;
            }
        } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 5U;
                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                              >> 1U)))) {
                    if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((3U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 4U)))
                                ? 8U : (1U | (6U & 
                                              ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                               >> 3U))));
                    } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 6U;
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                            = ((3U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 4U)))
                                ? 9U : (6U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)));
                    }
                }
            } else {
                vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 3U;
                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = (5U | (8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)));
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = ((((0U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                           >> 4U))) 
                             | (1U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 4U)))) 
                            | (2U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                            >> 4U))))
                            ? ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                               | (1U | (6U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U))))
                            : 8U);
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 4U;
                } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = (4U | (8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)));
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = ((((0U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                           >> 4U))) 
                             | (1U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 4U)))) 
                            | (2U == (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                            >> 4U))))
                            ? ((9U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                               | (6U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                        >> 3U))) : 9U);
                }
            }
        } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
            vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                    = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)) 
                       | (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                >> 3U)));
                if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 3U)))) {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
                        = (8U | (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To));
                }
            }
        } else {
            vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = 2U;
            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 0U;
            } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                if ((6U != (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 3U)))) {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To 
                        = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)) 
                           | (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                    >> 3U)));
                }
            }
        }
    }
    if ((0x20U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
        if (((0x36U == (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)) 
             | (0xcbU == (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 7U;
        }
    }
    if ((0x40U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
        vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = 5U;
        if ((1U != (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ISet))) {
            vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = 2U;
        }
        vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To 
            = vlSelf->tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS;
    }
    vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_Mux 
        = ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ExchangeRp)
            ? (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__BusB)
            : ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU_r)
                ? (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Q)
                : (IData)(vlSelf->tv80n__DOT__di_reg)));
    vlSelf->tv80n__DOT__i_tv80_core__DOT__RegBusB = 
        ((vlSelf->tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
          [vlSelf->tv80n__DOT__i_tv80_core__DOT__RegAddrB] 
          << 8U) | vlSelf->tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
         [vlSelf->tv80n__DOT__i_tv80_core__DOT__RegAddrB]);
    tv80n__DOT__i_tv80_core__DOT__PC16_B = ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__JumpE)
                                             ? ((0xff00U 
                                                 & ((- (IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->tv80n__DOT__di_reg) 
                                                                   >> 7U)))) 
                                                    << 8U)) 
                                                | (IData)(vlSelf->tv80n__DOT__di_reg))
                                             : ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__BTR_r)
                                                 ? 0xfffeU
                                                 : 1U));
    vlSelf->tv80n__DOT__i_tv80_core__DOT__PC16 = (0xffffU 
                                                  & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__PC) 
                                                     + (IData)(tv80n__DOT__i_tv80_core__DOT__PC16_B)));
    vlSelf->tv80n__DOT__nxt_wr_n = 1U;
    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
        if ((((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstate) 
              >> 2U) & (IData)(vlSelf->tv80n__DOT__write))) {
            vlSelf->tv80n__DOT__nxt_wr_n = 0U;
        }
    }
    vlSelf->tv80n__DOT__nxt_rd_n = 1U;
    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
        if ((IData)((0U != (6U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstate))))) {
            vlSelf->tv80n__DOT__nxt_rd_n = vlSelf->tv80n__DOT__i_tv80_core__DOT__IntCycle;
            vlSelf->tv80n__DOT__nxt_iorq_n = 1U;
            vlSelf->tv80n__DOT__nxt_iorq_n = (1U & 
                                              (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IntCycle)));
            vlSelf->tv80n__DOT__nxt_mreq_n = 1U;
            vlSelf->tv80n__DOT__nxt_mreq_n = vlSelf->tv80n__DOT__i_tv80_core__DOT__IntCycle;
        } else {
            vlSelf->tv80n__DOT__nxt_iorq_n = 1U;
            vlSelf->tv80n__DOT__nxt_mreq_n = 1U;
        }
    } else {
        if ((((~ (IData)(vlSelf->tv80n__DOT__no_read)) 
              & (~ (IData)(vlSelf->tv80n__DOT__write))) 
             & (0U != (6U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstate))))) {
            vlSelf->tv80n__DOT__nxt_rd_n = 0U;
            vlSelf->tv80n__DOT__nxt_iorq_n = 1U;
            vlSelf->tv80n__DOT__nxt_iorq_n = (1U & 
                                              (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__iorq_i)));
        } else {
            vlSelf->tv80n__DOT__nxt_iorq_n = 1U;
        }
        if ((((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstate) 
              >> 2U) & (IData)(vlSelf->tv80n__DOT__write))) {
            vlSelf->tv80n__DOT__nxt_iorq_n = (1U & 
                                              (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__iorq_i)));
        }
        vlSelf->tv80n__DOT__nxt_mreq_n = 1U;
        if ((((~ (IData)(vlSelf->tv80n__DOT__no_read)) 
              & (~ (IData)(vlSelf->tv80n__DOT__write))) 
             & (0U != (6U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstate))))) {
            vlSelf->tv80n__DOT__nxt_mreq_n = vlSelf->tv80n__DOT__i_tv80_core__DOT__iorq_i;
        }
        if ((((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstate) 
              >> 2U) & (IData)(vlSelf->tv80n__DOT__write))) {
            vlSelf->tv80n__DOT__nxt_mreq_n = vlSelf->tv80n__DOT__i_tv80_core__DOT__iorq_i;
        }
    }
    vlSelf->tv80n__DOT__i_tv80_core__DOT__last_tstate 
        = (1U & ((0U == (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates))
                  ? (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstate)
                  : ((1U == (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates))
                      ? ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstate) 
                         >> 1U) : ((2U == (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates))
                                    ? ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstate) 
                                       >> 2U) : ((3U 
                                                  == (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates))
                                                  ? 
                                                 ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstate) 
                                                  >> 3U)
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates))
                                                   ? 
                                                  ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstate) 
                                                   >> 4U)
                                                   : 
                                                  ((5U 
                                                    == (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates))
                                                    ? 
                                                   ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstate) 
                                                    >> 5U)
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates)) 
                                                    & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstate) 
                                                       >> 6U)))))))));
    vlSelf->tv80n__DOT__i_tv80_core__DOT__NextIs_XY_Fetch 
        = (((0U != (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__XY_State)) 
            & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__XY_Ind))) 
           & (((2U == (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To)) 
               | ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                  & (0xcbU == (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) 
              | ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                 & (0x36U == (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))));
    if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstate))) {
        vlSelf->tv80n__DOT__i_tv80_core__DOT__SP16_A 
            = vlSelf->tv80n__DOT__i_tv80_core__DOT__RegBusC;
        vlSelf->tv80n__DOT__i_tv80_core__DOT__SP16_B 
            = ((0xff00U & ((- (IData)((1U & ((IData)(vlSelf->tv80n__DOT__di_reg) 
                                             >> 7U)))) 
                           << 8U)) | (IData)(vlSelf->tv80n__DOT__di_reg));
    } else {
        vlSelf->tv80n__DOT__i_tv80_core__DOT__SP16_A 
            = vlSelf->tv80n__DOT__i_tv80_core__DOT__SP;
        vlSelf->tv80n__DOT__i_tv80_core__DOT__SP16_B 
            = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16))
                ? 0xffffU : 1U);
    }
    vlSelf->tv80n__DOT__i_tv80_core__DOT__SP16 = (0xffffU 
                                                  & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__SP16_A) 
                                                     + (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__SP16_B)));
    vlSelf->tv80n__DOT__i_tv80_core__DOT__RegAddrA 
        = (((((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstate) 
              >> 2U) | ((((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstate) 
                          >> 3U) & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)) 
                        & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16) 
                           >> 2U))) & (0U == (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__XY_State)))
            ? (((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Alternate) 
                << 2U) | (3U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16)))
            : (((((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstate) 
                  >> 2U) | ((((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstate) 
                              >> 3U) & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)) 
                            & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16) 
                               >> 2U))) & (2U == (3U 
                                                  & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16))))
                ? (3U | (4U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__XY_State) 
                               << 1U))) : (((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ExchangeDH) 
                                            & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstate) 
                                               >> 3U))
                                            ? (2U | 
                                               ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Alternate) 
                                                << 2U))
                                            : (((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ExchangeDH) 
                                                & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstate) 
                                                   >> 4U))
                                                ? (1U 
                                                   | ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Alternate) 
                                                      << 2U))
                                                : (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__RegAddrA_r)))));
    vlSelf->tv80n__DOT__i_tv80_core__DOT__RegBusA = 
        ((vlSelf->tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
          [vlSelf->tv80n__DOT__i_tv80_core__DOT__RegAddrA] 
          << 8U) | vlSelf->tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
         [vlSelf->tv80n__DOT__i_tv80_core__DOT__RegAddrA]);
    tv80n__DOT__i_tv80_core__DOT__ID16_B = ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16))
                                             ? 0xffffU
                                             : 1U);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__ID16 = (0xffffU 
                                                  & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__RegBusA) 
                                                     + (IData)(tv80n__DOT__i_tv80_core__DOT__ID16_B)));
    vlSelf->tv80n__DOT__i_tv80_core__DOT__RegDIL = vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_Mux;
    if (((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ExchangeDH) 
         & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstate) 
            >> 3U))) {
        vlSelf->tv80n__DOT__i_tv80_core__DOT__RegDIL 
            = (0xffU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__RegBusB));
        vlSelf->tv80n__DOT__i_tv80_core__DOT__RegDIH 
            = vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_Mux;
        vlSelf->tv80n__DOT__i_tv80_core__DOT__RegDIH 
            = (0xffU & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__RegBusB) 
                        >> 8U));
    } else if (((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ExchangeDH) 
                & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstate) 
                   >> 4U))) {
        vlSelf->tv80n__DOT__i_tv80_core__DOT__RegDIL 
            = (0xffU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__RegBusA_r));
        vlSelf->tv80n__DOT__i_tv80_core__DOT__RegDIH 
            = vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_Mux;
        vlSelf->tv80n__DOT__i_tv80_core__DOT__RegDIH 
            = (0xffU & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__RegBusA_r) 
                        >> 8U));
    } else if ((1U & (((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16) 
                       >> 2U) & ((((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstate) 
                                   >> 2U) & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) 
                                 | (((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstate) 
                                     >> 3U) & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))))) {
        vlSelf->tv80n__DOT__i_tv80_core__DOT__RegDIL 
            = (0xffU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ID16));
        vlSelf->tv80n__DOT__i_tv80_core__DOT__RegDIH 
            = vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_Mux;
        vlSelf->tv80n__DOT__i_tv80_core__DOT__RegDIH 
            = (0xffU & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ID16) 
                        >> 8U));
    } else {
        vlSelf->tv80n__DOT__i_tv80_core__DOT__RegDIH 
            = vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_Mux;
    }
}

VL_INLINE_OPT void Z80___024root___combo__TOP__8(Z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Z80___024root___combo__TOP__8\n"); );
    // Body
    vlSelf->tv80n__DOT__i_tv80_core__DOT__RegWEH = 0U;
    if ((1U & (((((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstate) 
                  >> 1U) & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU_r))) 
                & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Auto_Wait_t1))) 
               | ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU_r) 
                  & (7U != (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op_r)))))) {
        if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg_r) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg_r) 
                                  >> 1U)))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__RegWEH 
                            = (1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg_r)));
                    }
                } else {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__RegWEH 
                        = (1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg_r)));
                }
            }
        }
    }
    if (((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ExchangeDH) 
         & (IData)((0U != (0x18U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstate)))))) {
        vlSelf->tv80n__DOT__i_tv80_core__DOT__RegWEH = 1U;
    }
    if ((1U & (((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16) 
                >> 2U) & (((((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstate) 
                             >> 2U) & (IData)(vlSelf->wait_n)) 
                           & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) 
                          | (((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstate) 
                              >> 3U) & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))))) {
        if ((((0U == (3U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16))) 
              | (1U == (3U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16)))) 
             | (2U == (3U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16))))) {
            vlSelf->tv80n__DOT__i_tv80_core__DOT__RegWEH = 1U;
        }
    }
    vlSelf->tv80n__DOT__i_tv80_core__DOT__RegWEL = 0U;
    if ((1U & (((((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstate) 
                  >> 1U) & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU_r))) 
                & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Auto_Wait_t1))) 
               | ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU_r) 
                  & (7U != (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op_r)))))) {
        if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg_r) 
                          >> 3U)))) {
                if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg_r) 
                                  >> 1U)))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__RegWEL 
                            = (1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg_r));
                    }
                } else {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__RegWEL 
                        = (1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg_r));
                }
            }
        }
    }
    if (((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ExchangeDH) 
         & (IData)((0U != (0x18U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstate)))))) {
        vlSelf->tv80n__DOT__i_tv80_core__DOT__RegWEL = 1U;
    }
    if ((1U & (((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16) 
                >> 2U) & (((((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstate) 
                             >> 2U) & (IData)(vlSelf->wait_n)) 
                           & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) 
                          | (((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstate) 
                              >> 3U) & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))))) {
        if ((((0U == (3U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16))) 
              | (1U == (3U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16)))) 
             | (2U == (3U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16))))) {
            vlSelf->tv80n__DOT__i_tv80_core__DOT__RegWEL = 1U;
        }
    }
}

void Z80___024root___sequent__TOP__1(Z80___024root* vlSelf);
void Z80___024root___sequent__TOP__2(Z80___024root* vlSelf);
void Z80___024root___sequent__TOP__3(Z80___024root* vlSelf);
void Z80___024root___sequent__TOP__6(Z80___024root* vlSelf);

void Z80___024root___eval(Z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Z80___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->reset_n)) & (IData)(vlSelf->__Vclklast__TOP__reset_n)))) {
        Z80___024root___sequent__TOP__1(vlSelf);
    }
    if (((~ (IData)(vlSelf->clk)) & (IData)(vlSelf->__Vclklast__TOP__clk))) {
        Z80___024root___sequent__TOP__2(vlSelf);
    }
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Z80___024root___sequent__TOP__3(vlSelf);
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->reset_n)) & (IData)(vlSelf->__Vclklast__TOP__reset_n)))) {
        Z80___024root___sequent__TOP__6(vlSelf);
        Z80___024root___sequent__TOP__7(vlSelf);
    }
    Z80___024root___combo__TOP__8(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__reset_n = vlSelf->reset_n;
}

#ifdef VL_DEBUG
void Z80___024root___eval_debug_assertions(Z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Z80___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->reset_n & 0xfeU))) {
        Verilated::overWidthError("reset_n");}
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->wait_n & 0xfeU))) {
        Verilated::overWidthError("wait_n");}
    if (VL_UNLIKELY((vlSelf->int_n & 0xfeU))) {
        Verilated::overWidthError("int_n");}
    if (VL_UNLIKELY((vlSelf->nmi_n & 0xfeU))) {
        Verilated::overWidthError("nmi_n");}
    if (VL_UNLIKELY((vlSelf->busrq_n & 0xfeU))) {
        Verilated::overWidthError("busrq_n");}
}
#endif  // VL_DEBUG
