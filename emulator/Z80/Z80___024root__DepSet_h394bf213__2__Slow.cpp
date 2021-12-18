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
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla23pla16M2T1_5;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla23pla16M2T1_6;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla23pla16M2T2_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla23pla16M2T2_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla23pla16M2T3_5;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla23pla16M2T3_6;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla23pla16M3T1_5;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla23pla16M3T1_6;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla23pla16M3T2_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla23pla16M3T2_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla23npla16M2T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla23npla16M2T1_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla23npla16M2T2_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla23npla16M2T2_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla23npla16M2T3_5;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla23npla16M2T3_6;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla23npla16M3T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla23npla16M3T1_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla23npla16M3T2_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla23npla16M3T2_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla23npla16M3T3_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla23npla16M3T3_5;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla10M2T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M2T1_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla10M2T2_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M2T2_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla10M2T3_6;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla10M3T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M3T1_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla10M3T2_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M3T2_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla10M3T3_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla10M3T4_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M3T4_5;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla10M4T1_5;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M4T1_6;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla10M4T2_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M4T2_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla10M4T3_5;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M4T3_6;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla10M5T1_5;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M5T1_6;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla10M5T2_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M5T2_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla10M5T3_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla10M5T4_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M5T4_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla12M1T2_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M1T2_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla12M1T3_1;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M1T3_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla12M2T1_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M2T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla12M2T2_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M2T2_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla12M3T1_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M3T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla12M3T2_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M3T2_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M3T3_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M3T4_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla12M4T1_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla12M4T2_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla12M4T3_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla12M4T4_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla11M1T2_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla11M1T2_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla11M1T3_1;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla11M1T3_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla11M2T1_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla11M2T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla11M2T2_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla11M2T2_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla11M3T3_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla11M3T4_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla11M4T1_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla11M4T2_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla11M4T3_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla11M4T4_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla65npla52M1T2_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla65npla52M1T2_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla65npla52M1T3_1;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla65npla52M1T3_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla65npla52M1T4_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla65npla52M1T4_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla64M1T2_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla64M1T2_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla64M1T3_1;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla64M1T3_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla64M1T4_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla64M1T4_5;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla64M2T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla64M2T2_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_use_ixiypla52M1T3_1;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_use_ixiypla52M1T3_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla52M2T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla52M2T2_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla52M1T2_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla52M1T2_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla52M1T3_1;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla52M1T3_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla52M2T1_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla52M2T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_nuse_ixiypla52M2T2_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla52M4T2_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla52M4T2_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla66npla53M1T1_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla66npla53M1T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla66npla53M1T2_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla66npla53M1T2_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla66npla53M1T3_1;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla66npla53M1T3_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla66npla53M1T4nop4op5nop3_1;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla66npla53M1T4nop4op5nop3_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_use_ixiypla53M1T3_1;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_use_ixiypla53M1T3_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla53M2T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla53M2T2_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla53M1T2_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla53M1T2_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla53M1T3_1;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla53M1T3_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla53M2T1_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla53M2T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla69M1T2_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla69M1T2_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla69M1T3_1;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla69M1T3_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla69M1T4_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla69M1T4_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla69M2T1_1;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla69M2T1_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla69M2T2_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla69M2T3_1;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla69M2T3_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla69M2T4_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla69M2T4_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla69M3T1_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla69M3T1_7;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla69M3T2_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla69M3T2_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_op3pla68M1T2_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_op3pla68M1T2_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_op3pla68M1T3_1;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_op3pla68M1T3_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_op3pla68M1T4_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_op3pla68M1T4_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_op3pla68M2T1_1;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_op3pla68M2T1_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_op3pla68M2T2_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_op3pla68M2T3_1;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_op3pla68M2T3_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_op3pla68M2T4_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_op3pla68M2T4_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_op3pla68M3T1_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_op3pla68M3T1_7;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_op3pla68M3T2_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_op3pla68M3T2_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nop3pla68M1T2_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nop3pla68M1T2_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nop3pla68M1T3_1;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nop3pla68M1T3_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nop3pla68M1T4_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nop3pla68M1T4_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nop3pla68M2T1_1;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nop3pla68M2T1_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_nop3pla68M2T2_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nop3pla68M2T3_1;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nop3pla68M2T3_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nop3pla68M2T4_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nop3pla68M2T4_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_nop3pla68M3T1_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_nop3pla68M3T1_7;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nop3pla68M3T2_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nop3pla68M3T2_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla9M1T4_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla9M1T4_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla9M1T5_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla9M1T5_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla77M1T1_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla77M1T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla77M1T2_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla77M1T2_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla77M1T3_1;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla77M1T3_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla81M1T1_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla81M1T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla81M1T2_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla81M1T2_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla81M1T3_1;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla81M1T3_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla82M1T1_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla82M1T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla82M1T2_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla82M1T2_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla82M1T3_1;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla82M1T3_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla89M1T2_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla89M1T2_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla89M1T3_1;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla89M1T3_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla92M1T2_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla92M1T2_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla92M1T3_1;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla92M1T3_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla25M1T1_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla25M1T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla25M1T2_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla25M1T2_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla25M1T3_1;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla25M1T3_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla25M1T4_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla25M1T4_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla70npla55M1T1_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla70npla55M1T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla70npla55M1T2_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla70npla55M1T2_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla70npla55M1T3_1;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla70npla55M1T3_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla70npla55M1T4_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla70npla55M1T4_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_nuse_ixiypla70npla55M4T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla70pla55M1T2_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla70pla55M1T2_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla70pla55M1T3_1;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla70pla55M1T3_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla70pla55M2T1_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla70pla55M2T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_nuse_ixiypla70pla55M4T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla15op3M1T1_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla15op3M1T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla15op3M1T2_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla15op3M1T2_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla15op3M1T3_1;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla15op3M1T3_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla15op3M2T1_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla15op3M2T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla15op3M2T2_4;
    // Body
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4d) 
                                                | ((IData)(
                                                           (0x810000U 
                                                            == 
                                                            (0x810000U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | ((IData)(
                                                           (0x810000U 
                                                            == 
                                                            (0x810000U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla23pla16M2T1_5 
        = ((IData)((0x810000U == (0x810000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla23pla16M2T1_5))) 
                  & ((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                      << 0x19U) | (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                   >> 7U)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla23pla16M2T1_6 
        = ((IData)((0x810000U == (0x810000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla23pla16M2T1_6)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi) 
         | ((IData)((0x810000U == (0x810000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2u) 
                                                | ((IData)(
                                                           (0x810000U 
                                                            == 
                                                            (0x810000U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla23pla16M2T2_3 
        = ((IData)((0x810000U == (0x810000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla23pla16M2T2_3)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla23pla16M2T2_4 
        = ((IData)((0x810000U == (0x810000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla23pla16M2T2_4)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla23pla16M2T3_5 
        = ((IData)((0x810000U == (0x810000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla23pla16M2T3_5)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla23pla16M2T3_6 
        = ((IData)((0x810000U == (0x810000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla23pla16M2T3_6)))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4d) 
                                                | ((IData)(
                                                           (0x810000U 
                                                            == 
                                                            (0x810000U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | ((IData)(
                                                           (0x810000U 
                                                            == 
                                                            (0x810000U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla23pla16M3T1_5 
        = ((IData)((0x810000U == (0x810000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla23pla16M3T1_5))) 
                  & ((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                      << 0x19U) | (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                   >> 7U)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla23pla16M3T1_6 
        = ((IData)((0x810000U == (0x810000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla23pla16M3T1_6)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo) 
         | ((IData)((0x810000U == (0x810000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla23pla16M3T2_3 
        = ((IData)((0x810000U == (0x810000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla23pla16M3T2_3)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla23pla16M3T2_4 
        = ((IData)((0x810000U == (0x810000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla23pla16M3T2_4)))));
    vlSelf->z80_top_direct_n__DOT__setM1 = ((IData)(vlSelf->z80_top_direct_n__DOT__setM1) 
                                            | ((IData)(
                                                       (0x810000U 
                                                        == 
                                                        (0x810000U 
                                                         & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA) 
           | ((IData)((0x800000U == (0x810000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
              & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                 & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla23npla16M2T1_3 
        = ((IData)((0x800000U == (0x810000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla23npla16M2T1_3)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla23npla16M2T1_4 
        = ((IData)((0x800000U == (0x810000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla23npla16M2T1_4)))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4d) 
                                                | ((IData)(
                                                           (0x800000U 
                                                            == 
                                                            (0x810000U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | ((IData)(
                                                           (0x800000U 
                                                            == 
                                                            (0x810000U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla23npla16M2T2_3 
        = ((IData)((0x800000U == (0x810000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla23npla16M2T2_3)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla23npla16M2T2_4 
        = ((IData)((0x800000U == (0x810000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla23npla16M2T2_4)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla23npla16M2T3_5 
        = ((IData)((0x800000U == (0x810000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla23npla16M2T3_5))) 
                  & ((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                      << 0x19U) | (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                   >> 7U)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla23npla16M2T3_6 
        = ((IData)((0x800000U == (0x810000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla23npla16M2T3_6)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi) 
         | ((IData)((0x800000U == (0x810000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo) 
         | ((IData)((0x800000U == (0x810000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d) 
                                                | ((IData)(
                                                           (0x800000U 
                                                            == 
                                                            (0x810000U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1d) 
                                                | ((IData)(
                                                           (0x800000U 
                                                            == 
                                                            (0x810000U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe) 
         | ((IData)((0x800000U == (0x810000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla23npla16M3T1_3 
        = ((IData)((0x800000U == (0x810000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla23npla16M3T1_3)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla23npla16M3T1_4 
        = ((IData)((0x800000U == (0x810000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla23npla16M3T1_4)))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4d) 
                                                | ((IData)(
                                                           (0x800000U 
                                                            == 
                                                            (0x810000U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | ((IData)(
                                                           (0x800000U 
                                                            == 
                                                            (0x810000U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla23npla16M3T2_3 
        = ((IData)((0x800000U == (0x810000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla23npla16M3T2_3)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla23npla16M3T2_4 
        = ((IData)((0x800000U == (0x810000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla23npla16M3T2_4)))));
    vlSelf->z80_top_direct_n__DOT__setM1 = ((IData)(vlSelf->z80_top_direct_n__DOT__setM1) 
                                            | ((IData)(
                                                       (0x800000U 
                                                        == 
                                                        (0x810000U 
                                                         & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla23npla16M3T3_4 
        = ((IData)((0x800000U == (0x810000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla23npla16M3T3_4))) 
                  & ((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                      << 0x19U) | (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                   >> 7U)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla23npla16M3T3_5 
        = ((IData)((0x800000U == (0x810000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla23npla16M3T3_5)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi) 
         | ((IData)((0x800000U == (0x810000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo) 
         | ((IData)((0x800000U == (0x810000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d) 
                                                | ((IData)(
                                                           (0x800000U 
                                                            == 
                                                            (0x810000U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1d) 
                                                | ((IData)(
                                                           (0x800000U 
                                                            == 
                                                            (0x810000U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe) 
         | ((IData)((0x800000U == (0x810000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 2U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__setM1 = ((IData)(vlSelf->z80_top_direct_n__DOT__setM1) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                >> 2U) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 7U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__setM1 = ((IData)(vlSelf->z80_top_direct_n__DOT__setM1) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                >> 7U) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 1U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__setM1 = ((IData)(vlSelf->z80_top_direct_n__DOT__setM1) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                >> 1U) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla10M2T1_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla10M2T1_3)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M2T1_4 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M2T1_4)))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4d) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla10M2T2_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla10M2T2_3)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M2T2_4 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M2T2_4)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we_lo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we_lo) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla10M2T3_6 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla10M2T3_6))) 
              & (1U | (2U & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1d) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla10M3T1_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla10M3T1_3)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M3T1_4 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M3T1_4)))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4d) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla10M3T2_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla10M3T2_3)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M3T2_4 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M3T2_4)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we_hi 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we_hi) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla10M3T3_4 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla10M3T3_4))) 
              & (2U | (1U & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1d) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla10M3T4_4 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla10M3T4_4)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M3T4_5 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M3T4_5)))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4d) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla10M4T1_5 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla10M4T1_5))) 
                  & ((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                      << 0x19U) | (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                   >> 7U)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M4T1_6 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M4T1_6)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2u) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla10M4T2_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla10M4T2_3)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M4T2_4 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M4T2_4)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla10M4T3_5 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla10M4T3_5)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M4T3_6 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M4T3_6)))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4d) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla10M5T1_5 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla10M5T1_5))) 
                  & ((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                      << 0x19U) | (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                   >> 7U)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M5T1_6 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M5T1_6)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla10M5T2_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla10M5T2_3)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M5T2_4 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M5T2_4)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla10M5T3_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla10M5T3_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4d) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla10M5T4_2 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla10M5T4_2)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M5T4_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla10M5T4_3)))));
    vlSelf->z80_top_direct_n__DOT__setM1 = ((IData)(vlSelf->z80_top_direct_n__DOT__setM1) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                >> 0xaU) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__nonRep 
        = (1U & vlSelf->z80_top_direct_n__DOT__pla[0U]);
    vlSelf->z80_top_direct_n__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_alu) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_high) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_use_cf2 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla12M1T2_2 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla12M1T2_2)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M1T2_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M1T2_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla12M1T3_1 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla12M1T3_1)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M1T3_2 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M1T3_2)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla12M2T1_2 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla12M2T1_2)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M2T1_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M2T1_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4d) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0xcU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0xcU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla12M2T2_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla12M2T2_3)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M2T2_4 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M2T2_4)))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0xcU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1d) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0xcU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_alu) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low)));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low)));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf 
        = (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))) 
           & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low)));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf2_we 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla12M3T1_2 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
         | (1U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla12M3T1_2)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M3T1_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M3T1_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4d) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0xcU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0xcU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_alu) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_oe = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_oe) 
                                                 | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0xcU) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_high) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low)));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low)));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))) 
              & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_use_cf2 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_use_cf2) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla12M3T2_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
         | (1U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla12M3T2_3)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M3T2_4 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M3T2_4)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M3T3_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M3T3_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4d) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0xcU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0xcU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M3T4_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla12M3T4_3)))));
    vlSelf->z80_top_direct_n__DOT__setM1 = ((IData)(vlSelf->z80_top_direct_n__DOT__setM1) 
                                            | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                 >> 0xcU) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff))) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__nonRep) 
                                                  | (IData)(vlSelf->z80_top_direct_n__DOT__decode_state___DOT__DFFE_instNonRep))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla12M4T1_2 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla12M4T1_2)))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0xcU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla12M4T2_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla12M4T2_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla12M4T3_2 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla12M4T3_2)))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0xcU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla12M4T4_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla12M4T4_3)))));
    vlSelf->z80_top_direct_n__DOT__setM1 = ((IData)(vlSelf->z80_top_direct_n__DOT__setM1) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                >> 0xcU) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_alu) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_oe = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_oe) 
                                                 | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0xbU) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_high) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_neg 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low)));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))) 
              & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_use_cf2 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_use_cf2) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla11M1T2_2 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla11M1T2_2)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla11M1T2_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla11M1T2_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla11M1T3_1 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla11M1T3_1)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla11M1T3_2 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla11M1T3_2)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla11M2T1_2 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla11M2T1_2)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla11M2T1_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla11M2T1_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4d) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0xbU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0xbU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla11M2T2_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla11M2T2_3)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla11M2T2_4 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla11M2T2_4)))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0xbU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1d) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0xbU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_alu) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_neg) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low)));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))) 
              & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf2_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf2_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_alu) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_oe = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_oe) 
                                                 | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0xbU) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_high) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_neg) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low)));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))) 
              & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_use_cf2 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_use_cf2) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla11M3T3_2 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla11M3T3_2)))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4d) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0xbU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0xbU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla11M3T4_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla11M3T4_3)))));
    vlSelf->z80_top_direct_n__DOT__setM1 = ((IData)(vlSelf->z80_top_direct_n__DOT__setM1) 
                                            | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                 >> 0xbU) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff))) 
                                               & (((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__nonRep) 
                                                   | (IData)(vlSelf->z80_top_direct_n__DOT__decode_state___DOT__DFFE_instNonRep)) 
                                                  | (IData)(vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_39))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla11M4T1_2 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla11M4T1_2)))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0xbU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla11M4T2_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla11M4T2_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla11M4T3_2 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla11M4T3_2)))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0xbU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla11M4T4_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla11M4T4_3)))));
    vlSelf->z80_top_direct_n__DOT__setM1 = ((IData)(vlSelf->z80_top_direct_n__DOT__setM1) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                >> 0xbU) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
              >> 1U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                           >> 0x14U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
              >> 1U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                           >> 0x14U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2u) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                     >> 1U) 
                                                    & (~ 
                                                       (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                        >> 0x14U))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_alu) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
              >> 1U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                           >> 0x14U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_oe = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_oe) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                         >> 0x14U))) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
              >> 1U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                           >> 0x14U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_high) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 1U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                             >> 0x14U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 1U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                             >> 0x14U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla65npla52M1T2_2 
        = (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 1U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                          >> 0x14U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla65npla52M1T2_2)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla65npla52M1T2_3 
        = (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 1U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                          >> 0x14U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla65npla52M1T2_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
              >> 1U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                           >> 0x14U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
              >> 1U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                           >> 0x14U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl) 
           | ((((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 1U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x14U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__DFFE_inst_latch_nf)));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla65npla52M1T3_1 
        = (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 1U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                          >> 0x14U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla65npla52M1T3_1)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla65npla52M1T3_2 
        = (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 1U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                          >> 0x14U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla65npla52M1T3_2)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
              >> 1U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                           >> 0x14U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
              >> 1U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                           >> 0x14U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 1U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                             >> 0x14U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 1U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                             >> 0x14U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 1U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                             >> 0x14U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 1U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                             >> 0x14U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 1U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                             >> 0x14U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 1U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                             >> 0x14U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 1U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                             >> 0x14U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__setM1 = ((IData)(vlSelf->z80_top_direct_n__DOT__setM1) 
                                            | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                 >> 1U) 
                                                & (~ 
                                                   (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x14U))) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla65npla52M1T4_3 
        = (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 1U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                          >> 0x14U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla65npla52M1T4_3))) 
                  & ((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                      << 0x1cU) | (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                   >> 4U)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla65npla52M1T4_4 
        = (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 1U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                          >> 0x14U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla65npla52M1T4_4))) 
              & ((2U & ((~ (IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__rsel0)) 
                        << 1U)) | (IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__rsel0))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi) 
         | ((((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 1U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                            >> 0x14U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))) 
            & (~ (IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__rsel0))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo) 
         | ((((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 1U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                            >> 0x14U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__rsel0)));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2u) 
                                                | ((((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                         >> 0x14U))) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))) 
                                                   & (~ (IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__rsel0))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d) 
                                                | ((((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                      >> 1U) 
                                                     & (~ 
                                                        (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                         >> 0x14U))) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__rsel0)));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_alu) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
              >> 1U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                           >> 0x14U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 1U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                             >> 0x14U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 1U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                             >> 0x14U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
              >> 1U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                           >> 0x14U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 1U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                             >> 0x14U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 1U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                             >> 0x14U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 1U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                             >> 0x14U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi) 
         | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo) 
         | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2u) 
                                                | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_alu) 
         | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_oe = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_oe) 
                                                 | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe) 
         | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_high) 
           | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
              & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                 & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we) 
           | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
              & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                 & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla64M1T2_2 
        = (vlSelf->z80_top_direct_n__DOT__pla[2U] & 
           ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla64M1T2_2)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla64M1T2_3 
        = (vlSelf->z80_top_direct_n__DOT__pla[2U] & 
           ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla64M1T2_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi) 
         | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo) 
         | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__DFFE_inst_latch_nf)));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla64M1T3_1 
        = (vlSelf->z80_top_direct_n__DOT__pla[2U] & 
           ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla64M1T3_1)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla64M1T3_2 
        = (vlSelf->z80_top_direct_n__DOT__pla[2U] & 
           ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla64M1T3_2)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi) 
         | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo) 
         | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe) 
           | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
              & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                 & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus) 
           | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
              & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                 & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus) 
           | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
              & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                 & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we) 
           | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
              & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                 & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
              & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                 & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we) 
           | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
              & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                 & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA) 
           | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
              & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                 & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla64M1T4_4 
        = (vlSelf->z80_top_direct_n__DOT__pla[2U] & 
           ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla64M1T4_4))) 
                  & ((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                      << 0x1cU) | (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                   >> 4U)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla64M1T4_5 
        = (vlSelf->z80_top_direct_n__DOT__pla[2U] & 
           ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla64M1T4_5))) 
              & ((2U & ((~ (IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__rsel0)) 
                        << 1U)) | (IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__rsel0))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))) 
            & (~ (IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__rsel0))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__rsel0)));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2u) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))) 
                                                   & (~ (IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__rsel0))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__rsel0)));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_alu) 
         | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe) 
           | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
              & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                 & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus) 
           | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
              & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                 & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low) 
         | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we) 
           | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
              & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                 & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
              & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                 & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we) 
           | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
              & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                 & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc) 
         | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla64M2T1_3 
        = (vlSelf->z80_top_direct_n__DOT__pla[2U] & 
           ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla64M2T1_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc) 
         | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla64M2T2_4 
        = (vlSelf->z80_top_direct_n__DOT__pla[2U] & 
           ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla64M2T2_4)))));
    vlSelf->z80_top_direct_n__DOT__setM1 = ((IData)(vlSelf->z80_top_direct_n__DOT__setM1) 
                                            | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d) 
                                                | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1d) 
                                                | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe) 
         | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_alu) 
         | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe) 
           | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
              & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                 & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus) 
           | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
              & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                 & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low) 
         | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we) 
           | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
              & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                 & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
              & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                 & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we) 
           | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
              & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                 & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_use_ixiypla52M1T3_1 
        = (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
            & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_use_ixiypla52M1T3_1)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_use_ixiypla52M1T3_2 
        = (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
            & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_use_ixiypla52M1T3_2)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi) 
         | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo) 
         | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe) 
           | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus) 
           | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus) 
           | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we) 
           | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we) 
           | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA) 
           | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc) 
         | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla52M2T1_3 
        = (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
            & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla52M2T1_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x14U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc) 
         | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla52M2T2_4 
        = (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
            & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla52M2T2_4)))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
           | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
           | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
           | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
           | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
           | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi) 
         | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo) 
         | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2u) 
                                                | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x14U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_alu) 
         | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_oe = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_oe) 
                                                 | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                     & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                        >> 0x14U)) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe) 
         | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_high) 
           | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we) 
           | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla52M1T2_2 
        = (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
            & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla52M1T2_2)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla52M1T2_3 
        = (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
            & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla52M1T2_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi) 
         | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo) 
         | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                   >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                 & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__DFFE_inst_latch_nf)));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla52M1T3_1 
        = (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
            & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla52M1T3_1)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla52M1T3_2 
        = (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
            & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla52M1T3_2)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi) 
         | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo) 
         | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe) 
           | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus) 
           | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus) 
           | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we) 
           | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we) 
           | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA) 
           | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla52M2T1_2 
        = (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
            & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla52M2T1_2)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla52M2T1_3 
        = (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
            & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla52M2T1_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4d) 
                                                | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x14U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x14U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz) 
         | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_nuse_ixiypla52M2T2_4 
        = (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
            & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_nuse_ixiypla52M2T2_4)))));
    vlSelf->z80_top_direct_n__DOT__setM1 = ((IData)(vlSelf->z80_top_direct_n__DOT__setM1) 
                                            | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                   >> 0x14U)) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d) 
                                                | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x14U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1d) 
                                                | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x14U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe) 
         | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_alu) 
         | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe) 
           | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus) 
           | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low) 
         | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we) 
           | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we) 
           | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla52M4T2_2 
        = (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
            & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla52M4T2_2)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla52M4T2_3 
        = (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
            & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla52M4T2_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi) 
         | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo) 
         | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe) 
           | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus) 
           | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus) 
           | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we) 
           | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we) 
           | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__setM1 = ((IData)(vlSelf->z80_top_direct_n__DOT__setM1) 
                                            | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                   >> 0x14U)) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d) 
                                                | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x14U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1d) 
                                                | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x14U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe) 
         | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_alu) 
         | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe) 
           | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus) 
           | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low) 
         | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we) 
           | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we) 
           | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla66npla53M1T1_2 
        = (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 2U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                          >> 0x15U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla66npla53M1T1_2))) 
                  & ((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                      << 0x19U) | (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                   >> 7U)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla66npla53M1T1_3 
        = (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 2U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                          >> 0x15U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla66npla53M1T1_3))) 
              & ((2U & ((~ (IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__rsel3)) 
                        << 1U)) | (IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__rsel3))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
              >> 2U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                           >> 0x15U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
              >> 2U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                           >> 0x15U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2u) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                     >> 2U) 
                                                    & (~ 
                                                       (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                        >> 0x15U))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_alu) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
              >> 2U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                           >> 0x15U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_oe = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_oe) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                      >> 2U) 
                                                     & (~ 
                                                        (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                         >> 0x15U))) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
              >> 2U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                           >> 0x15U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_high) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf) 
           | ((((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 2U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x15U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))) 
              & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_use_cf2 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_use_cf2) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla66npla53M1T2_2 
        = (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 2U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                          >> 0x15U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla66npla53M1T2_2)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla66npla53M1T2_3 
        = (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 2U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                          >> 0x15U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla66npla53M1T2_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
              >> 2U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                           >> 0x15U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
              >> 2U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                           >> 0x15U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla66npla53M1T3_1 
        = (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 2U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                          >> 0x15U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla66npla53M1T3_1)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla66npla53M1T3_2 
        = (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 2U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                          >> 0x15U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla66npla53M1T3_2)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
              >> 2U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                           >> 0x15U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
              >> 2U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                           >> 0x15U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__setM1 = ((IData)(vlSelf->z80_top_direct_n__DOT__setM1) 
                                            | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                 >> 2U) 
                                                & (~ 
                                                   (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x15U))) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_zero_oe 
        = ((((vlSelf->z80_top_direct_n__DOT__pla[2U] 
              >> 2U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                           >> 0x15U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))) 
           & (IData)((0x180U == (0x1c0U & vlSelf->z80_top_direct_n__DOT__pla[3U]))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla66npla53M1T4nop4op5nop3_1 
        = ((((vlSelf->z80_top_direct_n__DOT__pla[2U] 
              >> 2U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                           >> 0x15U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))) 
           & (~ (IData)((0x180U == (0x1c0U & vlSelf->z80_top_direct_n__DOT__pla[3U])))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla66npla53M1T4nop4op5nop3_1))) 
                  & ((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                      << 0x19U) | (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                   >> 7U)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla66npla53M1T4nop4op5nop3_2 
        = ((((vlSelf->z80_top_direct_n__DOT__pla[2U] 
              >> 2U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                           >> 0x15U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))) 
           & (~ (IData)((0x180U == (0x1c0U & vlSelf->z80_top_direct_n__DOT__pla[3U])))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla66npla53M1T4nop4op5nop3_2))) 
              & ((2U & ((~ (IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__rsel3)) 
                        << 1U)) | (IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__rsel3))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi) 
         | ((((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 2U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                            >> 0x15U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))) 
            & (~ (IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__rsel3))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo) 
         | ((((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 2U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                            >> 0x15U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__rsel3)));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2u) 
                                                | ((((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                      >> 2U) 
                                                     & (~ 
                                                        (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                         >> 0x15U))) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))) 
                                                   & (~ (IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__rsel3))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d) 
                                                | ((((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                      >> 2U) 
                                                     & (~ 
                                                        (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                         >> 0x15U))) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__rsel3)));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_alu) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
              >> 2U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                           >> 0x15U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_zero 
        = (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 2U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                          >> 0x15U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
              >> 2U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                           >> 0x15U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf) 
           | ((((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 2U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x15U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))) 
              & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf2_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf2_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_neg) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_neg) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set) 
           | (((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
               | (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 0xbU)));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl) 
           | (((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
               | (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 0xbU)));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_neg) 
           | (((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
               | (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 0xbU)));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_use_ixiypla53M1T3_1 
        = (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
            & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_use_ixiypla53M1T3_1)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_use_ixiypla53M1T3_2 
        = (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
            & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_use_ixiypla53M1T3_2)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi) 
         | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo) 
         | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe) 
           | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus) 
           | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus) 
           | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we) 
           | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we) 
           | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA) 
           | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc) 
         | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla53M2T1_3 
        = (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
            & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla53M2T1_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x15U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc) 
         | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla53M2T2_4 
        = (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
            & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla53M2T2_4)))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
           | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
           | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
           | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
           | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
           | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla53M1T2_2 
        = (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
            & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla53M1T2_2)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla53M1T2_3 
        = (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
            & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla53M1T2_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi) 
         | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo) 
         | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla53M1T3_1 
        = (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
            & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla53M1T3_1)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla53M1T3_2 
        = (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
            & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla53M1T3_2)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi) 
         | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo) 
         | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe) 
           | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus) 
           | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus) 
           | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we) 
           | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we) 
           | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA) 
           | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla53M2T1_2 
        = (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
            & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla53M2T1_2)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla53M2T1_3 
        = (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
            & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla53M2T1_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4d) 
                                                | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x15U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x15U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d) 
                                                | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x15U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1d) 
                                                | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x15U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe) 
         | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_alu) 
         | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe) 
           | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_zero 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_zero) 
           | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus) 
           | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low) 
         | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                   >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                 & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))) 
              & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we) 
           | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set) 
           | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf2_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf2_we) 
           | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2u) 
                                                | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x15U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_alu) 
         | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_oe = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_oe) 
                                                 | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                     & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                        >> 0x15U)) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe) 
         | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_high) 
           | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                   >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                 & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))) 
              & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we) 
           | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_use_cf2 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_use_cf2) 
           | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__setM1 = ((IData)(vlSelf->z80_top_direct_n__DOT__setM1) 
                                            | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                   >> 0x15U)) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d) 
                                                | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x15U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1d) 
                                                | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x15U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe) 
         | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_alu) 
         | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe) 
           | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_zero 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_zero) 
           | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus) 
           | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low) 
         | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                   >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                 & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))) 
              & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we) 
           | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set) 
           | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf2_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf2_we) 
           | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2u) 
                                                | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x15U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_alu) 
         | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_oe = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_oe) 
                                                 | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                     & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                        >> 0x15U)) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe) 
         | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_high) 
           | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                   >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                 & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))) 
              & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we) 
           | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_use_cf2 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_use_cf2) 
           | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__setM1 = ((IData)(vlSelf->z80_top_direct_n__DOT__setM1) 
                                            | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                   >> 0x15U)) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla69M1T2_2 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla69M1T2_2)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla69M1T2_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla69M1T2_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla69M1T3_1 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla69M1T3_1)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla69M1T3_2 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla69M1T3_2)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla69M1T4_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla69M1T4_3)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla69M1T4_4 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla69M1T4_4)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                    >> 5U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla69M2T1_1 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla69M2T1_1))) 
                  & ((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                      << 0x19U) | (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                   >> 7U)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla69M2T1_2 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla69M2T1_2)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                    >> 5U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_alu) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low)));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low)));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))) 
              & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we_lo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we_lo) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla69M2T2_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla69M2T2_3))) 
              & (1U | (2U & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2u) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                    >> 5U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_alu) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_oe = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_oe) 
                                                 | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                     >> 5U) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_high) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla69M2T3_1 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla69M2T3_1)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla69M2T3_2 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla69M2T3_2)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla69M2T4_2 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla69M2T4_2))) 
                  & ((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                      << 0x19U) | (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                   >> 7U)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla69M2T4_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla69M2T4_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_alu) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))) 
              & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla69M3T1_2 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla69M3T1_2)))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4d) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                    >> 5U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                    >> 5U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we_hi 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we_hi) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla69M3T1_7 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla69M3T1_7))) 
              & (2U | (1U & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2u) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                    >> 5U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_alu) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_oe = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_oe) 
                                                 | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                     >> 5U) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_high) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))) 
              & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla69M3T2_2 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla69M3T2_2)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla69M3T2_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla69M3T2_3)))));
    vlSelf->z80_top_direct_n__DOT__setM1 = ((IData)(vlSelf->z80_top_direct_n__DOT__setM1) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                >> 5U) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_op3pla68M1T2_2 
        = (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
             >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                       >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_op3pla68M1T2_2)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_op3pla68M1T2_3 
        = (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
             >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                       >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_op3pla68M1T2_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
              >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                        >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
              >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                        >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_op3pla68M1T3_1 
        = (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
             >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                       >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_op3pla68M1T3_1)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_op3pla68M1T3_2 
        = (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
             >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                       >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_op3pla68M1T3_2)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
              >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                        >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
              >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                        >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                          >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                          >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                          >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                          >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                          >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                          >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                          >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_op3pla68M1T4_3 
        = (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
             >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                       >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_op3pla68M1T4_3)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_op3pla68M1T4_4 
        = (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
             >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                       >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_op3pla68M1T4_4)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
              >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                        >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                     >> 6U) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                       >> 4U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                          >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                          >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_op3pla68M2T1_1 
        = (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
             >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                       >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_op3pla68M2T1_1))) 
                  & ((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                      << 0x19U) | (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                   >> 7U)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_op3pla68M2T1_2 
        = (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
             >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                       >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_op3pla68M2T1_2)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
              >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                        >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                     >> 6U) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                       >> 4U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_alu) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
              >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                        >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                          >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                          >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
              >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                        >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf) 
           | ((((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                 >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                           >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))) 
              & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                          >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we_lo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we_lo) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                          >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
              >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                        >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_op3pla68M2T2_3 
        = (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
             >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                       >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_op3pla68M2T2_3))) 
              & (1U | (2U & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
              >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                        >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2u) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                     >> 6U) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                       >> 4U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_alu) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
              >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                        >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_oe = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_oe) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                      >> 6U) 
                                                     & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                        >> 4U)) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
              >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                        >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_high) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                          >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf) 
           | ((((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                 >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                           >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                          >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                          >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_op3pla68M2T3_1 
        = (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
             >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                       >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_op3pla68M2T3_1)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_op3pla68M2T3_2 
        = (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
             >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                       >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_op3pla68M2T3_2)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
              >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                        >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
              >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                        >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                          >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                          >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_op3pla68M2T4_2 
        = (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
             >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                       >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_op3pla68M2T4_2))) 
                  & ((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                      << 0x19U) | (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                   >> 7U)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_op3pla68M2T4_3 
        = (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
             >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                       >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_op3pla68M2T4_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
              >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                        >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
              >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                        >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_alu) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
              >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                        >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                          >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                          >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
              >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                        >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf) 
           | ((((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                 >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                           >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))) 
              & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                          >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
              >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                        >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_op3pla68M3T1_2 
        = (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
             >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                       >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_op3pla68M3T1_2)))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4d) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                     >> 6U) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                       >> 4U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                     >> 6U) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                       >> 4U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we_hi 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we_hi) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                          >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
              >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                        >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_op3pla68M3T1_7 
        = (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
             >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                       >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_op3pla68M3T1_7))) 
              & (2U | (1U & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
              >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                        >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2u) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                     >> 6U) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                       >> 4U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_alu) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
              >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                        >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_oe = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_oe) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                      >> 6U) 
                                                     & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                        >> 4U)) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
              >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                        >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_high) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                          >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf) 
           | ((((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                 >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                           >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))) 
              & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                          >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                          >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_op3pla68M3T2_2 
        = (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
             >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                       >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_op3pla68M3T2_2)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_op3pla68M3T2_3 
        = (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
             >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                       >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_op3pla68M3T2_3)))));
    vlSelf->z80_top_direct_n__DOT__setM1 = ((IData)(vlSelf->z80_top_direct_n__DOT__setM1) 
                                            | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                 >> 6U) 
                                                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                   >> 4U)) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nop3pla68M1T2_2 
        = (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                           >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nop3pla68M1T2_2)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nop3pla68M1T2_3 
        = (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                           >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nop3pla68M1T2_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi) 
         | (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                 >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                            >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo) 
         | (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                 >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                            >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl) 
           | ((((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                    >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                               >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__DFFE_inst_latch_nf)));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nop3pla68M1T3_1 
        = (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                           >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nop3pla68M1T3_1)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nop3pla68M1T3_2 
        = (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                           >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nop3pla68M1T3_2)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi) 
         | (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                 >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                            >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo) 
         | (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                 >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                            >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe) 
           | (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                              >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus) 
           | (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                              >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus) 
           | (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                              >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we) 
           | (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                              >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                              >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we) 
           | (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                              >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA) 
           | (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                              >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nop3pla68M1T4_3 
        = (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                           >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nop3pla68M1T4_3)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nop3pla68M1T4_4 
        = (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                           >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nop3pla68M1T4_4)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo) 
         | (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                 >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                            >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d) 
                                                | (((~ 
                                                     (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                      >> 6U)) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                       >> 4U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe) 
           | (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                              >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus) 
           | (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                              >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nop3pla68M2T1_1 
        = (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                           >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nop3pla68M2T1_1))) 
                  & ((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                      << 0x19U) | (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                   >> 7U)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nop3pla68M2T1_2 
        = (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                           >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nop3pla68M2T1_2)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo) 
         | (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                 >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                            >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d) 
                                                | (((~ 
                                                     (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                      >> 6U)) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                       >> 4U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_alu) 
         | (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                 >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                            >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe) 
           | (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                              >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus) 
           | (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                              >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low) 
         | (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                 >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                            >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_neg) 
           | (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                              >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl) 
           | ((((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                    >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                               >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low)));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf) 
           | ((((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                    >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                               >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))) 
              & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we) 
           | (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                              >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we_lo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we_lo) 
           | (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                              >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz) 
         | (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                 >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                            >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_nop3pla68M2T2_3 
        = (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                           >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_nop3pla68M2T2_3))) 
              & (1U | (2U & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo) 
         | (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                 >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                            >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2u) 
                                                | (((~ 
                                                     (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                      >> 6U)) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                       >> 4U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_alu) 
         | (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                 >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                            >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_oe = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_oe) 
                                                 | (((~ 
                                                      (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                       >> 6U)) 
                                                     & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                        >> 4U)) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe) 
         | (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                 >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                            >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_high) 
           | (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                              >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_neg) 
           | (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                              >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl) 
           | ((((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                    >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                               >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low)));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf) 
           | ((((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                    >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                               >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we) 
           | (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                              >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                              >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nop3pla68M2T3_1 
        = (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                           >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nop3pla68M2T3_1)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nop3pla68M2T3_2 
        = (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                           >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nop3pla68M2T3_2)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi) 
         | (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                 >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                            >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo) 
         | (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                 >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                            >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe) 
           | (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                              >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus) 
           | (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                              >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nop3pla68M2T4_2 
        = (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                           >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nop3pla68M2T4_2))) 
                  & ((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                      << 0x19U) | (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                   >> 7U)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nop3pla68M2T4_3 
        = (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                           >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nop3pla68M2T4_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi) 
         | (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                 >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                            >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo) 
         | (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                 >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                            >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_alu) 
         | (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                 >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                            >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe) 
           | (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                              >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus) 
           | (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                              >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low) 
         | (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                 >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                            >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_neg) 
           | (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                              >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf) 
           | ((((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                    >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                               >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))) 
              & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we) 
           | (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                              >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz) 
         | (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                 >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                            >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_nop3pla68M3T1_2 
        = (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                           >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_nop3pla68M3T1_2)))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4d) 
                                                | (((~ 
                                                     (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                      >> 6U)) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                       >> 4U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | (((~ 
                                                     (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                      >> 6U)) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                       >> 4U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we_hi 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we_hi) 
           | (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                              >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz) 
         | (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                 >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                            >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_nop3pla68M3T1_7 
        = (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                           >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_nop3pla68M3T1_7))) 
              & (2U | (1U & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi) 
         | (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                 >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                            >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2u) 
                                                | (((~ 
                                                     (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                      >> 6U)) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                       >> 4U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_alu) 
         | (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                 >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                            >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_oe = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_oe) 
                                                 | (((~ 
                                                      (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                       >> 6U)) 
                                                     & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                        >> 4U)) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe) 
         | (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                 >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                            >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_high) 
           | (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                              >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_neg) 
           | (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                              >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl) 
           | ((((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                    >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                               >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low)));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf) 
           | ((((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                    >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                               >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))) 
              & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we) 
           | (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                              >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                              >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nop3pla68M3T2_2 
        = (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                           >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nop3pla68M3T2_2)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nop3pla68M3T2_3 
        = (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                           >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nop3pla68M3T2_3)))));
    vlSelf->z80_top_direct_n__DOT__setM1 = ((IData)(vlSelf->z80_top_direct_n__DOT__setM1) 
                                            | (((~ 
                                                 (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                  >> 6U)) 
                                                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                   >> 4U)) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 9U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla9M1T4_2 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 9U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla9M1T4_2))) 
                  & ((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                      << 0x19U) | (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                   >> 7U)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla9M1T4_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 9U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla9M1T4_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4d) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 9U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 9U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla9M1T5_2 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 9U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla9M1T5_2))) 
                  & ((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                      << 0x19U) | (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                   >> 7U)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla9M1T5_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 9U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla9M1T5_3)))));
    vlSelf->z80_top_direct_n__DOT__setM1 = ((IData)(vlSelf->z80_top_direct_n__DOT__setM1) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                >> 9U) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__T6))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla77M1T1_2 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla77M1T1_2)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla77M1T1_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla77M1T1_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_alu) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_oe = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_oe) 
                                                 | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                     >> 0xdU) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_high) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))) 
              & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_neg) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__DFFE_inst_latch_nf)));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))) 
              & (~ (IData)(vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__DFFE_inst_latch_nf))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla77M1T2_2 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla77M1T2_2)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla77M1T2_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla77M1T2_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_use_cf2 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_use_cf2) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla77M1T3_1 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla77M1T3_1)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla77M1T3_2 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla77M1T3_2)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__setM1 = ((IData)(vlSelf->z80_top_direct_n__DOT__setM1) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                >> 0xdU) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                    >> 0xdU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_alu) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))) 
              & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf2_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf2_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_neg) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__DFFE_inst_latch_nf)));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))) 
              & (~ (IData)(vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__DFFE_inst_latch_nf))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla81M1T1_2 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla81M1T1_2)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla81M1T1_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla81M1T1_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_alu) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_oe = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_oe) 
                                                 | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                     >> 0x11U) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_high) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_neg) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla81M1T2_2 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla81M1T2_2)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla81M1T2_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla81M1T2_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla81M1T3_1 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla81M1T3_1)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla81M1T3_2 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla81M1T3_2)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__setM1 = ((IData)(vlSelf->z80_top_direct_n__DOT__setM1) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                >> 0x11U) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_alu) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_neg) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla82M1T1_2 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 0x12U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla82M1T1_2)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla82M1T1_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 0x12U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla82M1T1_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x12U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x12U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_alu) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x12U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_oe = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_oe) 
                                                 | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                     >> 0x12U) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x12U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_high) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x12U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_neg) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x12U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 0x12U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low)));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 0x12U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))) 
              & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x12U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x12U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla82M1T2_2 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 0x12U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla82M1T2_2)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla82M1T2_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 0x12U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla82M1T2_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x12U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x12U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 0x12U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__DFFE_inst_latch_nf)));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla82M1T3_1 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 0x12U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla82M1T3_1)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla82M1T3_2 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 0x12U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla82M1T3_2)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x12U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x12U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x12U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x12U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x12U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x12U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x12U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x12U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x12U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__setM1 = ((IData)(vlSelf->z80_top_direct_n__DOT__setM1) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                >> 0x12U) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_alu) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x12U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x12U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_neg) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x12U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 0x12U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low)));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 0x12U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))) 
              & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x12U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x12U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x12U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_alu) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_oe = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_oe) 
                                                 | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                     >> 0x19U) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_high) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla89M1T2_2 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla89M1T2_2)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla89M1T2_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla89M1T2_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla89M1T3_1 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla89M1T3_1)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla89M1T3_2 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla89M1T3_2)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__setM1 = ((IData)(vlSelf->z80_top_direct_n__DOT__setM1) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                >> 0x19U) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_alu) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_alu) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x1cU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_oe = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_oe) 
                                                 | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                     >> 0x1cU) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x1cU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_high) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x1cU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x1cU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x1cU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x1cU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla92M1T2_2 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 0x1cU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla92M1T2_2)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla92M1T2_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 0x1cU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla92M1T2_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x1cU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x1cU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x1cU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla92M1T3_1 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 0x1cU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla92M1T3_1)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla92M1T3_2 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 0x1cU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla92M1T3_2)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x1cU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x1cU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x1cU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x1cU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x1cU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x1cU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x1cU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x1cU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x1cU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__setM1 = ((IData)(vlSelf->z80_top_direct_n__DOT__setM1) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                >> 0x1cU) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_alu) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x1cU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x1cU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x1cU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x1cU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x1cU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x1cU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x1fU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__setM1 = ((IData)(vlSelf->z80_top_direct_n__DOT__setM1) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                >> 0x1fU) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[3U] 
               >> 1U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__setM1 = ((IData)(vlSelf->z80_top_direct_n__DOT__setM1) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                >> 1U) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1d) 
                                                | (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe) 
         | (vlSelf->z80_top_direct_n__DOT__pla[3U] 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA) 
           | (vlSelf->z80_top_direct_n__DOT__pla[3U] 
              & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                 & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__setM1 = ((IData)(vlSelf->z80_top_direct_n__DOT__setM1) 
                                            | (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla25M1T1_2 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla25M1T1_2)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla25M1T1_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla25M1T1_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_alu) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_oe = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_oe) 
                                                 | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0x19U) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_high) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla25M1T2_2 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla25M1T2_2)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla25M1T2_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla25M1T2_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_use_cf2 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_use_cf2) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla25M1T3_1 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla25M1T3_1)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla25M1T3_2 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla25M1T3_2)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__setM1 = ((IData)(vlSelf->z80_top_direct_n__DOT__setM1) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                >> 0x19U) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla25M1T4_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla25M1T4_3)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla25M1T4_4 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla25M1T4_4)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_alu) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf2_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf2_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla70npla55M1T1_2 
        = ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla70npla55M1T1_2))) 
                  & ((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                      << 0x1cU) | (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                   >> 4U)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla70npla55M1T1_3 
        = ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla70npla55M1T1_3))) 
              & ((2U & ((~ (IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__rsel0)) 
                        << 1U)) | (IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__rsel0))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2u) 
                                                | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                     & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                        >> 6U)) 
                                                    & (~ 
                                                       (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                        >> 0x17U))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_alu) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_oe = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_oe) 
                                                 | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                      & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                         >> 6U)) 
                                                     & (~ 
                                                        (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                         >> 0x17U))) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_high) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla70npla55M1T2_2 
        = ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla70npla55M1T2_2)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla70npla55M1T2_3 
        = ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla70npla55M1T2_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_use_cf2 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_use_cf2) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla70npla55M1T3_1 
        = ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla70npla55M1T3_1)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla70npla55M1T3_2 
        = ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla70npla55M1T3_2)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__setM1 = ((IData)(vlSelf->z80_top_direct_n__DOT__setM1) 
                                            | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                    >> 6U)) 
                                                & (~ 
                                                   (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x17U))) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla70npla55M1T4_3 
        = ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla70npla55M1T4_3))) 
                  & ((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                      << 0x1cU) | (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                   >> 4U)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla70npla55M1T4_4 
        = ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla70npla55M1T4_4))) 
              & ((2U & ((~ (IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__rsel0)) 
                        << 1U)) | (IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__rsel0))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi) 
         | (((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                  >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))) 
            & (~ (IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__rsel0))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo) 
         | (((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                  >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__rsel0)));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2u) 
                                                | (((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                      & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                         >> 6U)) 
                                                     & (~ 
                                                        (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                         >> 0x17U))) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))) 
                                                   & (~ (IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__rsel0))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d) 
                                                | (((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                      & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                         >> 6U)) 
                                                     & (~ 
                                                        (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                         >> 0x17U))) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__rsel0)));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_alu) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf2_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf2_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_nuse_ixiypla70npla55M4T1_3 
        = ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_nuse_ixiypla70npla55M4T1_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4d) 
                                                | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                     & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                        >> 6U)) 
                                                    & (~ 
                                                       (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                        >> 0x17U))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                     & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                        >> 6U)) 
                                                    & (~ 
                                                       (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                        >> 0x17U))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d) 
                                                | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                     & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                        >> 6U)) 
                                                    & (~ 
                                                       (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                        >> 0x17U))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1d) 
                                                | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                     & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                        >> 6U)) 
                                                    & (~ 
                                                       (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                        >> 0x17U))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_alu) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf2_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf2_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2u) 
                                                | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                     & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                        >> 6U)) 
                                                    & (~ 
                                                       (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                        >> 0x17U))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_alu) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_oe = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_oe) 
                                                 | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                      & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                         >> 6U)) 
                                                     & (~ 
                                                        (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                         >> 0x17U))) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_high) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__setM1 = ((IData)(vlSelf->z80_top_direct_n__DOT__setM1) 
                                            | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                    >> 6U)) 
                                                & (~ 
                                                   (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x17U))) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla70pla55M1T2_2 
        = ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                           >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla70pla55M1T2_2)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla70pla55M1T2_3 
        = ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                           >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla70pla55M1T2_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_use_cf2 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_use_cf2) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla70pla55M1T3_1 
        = ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                           >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla70pla55M1T3_1)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla70pla55M1T3_2 
        = ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                           >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla70pla55M1T3_2)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla70pla55M2T1_2 
        = ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                           >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla70pla55M2T1_2)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla70pla55M2T1_3 
        = ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                           >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla70pla55M2T1_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4d) 
                                                | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                     & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                        >> 6U)) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                     & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                        >> 6U)) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d) 
                                                | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                     & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                        >> 6U)) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1d) 
                                                | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                     & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                        >> 6U)) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_alu) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf2_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf2_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2u) 
                                                | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                     & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                        >> 6U)) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_alu) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_oe = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_oe) 
                                                 | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                      & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                         >> 6U)) 
                                                     & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                        >> 0x17U)) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_high) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__setM1 = ((IData)(vlSelf->z80_top_direct_n__DOT__setM1) 
                                            | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                    >> 6U)) 
                                                & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                   >> 0x17U)) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_nuse_ixiypla70pla55M4T1_3 
        = ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                           >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_nuse_ixiypla70pla55M4T1_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4d) 
                                                | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                     & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                        >> 6U)) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                     & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                        >> 6U)) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d) 
                                                | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                     & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                        >> 6U)) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1d) 
                                                | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                     & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                        >> 6U)) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_alu) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf2_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf2_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2u) 
                                                | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                     & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                        >> 6U)) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_alu) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_oe = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_oe) 
                                                 | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                      & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                         >> 6U)) 
                                                     & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                        >> 0x17U)) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_high) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__setM1 = ((IData)(vlSelf->z80_top_direct_n__DOT__setM1) 
                                            | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                    >> 6U)) 
                                                & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                   >> 0x17U)) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla15op3M1T1_2 
        = (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xfU) & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                         >> 6U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla15op3M1T1_2)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla15op3M1T1_3 
        = (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xfU) & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                         >> 6U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla15op3M1T1_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0xfU) & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                          >> 6U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0xfU) & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                          >> 6U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_alu) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0xfU) & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                          >> 6U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_oe = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_oe) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                      >> 0xfU) 
                                                     & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                        >> 6U)) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0xfU) & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                          >> 6U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_high) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0xfU) & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                            >> 6U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0xfU) & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                            >> 6U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0xfU) & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                            >> 6U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0xfU) & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                            >> 6U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0xfU) & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                            >> 6U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla15op3M1T2_2 
        = (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xfU) & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                         >> 6U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla15op3M1T2_2)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla15op3M1T2_3 
        = (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xfU) & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                         >> 6U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla15op3M1T2_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0xfU) & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                          >> 6U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0xfU) & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                          >> 6U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla15op3M1T3_1 
        = (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xfU) & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                         >> 6U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla15op3M1T3_1)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla15op3M1T3_2 
        = (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xfU) & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                         >> 6U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla15op3M1T3_2)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0xfU) & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                          >> 6U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0xfU) & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                          >> 6U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0xfU) & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                            >> 6U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0xfU) & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                            >> 6U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0xfU) & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                            >> 6U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0xfU) & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                            >> 6U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0xfU) & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                            >> 6U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0xfU) & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                            >> 6U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0xfU) & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                            >> 6U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla15op3M2T1_2 
        = (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xfU) & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                         >> 6U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla15op3M2T1_2)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla15op3M2T1_3 
        = (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xfU) & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                         >> 6U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla15op3M2T1_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4d) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0xfU) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                       >> 6U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0xfU) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                       >> 6U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0xfU) & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                          >> 6U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla15op3M2T2_4 
        = (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xfU) & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                         >> 6U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla15op3M2T2_4)))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0xfU) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                       >> 6U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1d) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0xfU) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                       >> 6U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0xfU) & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                          >> 6U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0xfU) & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                            >> 6U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0xfU) & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                          >> 6U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0xfU) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                       >> 6U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1d) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0xfU) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                       >> 6U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0xfU) & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                          >> 6U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0xfU) & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                            >> 6U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_high) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0xfU) & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                            >> 6U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2u) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0xfU) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                       >> 6U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_oe = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_oe) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                      >> 0xfU) 
                                                     & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                        >> 6U)) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0xfU) & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                            >> 6U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__setM1 = ((IData)(vlSelf->z80_top_direct_n__DOT__setM1) 
                                            | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                 >> 0xfU) 
                                                & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                   >> 6U)) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
}
