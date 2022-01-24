// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Z80.h for the primary calling header

#include "verilated.h"

#include "Z80___024root.h"

VL_ATTR_COLD void Z80___024root___settle__TOP__4(Z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Z80___024root___settle__TOP__4\n"); );
    // Init
    CData/*2:0*/ tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DDD;
    CData/*1:0*/ tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__DPAIR;
    CData/*0:0*/ tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__UseCarry;
    CData/*0:0*/ tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Carry7_v;
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
    vlSelf->tv80n__DOT__i_tv80_core__DOT__RegBusC = 
        ((vlSelf->tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH
          [vlSelf->tv80n__DOT__i_tv80_core__DOT__RegAddrC] 
          << 8U) | vlSelf->tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL
         [vlSelf->tv80n__DOT__i_tv80_core__DOT__RegAddrC]);
    vlSelf->halt_n = (1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__Halt_FF)));
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
    vlSelf->tv80n__DOT__i_tv80_core__DOT__LDSPHL = 0U;
    if ((0U == (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__ISet))) {
        if ((0x80U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
            if ((0x40U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
                if ((0x20U & (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR))) {
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
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__JumpXY = 0U;
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
                } else {
                    vlSelf->tv80n__DOT__i_tv80_core__DOT__JumpXY = 0U;
                }
                vlSelf->tv80n__DOT__i_tv80_core__DOT__ExchangeRS = 0U;
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
            } else {
                vlSelf->tv80n__DOT__i_tv80_core__DOT__JumpXY = 0U;
                vlSelf->tv80n__DOT__i_tv80_core__DOT__ExchangeRS = 0U;
            }
        } else {
            vlSelf->tv80n__DOT__i_tv80_core__DOT__JumpXY = 0U;
            vlSelf->tv80n__DOT__i_tv80_core__DOT__ExchangeRS = 0U;
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
        }
        vlSelf->tv80n__DOT__i_tv80_core__DOT__Prefix = 0U;
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
        vlSelf->tv80n__DOT__i_tv80_core__DOT__ExchangeRp = 0U;
        if ((1U & (~ ((IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__IR) 
                      >> 7U)))) {
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
        }
    } else {
        vlSelf->tv80n__DOT__i_tv80_core__DOT__JumpXY = 0U;
        vlSelf->tv80n__DOT__i_tv80_core__DOT__ExchangeRS = 0U;
        vlSelf->tv80n__DOT__i_tv80_core__DOT__I_CPL = 0U;
        vlSelf->tv80n__DOT__i_tv80_core__DOT__Prefix = 0U;
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
    vlSelf->busak_n = (1U & (~ (IData)(vlSelf->tv80n__DOT__i_tv80_core__DOT__BusAck)));
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
}
