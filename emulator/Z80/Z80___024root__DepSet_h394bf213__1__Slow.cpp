// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Z80.h for the primary calling header

#include "verilated.h"

#include "Z80___024root.h"

VL_ATTR_COLD void Z80___024root___settle__TOP__5(Z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Z80___024root___settle__TOP__5\n"); );
    // Init
    SData/*15:0*/ tv80n__DOT__i_tv80_core__DOT__PC16_B;
    SData/*15:0*/ tv80n__DOT__i_tv80_core__DOT__ID16_B;
    CData/*7:0*/ tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t;
    SData/*8:0*/ tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q;
    // Body
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
    vlSelf->tv80n__DOT__i_tv80_core__DOT__RegAddrB 
        = (((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ExchangeDH) 
            & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstate) 
               >> 3U)) ? (1U | ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Alternate) 
                                << 2U)) : (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__RegAddrB_r));
    tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t = 0U;
    tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q = 0U;
    vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out = vlSelf->tv80n__DOT__i_tv80_core__DOT__F;
    if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op_r))) {
        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op_r))) {
            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op_r))) {
                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op_r)))) {
                    tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                        = ((0xf0U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__BusA)) 
                           | (0xfU & ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op_r))
                                       ? ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__BusB) 
                                          >> 4U) : (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__BusB))));
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
                        = (0xefU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out));
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
                        = (0xfdU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out));
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
                        = ((0xf7U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                           | (8U & (IData)(tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)));
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
                        = ((0x1fU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                           | ((0x80U & (IData)(tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
                              | (((0U == (IData)(tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
                                  << 6U) | (0x20U & (IData)(tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)))));
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
                        = ((0xfbU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                           | (4U & ((~ VL_REDXOR_8(tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
                                    << 2U)));
                }
            } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op_r))) {
                tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                    = ((0xf0U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__BusA)) 
                       | (0xfU & ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op_r))
                                   ? ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__BusB) 
                                      >> 4U) : (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__BusB))));
                vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
                    = (0xefU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out));
                vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
                    = (0xfdU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out));
                vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xf7U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                       | (8U & (IData)(tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)));
                vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
                    = ((0x1fU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                       | ((0x80U & (IData)(tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
                          | (((0U == (IData)(tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
                              << 6U) | (0x20U & (IData)(tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)))));
                vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xfbU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                       | (4U & ((~ VL_REDXOR_8(tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
                                << 2U)));
            } else {
                vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xefU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                       | (0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F)));
                vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xfeU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                       | (1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F)));
                tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q 
                    = vlSelf->tv80n__DOT__i_tv80_core__DOT__BusA;
                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F))) {
                    if ((1U & ((9U < (0xfU & (IData)(tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q))) 
                               | ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F) 
                                  >> 4U)))) {
                        if ((5U < (0xfU & (IData)(tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q)))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
                                = (0xefU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out));
                        }
                        tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q 
                            = ((0x100U & (IData)(tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q)) 
                               | (0xffU & ((IData)(tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q) 
                                           - (IData)(6U))));
                    }
                    if ((1U & ((0x99U < (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__BusA)) 
                               | (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F)))) {
                        tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q 
                            = (0x1ffU & ((IData)(tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q) 
                                         - (IData)(0x160U)));
                    }
                } else {
                    if ((1U & ((9U < (0xfU & (IData)(tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q))) 
                               | ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F) 
                                  >> 4U)))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
                            = ((0xefU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                               | ((9U < (0xfU & (IData)(tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q))) 
                                  << 4U));
                        tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q 
                            = (0x1ffU & ((IData)(6U) 
                                         + (IData)(tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q)));
                    }
                    if ((1U & ((9U < (0x1fU & ((IData)(tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q) 
                                               >> 4U))) 
                               | (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F)))) {
                        tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q 
                            = (0x1ffU & ((IData)(0x60U) 
                                         + (IData)(tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q)));
                    }
                }
                vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xf7U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                       | (8U & (IData)(tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q)));
                vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xdfU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                       | (0x20U & (IData)(tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q)));
                vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xfeU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                       | (1U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F) 
                                | ((IData)(tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q) 
                                   >> 8U))));
                tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                    = (0xffU & (IData)(tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q));
                vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
                    = ((0x3fU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                       | ((0x80U & (IData)(tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q)) 
                          | ((0U == (0xffU & (IData)(tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q))) 
                             << 6U)));
                vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xfbU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                       | (4U & ((~ VL_REDXOR_16(tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q)) 
                                << 2U)));
            }
        } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op_r))) {
            tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                = ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op_r))
                    ? ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__BusB) 
                       & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__BitMask)))
                    : ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__BusB) 
                       | (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__BitMask)));
        } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op_r))) {
            tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                = ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__BusB) 
                   & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__BitMask));
            vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
                = ((0x7fU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                   | (0x80U & (IData)(tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)));
            if ((0U == (IData)(tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t))) {
                vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
                    = (0x40U | (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out));
                vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
                    = (4U | (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out));
            } else {
                vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
                    = (0xbfU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out));
                vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
                    = (0xfbU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out));
            }
            vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
                = (0x10U | (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out));
            vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
                = (0xfdU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out));
            vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
                = (0xf7U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out));
            vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
                = (0xdfU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out));
            if ((6U != (7U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xf7U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                       | (8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__BusB)));
                vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xdfU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                       | (0x20U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__BusB)));
            }
        } else {
            if ((0x20U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                            = (0x7fU & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__BusA) 
                                        >> 1U));
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
                            = ((0xfeU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                               | (1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__BusA)));
                    } else {
                        tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                            = (1U | (0xfeU & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__BusA) 
                                              << 1U)));
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
                            = ((0xfeU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                               | (1U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__BusA) 
                                        >> 7U)));
                    }
                } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                        = ((0x80U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__BusA)) 
                           | (0x7fU & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__BusA) 
                                       >> 1U)));
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
                        = ((0xfeU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                           | (1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__BusA)));
                } else {
                    tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                        = (0xfeU & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__BusA) 
                                    << 1U));
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
                        = ((0xfeU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                           | (1U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__BusA) 
                                    >> 7U)));
                }
            } else if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                        = ((0x80U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F) 
                                     << 7U)) | (0x7fU 
                                                & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__BusA) 
                                                   >> 1U)));
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
                        = ((0xfeU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                           | (1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__BusA)));
                } else {
                    tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                        = ((0xfeU & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__BusA) 
                                     << 1U)) | (1U 
                                                & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F)));
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
                        = ((0xfeU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                           | (1U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__BusA) 
                                    >> 7U)));
                }
            } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                    = ((0x80U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__BusA) 
                                 << 7U)) | (0x7fU & 
                                            ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__BusA) 
                                             >> 1U)));
                vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xfeU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                       | (1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__BusA)));
            } else {
                tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                    = ((0xfeU & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__BusA) 
                                 << 1U)) | (1U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__BusA) 
                                                  >> 7U)));
                vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xfeU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                       | (1U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__BusA) 
                                >> 7U)));
            }
            vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
                = (0xefU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out));
            vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
                = (0xfdU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out));
            vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
                = ((0xf7U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                   | (8U & (IData)(tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)));
            vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
                = ((0x1fU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                   | ((0x80U & (IData)(tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
                      | (((0U == (IData)(tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
                          << 6U) | (0x20U & (IData)(tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)))));
            vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
                = ((0xfbU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                   | (4U & ((~ VL_REDXOR_8(tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
                            << 2U)));
            if ((0U == (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ISet))) {
                vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xfbU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                       | (4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F)));
                vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
                    = ((0x3fU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                       | (0xc0U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F)));
            }
        }
    } else {
        vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
            = (0xfcU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out));
        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op_r))) {
            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op_r))) {
                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op_r))) {
                    tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                        = vlSelf->tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v;
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
                        = ((0xfcU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                           | (2U | (1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Carry_v)))));
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
                        = ((0xefU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                           | (0x10U & ((~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v)) 
                                       << 4U)));
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
                        = ((0xfbU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                           | ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__OverFlow_v) 
                              << 2U));
                } else {
                    tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                        = ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__BusA) 
                           | (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__BusB));
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
                        = (0xefU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out));
                }
            } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op_r))) {
                tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                    = ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__BusA) 
                       ^ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__BusB));
                vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
                    = (0xefU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out));
            } else {
                tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                    = ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__BusA) 
                       & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__BusB));
                vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
                    = (0x10U | (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out));
            }
        } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op_r))) {
            tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                = vlSelf->tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v;
            vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
                = ((0xfcU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                   | (2U | (1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Carry_v)))));
            vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
                = ((0xefU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                   | (0x10U & ((~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v)) 
                               << 4U)));
            vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
                = ((0xfbU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                   | ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__OverFlow_v) 
                      << 2U));
        } else {
            tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t 
                = vlSelf->tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v;
            vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
                = ((0xfeU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                   | (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Carry_v));
            vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
                = ((0xefU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                   | ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v) 
                      << 4U));
            vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
                = ((0xfbU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                   | ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__OverFlow_v) 
                      << 2U));
        }
        if ((7U == (7U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op_r)))) {
            vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
                = ((0xf7U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                   | (8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__BusB)));
            vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
                = ((0xdfU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                   | (0x20U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__BusB)));
        } else {
            vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
                = ((0xf7U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                   | (8U & (IData)(tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)));
            vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
                = ((0xdfU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                   | (0x20U & (IData)(tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)));
        }
        if ((0U == (IData)(tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t))) {
            vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
                = (0x40U | (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out));
            if (vlSelf->tv80n__DOT__i_tv80_core__DOT__Z16_r) {
                vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xbfU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                       | (0x40U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F)));
            }
        } else {
            vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
                = (0xbfU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out));
        }
        vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
            = ((0x7fU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out)) 
               | (0x80U & (IData)(tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)));
        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op_r))) {
            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op_r))) {
                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op_r)))) {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
                        = ((0xfbU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                           | (4U & ((~ VL_REDXOR_8(tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
                                    << 2U)));
                }
            } else {
                vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
                    = ((0xfbU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                       | (4U & ((~ VL_REDXOR_8(tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t)) 
                                << 2U)));
            }
        }
        if (vlSelf->tv80n__DOT__i_tv80_core__DOT__Arith16_r) {
            vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
                = ((0x3fU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                   | (0xc0U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F)));
            vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out 
                = ((0xfbU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out)) 
                   | (4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F)));
        }
    }
    vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Q = tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t;
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
    vlSelf->tv80n__DOT__i_tv80_core__DOT__RegBusB = 
        ((vlSelf->tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
          [vlSelf->tv80n__DOT__i_tv80_core__DOT__RegAddrB] 
          << 8U) | vlSelf->tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
         [vlSelf->tv80n__DOT__i_tv80_core__DOT__RegAddrB]);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_Mux 
        = ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ExchangeRp)
            ? (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__BusB)
            : ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU_r)
                ? (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Q)
                : (IData)(vlSelf->tv80n__DOT__di_reg)));
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

