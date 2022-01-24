// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Z80.h for the primary calling header

#include "verilated.h"

#include "Z80___024root.h"

VL_INLINE_OPT void Z80___024root___sequent__TOP__1(Z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Z80___024root___sequent__TOP__1\n"); );
    // Init
    CData/*2:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__mcyc_to_number__0__Vfuncout;
    CData/*6:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__mcyc_to_number__0__mcyc;
    CData/*6:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__number_to_bitvec__1__Vfuncout;
    CData/*2:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__number_to_bitvec__1__num;
    CData/*7:0*/ __Vdly__tv80n__DOT__i_tv80_core__DOT__R;
    CData/*7:0*/ __Vdly__tv80n__DOT__i_tv80_core__DOT__IR;
    SData/*15:0*/ __Vdly__tv80n__DOT__i_tv80_core__DOT__TmpAddr;
    CData/*0:0*/ __Vdly__tv80n__DOT__i_tv80_core__DOT__Auto_Wait_t1;
    CData/*0:0*/ __Vdly__tv80n__DOT__i_tv80_core__DOT__Auto_Wait_t2;
    CData/*0:0*/ __Vdly__tv80n__DOT__i_tv80_core__DOT__IntE_FF1;
    CData/*0:0*/ __Vdly__tv80n__DOT__i_tv80_core__DOT__IntE_FF2;
    CData/*2:0*/ __Vdly__tv80n__DOT__i_tv80_core__DOT__Pre_XY_F_M;
    CData/*0:0*/ __Vdly__tv80n__DOT__i_tv80_core__DOT__NMICycle;
    // Body
    vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__Alternate 
        = vlSelf->tv80n__DOT__i_tv80_core__DOT__Alternate;
    __Vdly__tv80n__DOT__i_tv80_core__DOT__Pre_XY_F_M 
        = vlSelf->tv80n__DOT__i_tv80_core__DOT__Pre_XY_F_M;
    __Vdly__tv80n__DOT__i_tv80_core__DOT__IntE_FF2 
        = vlSelf->tv80n__DOT__i_tv80_core__DOT__IntE_FF2;
    __Vdly__tv80n__DOT__i_tv80_core__DOT__IntE_FF1 
        = vlSelf->tv80n__DOT__i_tv80_core__DOT__IntE_FF1;
    __Vdly__tv80n__DOT__i_tv80_core__DOT__Auto_Wait_t2 
        = vlSelf->tv80n__DOT__i_tv80_core__DOT__Auto_Wait_t2;
    vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__BusAck 
        = vlSelf->tv80n__DOT__i_tv80_core__DOT__BusAck;
    __Vdly__tv80n__DOT__i_tv80_core__DOT__Auto_Wait_t1 
        = vlSelf->tv80n__DOT__i_tv80_core__DOT__Auto_Wait_t1;
    vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__tstate 
        = vlSelf->tv80n__DOT__i_tv80_core__DOT__tstate;
    __Vdly__tv80n__DOT__i_tv80_core__DOT__NMICycle 
        = vlSelf->tv80n__DOT__i_tv80_core__DOT__NMICycle;
    vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__mcycle 
        = vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle;
    vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__ACC 
        = vlSelf->tv80n__DOT__i_tv80_core__DOT__ACC;
    __Vdly__tv80n__DOT__i_tv80_core__DOT__TmpAddr = vlSelf->tv80n__DOT__i_tv80_core__DOT__TmpAddr;
    __Vdly__tv80n__DOT__i_tv80_core__DOT__R = vlSelf->tv80n__DOT__i_tv80_core__DOT__R;
    vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__PC 
        = vlSelf->tv80n__DOT__i_tv80_core__DOT__PC;
    vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__SP 
        = vlSelf->tv80n__DOT__i_tv80_core__DOT__SP;
    vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__XY_State 
        = vlSelf->tv80n__DOT__i_tv80_core__DOT__XY_State;
    vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__F 
        = vlSelf->tv80n__DOT__i_tv80_core__DOT__F;
    __Vdly__tv80n__DOT__i_tv80_core__DOT__IR = vlSelf->tv80n__DOT__i_tv80_core__DOT__IR;
    if (vlSelf->reset_n) {
        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__BusAck)))) {
            vlSelf->tv80n__DOT__i_tv80_core__DOT__Arith16_r 
                = vlSelf->tv80n__DOT__i_tv80_core__DOT__Arith16;
            vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles 
                = vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles_d;
        }
    } else {
        vlSelf->tv80n__DOT__i_tv80_core__DOT__Arith16_r = 0U;
        vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles = 0U;
    }
    vlSelf->rfsh_n = (1U & ((~ (IData)(vlSelf->reset_n)) 
                            | (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                  & ((((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstate) 
                                       >> 2U) & (IData)(vlSelf->wait_n)) 
                                     | ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstate) 
                                        >> 3U))))));
    if (vlSelf->reset_n) {
        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__BusAck)))) {
            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                          & (IData)((0U != (0xeU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstate)))))))) {
                if (vlSelf->tv80n__DOT__i_tv80_core__DOT__ExchangeRS) {
                    vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__Alternate 
                        = (1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Alternate)));
                }
            }
            vlSelf->tv80n__DOT__i_tv80_core__DOT__Z16_r 
                = ((IData)(((2U == (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ISet)) 
                            & (1U == (5U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op))))) 
                   & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                      >> 2U));
            if (((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                 & (0U != (0xeU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstate))))) {
                if ((((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstate) 
                      >> 2U) & (IData)(vlSelf->wait_n))) {
                    vlSelf->A = (((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__I) 
                                  << 8U) | (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__R));
                    if ((1U & (((((~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Jump)) 
                                  & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Call))) 
                                 & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__NMICycle))) 
                                & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IntCycle))) 
                               & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Halt_FF) 
                                     | (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Halt)))))) {
                        vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__PC 
                            = vlSelf->tv80n__DOT__i_tv80_core__DOT__PC16;
                    }
                    if ((0U != (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Prefix))) {
                        if ((3U == (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Prefix))) {
                            vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__XY_State 
                                = ((0x20U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))
                                    ? 2U : 1U);
                        } else if ((2U == (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Prefix))) {
                            vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__XY_State = 0U;
                        }
                    } else {
                        vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__XY_State = 0U;
                    }
                    __Vdly__tv80n__DOT__i_tv80_core__DOT__R 
                        = ((0x80U & (IData)(__Vdly__tv80n__DOT__i_tv80_core__DOT__R)) 
                           | (0x7fU & ((IData)(1U) 
                                       + (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__R))));
                    if (((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IntCycle) 
                         & (1U == (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IStatus)))) {
                        __Vdly__tv80n__DOT__i_tv80_core__DOT__IR = 0xffU;
                    } else if ((((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Halt_FF) 
                                 | ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IntCycle) 
                                    & (2U == (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IStatus)))) 
                                | (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__NMICycle))) {
                        __Vdly__tv80n__DOT__i_tv80_core__DOT__IR = 0U;
                        __Vdly__tv80n__DOT__i_tv80_core__DOT__TmpAddr 
                            = ((0xff00U & (IData)(__Vdly__tv80n__DOT__i_tv80_core__DOT__TmpAddr)) 
                               | (IData)(vlSelf->di));
                    } else {
                        __Vdly__tv80n__DOT__i_tv80_core__DOT__IR 
                            = vlSelf->di;
                    }
                }
            } else {
                if (vlSelf->tv80n__DOT__i_tv80_core__DOT__last_tstate) {
                    if (vlSelf->tv80n__DOT__i_tv80_core__DOT__Jump) {
                        vlSelf->A = (((IData)(vlSelf->tv80n__DOT__di_reg) 
                                      << 8U) | (0xffU 
                                                & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__TmpAddr)));
                        vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__PC 
                            = (((IData)(vlSelf->tv80n__DOT__di_reg) 
                                << 8U) | (0xffU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__TmpAddr)));
                    } else if (vlSelf->tv80n__DOT__i_tv80_core__DOT__JumpXY) {
                        vlSelf->A = vlSelf->tv80n__DOT__i_tv80_core__DOT__RegBusC;
                        vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__PC 
                            = vlSelf->tv80n__DOT__i_tv80_core__DOT__RegBusC;
                    } else if (((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Call) 
                                | (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__RstP))) {
                        vlSelf->A = vlSelf->tv80n__DOT__i_tv80_core__DOT__TmpAddr;
                        vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__PC 
                            = vlSelf->tv80n__DOT__i_tv80_core__DOT__TmpAddr;
                    } else if (((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__last_mcycle) 
                                & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__NMICycle))) {
                        vlSelf->A = 0x66U;
                        vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__PC = 0x66U;
                    } else if (((((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                  >> 2U) & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IntCycle)) 
                                & (2U == (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IStatus)))) {
                        vlSelf->A = (((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__I) 
                                      << 8U) | (0xffU 
                                                & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__TmpAddr)));
                        vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__PC 
                            = (((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__I) 
                                << 8U) | (0xffU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__TmpAddr)));
                    } else {
                        vlSelf->A = (0xffffU & ((4U 
                                                 & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To))
                                                   ? (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__PC)
                                                   : 
                                                  ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_WZ)
                                                    ? 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__TmpAddr))
                                                    : 
                                                   (((IData)(vlSelf->tv80n__DOT__di_reg) 
                                                     << 8U) 
                                                    | (0xffU 
                                                       & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__TmpAddr)))))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To))
                                                   ? (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__SP)
                                                   : 
                                                  (((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ACC) 
                                                    << 8U) 
                                                   | (IData)(vlSelf->tv80n__DOT__di_reg))))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To))
                                                   ? (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__PC)
                                                   : 
                                                  ((0U 
                                                    == (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__XY_State))
                                                    ? (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__RegBusC)
                                                    : 
                                                   ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__NextIs_XY_Fetch)
                                                     ? (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__PC)
                                                     : (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__TmpAddr))))
                                                  : (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__RegBusC))));
                    }
                    if (vlSelf->tv80n__DOT__i_tv80_core__DOT__I_CPL) {
                        vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__ACC 
                            = (0xffU & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ACC)));
                        vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__F 
                            = ((0xcfU & (IData)(vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__F)) 
                               | (0x10U | (0x20U & 
                                           ((~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ACC) 
                                                >> 5U)) 
                                            << 5U))));
                        vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__F 
                            = ((0xf7U & (IData)(vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__F)) 
                               | (8U & ((~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ACC) 
                                            >> 3U)) 
                                        << 3U)));
                        vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__F 
                            = (2U | (IData)(vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__F));
                    }
                    if (vlSelf->tv80n__DOT__i_tv80_core__DOT__I_CCF) {
                        vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__F 
                            = ((0xfeU & (IData)(vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__F)) 
                               | (1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F))));
                        vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__F 
                            = ((0xc7U & (IData)(vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__F)) 
                               | ((0x20U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ACC)) 
                                  | ((0x10U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F) 
                                               << 4U)) 
                                     | (8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ACC)))));
                        vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__F 
                            = (0xfdU & (IData)(vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__F));
                    }
                    if (vlSelf->tv80n__DOT__i_tv80_core__DOT__I_SCF) {
                        vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__F 
                            = (1U | (IData)(vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__F));
                        vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__F 
                            = ((0xc7U & (IData)(vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__F)) 
                               | (0x28U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ACC)));
                        vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__F 
                            = (0xfdU & (IData)(vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__F));
                    }
                }
                if ((((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstate) 
                      >> 2U) & (IData)(vlSelf->wait_n))) {
                    if (vlSelf->tv80n__DOT__i_tv80_core__DOT__JumpE) {
                        vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__PC 
                            = vlSelf->tv80n__DOT__i_tv80_core__DOT__PC16;
                    } else if (vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC) {
                        vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__PC 
                            = vlSelf->tv80n__DOT__i_tv80_core__DOT__PC16;
                    }
                    if (vlSelf->tv80n__DOT__i_tv80_core__DOT__RstP) {
                        __Vdly__tv80n__DOT__i_tv80_core__DOT__TmpAddr 
                            = (0x38U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR));
                    }
                    if (vlSelf->tv80n__DOT__i_tv80_core__DOT__BTR_r) {
                        vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__PC 
                            = vlSelf->tv80n__DOT__i_tv80_core__DOT__PC16;
                    }
                    if (((1U == (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ISet)) 
                         & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                            >> 6U))) {
                        __Vdly__tv80n__DOT__i_tv80_core__DOT__IR 
                            = vlSelf->di;
                    }
                }
                if ((1U & ((((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstate) 
                             >> 2U) & (IData)(vlSelf->wait_n)) 
                           | (((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstate) 
                               >> 4U) & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))))) {
                    if ((7U == (7U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16)))) {
                        vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__SP 
                            = vlSelf->tv80n__DOT__i_tv80_core__DOT__SP16;
                    }
                }
                if ((1U & (((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstate) 
                            >> 3U) & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 5U)))) {
                    __Vdly__tv80n__DOT__i_tv80_core__DOT__TmpAddr 
                        = vlSelf->tv80n__DOT__i_tv80_core__DOT__SP16;
                }
                if (vlSelf->tv80n__DOT__i_tv80_core__DOT__LDSPHL) {
                    vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__SP 
                        = vlSelf->tv80n__DOT__i_tv80_core__DOT__RegBusC;
                }
                if (vlSelf->tv80n__DOT__i_tv80_core__DOT__ExchangeAF) {
                    vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__ACC 
                        = vlSelf->tv80n__DOT__i_tv80_core__DOT__Ap;
                    vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__F 
                        = vlSelf->tv80n__DOT__i_tv80_core__DOT__Fp;
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Ap 
                        = vlSelf->tv80n__DOT__i_tv80_core__DOT__ACC;
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Fp 
                        = vlSelf->tv80n__DOT__i_tv80_core__DOT__F;
                }
            }
            if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstate))) {
                if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Special_LD))) {
                    if ((0U == (3U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Special_LD)))) {
                        vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__F 
                            = ((0xfbU & (IData)(vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__F)) 
                               | ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IntE_FF2) 
                                  << 2U));
                        vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__ACC 
                            = vlSelf->tv80n__DOT__i_tv80_core__DOT__I;
                        vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__F 
                            = ((0x3fU & (IData)(vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__F)) 
                               | ((0x80U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__I)) 
                                  | ((0U == (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__I)) 
                                     << 6U)));
                        vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__F 
                            = (0xefU & (IData)(vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__F));
                        vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__F 
                            = (0xfdU & (IData)(vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__F));
                    } else if ((1U == (3U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Special_LD)))) {
                        vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__F 
                            = ((0xfbU & (IData)(vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__F)) 
                               | ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IntE_FF2) 
                                  << 2U));
                        vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__ACC 
                            = vlSelf->tv80n__DOT__i_tv80_core__DOT__R;
                        vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__F 
                            = ((0x3fU & (IData)(vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__F)) 
                               | ((0x80U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__I)) 
                                  | ((0U == (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__I)) 
                                     << 6U)));
                        vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__F 
                            = (0xefU & (IData)(vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__F));
                        vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__F 
                            = (0xfdU & (IData)(vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__F));
                    } else if ((2U == (3U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Special_LD)))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__I 
                            = vlSelf->tv80n__DOT__i_tv80_core__DOT__ACC;
                    } else {
                        __Vdly__tv80n__DOT__i_tv80_core__DOT__R 
                            = vlSelf->tv80n__DOT__i_tv80_core__DOT__ACC;
                    }
                }
                if (vlSelf->tv80n__DOT__i_tv80_core__DOT__LDZ) {
                    __Vdly__tv80n__DOT__i_tv80_core__DOT__TmpAddr 
                        = ((0xff00U & (IData)(__Vdly__tv80n__DOT__i_tv80_core__DOT__TmpAddr)) 
                           | (IData)(vlSelf->tv80n__DOT__di_reg));
                }
                if (vlSelf->tv80n__DOT__i_tv80_core__DOT__LDW) {
                    __Vdly__tv80n__DOT__i_tv80_core__DOT__TmpAddr 
                        = ((0xffU & (IData)(__Vdly__tv80n__DOT__i_tv80_core__DOT__TmpAddr)) 
                           | ((IData)(vlSelf->tv80n__DOT__di_reg) 
                              << 8U));
                }
            }
            if ((((~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__I_DJNZ)) 
                  & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU_r)) 
                 | (9U == (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op_r)))) {
                vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__F 
                    = ((1U & (IData)(vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__F)) 
                       | (0xfeU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out)));
                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__PreserveC_r)))) {
                    vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__F 
                        = ((0xfeU & (IData)(vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__F)) 
                           | (1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out)));
                }
            }
            if (((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__last_tstate) 
                 & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__I_INRC))) {
                vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__F 
                    = (0xefU & (IData)(vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__F));
                vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__F 
                    = (0xfdU & (IData)(vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__F));
                vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__F 
                    = ((0x3fU & (IData)(vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__F)) 
                       | ((0x80U & (IData)(vlSelf->tv80n__DOT__di_reg)) 
                          | ((0U == (IData)(vlSelf->tv80n__DOT__di_reg)) 
                             << 6U)));
                vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__F 
                    = ((0xfbU & (IData)(vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__F)) 
                       | (4U & ((~ VL_REDXOR_8(vlSelf->tv80n__DOT__di_reg)) 
                                << 2U)));
            }
            if ((1U & (((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstate) 
                        >> 1U) & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Auto_Wait_t1))))) {
                vlSelf->dout = vlSelf->tv80n__DOT__i_tv80_core__DOT__BusB;
                if (vlSelf->tv80n__DOT__i_tv80_core__DOT__I_RLD) {
                    vlSelf->dout = ((0xf0U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__BusB) 
                                              << 4U)) 
                                    | (0xfU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__BusA)));
                }
                if (vlSelf->tv80n__DOT__i_tv80_core__DOT__I_RRD) {
                    vlSelf->dout = ((0xf0U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__BusA) 
                                              << 4U)) 
                                    | (0xfU & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__BusB) 
                                               >> 4U)));
                }
            }
            if ((((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstate) 
                  >> 1U) & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__I_BT))) {
                vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__F 
                    = ((0xc7U & (IData)(vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__F)) 
                       | ((0x20U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Q) 
                                    << 4U)) | (8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Q))));
                vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__F 
                    = (0xfdU & (IData)(vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__F));
            }
            if (((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__I_BC) 
                 | (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__I_BT))) {
                vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__F 
                    = ((0xfbU & (IData)(vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__F)) 
                       | ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDecZ) 
                          << 2U));
            }
            if ((1U & (((((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstate) 
                          >> 1U) & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU_r))) 
                        & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Auto_Wait_t1))) 
                       | ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU_r) 
                          & (7U != (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op_r)))))) {
                if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
                    if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg_r) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
                                    vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__F 
                                        = vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_Mux;
                                }
                            } else {
                                vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__SP 
                                    = ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg_r))
                                        ? ((0xffU & (IData)(vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__SP)) 
                                           | ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_Mux) 
                                              << 8U))
                                        : ((0xff00U 
                                            & (IData)(vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__SP)) 
                                           | (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_Mux)));
                            }
                        }
                    } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg_r))) {
                                vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__ACC 
                                    = vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_Mux;
                            } else {
                                vlSelf->dout = vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_Mux;
                            }
                        }
                    }
                }
            }
            vlSelf->tv80n__DOT__i_tv80_core__DOT__R 
                = __Vdly__tv80n__DOT__i_tv80_core__DOT__R;
            vlSelf->tv80n__DOT__i_tv80_core__DOT__TmpAddr 
                = __Vdly__tv80n__DOT__i_tv80_core__DOT__TmpAddr;
            if ((3U != (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IMode))) {
                vlSelf->tv80n__DOT__i_tv80_core__DOT__IStatus 
                    = vlSelf->tv80n__DOT__i_tv80_core__DOT__IMode;
            }
            vlSelf->tv80n__DOT__i_tv80_core__DOT__PreserveC_r 
                = vlSelf->tv80n__DOT__i_tv80_core__DOT__PreserveC;
            vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg_r = 0U;
            if (vlSelf->tv80n__DOT__i_tv80_core__DOT__last_tstate) {
                vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg_r 
                    = (((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg) 
                        << 4U) | (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To));
                if (vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Acc) {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg_r = 0x17U;
                }
            }
            vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op_r = 0U;
            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                          & (IData)((0U != (0xeU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstate)))))))) {
                if (vlSelf->tv80n__DOT__i_tv80_core__DOT__last_tstate) {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op_r 
                        = vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op;
                }
            }
            if (((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                 & (0U != (0xeU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstate))))) {
                if ((((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstate) 
                      >> 2U) & (IData)(vlSelf->wait_n))) {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__ISet = 0U;
                    if ((0U != (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Prefix))) {
                        if ((3U != (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Prefix))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__ISet 
                                = vlSelf->tv80n__DOT__i_tv80_core__DOT__Prefix;
                        }
                    }
                }
            } else if ((0x20U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                if ((1U == (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Prefix))) {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__ISet = 1U;
                }
            }
            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                          & (IData)((0U != (0xeU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstate)))))))) {
                if (vlSelf->tv80n__DOT__i_tv80_core__DOT__last_tstate) {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__BTR_r 
                        = ((((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__I_BT) 
                             | (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__I_BC)) 
                            | (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__I_BTR)) 
                           & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__No_BTR)));
                }
            }
        } else {
            vlSelf->tv80n__DOT__i_tv80_core__DOT__R 
                = __Vdly__tv80n__DOT__i_tv80_core__DOT__R;
            vlSelf->tv80n__DOT__i_tv80_core__DOT__TmpAddr 
                = __Vdly__tv80n__DOT__i_tv80_core__DOT__TmpAddr;
        }
        __Vdly__tv80n__DOT__i_tv80_core__DOT__Auto_Wait_t1 
            = ((~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__last_tstate)) 
               & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Auto_Wait) 
                  | ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__iorq_i) 
                     & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Auto_Wait_t2)))));
        __Vdly__tv80n__DOT__i_tv80_core__DOT__Auto_Wait_t2 
            = ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Auto_Wait_t1) 
               & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__last_tstate)));
        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstate))) {
            if (vlSelf->tv80n__DOT__i_tv80_core__DOT__SetEI) {
                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__NMICycle)))) {
                    __Vdly__tv80n__DOT__i_tv80_core__DOT__IntE_FF1 = 1U;
                }
                __Vdly__tv80n__DOT__i_tv80_core__DOT__IntE_FF2 = 1U;
            }
            if (vlSelf->tv80n__DOT__i_tv80_core__DOT__I_RETN) {
                __Vdly__tv80n__DOT__i_tv80_core__DOT__IntE_FF1 
                    = vlSelf->tv80n__DOT__i_tv80_core__DOT__IntE_FF2;
            }
        }
        if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstate))) {
            if (vlSelf->tv80n__DOT__i_tv80_core__DOT__SetDI) {
                __Vdly__tv80n__DOT__i_tv80_core__DOT__IntE_FF1 = 0U;
                __Vdly__tv80n__DOT__i_tv80_core__DOT__IntE_FF2 = 0U;
            }
        }
        if (((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IntCycle) 
             | (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__NMICycle))) {
            vlSelf->tv80n__DOT__i_tv80_core__DOT__Halt_FF = 0U;
        }
        if ((((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
              & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstate) 
                 >> 2U)) & (IData)(vlSelf->wait_n))) {
            vlSelf->m1_n = 1U;
        }
        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__BusReq_s) 
                      & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__BusAck))))) {
            vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__BusAck = 0U;
            if ((1U & (~ (((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstate) 
                           >> 2U) & (~ (IData)(vlSelf->wait_n)))))) {
                if (vlSelf->tv80n__DOT__i_tv80_core__DOT__last_tstate) {
                    if (vlSelf->tv80n__DOT__i_tv80_core__DOT__Halt) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Halt_FF = 1U;
                    }
                    if (vlSelf->tv80n__DOT__i_tv80_core__DOT__BusReq_s) {
                        vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__BusAck = 1U;
                    } else {
                        vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__tstate = 2U;
                        if (vlSelf->tv80n__DOT__i_tv80_core__DOT__NextIs_XY_Fetch) {
                            __Vfunc_tv80n__DOT__i_tv80_core__DOT__mcyc_to_number__0__mcyc 
                                = vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle;
                            __Vfunc_tv80n__DOT__i_tv80_core__DOT__mcyc_to_number__0__Vfuncout 
                                = ((0x40U & (IData)(__Vfunc_tv80n__DOT__i_tv80_core__DOT__mcyc_to_number__0__mcyc))
                                    ? 7U : ((0x20U 
                                             & (IData)(__Vfunc_tv80n__DOT__i_tv80_core__DOT__mcyc_to_number__0__mcyc))
                                             ? 6U : 
                                            ((0x10U 
                                              & (IData)(__Vfunc_tv80n__DOT__i_tv80_core__DOT__mcyc_to_number__0__mcyc))
                                              ? 5U : 
                                             ((8U & (IData)(__Vfunc_tv80n__DOT__i_tv80_core__DOT__mcyc_to_number__0__mcyc))
                                               ? 4U
                                               : ((4U 
                                                   & (IData)(__Vfunc_tv80n__DOT__i_tv80_core__DOT__mcyc_to_number__0__mcyc))
                                                   ? 3U
                                                   : 
                                                  ((2U 
                                                    & (IData)(__Vfunc_tv80n__DOT__i_tv80_core__DOT__mcyc_to_number__0__mcyc))
                                                    ? 2U
                                                    : 1U))))));
                            __Vdly__tv80n__DOT__i_tv80_core__DOT__Pre_XY_F_M 
                                = __Vfunc_tv80n__DOT__i_tv80_core__DOT__mcyc_to_number__0__Vfuncout;
                            vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__mcycle = 0x20U;
                            if ((0x36U == (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                __Vdly__tv80n__DOT__i_tv80_core__DOT__Pre_XY_F_M = 2U;
                            }
                        } else if ((0x40U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            __Vfunc_tv80n__DOT__i_tv80_core__DOT__number_to_bitvec__1__num 
                                = (7U & ((IData)(1U) 
                                         + (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Pre_XY_F_M)));
                            __Vfunc_tv80n__DOT__i_tv80_core__DOT__number_to_bitvec__1__Vfuncout 
                                = ((1U == (IData)(__Vfunc_tv80n__DOT__i_tv80_core__DOT__number_to_bitvec__1__num))
                                    ? 1U : ((2U == (IData)(__Vfunc_tv80n__DOT__i_tv80_core__DOT__number_to_bitvec__1__num))
                                             ? 2U : 
                                            ((3U == (IData)(__Vfunc_tv80n__DOT__i_tv80_core__DOT__number_to_bitvec__1__num))
                                              ? 4U : 
                                             ((4U == (IData)(__Vfunc_tv80n__DOT__i_tv80_core__DOT__number_to_bitvec__1__num))
                                               ? 8U
                                               : ((5U 
                                                   == (IData)(__Vfunc_tv80n__DOT__i_tv80_core__DOT__number_to_bitvec__1__num))
                                                   ? 0x10U
                                                   : 
                                                  ((6U 
                                                    == (IData)(__Vfunc_tv80n__DOT__i_tv80_core__DOT__number_to_bitvec__1__num))
                                                    ? 0x20U
                                                    : 
                                                   ((7U 
                                                     == (IData)(__Vfunc_tv80n__DOT__i_tv80_core__DOT__number_to_bitvec__1__num))
                                                     ? 0x40U
                                                     : 0U)))))));
                            vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__mcycle 
                                = __Vfunc_tv80n__DOT__i_tv80_core__DOT__number_to_bitvec__1__Vfuncout;
                        } else if ((((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__last_mcycle) 
                                     | (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__No_BTR)) 
                                    | ((((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                         >> 1U) & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__I_DJNZ)) 
                                       & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDecZ)))) {
                            vlSelf->m1_n = 0U;
                            vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__mcycle = 1U;
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__IntCycle = 0U;
                            __Vdly__tv80n__DOT__i_tv80_core__DOT__NMICycle = 0U;
                            if (((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__NMI_s) 
                                 & (0U == (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Prefix)))) {
                                __Vdly__tv80n__DOT__i_tv80_core__DOT__NMICycle = 1U;
                                __Vdly__tv80n__DOT__i_tv80_core__DOT__IntE_FF1 = 0U;
                            } else if (((((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IntE_FF1) 
                                          & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__INT_s)) 
                                         & (0U == (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Prefix))) 
                                        & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__SetEI)))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__IntCycle = 1U;
                                __Vdly__tv80n__DOT__i_tv80_core__DOT__IntE_FF1 = 0U;
                                __Vdly__tv80n__DOT__i_tv80_core__DOT__IntE_FF2 = 0U;
                            }
                        } else {
                            vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__mcycle 
                                = ((0x7eU & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                             << 1U)) 
                                   | (1U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                            >> 6U)));
                        }
                    }
                } else if ((1U & ((~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Auto_Wait) 
                                      & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Auto_Wait_t2)))) 
                                  & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__iorq_i) 
                                        & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Auto_Wait_t1))))))) {
                    vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__tstate 
                        = ((0x7eU & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstate) 
                                     << 1U)) | (1U 
                                                & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstate) 
                                                   >> 6U)));
                }
            }
        }
        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstate))) {
            vlSelf->m1_n = 0U;
        }
    } else {
        vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__Alternate = 0U;
        vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__PC = 0U;
        vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__F = 0xffU;
        __Vdly__tv80n__DOT__i_tv80_core__DOT__R = 0U;
        vlSelf->A = 0U;
        __Vdly__tv80n__DOT__i_tv80_core__DOT__TmpAddr = 0U;
        __Vdly__tv80n__DOT__i_tv80_core__DOT__IR = 0U;
        vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__XY_State = 0U;
        vlSelf->dout = 0U;
        vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__ACC = 0xffU;
        vlSelf->tv80n__DOT__i_tv80_core__DOT__Ap = 0xffU;
        vlSelf->tv80n__DOT__i_tv80_core__DOT__Fp = 0xffU;
        vlSelf->tv80n__DOT__i_tv80_core__DOT__I = 0U;
        vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__SP = 0xffffU;
        vlSelf->tv80n__DOT__i_tv80_core__DOT__Z16_r = 0U;
        vlSelf->tv80n__DOT__i_tv80_core__DOT__R = __Vdly__tv80n__DOT__i_tv80_core__DOT__R;
        vlSelf->tv80n__DOT__i_tv80_core__DOT__TmpAddr 
            = __Vdly__tv80n__DOT__i_tv80_core__DOT__TmpAddr;
        vlSelf->tv80n__DOT__i_tv80_core__DOT__IStatus = 0U;
        vlSelf->tv80n__DOT__i_tv80_core__DOT__PreserveC_r = 0U;
        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg_r = 0U;
        vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op_r = 0U;
        vlSelf->tv80n__DOT__i_tv80_core__DOT__ISet = 0U;
        vlSelf->tv80n__DOT__i_tv80_core__DOT__BTR_r = 0U;
        __Vdly__tv80n__DOT__i_tv80_core__DOT__IntE_FF1 = 0U;
        vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__mcycle = 1U;
        vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__tstate = 1U;
        __Vdly__tv80n__DOT__i_tv80_core__DOT__Pre_XY_F_M = 0U;
        vlSelf->tv80n__DOT__i_tv80_core__DOT__Halt_FF = 0U;
        vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__BusAck = 0U;
        __Vdly__tv80n__DOT__i_tv80_core__DOT__NMICycle = 0U;
        vlSelf->tv80n__DOT__i_tv80_core__DOT__IntCycle = 0U;
        __Vdly__tv80n__DOT__i_tv80_core__DOT__IntE_FF2 = 0U;
        __Vdly__tv80n__DOT__i_tv80_core__DOT__Auto_Wait_t1 = 0U;
        __Vdly__tv80n__DOT__i_tv80_core__DOT__Auto_Wait_t2 = 0U;
        vlSelf->m1_n = 1U;
    }
    vlSelf->tv80n__DOT__i_tv80_core__DOT__Auto_Wait_t2 
        = __Vdly__tv80n__DOT__i_tv80_core__DOT__Auto_Wait_t2;
    vlSelf->tv80n__DOT__i_tv80_core__DOT__IntE_FF1 
        = __Vdly__tv80n__DOT__i_tv80_core__DOT__IntE_FF1;
    vlSelf->tv80n__DOT__i_tv80_core__DOT__IntE_FF2 
        = __Vdly__tv80n__DOT__i_tv80_core__DOT__IntE_FF2;
    vlSelf->tv80n__DOT__i_tv80_core__DOT__Pre_XY_F_M 
        = __Vdly__tv80n__DOT__i_tv80_core__DOT__Pre_XY_F_M;
    vlSelf->tv80n__DOT__i_tv80_core__DOT__Auto_Wait_t1 
        = __Vdly__tv80n__DOT__i_tv80_core__DOT__Auto_Wait_t1;
    vlSelf->halt_n = (1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Halt_FF)));
    if (vlSelf->reset_n) {
        vlSelf->tv80n__DOT__i_tv80_core__DOT__BusReq_s 
            = (1U & (~ (IData)(vlSelf->busrq_n)));
        vlSelf->tv80n__DOT__i_tv80_core__DOT__INT_s 
            = (1U & (~ (IData)(vlSelf->int_n)));
        if (vlSelf->tv80n__DOT__i_tv80_core__DOT__NMICycle) {
            vlSelf->tv80n__DOT__i_tv80_core__DOT__NMI_s = 0U;
        } else if (((~ (IData)(vlSelf->nmi_n)) & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Oldnmi_n))) {
            vlSelf->tv80n__DOT__i_tv80_core__DOT__NMI_s = 1U;
        }
        vlSelf->tv80n__DOT__i_tv80_core__DOT__No_BTR 
            = ((((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__I_BT) 
                 & ((~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                        >> 4U)) | (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F) 
                                      >> 2U)))) | ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__I_BC) 
                                                   & ((~ 
                                                       ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                        >> 4U)) 
                                                      | (4U 
                                                         != 
                                                         (0x44U 
                                                          & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F)))))) 
               | ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__I_BTR) 
                  & ((~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                         >> 4U)) | ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F) 
                                    >> 6U))));
        vlSelf->tv80n__DOT__i_tv80_core__DOT__NMICycle 
            = __Vdly__tv80n__DOT__i_tv80_core__DOT__NMICycle;
        vlSelf->tv80n__DOT__i_tv80_core__DOT__IR = __Vdly__tv80n__DOT__i_tv80_core__DOT__IR;
        vlSelf->tv80n__DOT__i_tv80_core__DOT__Oldnmi_n 
            = vlSelf->nmi_n;
    } else {
        vlSelf->tv80n__DOT__i_tv80_core__DOT__BusReq_s = 0U;
        vlSelf->tv80n__DOT__i_tv80_core__DOT__INT_s = 0U;
        vlSelf->tv80n__DOT__i_tv80_core__DOT__NMI_s = 0U;
        vlSelf->tv80n__DOT__i_tv80_core__DOT__No_BTR = 0U;
        vlSelf->tv80n__DOT__i_tv80_core__DOT__NMICycle 
            = __Vdly__tv80n__DOT__i_tv80_core__DOT__NMICycle;
        vlSelf->tv80n__DOT__i_tv80_core__DOT__IR = __Vdly__tv80n__DOT__i_tv80_core__DOT__IR;
        vlSelf->tv80n__DOT__i_tv80_core__DOT__Oldnmi_n = 0U;
    }
    vlSelf->tv80n__DOT__i_tv80_core__DOT__Halt = 0U;
    if ((0U == (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                      >> 7U)))) {
            if ((0x40U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((0x36U == (0x3fU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Halt = 1U;
                }
            }
        }
    }
    vlSelf->tv80n__DOT__i_tv80_core__DOT__IMode = 3U;
    if ((0U != (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U != (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ISet))) {
            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                          >> 7U)))) {
                if ((0x40U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x20U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                                if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__IMode 
                                            = ((1U 
                                                & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))
                                                ? 2U
                                                : 1U);
                                    }
                                }
                            }
                        } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__IMode = 0U;
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__IMode = 0U;
                                }
                            }
                        }
                    } else if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__IMode = 2U;
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__IMode = 1U;
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__IMode = 0U;
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__IMode = 0U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->tv80n__DOT__i_tv80_core__DOT__SetEI = 0U;
    if ((0U == (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__SetEI = 1U;
                                    }
                                }
                            }
                        }
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__SetDI = 0U;
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__SetDI = 1U;
                                    }
                                }
                            }
                        }
                    } else {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__SetDI = 0U;
                    }
                } else {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__SetDI = 0U;
                }
            } else {
                vlSelf->tv80n__DOT__i_tv80_core__DOT__SetDI = 0U;
            }
        } else {
            vlSelf->tv80n__DOT__i_tv80_core__DOT__SetDI = 0U;
        }
        vlSelf->tv80n__DOT__i_tv80_core__DOT__I_SCF = 0U;
        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                            if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__I_SCF = 1U;
                                    }
                                }
                            }
                        }
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__I_CCF = 0U;
                        if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__I_CCF = 1U;
                                    }
                                }
                            }
                        }
                    } else {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__I_CCF = 0U;
                    }
                } else {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__I_CCF = 0U;
                }
                vlSelf->tv80n__DOT__i_tv80_core__DOT__ExchangeAF = 0U;
                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                              >> 5U)))) {
                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 4U)))) {
                        if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__ExchangeAF = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                vlSelf->tv80n__DOT__i_tv80_core__DOT__I_CCF = 0U;
                vlSelf->tv80n__DOT__i_tv80_core__DOT__ExchangeAF = 0U;
            }
        } else {
            vlSelf->tv80n__DOT__i_tv80_core__DOT__I_CCF = 0U;
            vlSelf->tv80n__DOT__i_tv80_core__DOT__ExchangeAF = 0U;
        }
    } else {
        vlSelf->tv80n__DOT__i_tv80_core__DOT__SetDI = 0U;
        vlSelf->tv80n__DOT__i_tv80_core__DOT__I_SCF = 0U;
        vlSelf->tv80n__DOT__i_tv80_core__DOT__I_CCF = 0U;
        vlSelf->tv80n__DOT__i_tv80_core__DOT__ExchangeAF = 0U;
    }
    vlSelf->tv80n__DOT__i_tv80_core__DOT__Special_LD = 0U;
    if ((0U != (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U != (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ISet))) {
            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                          >> 7U)))) {
                if ((0x40U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 5U)))) {
                        if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Special_LD = 5U;
                                        }
                                    }
                                }
                            } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Special_LD = 4U;
                                    }
                                }
                            }
                        } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Special_LD = 7U;
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Special_LD = 6U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->tv80n__DOT__i_tv80_core__DOT__ExchangeRS = 0U;
    if ((0U == (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                              >> 5U)))) {
                    if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__ExchangeRS = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        vlSelf->tv80n__DOT__i_tv80_core__DOT__I_CPL = 0U;
        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 4U)))) {
                        if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__I_CPL = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            vlSelf->tv80n__DOT__i_tv80_core__DOT__ExchangeRp = 0U;
            if ((0x40U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((0x36U != (0x3fU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                    if ((6U != (7U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                        if ((6U != (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__ExchangeRp = 1U;
                        }
                    }
                }
            }
        } else {
            vlSelf->tv80n__DOT__i_tv80_core__DOT__ExchangeRp = 0U;
        }
    } else {
        vlSelf->tv80n__DOT__i_tv80_core__DOT__I_CPL = 0U;
        vlSelf->tv80n__DOT__i_tv80_core__DOT__ExchangeRp = 0U;
    }
    vlSelf->tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__BitMask 
        = ((0x20U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))
            ? ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))
                ? ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))
                    ? 0x80U : 0x40U) : ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))
                                         ? 0x20U : 0x10U))
            : ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))
                ? ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))
                    ? 8U : 4U) : ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))
                                   ? 2U : 1U)));
    vlSelf->tv80n__DOT__i_tv80_core__DOT__ExchangeDH = 0U;
    if ((0U == (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 4U)))) {
                        if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__ExchangeDH = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

VL_INLINE_OPT void Z80___024root___sequent__TOP__2(Z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Z80___024root___sequent__TOP__2\n"); );
    // Body
    vlSelf->wr_n = (1U & ((~ (IData)(vlSelf->reset_n)) 
                          | (IData)(vlSelf->tv80n__DOT__nxt_wr_n)));
    vlSelf->rd_n = (1U & ((~ (IData)(vlSelf->reset_n)) 
                          | (IData)(vlSelf->tv80n__DOT__nxt_rd_n)));
    vlSelf->mreq_n = (1U & ((~ (IData)(vlSelf->reset_n)) 
                            | (IData)(vlSelf->tv80n__DOT__nxt_mreq_n)));
    vlSelf->iorq_n = (1U & ((~ (IData)(vlSelf->reset_n)) 
                            | (IData)(vlSelf->tv80n__DOT__nxt_iorq_n)));
}

VL_INLINE_OPT void Z80___024root___sequent__TOP__3(Z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Z80___024root___sequent__TOP__3\n"); );
    // Init
    CData/*2:0*/ __Vdlyvdim0__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0;
    CData/*7:0*/ __Vdlyvval__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0;
    CData/*0:0*/ __Vdlyvset__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0;
    CData/*2:0*/ __Vdlyvdim0__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0;
    CData/*7:0*/ __Vdlyvval__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0;
    CData/*0:0*/ __Vdlyvset__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0;
    // Body
    __Vdlyvset__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0 = 0U;
    __Vdlyvset__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0 = 0U;
    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__BusAck)))) {
        vlSelf->tv80n__DOT__i_tv80_core__DOT__RegBusA_r 
            = vlSelf->tv80n__DOT__i_tv80_core__DOT__RegBusA;
        if (vlSelf->tv80n__DOT__i_tv80_core__DOT__RegWEL) {
            __Vdlyvval__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0 
                = vlSelf->tv80n__DOT__i_tv80_core__DOT__RegDIL;
            __Vdlyvset__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0 = 1U;
            __Vdlyvdim0__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0 
                = vlSelf->tv80n__DOT__i_tv80_core__DOT__RegAddrA;
        }
        if (vlSelf->tv80n__DOT__i_tv80_core__DOT__RegWEH) {
            __Vdlyvval__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0 
                = vlSelf->tv80n__DOT__i_tv80_core__DOT__RegDIH;
            __Vdlyvset__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0 = 1U;
            __Vdlyvdim0__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0 
                = vlSelf->tv80n__DOT__i_tv80_core__DOT__RegAddrA;
        }
        vlSelf->tv80n__DOT__i_tv80_core__DOT__RegAddrC 
            = (((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Alternate) 
                << 2U) | (3U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_Addr_To)));
        if (((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__JumpXY) 
             | (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__LDSPHL))) {
            vlSelf->tv80n__DOT__i_tv80_core__DOT__RegAddrC 
                = (2U | ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Alternate) 
                         << 2U));
        }
        if ((1U & ((((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__JumpXY) 
                     | (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__LDSPHL)) 
                    & (0U != (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__XY_State))) 
                   | ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                      >> 5U)))) {
            vlSelf->tv80n__DOT__i_tv80_core__DOT__RegAddrC 
                = (3U | (4U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__XY_State) 
                               << 1U)));
        }
        vlSelf->tv80n__DOT__i_tv80_core__DOT__RegAddrB_r 
            = (((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Alternate) 
                << 2U) | (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To) 
                                >> 1U)));
        if ((((~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__XY_Ind)) 
              & (4U == (6U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To)))) 
             & (0U != (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__XY_State)))) {
            vlSelf->tv80n__DOT__i_tv80_core__DOT__RegAddrB_r 
                = (3U | (4U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__XY_State) 
                               << 1U)));
        }
        vlSelf->tv80n__DOT__i_tv80_core__DOT__RegAddrA_r 
            = (((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Alternate) 
                << 2U) | (3U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To) 
                                >> 1U)));
        if ((((~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__XY_Ind)) 
              & (4U == (6U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To)))) 
             & (0U != (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__XY_State)))) {
            vlSelf->tv80n__DOT__i_tv80_core__DOT__RegAddrA_r 
                = (3U | (4U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__XY_State) 
                               << 1U)));
        }
        if (((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__I_DJNZ) 
             & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU_r))) {
            vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDecZ 
                = (1U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F_Out) 
                         >> 6U));
        }
        if (((((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstate) 
               >> 2U) | (((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstate) 
                          >> 3U) & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) 
             & (4U == (7U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDec_16))))) {
            vlSelf->tv80n__DOT__i_tv80_core__DOT__IncDecZ 
                = (0U != (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ID16));
        }
        vlSelf->tv80n__DOT__i_tv80_core__DOT__BusA 
            = (0xffU & ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To))
                         ? ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To))
                             ? 0U : ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To))
                                      ? 0U : ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To))
                                               ? ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__SP) 
                                                  >> 8U)
                                               : (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__SP))))
                         : ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To))
                             ? ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To))
                                 ? ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To))
                                     ? (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ACC)
                                     : (IData)(vlSelf->tv80n__DOT__di_reg))
                                 : ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To))
                                     ? (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__RegBusA)
                                     : ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__RegBusA) 
                                        >> 8U))) : 
                            ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusA_To))
                              ? (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__RegBusA)
                              : ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__RegBusA) 
                                 >> 8U)))));
        vlSelf->tv80n__DOT__i_tv80_core__DOT__BusB 
            = (0xffU & ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To))
                         ? ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To))
                             ? ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To))
                                 ? 0U : ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To))
                                          ? ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__PC) 
                                             >> 8U)
                                          : (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__PC)))
                             : ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To))
                                 ? ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To))
                                     ? (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F)
                                     : 1U) : ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To))
                                               ? ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__SP) 
                                                  >> 8U)
                                               : (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__SP))))
                         : ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To))
                             ? ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To))
                                 ? ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To))
                                     ? (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ACC)
                                     : (IData)(vlSelf->tv80n__DOT__di_reg))
                                 : ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To))
                                     ? (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__RegBusB)
                                     : ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__RegBusB) 
                                        >> 8U))) : 
                            ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Set_BusB_To))
                              ? (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__RegBusB)
                              : ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__RegBusB) 
                                 >> 8U)))));
    }
    if (__Vdlyvset__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0) {
        vlSelf->tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL[__Vdlyvdim0__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0] 
            = __Vdlyvval__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL__v0;
    }
    if (__Vdlyvset__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0) {
        vlSelf->tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH[__Vdlyvdim0__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0] 
            = __Vdlyvval__tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH__v0;
    }
    vlSelf->tv80n__DOT__i_tv80_core__DOT__RegBusC = 
        ((vlSelf->tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
          [vlSelf->tv80n__DOT__i_tv80_core__DOT__RegAddrC] 
          << 8U) | vlSelf->tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
         [vlSelf->tv80n__DOT__i_tv80_core__DOT__RegAddrC]);
    if (vlSelf->reset_n) {
        if ((((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstate) 
              >> 2U) & (IData)(vlSelf->wait_n))) {
            vlSelf->tv80n__DOT__di_reg = vlSelf->di;
        }
    } else {
        vlSelf->tv80n__DOT__di_reg = 0U;
    }
}

VL_INLINE_OPT void Z80___024root___sequent__TOP__6(Z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Z80___024root___sequent__TOP__6\n"); );
    // Init
    CData/*0:0*/ tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__UseCarry;
    CData/*0:0*/ tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Carry7_v;
    CData/*7:0*/ tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_t;
    SData/*8:0*/ tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__DAA_Q;
    CData/*4:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Vfuncout;
    CData/*3:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__A;
    CData/*3:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__B;
    CData/*0:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Sub;
    CData/*0:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Carry_In;
    CData/*4:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Vfuncout;
    CData/*3:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__A;
    CData/*3:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__B;
    CData/*0:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Sub;
    CData/*0:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Carry_In;
    CData/*3:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Vfuncout;
    CData/*2:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__A;
    CData/*2:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__B;
    CData/*0:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Sub;
    CData/*0:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Carry_In;
    CData/*3:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Vfuncout;
    CData/*2:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__A;
    CData/*2:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__B;
    CData/*0:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Sub;
    CData/*0:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Carry_In;
    CData/*1:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Vfuncout;
    CData/*0:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__A;
    CData/*0:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__B;
    CData/*0:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Sub;
    CData/*0:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Carry_In;
    CData/*1:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Vfuncout;
    CData/*0:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__A;
    CData/*0:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__B;
    CData/*0:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Sub;
    CData/*0:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Carry_In;
    // Body
    vlSelf->tv80n__DOT__i_tv80_core__DOT__JumpXY = 0U;
    if ((0U == (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 4U)))) {
                        if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__JumpXY = 1U;
                                    }
                                }
                            }
                        }
                    }
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__LDSPHL = 0U;
                    if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__LDSPHL = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__LDSPHL = 0U;
                }
            } else {
                vlSelf->tv80n__DOT__i_tv80_core__DOT__LDSPHL = 0U;
            }
        } else {
            vlSelf->tv80n__DOT__i_tv80_core__DOT__LDSPHL = 0U;
        }
    } else {
        vlSelf->tv80n__DOT__i_tv80_core__DOT__LDSPHL = 0U;
    }
    vlSelf->tv80n__DOT__i_tv80_core__DOT__XY_State 
        = vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__XY_State;
    vlSelf->tv80n__DOT__i_tv80_core__DOT__Alternate 
        = vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__Alternate;
    vlSelf->tv80n__DOT__i_tv80_core__DOT__ACC = vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__ACC;
    vlSelf->tv80n__DOT__i_tv80_core__DOT__PC = vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__PC;
    vlSelf->tv80n__DOT__i_tv80_core__DOT__SP = vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__SP;
    vlSelf->tv80n__DOT__i_tv80_core__DOT__F = vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__F;
    if (vlSelf->reset_n) {
        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__BusAck)))) {
            if (((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                 & (0U != (0xeU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstate))))) {
                if ((((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstate) 
                      >> 2U) & (IData)(vlSelf->wait_n))) {
                    if ((0U != (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Prefix))) {
                        if ((3U != (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Prefix))) {
                            if ((2U == (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Prefix))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__XY_Ind = 0U;
                            }
                        }
                    } else {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__XY_Ind = 0U;
                    }
                }
            } else if ((0x20U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                vlSelf->tv80n__DOT__i_tv80_core__DOT__XY_Ind = 1U;
            }
            vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU_r = 0U;
            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                          & (IData)((0U != (0xeU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstate)))))))) {
                if (vlSelf->tv80n__DOT__i_tv80_core__DOT__last_tstate) {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU_r 
                        = vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU;
                }
            }
        }
    } else {
        vlSelf->tv80n__DOT__i_tv80_core__DOT__XY_Ind = 0U;
        vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU_r = 0U;
    }
    tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__UseCarry 
        = (IData)((1U == (5U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op_r))));
    __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Carry_In 
        = (1U & (((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op_r) 
                  >> 1U) ^ ((IData)(tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__UseCarry) 
                            & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F))));
    __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Sub 
        = (1U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op_r) 
                 >> 1U));
    __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__B 
        = (0xfU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__BusB));
    __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__A 
        = (0xfU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__BusA));
    __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Vfuncout 
        = (0x1fU & (((IData)(__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__A) 
                     + (0xfU & ((IData)(__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Sub)
                                 ? (~ (IData)(__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__B))
                                 : (IData)(__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__B)))) 
                    + (IData)(__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Carry_In)));
    vlSelf->tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v 
        = (1U & ((IData)(__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__26__Vfuncout) 
                 >> 4U));
    __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Carry_In 
        = (1U & (((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op_r) 
                  >> 1U) ^ ((IData)(tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__UseCarry) 
                            & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__F))));
    __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Sub 
        = (1U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op_r) 
                 >> 1U));
    __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__B 
        = (0xfU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__BusB));
    __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__A 
        = (0xfU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__BusA));
    __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Vfuncout 
        = (0x1fU & (((IData)(__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__A) 
                     + (0xfU & ((IData)(__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Sub)
                                 ? (~ (IData)(__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__B))
                                 : (IData)(__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__B)))) 
                    + (IData)(__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Carry_In)));
    vlSelf->tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v 
        = ((0xf0U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v)) 
           | (0xfU & (IData)(__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub4__27__Vfuncout)));
    __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Carry_In 
        = vlSelf->tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v;
    __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Sub 
        = (1U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op_r) 
                 >> 1U));
    __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__B 
        = (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__BusB) 
                 >> 4U));
    __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__A 
        = (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__BusA) 
                 >> 4U));
    __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Vfuncout 
        = (0xfU & (((IData)(__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__A) 
                    + (7U & ((IData)(__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Sub)
                              ? (~ (IData)(__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__B))
                              : (IData)(__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__B)))) 
                   + (IData)(__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Carry_In)));
    tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Carry7_v 
        = (1U & ((IData)(__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__28__Vfuncout) 
                 >> 3U));
    __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Carry_In 
        = vlSelf->tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v;
    __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Sub 
        = (1U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op_r) 
                 >> 1U));
    __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__B 
        = (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__BusB) 
                 >> 4U));
    __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__A 
        = (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__BusA) 
                 >> 4U));
    __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Vfuncout 
        = (0xfU & (((IData)(__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__A) 
                    + (7U & ((IData)(__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Sub)
                              ? (~ (IData)(__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__B))
                              : (IData)(__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__B)))) 
                   + (IData)(__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Carry_In)));
    vlSelf->tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v 
        = ((0x8fU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v)) 
           | (0x70U & ((IData)(__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub3__29__Vfuncout) 
                       << 4U)));
    __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Carry_In 
        = tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Carry7_v;
    __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Sub 
        = (1U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op_r) 
                 >> 1U));
    __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__B 
        = (1U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__BusB) 
                 >> 7U));
    __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__A 
        = (1U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__BusA) 
                 >> 7U));
    __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Vfuncout 
        = (3U & (((IData)(__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__A) 
                  + (1U & ((IData)(__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Sub)
                            ? (~ (IData)(__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__B))
                            : (IData)(__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__B)))) 
                 + (IData)(__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Carry_In)));
    vlSelf->tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Carry_v 
        = (1U & ((IData)(__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__30__Vfuncout) 
                 >> 1U));
    __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Carry_In 
        = tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Carry7_v;
    __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Sub 
        = (1U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op_r) 
                 >> 1U));
    __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__B 
        = (1U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__BusB) 
                 >> 7U));
    __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__A 
        = (1U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__BusA) 
                 >> 7U));
    __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Vfuncout 
        = (3U & (((IData)(__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__A) 
                  + (1U & ((IData)(__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Sub)
                            ? (~ (IData)(__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__B))
                            : (IData)(__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__B)))) 
                 + (IData)(__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Carry_In)));
    vlSelf->tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v 
        = ((0x7fU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v)) 
           | (0x80U & ((IData)(__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__AddSub1__31__Vfuncout) 
                       << 7U)));
    vlSelf->tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__OverFlow_v 
        = ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Carry_v) 
           ^ (IData)(tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Carry7_v));
    vlSelf->tv80n__DOT__i_tv80_core__DOT__Prefix = 0U;
    if ((0U == (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Prefix = 3U;
                                    }
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Prefix = 2U;
                                }
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Prefix = 3U;
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Prefix = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->tv80n__DOT__i_tv80_core__DOT__BusAck = vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__BusAck;
    vlSelf->tv80n__DOT__i_tv80_core__DOT__tstate = vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__tstate;
    vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle = vlSelf->__Vdly__tv80n__DOT__i_tv80_core__DOT__mcycle;
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
    vlSelf->busak_n = (1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__BusAck)));
    vlSelf->tv80n__DOT__i_tv80_core__DOT__RegAddrB 
        = (((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ExchangeDH) 
            & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__tstate) 
               >> 3U)) ? (1U | ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Alternate) 
                                << 2U)) : (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__RegAddrB_r));
    vlSelf->tv80n__DOT__i_tv80_core__DOT__last_mcycle 
        = (1U & ((1U == (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles))
                  ? (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)
                  : ((2U == (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles))
                      ? ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                         >> 1U) : ((3U == (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles))
                                    ? ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                       >> 2U) : ((4U 
                                                  == (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles))
                                                  ? 
                                                 ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 3U)
                                                  : 
                                                 ((5U 
                                                   == (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles))
                                                   ? 
                                                  ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                   >> 4U)
                                                   : 
                                                  ((6U 
                                                    == (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles))
                                                    ? 
                                                   ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 5U)
                                                    : 
                                                   ((7U 
                                                     == (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycles)) 
                                                    & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                       >> 6U)))))))));
    vlSelf->tv80n__DOT__i_tv80_core__DOT__Auto_Wait = 0U;
    if (((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IntCycle) 
         | (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__NMICycle))) {
        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
            vlSelf->tv80n__DOT__i_tv80_core__DOT__Auto_Wait = 1U;
        }
    }
    vlSelf->tv80n__DOT__i_tv80_core__DOT__RstP = 0U;
    if ((0U == (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                     >> 1U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__RstP = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelf->tv80n__DOT__i_tv80_core__DOT__RstP = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelf->tv80n__DOT__i_tv80_core__DOT__RstP = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__RstP = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelf->tv80n__DOT__i_tv80_core__DOT__RstP = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__RstP = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__RstP = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__RstP = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
                vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Acc = 0U;
                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                              >> 5U)))) {
                    if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Acc = 0U;
            }
        } else {
            vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Acc = 0U;
            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                        if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Acc = 0U;
        if ((1U != (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ISet))) {
            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                          >> 7U)))) {
                if ((0x40U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x20U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                  >> 1U)))) {
                                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                        }
                                    }
                                }
                            } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                    }
                                }
                            }
                        } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                }
                            }
                        }
                    } else if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Acc = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->tv80n__DOT__i_tv80_core__DOT__I_RETN = 0U;
    if ((0U != (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U != (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ISet))) {
            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                          >> 7U)))) {
                if ((0x40U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x20U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                         >> 1U)))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__I_RETN = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                     >> 1U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__I_RETN = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                     >> 1U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__I_RETN = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelf->tv80n__DOT__i_tv80_core__DOT__I_RETN = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                     >> 1U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__I_RETN = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelf->tv80n__DOT__i_tv80_core__DOT__I_RETN = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelf->tv80n__DOT__i_tv80_core__DOT__I_RETN = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__I_RETN = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 0U;
    if ((0U == (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                        } else {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                                        }
                                    } else {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                                    }
                                } else {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                                }
                            } else {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                            }
                        } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    } else {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                                    }
                                } else {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                                }
                            } else {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                            }
                        } else {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    } else {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                                    }
                                } else {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                                }
                            } else {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                            }
                        } else {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                        }
                    } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                } else {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                                }
                            } else {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                            }
                        } else {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                        }
                    } else {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    } else if ((1U 
                                                & (~ 
                                                   ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 2U)))) {
                                        if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    } else {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                                    }
                                } else {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                                }
                            } else {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                            }
                        } else {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                        }
                    } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                } else {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                                }
                            } else {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                            }
                        } else {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                        }
                    } else {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    } else if ((4U 
                                                & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                } else {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                                }
                            } else {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                            }
                        } else {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                        }
                    } else {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                    }
                } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            } else {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                            }
                        } else {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                        }
                    } else {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                    }
                } else {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            }
                        }
                    }
                }
            } else if ((6U == (7U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    } else {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                    }
                } else {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                }
            } else {
                vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
            }
        } else {
            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        if ((6U == 
                                             (7U & 
                                              ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                               >> 3U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                                }
                                            }
                                        } else {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                        }
                                    } else if ((6U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                    >> 3U)))) {
                                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                            }
                                        }
                                    } else {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 1U)))) {
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                    } else if ((4U 
                                                & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((6U == (7U 
                                                & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U)))) {
                                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                            }
                                        }
                                    } else {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                    }
                                } else if ((6U == (7U 
                                                   & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U)))) {
                                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                        }
                                    }
                                } else {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((6U == (7U 
                                                & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U)))) {
                                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                            }
                                        }
                                    } else {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                    }
                                } else if ((6U == (7U 
                                                   & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U)))) {
                                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                        }
                                    }
                                } else {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 1U)))) {
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                    }
                                }
                            } else {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        } else if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                }
                            }
                        } else {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    }
                } else if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                }
                            } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)))) {
                                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                        }
                                    }
                                } else {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                }
                            } else if ((6U == (7U & 
                                               ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                    }
                                }
                            } else {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 1U)))) {
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                    }
                                }
                            } else {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        } else if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                }
                            }
                        } else {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        }
                    }
                } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                    }
                                }
                            } else {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        } else if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                }
                            }
                        } else {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 1U)))) {
                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        }
                    }
                } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                }
                            }
                        } else {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    } else if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        }
                    } else {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    }
                }
            }
            vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
            if ((0x40U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((0x36U != (0x3fU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                    if ((6U == (7U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    } else if ((6U != (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                }
            } else if ((0x20U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((6U != (7U 
                                                & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U)))) {
                                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                        }
                                    }
                                }
                            } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)))) {
                                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                        }
                                    }
                                } else {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            } else if ((6U == (7U & 
                                               ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    }
                                }
                            } else {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 1U)))) {
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((6U != (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    }
                                }
                            }
                        } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    }
                                }
                            } else {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        } else if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            }
                        } else {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 1U)))) {
                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    }
                } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((6U != (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    }
                                }
                            }
                        } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    }
                                }
                            } else {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        } else if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            }
                        } else {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 2U)))) {
                                    if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    } else if ((0x10U 
                                                & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    }
                } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        } else if ((6U != (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            }
                        } else {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    } else if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    } else {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                     >> 1U)))) {
                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    }
                }
            } else if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            } else if ((6U != (7U & 
                                               ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            }
                        } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    }
                                }
                            } else {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        } else if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            }
                        } else {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 1U)))) {
                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    }
                } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        } else if ((6U != (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            }
                        } else {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    } else if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    } else {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                     >> 1U)))) {
                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                }
            } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        } else if ((6U != (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            }
                        } else {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    } else if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    } else {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                     >> 1U)))) {
                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    }
                }
            } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    } else if ((6U != (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    }
                } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    } else {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                } else if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 3U)))) {
                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    }
                } else {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                }
            } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                 >> 1U)))) {
                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    }
                }
            }
        }
        vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_WZ = 0U;
        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 4U)))) {
                        if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                     >> 2U)))) {
                                                if (
                                                    (8U 
                                                     & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 2U)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 2U)))) {
                                            if ((8U 
                                                 & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__PreserveC = 0U;
                    if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        if ((6U == 
                                             (7U & 
                                              ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                               >> 3U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                                }
                                            }
                                        } else {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                        }
                                    } else if ((6U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                    >> 3U)))) {
                                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelf->tv80n__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                            }
                                        }
                                    } else {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((6U == (7U 
                                                & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U)))) {
                                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelf->tv80n__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                            }
                                        }
                                    } else {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                    }
                                } else if ((6U == (7U 
                                                   & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U)))) {
                                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                        }
                                    }
                                } else {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((6U == (7U 
                                                & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U)))) {
                                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelf->tv80n__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                            }
                                        }
                                    } else {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                    }
                                } else if ((6U == (7U 
                                                   & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U)))) {
                                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                        }
                                    }
                                } else {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)))) {
                                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                        }
                                    }
                                } else {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                }
                            } else if ((6U == (7U & 
                                               ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                    }
                                }
                            } else {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__PreserveC = 1U;
                            }
                        }
                    }
                } else {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__PreserveC = 0U;
                    if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        if ((6U == 
                                             (7U & 
                                              ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                               >> 3U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                                }
                                            }
                                        } else {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                        }
                                    } else if ((6U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                    >> 3U)))) {
                                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelf->tv80n__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                            }
                                        }
                                    } else {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((6U == (7U 
                                                & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U)))) {
                                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelf->tv80n__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                            }
                                        }
                                    } else {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                    }
                                } else if ((6U == (7U 
                                                   & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U)))) {
                                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                        }
                                    }
                                } else {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((6U == (7U 
                                                & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U)))) {
                                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelf->tv80n__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                            }
                                        }
                                    } else {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                    }
                                } else if ((6U == (7U 
                                                   & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U)))) {
                                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                        }
                                    }
                                } else {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)))) {
                                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                        }
                                    }
                                } else {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                }
                            } else if ((6U == (7U & 
                                               ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                    }
                                }
                            } else {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__PreserveC = 1U;
                            }
                        }
                    }
                }
                vlSelf->tv80n__DOT__i_tv80_core__DOT__I_DJNZ = 0U;
                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                              >> 5U)))) {
                    if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__I_DJNZ = 1U;
                                        } else if (
                                                   (2U 
                                                    & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__I_DJNZ = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                vlSelf->tv80n__DOT__i_tv80_core__DOT__PreserveC = 0U;
                vlSelf->tv80n__DOT__i_tv80_core__DOT__I_DJNZ = 0U;
            }
        } else {
            vlSelf->tv80n__DOT__i_tv80_core__DOT__PreserveC = 0U;
            vlSelf->tv80n__DOT__i_tv80_core__DOT__I_DJNZ = 0U;
        }
    } else {
        if ((1U == (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ISet))) {
            if ((0x80U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((0x40U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                } else {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                 | ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 6U))))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                } else {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                                }
                            } else {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                            }
                        } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        } else {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                        }
                    } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    } else {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                    }
                } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            } else {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                             | ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                >> 6U))))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            } else {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                            }
                        } else {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                        }
                    } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    } else {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                    }
                } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                } else {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                }
            } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                 >> 6U)))) {
                if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            } else {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                             | ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                >> 6U))))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            } else {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                            }
                        } else {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                        }
                    } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                    } else {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                    }
                } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                } else {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                }
            } else {
                vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
            }
        } else if ((0x80U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                } else {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                                }
                            } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            } else {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                            }
                        } else {
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                    }
                                }
                            }
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                        }
                    } else {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                    }
                } else {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                }
            } else {
                vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
            }
        } else if ((0x40U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((0x20U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                }
                            }
                        } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                }
                            }
                        }
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 2U)))) {
                                            if ((8U 
                                                 & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                            } else if (
                                                       (0x10U 
                                                        & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                            }
                                        }
                                    }
                                } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            } else if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        if ((6U != 
                                             (7U & 
                                              ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                               >> 3U)))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                }
                            }
                        } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                }
                            }
                        }
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    } else if ((4U 
                                                & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    }
                                }
                            } else if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        if ((6U != 
                                             (7U & 
                                              ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                               >> 3U)))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    } else {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                                    }
                                } else {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                                }
                            } else {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                            }
                        } else {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                        }
                    } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        }
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 2U)))) {
                                    if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    } else if ((0x10U 
                                                & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    }
                                }
                            }
                        } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    } else {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    if ((6U != (7U 
                                                & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U)))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                } else {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                                }
                            } else {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                            }
                        } else {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                        }
                    } else {
                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                    }
                } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        } else {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                        }
                    } else {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                    }
                } else {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                if ((6U != (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            }
                        }
                    }
                }
            } else if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        }
                    } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        }
                    }
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 2U)))) {
                                        if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                        } else if (
                                                   (0x10U 
                                                    & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                        }
                                    }
                                }
                            } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        } else if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    if ((6U != (7U 
                                                & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U)))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        }
                    } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                            }
                        }
                    }
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            }
                        } else if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    if ((6U != (7U 
                                                & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U)))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    }
                } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    }
                }
                vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 2U)))) {
                                    if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    } else if ((0x10U 
                                                & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                    }
                                }
                            }
                        } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                        }
                    } else if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                if ((6U != (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            }
                        }
                    }
                }
            } else {
                if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    }
                } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Save_ALU = 1U;
                        }
                    }
                }
                vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                              >> 2U)))) {
                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                            }
                        }
                    } else if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                if ((6U != (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 1U;
                                }
                            }
                        }
                    }
                }
            }
        } else {
            vlSelf->tv80n__DOT__i_tv80_core__DOT__Read_To_Reg = 0U;
        }
        vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_WZ = 0U;
        if ((1U != (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ISet))) {
            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                          >> 7U)))) {
                if ((0x40U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x20U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                         >> 2U)))) {
                                                    if (
                                                        (8U 
                                                         & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 2U)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                     >> 2U)))) {
                                                if (
                                                    (8U 
                                                     & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                     >> 2U)))) {
                                                if (
                                                    (8U 
                                                     & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 2U)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 2U)))) {
                                            if ((8U 
                                                 & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                     >> 2U)))) {
                                                if (
                                                    (8U 
                                                     & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 2U)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 2U)))) {
                                            if ((8U 
                                                 & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 2U)))) {
                                            if ((8U 
                                                 & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 2U)))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 2U)))) {
                                        if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_WZ = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            vlSelf->tv80n__DOT__i_tv80_core__DOT__PreserveC = 0U;
            if ((0x80U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                              >> 6U)))) {
                    if ((0x20U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__PreserveC = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            vlSelf->tv80n__DOT__i_tv80_core__DOT__PreserveC = 0U;
        }
        vlSelf->tv80n__DOT__i_tv80_core__DOT__I_DJNZ = 0U;
    }
    vlSelf->tv80n__DOT__i_tv80_core__DOT__I_BC = 0U;
    if ((0U != (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U != (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ISet))) {
            if ((0x80U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                              >> 6U)))) {
                    if ((0x20U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelf->tv80n__DOT__i_tv80_core__DOT__I_BC = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__I_BTR = 0U;
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelf->tv80n__DOT__i_tv80_core__DOT__I_BTR = 1U;
                                            }
                                        }
                                    }
                                } else if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__I_BTR = 1U;
                                        }
                                    }
                                }
                            }
                        } else {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__I_BTR = 0U;
                        }
                    } else {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__I_BTR = 0U;
                    }
                } else {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__I_BTR = 0U;
                }
            } else {
                vlSelf->tv80n__DOT__i_tv80_core__DOT__I_BTR = 0U;
            }
            vlSelf->tv80n__DOT__i_tv80_core__DOT__I_RLD = 0U;
            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                          >> 7U)))) {
                if ((0x40U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x20U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 4U)))) {
                            if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                         >> 2U)))) {
                                                    if (
                                                        (8U 
                                                         & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__I_RLD = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__I_RRD = 0U;
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                                if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                         >> 2U)))) {
                                                    if (
                                                        (8U 
                                                         & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__I_RRD = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__I_RRD = 0U;
                        }
                    } else {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__I_RRD = 0U;
                    }
                } else {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__I_RRD = 0U;
                }
            } else {
                vlSelf->tv80n__DOT__i_tv80_core__DOT__I_RRD = 0U;
            }
        } else {
            vlSelf->tv80n__DOT__i_tv80_core__DOT__I_BTR = 0U;
            vlSelf->tv80n__DOT__i_tv80_core__DOT__I_RLD = 0U;
            vlSelf->tv80n__DOT__i_tv80_core__DOT__I_RRD = 0U;
        }
    } else {
        vlSelf->tv80n__DOT__i_tv80_core__DOT__I_BTR = 0U;
        vlSelf->tv80n__DOT__i_tv80_core__DOT__I_RLD = 0U;
        vlSelf->tv80n__DOT__i_tv80_core__DOT__I_RRD = 0U;
    }
    vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 
        (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
               >> 3U));
    if ((0U == (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        if ((6U == 
                                             (7U & 
                                              ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                               >> 3U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                                                }
                                            }
                                        } else {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                                        }
                                    } else if ((6U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                    >> 3U)))) {
                                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                                            }
                                        }
                                    } else {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 1U)))) {
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                                    } else if ((4U 
                                                & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                                    }
                                }
                            }
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Arith16 = 0U;
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Arith16 = 1U;
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Arith16 = 1U;
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        if ((6U == 
                                             (7U & 
                                              ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                               >> 3U)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                                                }
                                            }
                                        } else {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                                        }
                                    } else if ((6U 
                                                == 
                                                (7U 
                                                 & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                    >> 3U)))) {
                                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                                            }
                                        }
                                    } else {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                                    }
                                }
                            }
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Arith16 = 0U;
                        }
                    } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((6U == (7U 
                                                & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U)))) {
                                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                                            }
                                        }
                                    } else {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                                    }
                                } else if ((6U == (7U 
                                                   & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U)))) {
                                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                                        }
                                    }
                                } else {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 1U)))) {
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                                } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                                }
                            }
                        }
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Arith16 = 0U;
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Arith16 = 1U;
                                    } else if ((4U 
                                                & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Arith16 = 1U;
                                    }
                                }
                            }
                        }
                    } else {
                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 0xcU;
                                }
                            } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)))) {
                                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                                        }
                                    }
                                } else {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                                }
                            } else if ((6U == (7U & 
                                               ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                                    }
                                }
                            } else {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                            }
                        }
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Arith16 = 0U;
                    }
                } else if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 8U;
                                }
                            } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)))) {
                                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                                        }
                                    }
                                } else {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                                }
                            } else if ((6U == (7U & 
                                               ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                                    }
                                }
                            } else {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 1U)))) {
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                                } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                                }
                            }
                        }
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Arith16 = 0U;
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Arith16 = 1U;
                                    } else if ((4U 
                                                & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Arith16 = 1U;
                                    }
                                }
                            }
                        }
                    } else {
                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 8U;
                                }
                            } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)))) {
                                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                                        }
                                    }
                                } else {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                                }
                            } else if ((6U == (7U & 
                                               ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                                    }
                                }
                            } else {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                                }
                            }
                        }
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Arith16 = 0U;
                    }
                } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 8U;
                            }
                        } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                                    }
                                }
                            } else {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                            }
                        } else if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                                }
                            }
                        } else {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                        }
                    } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 1U)))) {
                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                            } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                            }
                        }
                    }
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Arith16 = 0U;
                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Arith16 = 1U;
                                } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Arith16 = 1U;
                                }
                            }
                        }
                    }
                } else {
                    if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 8U;
                            }
                        } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                                    }
                                }
                            } else {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                            }
                        } else if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                                }
                            }
                        } else {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 0U;
                        }
                    }
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Arith16 = 0U;
                }
            } else {
                vlSelf->tv80n__DOT__i_tv80_core__DOT__Arith16 = 0U;
            }
        } else {
            vlSelf->tv80n__DOT__i_tv80_core__DOT__Arith16 = 0U;
        }
        vlSelf->tv80n__DOT__i_tv80_core__DOT__Call = 0U;
        if ((0x80U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                     >> 2U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                         >> 3U)))) {
                                                    if (
                                                        (0x10U 
                                                         & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Call = 1U;
                                                    }
                                                }
                                            }
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__LDW = 0U;
                                            if ((4U 
                                                 & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelf->tv80n__DOT__i_tv80_core__DOT__LDW = 1U;
                                            }
                                        } else {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__LDW = 0U;
                                        }
                                    } else {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__LDW = 0U;
                                    }
                                } else {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__LDW = 0U;
                                }
                            } else {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__LDW = 0U;
                            }
                        } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                     >> 3U)))) {
                                                if (
                                                    (0x10U 
                                                     & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Call = 1U;
                                                }
                                            }
                                        }
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__LDW = 0U;
                                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__LDW = 1U;
                                        }
                                    } else {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__LDW = 0U;
                                    }
                                } else {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__LDW = 0U;
                                }
                            } else {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__LDW = 0U;
                            }
                        } else {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__LDW = 0U;
                        }
                    } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                     >> 3U)))) {
                                                if (
                                                    (0x10U 
                                                     & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Call = 1U;
                                                }
                                            }
                                        }
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__LDW = 0U;
                                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__LDW = 1U;
                                        }
                                    } else {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__LDW = 0U;
                                    }
                                } else {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__LDW = 0U;
                                }
                            } else {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__LDW = 0U;
                            }
                        } else {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__LDW = 0U;
                        }
                    } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 3U)))) {
                                            if ((0x10U 
                                                 & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Call = 1U;
                                            }
                                        }
                                    }
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__LDW = 0U;
                                    if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__LDW = 1U;
                                    }
                                } else {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__LDW = 0U;
                                }
                            } else {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__LDW = 0U;
                            }
                        } else {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__LDW = 0U;
                        }
                    } else {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__LDW = 0U;
                    }
                } else if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 2U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                     >> 3U)))) {
                                                if (
                                                    (0x10U 
                                                     & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Call = 1U;
                                                }
                                            }
                                        }
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__LDW = 0U;
                                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__LDW = 1U;
                                        }
                                    } else {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__LDW = 0U;
                                    }
                                } else {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__LDW = 0U;
                                }
                            } else {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__LDW = 0U;
                            }
                        } else {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__LDW = 0U;
                        }
                    } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 3U)))) {
                                            if ((0x10U 
                                                 & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Call = 1U;
                                            }
                                        }
                                    }
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__LDW = 0U;
                                    if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__LDW = 1U;
                                    }
                                } else {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__LDW = 0U;
                                }
                            } else {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__LDW = 0U;
                            }
                        } else {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__LDW = 0U;
                        }
                    } else {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__LDW = 0U;
                    }
                } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 3U)))) {
                                            if ((0x10U 
                                                 & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Call = 1U;
                                            }
                                        }
                                    }
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__LDW = 0U;
                                    if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__LDW = 1U;
                                    }
                                } else {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__LDW = 0U;
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                 >> 1U)))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 3U)))) {
                                        if ((0x10U 
                                             & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Call = 1U;
                                        }
                                    }
                                }
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__LDW = 0U;
                                if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__LDW = 1U;
                                }
                            } else {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__LDW = 0U;
                            }
                        } else {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__LDW = 0U;
                        }
                    } else {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__LDW = 0U;
                    }
                } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 3U)))) {
                                        if ((0x10U 
                                             & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Call = 1U;
                                        }
                                    }
                                }
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__LDW = 0U;
                                if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__LDW = 1U;
                                }
                            } else {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__LDW = 0U;
                            }
                        } else {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__LDW = 0U;
                        }
                    } else {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__LDW = 0U;
                    }
                } else {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__LDW = 0U;
                }
            } else {
                vlSelf->tv80n__DOT__i_tv80_core__DOT__LDW = 0U;
            }
        } else {
            vlSelf->tv80n__DOT__i_tv80_core__DOT__LDW = 0U;
            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 4U)))) {
                        if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelf->tv80n__DOT__i_tv80_core__DOT__LDW = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 2U)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__LDW = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((1U == (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ISet))) {
            if ((0x80U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((0x40U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 0xaU;
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                 | ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 6U))))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 0xaU;
                                }
                            }
                        } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 0xaU;
                        }
                    } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 0xaU;
                    }
                } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 0xbU;
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                             | ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                >> 6U))))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 0xbU;
                            }
                        }
                    } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 0xbU;
                    }
                } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 0xbU;
                }
            } else if ((0x40U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 9U;
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                             | ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                >> 6U))))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 9U;
                            }
                        }
                    } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 9U;
                    }
                } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 9U;
                }
            } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 8U;
                        }
                    } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                         | ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                            >> 6U))))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 8U;
                        }
                    }
                } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 8U;
                }
            } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 8U;
            }
        } else if ((0x80U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                                }
                            } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                            }
                        } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 7U;
                                }
                            }
                        } else if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 0U;
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
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                                }
                            }
                        } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                                } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                            }
                        }
                    } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 3U;
                            } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 3U;
                            }
                        }
                    }
                } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 0xdU;
                                    }
                                }
                            }
                        } else if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                        }
                    } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                            } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                            }
                        }
                    }
                } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 0xeU;
                                }
                            }
                        }
                    } else if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                    }
                } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 3U;
                        } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 3U;
                        }
                    }
                }
            } else if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                            }
                        }
                    } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                            } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                            }
                        }
                    }
                } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                        }
                    }
                } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 3U;
                        } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 3U;
                        }
                    }
                }
            } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                        }
                    }
                } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                        } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 1U;
                        }
                    }
                }
            } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 2U;
                    }
                }
            } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 3U;
                    } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__ALU_Op = 3U;
                    }
                }
            }
        }
        vlSelf->tv80n__DOT__i_tv80_core__DOT__Arith16 = 0U;
        vlSelf->tv80n__DOT__i_tv80_core__DOT__Call = 0U;
        vlSelf->tv80n__DOT__i_tv80_core__DOT__LDW = 0U;
        if ((1U != (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ISet))) {
            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                          >> 7U)))) {
                if ((0x40U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x20U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 2U)))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                     >> 1U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__LDW = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 2U)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelf->tv80n__DOT__i_tv80_core__DOT__LDW = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelf->tv80n__DOT__i_tv80_core__DOT__LDW = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 2U)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__LDW = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelf->tv80n__DOT__i_tv80_core__DOT__LDW = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 2U)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__LDW = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__LDW = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 2U)))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__LDW = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->tv80n__DOT__i_tv80_core__DOT__I_BT = 0U;
    if ((0U != (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U != (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ISet))) {
            if ((0x80U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                              >> 6U)))) {
                    if ((0x20U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelf->tv80n__DOT__i_tv80_core__DOT__I_BT = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            vlSelf->tv80n__DOT__i_tv80_core__DOT__I_INRC = 0U;
            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                          >> 7U)))) {
                if ((0x40U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x20U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 2U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                  >> 1U)))) {
                                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                                if (
                                                    (2U 
                                                     & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__I_INRC = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelf->tv80n__DOT__i_tv80_core__DOT__I_INRC = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelf->tv80n__DOT__i_tv80_core__DOT__I_INRC = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 2U)))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__I_INRC = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelf->tv80n__DOT__i_tv80_core__DOT__I_INRC = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 2U)))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__I_INRC = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__I_INRC = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__I_INRC = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else {
            vlSelf->tv80n__DOT__i_tv80_core__DOT__I_INRC = 0U;
        }
    } else {
        vlSelf->tv80n__DOT__i_tv80_core__DOT__I_INRC = 0U;
    }
    vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 0U;
    if ((0U == (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        }
                                    }
                                } else if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    } else if ((4U 
                                                & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    }
                                }
                            } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    } else if ((4U 
                                                & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    }
                                }
                            } else if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            }
                        } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    }
                                }
                            } else if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            }
                        } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            }
                        } else if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            }
                        }
                    } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    }
                                }
                            } else if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            }
                        } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            }
                        }
                    } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            }
                        } else if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            }
                        }
                    } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            }
                        } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        }
                    }
                } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            }
                        } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            }
                        } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        }
                    } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            }
                        }
                    }
                } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            }
                        }
                    } else if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        }
                    }
                } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        }
                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        }
                    } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                    } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                             >> 6U)))) {
            if ((0x20U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((6U == (7U 
                                                & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U)))) {
                                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        }
                                    } else if ((2U 
                                                & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    }
                                }
                            }
                        } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                                if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            }
                        } else if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            }
                        }
                    } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    }
                                } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            }
                        }
                    } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            }
                        }
                    } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        }
                    } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                    }
                } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    }
                                } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            }
                        }
                    } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            }
                        }
                    } else if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        }
                    }
                } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            }
                        }
                    }
                } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        }
                    }
                } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                    } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                    }
                } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                }
            } else if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    }
                                } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            }
                        }
                    }
                } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                     >> 1U)))) {
                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        }
                    } else if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        }
                    }
                }
            } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            }
                        }
                    }
                }
            } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                        if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            }
                        } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                        }
                    }
                }
            } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                 >> 1U)))) {
                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                    } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                    }
                } else if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__NMICycle)))) {
                    if (vlSelf->tv80n__DOT__i_tv80_core__DOT__IntCycle) {
                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 2U)))) {
                                    if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((1U != (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                      >> 7U)))) {
            if ((0x40U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 2U)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    } else if ((4U 
                                                & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    } else if ((4U 
                                                & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 2U)))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    } else if ((4U 
                                                & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 2U)))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                                }
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                     >> 2U)))) {
                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    if ((0x20U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
        vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
    }
    if ((0x40U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
        if (((0x36U == (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)) 
             | (1U == (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ISet)))) {
            vlSelf->tv80n__DOT__i_tv80_core__DOT__Inc_PC = 1U;
        }
    }
    vlSelf->tv80n__DOT__i_tv80_core__DOT__LDZ = 0U;
    if ((0U == (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                                        }
                                    }
                                }
                            } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                                    }
                                }
                            } else if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                                    }
                                }
                            }
                        } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                                }
                            }
                        } else if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                                    }
                                }
                            }
                        } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                                }
                            }
                        } else if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                                }
                            }
                        }
                    } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                            }
                        }
                    } else if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                                    }
                                }
                            }
                        } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                                }
                            }
                        } else if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                                }
                            }
                        }
                    } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                            }
                        }
                    } else if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                            }
                        }
                    }
                } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                                }
                            } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                            }
                        }
                    } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                            }
                        }
                    } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                            }
                        }
                    } else if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                        }
                    }
                } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                            }
                        }
                    }
                } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                        }
                    } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                    }
                } else if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                        }
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                             >> 6U)))) {
            if ((0x20U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 2U)))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                                }
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                     >> 2U)))) {
                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                            }
                        }
                    }
                }
            } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                 >> 4U)))) {
                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__NMICycle)))) {
                                    if (vlSelf->tv80n__DOT__i_tv80_core__DOT__IntCycle) {
                                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                        >> 1U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                     >> 2U)))) {
                                                if (
                                                    (8U 
                                                     & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        vlSelf->tv80n__DOT__i_tv80_core__DOT__JumpE = 0U;
        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelf->tv80n__DOT__i_tv80_core__DOT__JumpE = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 2U)))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__JumpE = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__JumpE = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__JumpE = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__JumpE = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__JumpE = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        vlSelf->tv80n__DOT__i_tv80_core__DOT__iorq_i = 0U;
        if ((0x80U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                              >> 5U)))) {
                    if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelf->tv80n__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 2U)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        vlSelf->tv80n__DOT__no_read = 0U;
        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                      >> 7U)))) {
            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__no_read = 1U;
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__no_read = 1U;
                                        }
                                    } else if ((1U 
                                                & (~ 
                                                   ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__no_read = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 2U)))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__no_read = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__no_read = 1U;
                                    } else if ((4U 
                                                & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__no_read = 1U;
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                   >> 1U)))) {
                                    if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__no_read = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__no_read = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__no_read = 1U;
                                    } else if ((4U 
                                                & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__no_read = 1U;
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                   >> 1U)))) {
                                    if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__no_read = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__no_read = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__no_read = 1U;
                                } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__no_read = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    } else if ((1U != (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                      >> 7U)))) {
            if ((0x40U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelf->tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                                            }
                                        }
                                    }
                                }
                            } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                            }
                        }
                    }
                } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                            }
                        }
                    }
                } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                                }
                            }
                        }
                    }
                } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__LDZ = 1U;
                        }
                    }
                }
            }
        }
        vlSelf->tv80n__DOT__i_tv80_core__DOT__JumpE = 0U;
        vlSelf->tv80n__DOT__i_tv80_core__DOT__iorq_i = 0U;
        if ((0x80U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                          >> 6U)))) {
                if ((0x20U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                        }
                                        vlSelf->tv80n__DOT__no_read = 0U;
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 2U)))) {
                                            if ((8U 
                                                 & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelf->tv80n__DOT__no_read = 1U;
                                            }
                                        }
                                    } else {
                                        vlSelf->tv80n__DOT__no_read = 0U;
                                    }
                                } else {
                                    vlSelf->tv80n__DOT__no_read = 0U;
                                }
                            } else if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                }
                                vlSelf->tv80n__DOT__no_read = 0U;
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 2U)))) {
                                        if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__no_read = 1U;
                                        }
                                    }
                                }
                            } else {
                                vlSelf->tv80n__DOT__no_read = 0U;
                            }
                        } else {
                            vlSelf->tv80n__DOT__no_read = 0U;
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__no_read = 1U;
                                        } else if (
                                                   (8U 
                                                    & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__no_read = 1U;
                                        }
                                    }
                                }
                            } else if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 2U)))) {
                                        if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__no_read = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        vlSelf->tv80n__DOT__no_read = 0U;
                    }
                } else {
                    vlSelf->tv80n__DOT__no_read = 0U;
                }
            } else {
                vlSelf->tv80n__DOT__no_read = 0U;
            }
        } else if ((0x40U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((0x20U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                        }
                                    }
                                } else if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                    }
                                }
                            }
                            vlSelf->tv80n__DOT__no_read = 0U;
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__no_read = 1U;
                                    } else if ((4U 
                                                & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__no_read = 1U;
                                    }
                                }
                            }
                        } else {
                            vlSelf->tv80n__DOT__no_read = 0U;
                        }
                    } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                    }
                                }
                            } else if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                }
                            }
                        }
                        vlSelf->tv80n__DOT__no_read = 0U;
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__no_read = 1U;
                                } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__no_read = 1U;
                                }
                            }
                        }
                    } else {
                        vlSelf->tv80n__DOT__no_read = 0U;
                    }
                } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                    }
                                }
                            } else if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                }
                            }
                        }
                    }
                    vlSelf->tv80n__DOT__no_read = 0U;
                    if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__no_read = 1U;
                                }
                            }
                        }
                    } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__no_read = 1U;
                            } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__no_read = 1U;
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                     >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                }
                            }
                        } else if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__iorq_i = 1U;
                            }
                        }
                    }
                    vlSelf->tv80n__DOT__no_read = 0U;
                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__no_read = 1U;
                            } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__no_read = 1U;
                            }
                        }
                    }
                } else {
                    vlSelf->tv80n__DOT__no_read = 0U;
                }
            } else if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                    }
                                }
                            } else if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                }
                            }
                        }
                        vlSelf->tv80n__DOT__no_read = 0U;
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__no_read = 1U;
                                } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__no_read = 1U;
                                }
                            }
                        }
                    } else {
                        vlSelf->tv80n__DOT__no_read = 0U;
                    }
                } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                     >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                }
                            }
                        } else if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__iorq_i = 1U;
                            }
                        }
                    }
                    vlSelf->tv80n__DOT__no_read = 0U;
                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__no_read = 1U;
                            } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__no_read = 1U;
                            }
                        }
                    }
                } else {
                    vlSelf->tv80n__DOT__no_read = 0U;
                }
            } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__iorq_i = 1U;
                                }
                            }
                        } else if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__iorq_i = 1U;
                            }
                        }
                    }
                    vlSelf->tv80n__DOT__no_read = 0U;
                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__no_read = 1U;
                            } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__no_read = 1U;
                            }
                        }
                    }
                } else {
                    vlSelf->tv80n__DOT__no_read = 0U;
                }
            } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                 >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__i_tv80_core__DOT__iorq_i = 1U;
                            }
                        }
                    } else if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__iorq_i = 1U;
                        }
                    }
                }
                vlSelf->tv80n__DOT__no_read = 0U;
                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__no_read = 1U;
                        } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__no_read = 1U;
                        }
                    }
                }
            } else {
                vlSelf->tv80n__DOT__no_read = 0U;
            }
        } else {
            vlSelf->tv80n__DOT__no_read = 0U;
        }
    } else {
        vlSelf->tv80n__DOT__i_tv80_core__DOT__JumpE = 0U;
        vlSelf->tv80n__DOT__i_tv80_core__DOT__iorq_i = 0U;
        vlSelf->tv80n__DOT__no_read = 0U;
    }
    if ((0x40U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
        if ((1U & (~ ((0x36U == (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)) 
                      | (1U == (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ISet)))))) {
            vlSelf->tv80n__DOT__no_read = 1U;
        }
    }
    vlSelf->tv80n__DOT__write = 0U;
    if ((0U == (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelf->tv80n__DOT__write = 1U;
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelf->tv80n__DOT__write = 1U;
                                            }
                                        }
                                    }
                                } else if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 2U)))) {
                                            if ((8U 
                                                 & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelf->tv80n__DOT__write = 1U;
                                            } else if (
                                                       (0x10U 
                                                        & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelf->tv80n__DOT__write = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Jump = 0U;
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc 
                                                    = 
                                                    (7U 
                                                     & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                        >> 3U));
                                                vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF 
                                                    = vlSelf->tv80n__DOT__i_tv80_core__DOT__F;
                                                vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__Vfuncout 
                                                    = 
                                                    (1U 
                                                     & ((4U 
                                                         & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc))
                                                         ? 
                                                        ((2U 
                                                          & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc))
                                                           ? 
                                                          ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF) 
                                                           >> 7U)
                                                           : 
                                                          (~ 
                                                           ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF) 
                                                            >> 7U)))
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc))
                                                           ? 
                                                          ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF) 
                                                           >> 2U)
                                                           : 
                                                          (~ 
                                                           ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF) 
                                                            >> 2U))))
                                                         : 
                                                        ((2U 
                                                          & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc))
                                                           ? (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF)
                                                           : 
                                                          (~ (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF)))
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc))
                                                           ? 
                                                          ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF) 
                                                           >> 6U)
                                                           : 
                                                          (~ 
                                                           ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF) 
                                                            >> 6U))))));
                                                if (vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__Vfuncout) {
                                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Jump = 1U;
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Jump = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((2U 
                                                 & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelf->tv80n__DOT__write = 1U;
                                            } else if (
                                                       (4U 
                                                        & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelf->tv80n__DOT__write = 1U;
                                            }
                                        }
                                    }
                                } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__write = 1U;
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__write = 1U;
                                        }
                                    }
                                } else if ((1U & (~ 
                                                  ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                   >> 1U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 2U)))) {
                                        if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__write = 1U;
                                        } else if (
                                                   (0x10U 
                                                    & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__write = 1U;
                                        }
                                    }
                                }
                            }
                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Jump = 0U;
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc 
                                                    = 
                                                    (7U 
                                                     & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                        >> 3U));
                                                vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF 
                                                    = vlSelf->tv80n__DOT__i_tv80_core__DOT__F;
                                                vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__Vfuncout 
                                                    = 
                                                    (1U 
                                                     & ((4U 
                                                         & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc))
                                                         ? 
                                                        ((2U 
                                                          & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc))
                                                           ? 
                                                          ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF) 
                                                           >> 7U)
                                                           : 
                                                          (~ 
                                                           ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF) 
                                                            >> 7U)))
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc))
                                                           ? 
                                                          ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF) 
                                                           >> 2U)
                                                           : 
                                                          (~ 
                                                           ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF) 
                                                            >> 2U))))
                                                         : 
                                                        ((2U 
                                                          & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc))
                                                          ? 
                                                         ((1U 
                                                           & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc))
                                                           ? (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF)
                                                           : 
                                                          (~ (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF)))
                                                          : 
                                                         ((1U 
                                                           & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc))
                                                           ? 
                                                          ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF) 
                                                           >> 6U)
                                                           : 
                                                          (~ 
                                                           ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF) 
                                                            >> 6U))))));
                                                if (vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__Vfuncout) {
                                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Jump = 1U;
                                                }
                                            }
                                        }
                                    }
                                } else if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Jump = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__write = 1U;
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__write = 1U;
                                        }
                                    }
                                }
                            } else if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 2U)))) {
                                        if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__write = 1U;
                                        } else if (
                                                   (0x10U 
                                                    & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__write = 1U;
                                        }
                                    }
                                }
                            }
                        }
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Jump = 0U;
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc 
                                                = (7U 
                                                   & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U));
                                            vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF 
                                                = vlSelf->tv80n__DOT__i_tv80_core__DOT__F;
                                            vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__Vfuncout 
                                                = (1U 
                                                   & ((4U 
                                                       & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc))
                                                         ? 
                                                        ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF) 
                                                         >> 7U)
                                                         : 
                                                        (~ 
                                                         ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF) 
                                                          >> 7U)))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc))
                                                         ? 
                                                        ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF) 
                                                         >> 2U)
                                                         : 
                                                        (~ 
                                                         ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF) 
                                                          >> 2U))))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc))
                                                         ? (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF)
                                                         : 
                                                        (~ (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF)))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc))
                                                         ? 
                                                        ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF) 
                                                         >> 6U)
                                                         : 
                                                        (~ 
                                                         ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF) 
                                                          >> 6U))))));
                                            if (vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__Vfuncout) {
                                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Jump = 1U;
                                            }
                                        }
                                    }
                                }
                            } else if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Jump = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__write = 1U;
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__write = 1U;
                                        }
                                    }
                                }
                            } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__write = 1U;
                                    } else if ((4U 
                                                & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__write = 1U;
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                 >> 1U)))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 2U)))) {
                                    if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__write = 1U;
                                    } else if ((0x10U 
                                                & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__write = 1U;
                                    }
                                }
                            }
                        } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__write = 1U;
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                        >> 3U)))) {
                                            if ((0x10U 
                                                 & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelf->tv80n__DOT__write = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Jump = 0U;
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc 
                                                = (7U 
                                                   & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U));
                                            vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF 
                                                = vlSelf->tv80n__DOT__i_tv80_core__DOT__F;
                                            vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__Vfuncout 
                                                = (1U 
                                                   & ((4U 
                                                       & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc))
                                                         ? 
                                                        ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF) 
                                                         >> 7U)
                                                         : 
                                                        (~ 
                                                         ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF) 
                                                          >> 7U)))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc))
                                                         ? 
                                                        ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF) 
                                                         >> 2U)
                                                         : 
                                                        (~ 
                                                         ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF) 
                                                          >> 2U))))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc))
                                                         ? (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF)
                                                         : 
                                                        (~ (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF)))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc))
                                                         ? 
                                                        ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF) 
                                                         >> 6U)
                                                         : 
                                                        (~ 
                                                         ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF) 
                                                          >> 6U))))));
                                            if (vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__Vfuncout) {
                                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Jump = 1U;
                                            }
                                        }
                                    }
                                }
                            } else if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Jump = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__write = 1U;
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__write = 1U;
                                        }
                                    }
                                }
                            } else if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 2U)))) {
                                        if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__write = 1U;
                                        } else if (
                                                   (0x10U 
                                                    & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__write = 1U;
                                        }
                                    }
                                }
                            }
                        }
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Jump = 0U;
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc 
                                                = (7U 
                                                   & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U));
                                            vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF 
                                                = vlSelf->tv80n__DOT__i_tv80_core__DOT__F;
                                            vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__Vfuncout 
                                                = (1U 
                                                   & ((4U 
                                                       & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc))
                                                         ? 
                                                        ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF) 
                                                         >> 7U)
                                                         : 
                                                        (~ 
                                                         ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF) 
                                                          >> 7U)))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc))
                                                         ? 
                                                        ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF) 
                                                         >> 2U)
                                                         : 
                                                        (~ 
                                                         ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF) 
                                                          >> 2U))))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc))
                                                         ? (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF)
                                                         : 
                                                        (~ (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF)))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc))
                                                         ? 
                                                        ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF) 
                                                         >> 6U)
                                                         : 
                                                        (~ 
                                                         ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF) 
                                                          >> 6U))))));
                                            if (vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__Vfuncout) {
                                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Jump = 1U;
                                            }
                                        }
                                    }
                                }
                            } else if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Jump = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__write = 1U;
                                        } else if (
                                                   (4U 
                                                    & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__write = 1U;
                                        }
                                    }
                                }
                            } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__write = 1U;
                                    } else if ((4U 
                                                & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__write = 1U;
                                    }
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                 >> 1U)))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 2U)))) {
                                    if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__write = 1U;
                                    } else if ((0x10U 
                                                & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__write = 1U;
                                    }
                                }
                            }
                        } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__write = 1U;
                                    }
                                }
                            }
                        }
                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Jump = 0U;
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc 
                                                = (7U 
                                                   & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                      >> 3U));
                                            vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF 
                                                = vlSelf->tv80n__DOT__i_tv80_core__DOT__F;
                                            vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__Vfuncout 
                                                = (1U 
                                                   & ((4U 
                                                       & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc))
                                                       ? 
                                                      ((2U 
                                                        & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc))
                                                         ? 
                                                        ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF) 
                                                         >> 7U)
                                                         : 
                                                        (~ 
                                                         ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF) 
                                                          >> 7U)))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc))
                                                         ? 
                                                        ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF) 
                                                         >> 2U)
                                                         : 
                                                        (~ 
                                                         ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF) 
                                                          >> 2U))))
                                                       : 
                                                      ((2U 
                                                        & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc))
                                                        ? 
                                                       ((1U 
                                                         & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc))
                                                         ? (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF)
                                                         : 
                                                        (~ (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF)))
                                                        : 
                                                       ((1U 
                                                         & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc))
                                                         ? 
                                                        ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF) 
                                                         >> 6U)
                                                         : 
                                                        (~ 
                                                         ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF) 
                                                          >> 6U))))));
                                            if (vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__Vfuncout) {
                                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Jump = 1U;
                                            }
                                        }
                                    }
                                }
                            } else if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Jump = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__write = 1U;
                                    } else if ((4U 
                                                & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__write = 1U;
                                    }
                                }
                            }
                        } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 2U)))) {
                                    if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__write = 1U;
                                    } else if ((0x10U 
                                                & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__write = 1U;
                                    }
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                             >> 1U)))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 2U)))) {
                                if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__write = 1U;
                                } else if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__write = 1U;
                                }
                            }
                        }
                    }
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Jump = 0U;
                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc 
                                            = (7U & 
                                               ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U));
                                        vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF 
                                            = vlSelf->tv80n__DOT__i_tv80_core__DOT__F;
                                        vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__Vfuncout 
                                            = (1U & 
                                               ((4U 
                                                 & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc))
                                                 ? 
                                                ((2U 
                                                  & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc))
                                                   ? 
                                                  ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF) 
                                                   >> 7U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF) 
                                                    >> 7U)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc))
                                                   ? 
                                                  ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF) 
                                                   >> 2U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF) 
                                                    >> 2U))))
                                                 : 
                                                ((2U 
                                                  & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc))
                                                   ? (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF)
                                                   : 
                                                  (~ (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF)))
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc))
                                                   ? 
                                                  ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF) 
                                                   >> 6U)
                                                   : 
                                                  (~ 
                                                   ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF) 
                                                    >> 6U))))));
                                        if (vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__Vfuncout) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Jump = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Jump = 1U;
                                    }
                                }
                            }
                        } else if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Jump = 1U;
                                }
                            }
                        }
                    }
                } else {
                    if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__write = 1U;
                                    } else if ((4U 
                                                & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__write = 1U;
                                    }
                                }
                            }
                        } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__write = 1U;
                                } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__write = 1U;
                                }
                            }
                        } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                             >> 1U)))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 2U)))) {
                                if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__write = 1U;
                                } else if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__write = 1U;
                                }
                            }
                        }
                    }
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Jump = 0U;
                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Jump = 1U;
                                }
                            } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                 >> 1U)))) {
                                if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc 
                                        = (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U));
                                    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF 
                                        = vlSelf->tv80n__DOT__i_tv80_core__DOT__F;
                                    vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__Vfuncout 
                                        = (1U & ((4U 
                                                  & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc))
                                                    ? 
                                                   ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF) 
                                                    >> 7U)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF) 
                                                     >> 7U)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc))
                                                    ? 
                                                   ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF) 
                                                    >> 2U)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF) 
                                                     >> 2U))))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc))
                                                    ? (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF)
                                                    : 
                                                   (~ (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF)))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc))
                                                    ? 
                                                   ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF) 
                                                    >> 6U)
                                                    : 
                                                   (~ 
                                                    ((IData)(vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF) 
                                                     >> 6U))))));
                                    if (vlSelf->__Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__Vfuncout) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Jump = 1U;
                                    }
                                }
                            }
                        } else if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Jump = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                vlSelf->tv80n__DOT__i_tv80_core__DOT__Jump = 0U;
            }
        } else {
            if ((0x40U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((0x36U != (0x3fU & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                    if ((6U != (7U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                        if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__write = 1U;
                            }
                        }
                    }
                }
            } else if ((0x20U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                    if ((6U == (7U 
                                                & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                   >> 3U)))) {
                                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__write = 1U;
                                        }
                                    }
                                }
                            } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)))) {
                                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelf->tv80n__DOT__write = 1U;
                                            }
                                        }
                                    }
                                }
                            } else if ((6U == (7U & 
                                               ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                >> 3U)))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__write = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)))) {
                                    if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__write = 1U;
                                    }
                                }
                            }
                        } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__write = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__write = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 2U)))) {
                                    if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__write = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)))) {
                                    if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__write = 1U;
                                    }
                                }
                            }
                        } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__write = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__write = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__write = 1U;
                                }
                            }
                        }
                    } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__write = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__write = 1U;
                                }
                            }
                        }
                    }
                } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 1U)))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 2U)))) {
                                if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__write = 1U;
                                } else if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__write = 1U;
                                }
                            }
                        }
                    }
                }
            } else if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                  >> 3U)))) {
                                    if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__write = 1U;
                                    }
                                }
                            }
                        } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__write = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                 >> 3U)))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__write = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__write = 1U;
                                }
                            }
                        }
                    } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__write = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__write = 1U;
                                }
                            }
                        }
                    }
                } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__write = 1U;
                            }
                        }
                    }
                }
            } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 3U)))) {
                                if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__write = 1U;
                                }
                            }
                        }
                    } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__write = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                             >> 3U)))) {
                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__write = 1U;
                                }
                            }
                        }
                    }
                }
            } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                        if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 3U)))) {
                            if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__write = 1U;
                            }
                        }
                    }
                } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__write = 1U;
                                }
                            }
                        }
                    }
                } else if ((6U == (7U & ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 3U)))) {
                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 1U)))) {
                            if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__write = 1U;
                            }
                        }
                    }
                }
            } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                        vlSelf->tv80n__DOT__write = 1U;
                    }
                }
            } else if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                if (vlSelf->tv80n__DOT__i_tv80_core__DOT__NMICycle) {
                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__write = 1U;
                        } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__write = 1U;
                        }
                    }
                } else if (vlSelf->tv80n__DOT__i_tv80_core__DOT__IntCycle) {
                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__write = 1U;
                        } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__write = 1U;
                        }
                    }
                }
            }
            vlSelf->tv80n__DOT__i_tv80_core__DOT__Jump = 0U;
            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                          >> 6U)))) {
                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                              >> 5U)))) {
                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 4U)))) {
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 3U)))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 2U)))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__NMICycle)))) {
                                            if (vlSelf->tv80n__DOT__i_tv80_core__DOT__IntCycle) {
                                                if (
                                                    (1U 
                                                     & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                                 >> 2U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                                     >> 3U)))) {
                                                                if (
                                                                    (0x10U 
                                                                     & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Jump = 1U;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if ((1U == (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ISet))) {
            if ((0x80U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((0x40U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              | ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                 >> 6U))))) {
                                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__write = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                          | ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                             >> 6U))))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__write = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                 >> 6U)))) {
                if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                          | ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                             >> 6U))))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__write = 1U;
                                    }
                                }
                            }
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
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__write = 1U;
                                        }
                                    }
                                }
                            } else if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__write = 1U;
                                    }
                                }
                            }
                        } else if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR)))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__write = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((0x40U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((0x20U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 2U)))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__write = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 2U)))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 2U)))) {
                                        if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__write = 1U;
                                        } else if (
                                                   (0x10U 
                                                    & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__write = 1U;
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__write = 1U;
                                }
                            }
                        }
                    }
                } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 1U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 2U)))) {
                                        if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__write = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                         >> 1U)))) {
                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__write = 1U;
                                }
                            }
                        }
                    }
                } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 2U)))) {
                                    if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__write = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 1U)))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 2U)))) {
                                if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__write = 1U;
                                } else if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__write = 1U;
                                }
                            }
                        }
                    }
                } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__write = 1U;
                        }
                    }
                }
            } else if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 2U)))) {
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__write = 1U;
                                    }
                                }
                            }
                        }
                    }
                } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                     >> 2U)))) {
                    if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 1U)))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                              >> 2U)))) {
                                    if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__write = 1U;
                                    } else if ((0x10U 
                                                & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                        vlSelf->tv80n__DOT__write = 1U;
                                    }
                                }
                            }
                        }
                    } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                            if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                vlSelf->tv80n__DOT__write = 1U;
                            }
                        }
                    }
                }
            } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                  >> 1U)))) {
                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__write = 1U;
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                 >> 2U)))) {
                if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                      >> 1U)))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                          >> 2U)))) {
                                if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__write = 1U;
                                } else if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                    vlSelf->tv80n__DOT__write = 1U;
                                }
                            }
                        }
                    }
                } else if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                        if ((2U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                            vlSelf->tv80n__DOT__write = 1U;
                        }
                    }
                }
            }
        }
        vlSelf->tv80n__DOT__i_tv80_core__DOT__Jump = 0U;
        if ((1U != (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ISet))) {
            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                          >> 7U)))) {
                if ((0x40U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                    if ((0x20U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                                  >> 1U)))) {
                                        if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                            if ((1U 
                                                 & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                         >> 1U)))) {
                                                    if (
                                                        (4U 
                                                         & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                        vlSelf->tv80n__DOT__i_tv80_core__DOT__Jump = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                     >> 1U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Jump = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                     >> 1U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Jump = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Jump = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((0x10U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                              >> 1U)))) {
                                    if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                        if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                            if ((1U 
                                                 & (~ 
                                                    ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                     >> 1U)))) {
                                                if (
                                                    (4U 
                                                     & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                    vlSelf->tv80n__DOT__i_tv80_core__DOT__Jump = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Jump = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((8U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                            if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                          >> 1U)))) {
                                if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                    if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                        if ((1U & (~ 
                                                   ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                    >> 1U)))) {
                                            if ((4U 
                                                 & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                                vlSelf->tv80n__DOT__i_tv80_core__DOT__Jump = 1U;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                                      >> 1U)))) {
                            if ((1U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                                if ((1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle)))) {
                                    if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle) 
                                                  >> 1U)))) {
                                        if ((4U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__mcycle))) {
                                            vlSelf->tv80n__DOT__i_tv80_core__DOT__Jump = 1U;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