VL_ATTR_COLD void Z80___024root___eval_initial(Z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Z80___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__reset_n = vlSelf->reset_n;
}

VL_ATTR_COLD void Z80___024root___settle__TOP__4(Z80___024root* vlSelf);

VL_ATTR_COLD void Z80___024root___eval_settle(Z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Z80___024root___eval_settle\n"); );
    // Body
    Z80___024root___settle__TOP__4(vlSelf);
    Z80___024root___settle__TOP__5(vlSelf);
}

VL_ATTR_COLD void Z80___024root___final(Z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Z80___024root___final\n"); );
}

VL_ATTR_COLD void Z80___024root___ctor_var_reset(Z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Z80___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->reset_n = VL_RAND_RESET_I(1);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->wait_n = VL_RAND_RESET_I(1);
    vlSelf->int_n = VL_RAND_RESET_I(1);
    vlSelf->nmi_n = VL_RAND_RESET_I(1);
    vlSelf->busrq_n = VL_RAND_RESET_I(1);
    vlSelf->m1_n = VL_RAND_RESET_I(1);
    vlSelf->mreq_n = VL_RAND_RESET_I(1);
    vlSelf->iorq_n = VL_RAND_RESET_I(1);
    vlSelf->rd_n = VL_RAND_RESET_I(1);
    vlSelf->wr_n = VL_RAND_RESET_I(1);
    vlSelf->rfsh_n = VL_RAND_RESET_I(1);
    vlSelf->halt_n = VL_RAND_RESET_I(1);
    vlSelf->busak_n = VL_RAND_RESET_I(1);
    vlSelf->A = VL_RAND_RESET_I(16);
    vlSelf->di = VL_RAND_RESET_I(8);
    vlSelf->dout = VL_RAND_RESET_I(8);
    vlSelf->tv80n__DOT__nxt_mreq_n = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__nxt_iorq_n = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__nxt_rd_n = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__nxt_wr_n = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__no_read = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__write = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__di_reg = VL_RAND_RESET_I(8);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__ACC = VL_RAND_RESET_I(8);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__F = VL_RAND_RESET_I(8);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__Ap = VL_RAND_RESET_I(8);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__Fp = VL_RAND_RESET_I(8);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__I = VL_RAND_RESET_I(8);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__R = VL_RAND_RESET_I(8);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__SP = VL_RAND_RESET_I(16);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__PC = VL_RAND_RESET_I(16);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__RegDIH = VL_RAND_RESET_I(8);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__RegDIL = VL_RAND_RESET_I(8);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__RegBusA = VL_RAND_RESET_I(16);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__RegBusB = VL_RAND_RESET_I(16);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__RegBusC = VL_RAND_RESET_I(16);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__RegAddrA_r = VL_RAND_RESET_I(3);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__RegAddrA = VL_RAND_RESET_I(3);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__RegAddrB_r = VL_RAND_RESET_I(3);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__RegAddrB = VL_RAND_RESET_I(3);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__RegAddrC = VL_RAND_RESET_I(3);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__RegWEH = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__RegWEL = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__Alternate = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__TmpAddr = VL_RAND_RESET_I(16);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__IR = VL_RAND_RESET_I(8);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__ISet = VL_RAND_RESET_I(2);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__RegBusA_r = VL_RAND_RESET_I(16);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__ID16 = VL_RAND_RESET_I(16);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_Mux = VL_RAND_RESET_I(8);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__tstate = VL_RAND_RESET_I(7);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle = VL_RAND_RESET_I(7);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__last_mcycle = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__last_tstate = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__IntE_FF1 = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__IntE_FF2 = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__Halt_FF = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__BusReq_s = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__BusAck = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__NMI_s = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__INT_s = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__IStatus = VL_RAND_RESET_I(2);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__XY_State = VL_RAND_RESET_I(2);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__Pre_XY_F_M = VL_RAND_RESET_I(3);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__NextIs_XY_Fetch = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__XY_Ind = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__No_BTR = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__BTR_r = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__Auto_Wait = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__Auto_Wait_t1 = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__Auto_Wait_t2 = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDecZ = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__BusB = VL_RAND_RESET_I(8);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__BusA = VL_RAND_RESET_I(8);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Q = VL_RAND_RESET_I(8);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out = VL_RAND_RESET_I(8);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg_r = VL_RAND_RESET_I(5);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__Arith16_r = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__Z16_r = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op_r = VL_RAND_RESET_I(4);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU_r = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__PreserveC_r = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles = VL_RAND_RESET_I(3);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d = VL_RAND_RESET_I(3);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__tstates = VL_RAND_RESET_I(3);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__IntCycle = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__NMICycle = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_WZ = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16 = VL_RAND_RESET_I(4);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__Prefix = VL_RAND_RESET_I(2);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Acc = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To = VL_RAND_RESET_I(4);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To = VL_RAND_RESET_I(4);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = VL_RAND_RESET_I(4);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__PreserveC = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__Arith16 = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To = VL_RAND_RESET_I(3);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__Jump = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__JumpE = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__JumpXY = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__Call = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__RstP = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__LDZ = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__LDW = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__LDSPHL = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__iorq_i = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__Special_LD = VL_RAND_RESET_I(3);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__ExchangeDH = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__ExchangeRp = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__ExchangeAF = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__ExchangeRS = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__I_DJNZ = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__I_CPL = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__I_CCF = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__I_SCF = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__I_RETN = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__I_BT = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__I_BC = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__I_BTR = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__I_RLD = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__I_RRD = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__I_INRC = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__SetDI = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__SetEI = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__IMode = VL_RAND_RESET_I(2);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__Halt = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__PC16 = VL_RAND_RESET_I(16);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__SP16 = VL_RAND_RESET_I(16);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__SP16_A = VL_RAND_RESET_I(16);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__SP16_B = VL_RAND_RESET_I(16);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__Oldnmi_n = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS = VL_RAND_RESET_I(3);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__OverFlow_v = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Carry_v = VL_RAND_RESET_I(1);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v = VL_RAND_RESET_I(8);
    vlSelf->tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__BitMask = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__FF = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__cc = VL_RAND_RESET_I(3);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc = VL_RAND_RESET_I(3);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc = VL_RAND_RESET_I(3);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc = VL_RAND_RESET_I(3);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc = VL_RAND_RESET_I(3);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc = VL_RAND_RESET_I(3);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc = VL_RAND_RESET_I(3);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc = VL_RAND_RESET_I(3);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc = VL_RAND_RESET_I(3);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc = VL_RAND_RESET_I(3);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc = VL_RAND_RESET_I(3);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc = VL_RAND_RESET_I(3);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc = VL_RAND_RESET_I(3);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc = VL_RAND_RESET_I(3);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc = VL_RAND_RESET_I(3);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc = VL_RAND_RESET_I(3);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc = VL_RAND_RESET_I(3);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc = VL_RAND_RESET_I(3);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc = VL_RAND_RESET_I(3);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc = VL_RAND_RESET_I(3);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc = VL_RAND_RESET_I(3);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc = VL_RAND_RESET_I(3);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc = VL_RAND_RESET_I(3);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF = VL_RAND_RESET_I(8);
    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc = VL_RAND_RESET_I(3);
    vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__Alternate = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__PC = VL_RAND_RESET_I(16);
    vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__XY_State = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__ACC = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__F = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__SP = VL_RAND_RESET_I(16);
    vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__BusAck = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__tstate = VL_RAND_RESET_I(7);
    vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__mcycle = VL_RAND_RESET_I(7);
}
