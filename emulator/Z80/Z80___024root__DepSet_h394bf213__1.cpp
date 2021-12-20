// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Z80.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Z80___024root.h"

VL_INLINE_OPT void Z80___024root___combo__TOP__26(Z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Z80___024root___combo__TOP__26\n"); );
    // Init
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__pc_inc_hold;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla17npla50M1T1_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla17npla50M1T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla17npla50M2T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla17npla50M2T2_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla61npla58npla59M1T1_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla61npla58npla59M1T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla61npla58npla59M1T4_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla61npla58npla59M1T4_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_use_ixiypla58M1T1_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_use_ixiypla58M1T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla58M2T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla58M2T2_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla58M1T1_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla58M1T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla58M2T1_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla58M2T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla59M2T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla59M2T2_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla59M1T4_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla59M1T4_5;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla59M2T1_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla59M2T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla59M4T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla59M4T1_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla40M2T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla40M2T2_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla40M3T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla40M3T2_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla50npla40M2T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla50npla40M2T2_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla50npla40M3T1_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla50npla40M3T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla8pla13M1T4_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla8pla13M1T4_5;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla8pla13M2T1_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla8pla13M2T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla8pla13M2T2_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla8npla13M1T1_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla8npla13M1T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla8npla13M2T1_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla8npla13M2T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla8npla13M2T2_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla38pla13M2T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla38pla13M2T2_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla38pla13M2T3_6;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla38pla13M3T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla38pla13M3T2_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla38pla13M3T3_5;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla38pla13M3T3_10;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla38pla13M4T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla38pla13M4T1_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla38pla13M4T2_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla38npla13M1T1_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla38npla13M1T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla38npla13M2T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla38npla13M2T2_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla38npla13M2T3_6;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla38npla13M3T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla38npla13M3T2_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla38npla13M3T3_6;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla38npla13M4T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla38npla13M4T2_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla83M1T1_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla83M1T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla83M1T2_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla83M1T2_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla83M1T3_1;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla83M1T3_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla83M1T4_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla57M1T3_1;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla57M1T3_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla57M1T4_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla7M1T1_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla7M1T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla7M2T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla7M2T2_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla7M3T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla7M3T1_6;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla7M3T1_7;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla7M3T2_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M2T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M2T2_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M2T3_6;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M3T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M3T2_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M3T3_5;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M3T3_10;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla30pla13M4T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla30pla13M4T1_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M4T2_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M4T3_5;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla30pla13M5T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla30pla13M5T1_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M5T2_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M2T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M2T2_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M2T3_6;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M3T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M3T2_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M3T3_6;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M4T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M4T2_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla30npla13M4T3_5;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla30npla13M4T3_6;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M5T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M5T2_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla30npla13M5T3_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla30npla13M5T3_5;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M2T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M2T2_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M2T3_6;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M3T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M3T2_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M3T3_5;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M3T3_10;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla31pla33M4T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla31pla33M4T1_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M4T2_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M4T3_5;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla31pla33M5T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla31pla33M5T1_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M5T2_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M2T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M2T2_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M2T3_6;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M3T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M3T2_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M3T3_6;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M4T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M4T2_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla31npla33M4T3_5;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla31npla33M4T3_6;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M5T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M5T2_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla31npla33M5T3_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla31npla33M5T3_5;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla5M1T4_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla5M1T4_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla5M1T5_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla5M1T5_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla23pla16M1T5_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla23pla16M1T5_5;
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
    // Body
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
              >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                        >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                 >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                            >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 9U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0xfU) & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                          >> 6U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0xfU) & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                          >> 6U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0xfU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                             >> 6U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0xfU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                             >> 6U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 8U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 0xaU)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 0xaU)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 0xaU)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 9U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 9U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 9U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
              >> 5U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                           >> 0x1cU))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
              >> 5U) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                        >> 0x1cU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
              >> 5U) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                        >> 0x1cU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                           >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                           >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                           >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x1dU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x1dU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0xfU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0x10U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 3U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 3U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0xeU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0xeU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1u = (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x1bU)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1u) 
                                                | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x1bU)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1u) 
                                                | ((IData)(
                                                           (0x2100U 
                                                            == 
                                                            (0x2100U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1u) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 6U) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                       >> 0xdU)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1u) 
                                                | ((IData)(
                                                           (0x40002000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1u) 
                                                | ((IData)(
                                                           (0x40002000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1u) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 1U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1u) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 1U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1u) 
                                                | ((IData)(
                                                           (0x810000U 
                                                            == 
                                                            (0x810000U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1u) 
                                                | ((IData)(
                                                           (0x810000U 
                                                            == 
                                                            (0x810000U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1u) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1u) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1u) 
                                                | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x15U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1u) 
                                                | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x15U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1u) 
                                                | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                     & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                        >> 6U)) 
                                                    & (~ 
                                                       (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                        >> 0x17U))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1u) 
                                                | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                     & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                        >> 6U)) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1u) 
                                                | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                     & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                        >> 6U)) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1u) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0xfU) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                       >> 6U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1u) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0xfU) 
                                                    & (~ 
                                                       (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                        >> 6U))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1u) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0xfU) 
                                                    & (~ 
                                                       (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                        >> 6U))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1u) 
                                                | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                     & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                        >> 0xaU)) 
                                                    & (~ 
                                                       (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                        >> 0x17U))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1u) 
                                                | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                     & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                        >> 0xaU)) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1u) 
                                                | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                     & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                        >> 0xaU)) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1u) 
                                                | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                     & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                        >> 9U)) 
                                                    & (~ 
                                                       (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                        >> 0x17U))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1u) 
                                                | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                     & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                        >> 9U)) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1u) 
                                                | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                     & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                        >> 9U)) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1u) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 5U) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                       >> 0x1cU)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1u) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0x1bU) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 2U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1u) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1u) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1u) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1u) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1u) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1u) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4u = ((IData)(
                                                        (0x2100U 
                                                         == 
                                                         (0x2100U 
                                                          & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u) 
                                                | ((IData)(
                                                           (0x100U 
                                                            == 
                                                            (0x2100U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 6U) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                       >> 0xdU)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 6U) 
                                                    & (~ 
                                                       (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                        >> 0xdU))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                    >> 0x13U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u) 
                                                | ((IData)(
                                                           (0x40002000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u) 
                                                | ((IData)(
                                                           (0x40002000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u) 
                                                | ((IData)(
                                                           (0x40000000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u) 
                                                | ((IData)(
                                                           (0x40000000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 1U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 1U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (~ 
                                                       (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                        >> 1U))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (~ 
                                                       (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                        >> 1U))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 5U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u) 
                                                | ((IData)(
                                                           (0x810000U 
                                                            == 
                                                            (0x810000U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u) 
                                                | ((IData)(
                                                           (0x810000U 
                                                            == 
                                                            (0x810000U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u) 
                                                | ((IData)(
                                                           (0x800000U 
                                                            == 
                                                            (0x810000U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u) 
                                                | ((IData)(
                                                           (0x800000U 
                                                            == 
                                                            (0x810000U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0xcU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0xcU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0xcU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0xbU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0xbU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u) 
                                                | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x14U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                    >> 5U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                     >> 6U) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                       >> 4U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u) 
                                                | (((~ 
                                                     (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                      >> 6U)) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                       >> 4U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 9U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0xfU) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                       >> 6U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0xfU) 
                                                    & (~ 
                                                       (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                        >> 6U))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u) 
                                                | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                     & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                        >> 8U)) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                     >> 0x1bU) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                       >> 0x15U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                     >> 0x1bU) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                       >> 0x14U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0xfU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0xfU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x10U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x10U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0x1aU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0x1aU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 3U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 3U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0xdU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0xdU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0xeU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0xeU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_ir = 
        ((vlSelf->z80_top_direct_n__DOT__pla[2U] >> 0x13U) 
         & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_ir = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_ir) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_ir = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_ir) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_ir = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_ir) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_ir = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_ir) 
         | ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_ir = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_ir) 
         | ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we = 
        (((vlSelf->z80_top_direct_n__DOT__pla[0U] >> 0x11U) 
          & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x12U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we) 
         | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x1aU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we) 
         | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x1bU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 8U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 8U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we) 
         | ((IData)((0x40000U == (0x40100U & vlSelf->z80_top_direct_n__DOT__pla[1U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we) 
         | ((IData)((0x2100U == (0x2100U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we) 
         | ((IData)((0x100U == (0x2100U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
              >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                        >> 0xdU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
              >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                        >> 0xdU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
              >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                        >> 0xdU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
              >> 6U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                           >> 0xdU))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
              >> 6U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                           >> 0xdU))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
              >> 6U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                           >> 0xdU))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 7U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 7U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we) 
         | ((IData)((0x40002000U == (0x40002000U & 
                                     vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we) 
         | ((IData)((0x40002000U == (0x40002000U & 
                                     vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we) 
         | ((IData)((0x40002000U == (0x40002000U & 
                                     vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we) 
         | ((IData)((0x40002000U == (0x40002000U & 
                                     vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we) 
         | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we) 
         | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we) 
         | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we) 
         | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0xfU) & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                          >> 6U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0xfU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                             >> 6U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
              >> 5U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                           >> 0x1cU))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
              >> 5U) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                        >> 0x1cU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                           >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                           >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x1dU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x1dU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0xfU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0x10U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we) 
         | ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we) 
         | ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp = 
        ((vlSelf->z80_top_direct_n__DOT__pla[0U] >> 7U) 
         & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 7U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp) 
         | ((IData)((0x810000U == (0x810000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp) 
         | ((IData)((0x810000U == (0x810000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp) 
         | ((IData)((0x810000U == (0x810000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp) 
         | ((IData)((0x810000U == (0x810000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp) 
         | ((IData)((0x800000U == (0x810000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp) 
         | ((IData)((0x800000U == (0x810000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp) 
         | ((IData)((0x800000U == (0x810000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp) 
         | ((IData)((0x800000U == (0x810000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
              >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                        >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
              >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                        >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp) 
         | (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                 >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                            >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp) 
         | (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                 >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                            >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 9U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 9U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 3U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 3U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 3U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 3U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0xeU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0xeU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0xeU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0xeU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        (((vlSelf->z80_top_direct_n__DOT__pla[0U] >> 0x11U) 
          & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x12U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | ((IData)((0x20000000U == (0x2c000000U & 
                                     vlSelf->z80_top_direct_n__DOT__pla[1U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x1aU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x1aU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | ((IData)((0x100U == (0x2100U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
              >> 6U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                           >> 0xdU))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x13U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x13U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 7U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 7U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | ((IData)((0x810000U == (0x810000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | ((IData)((0x810000U == (0x810000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | ((IData)((0x800000U == (0x810000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | ((IData)((0x800000U == (0x810000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | ((IData)((0x800000U == (0x810000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | ((IData)((0x800000U == (0x810000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
              >> 1U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                           >> 0x14U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
              >> 2U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                           >> 0x15U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
              >> 2U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                           >> 0x15U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
              >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                        >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
              >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                        >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                 >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                            >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                 >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                            >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 9U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x12U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x12U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x1cU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0xfU) & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                          >> 6U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0xfU) & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                          >> 6U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0xfU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                             >> 6U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0xfU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                             >> 6U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 8U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 8U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 0xaU)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 9U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
              >> 5U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                           >> 0x1cU))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1bU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 2U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1bU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 2U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                           >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                           >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                           >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 3U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 3U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0xeU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0xeU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0xeU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0xfU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x10U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x14U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x15U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x16U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__pc_inc_hold 
        = ((((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x11U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x12U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
           & (((IData)(vlSelf->z80_top_direct_n__DOT__in_halt) 
               | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_intr_ALTERA_SYNTHESIZED)) 
              | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED)));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = (((
                                                   (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0x11U) 
                                                   & (~ 
                                                      (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x12U))) 
                                                  & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                 & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold)));
    z80_top_direct_n__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold) 
           | ((((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
                & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                   >> 0x1aU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                 & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->z80_top_direct_n__DOT__in_halt) 
                  | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_intr_ALTERA_SYNTHESIZED)) 
                 | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | ((((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
                                                      & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                         >> 0x1aU)) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    z80_top_direct_n__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold) 
           | ((((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
                & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                   >> 0x1bU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                 & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->z80_top_direct_n__DOT__in_halt) 
                  | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_intr_ALTERA_SYNTHESIZED)) 
                 | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | ((((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
                                                      & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                         >> 0x1bU)) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    z80_top_direct_n__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 8U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->z80_top_direct_n__DOT__in_halt) 
                  | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_intr_ALTERA_SYNTHESIZED)) 
                 | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                      >> 8U) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    z80_top_direct_n__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 8U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->z80_top_direct_n__DOT__in_halt) 
                  | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_intr_ALTERA_SYNTHESIZED)) 
                 | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                      >> 8U) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    z80_top_direct_n__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold) 
           | (((IData)((0x40000U == (0x40100U & vlSelf->z80_top_direct_n__DOT__pla[1U]))) 
               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->z80_top_direct_n__DOT__in_halt) 
                  | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_intr_ALTERA_SYNTHESIZED)) 
                 | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((IData)(
                                                             (0x40000U 
                                                              == 
                                                              (0x40100U 
                                                               & vlSelf->z80_top_direct_n__DOT__pla[1U]))) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((IData)(
                                                             (0x2100U 
                                                              == 
                                                              (0x2100U 
                                                               & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((IData)(
                                                             (0x100U 
                                                              == 
                                                              (0x2100U 
                                                               & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    z80_top_direct_n__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold) 
           | ((((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                 >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                           >> 0xdU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->z80_top_direct_n__DOT__in_halt) 
                  | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_intr_ALTERA_SYNTHESIZED)) 
                 | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 6U) 
                                                      & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                         >> 0xdU)) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    z80_top_direct_n__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold) 
           | ((((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                 >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                           >> 0xdU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->z80_top_direct_n__DOT__in_halt) 
                  | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_intr_ALTERA_SYNTHESIZED)) 
                 | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 6U) 
                                                      & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                         >> 0xdU)) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 6U) 
                                                      & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                         >> 0xdU)) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    z80_top_direct_n__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold) 
           | ((((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                 >> 6U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                              >> 0xdU))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->z80_top_direct_n__DOT__in_halt) 
                  | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_intr_ALTERA_SYNTHESIZED)) 
                 | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 6U) 
                                                      & (~ 
                                                         (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                          >> 0xdU))) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    z80_top_direct_n__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold) 
           | ((((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                 >> 6U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                              >> 0xdU))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->z80_top_direct_n__DOT__in_halt) 
                  | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_intr_ALTERA_SYNTHESIZED)) 
                 | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 6U) 
                                                      & (~ 
                                                         (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                          >> 0xdU))) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 6U) 
                                                      & (~ 
                                                         (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                          >> 0xdU))) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    z80_top_direct_n__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 7U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->z80_top_direct_n__DOT__in_halt) 
                  | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_intr_ALTERA_SYNTHESIZED)) 
                 | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                      >> 7U) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    z80_top_direct_n__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 7U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->z80_top_direct_n__DOT__in_halt) 
                  | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_intr_ALTERA_SYNTHESIZED)) 
                 | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                      >> 7U) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    z80_top_direct_n__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold) 
           | (((IData)((0x40002000U == (0x40002000U 
                                        & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->z80_top_direct_n__DOT__in_halt) 
                  | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_intr_ALTERA_SYNTHESIZED)) 
                 | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((IData)(
                                                             (0x40002000U 
                                                              == 
                                                              (0x40002000U 
                                                               & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    z80_top_direct_n__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold) 
           | (((IData)((0x40002000U == (0x40002000U 
                                        & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->z80_top_direct_n__DOT__in_halt) 
                  | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_intr_ALTERA_SYNTHESIZED)) 
                 | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((IData)(
                                                             (0x40002000U 
                                                              == 
                                                              (0x40002000U 
                                                               & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((IData)(
                                                             (0x40002000U 
                                                              == 
                                                              (0x40002000U 
                                                               & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((IData)(
                                                             (0x40002000U 
                                                              == 
                                                              (0x40002000U 
                                                               & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    z80_top_direct_n__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold) 
           | (((IData)((0x40000000U == (0x40002000U 
                                        & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->z80_top_direct_n__DOT__in_halt) 
                  | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_intr_ALTERA_SYNTHESIZED)) 
                 | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((IData)(
                                                             (0x40000000U 
                                                              == 
                                                              (0x40002000U 
                                                               & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    z80_top_direct_n__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold) 
           | (((IData)((0x40000000U == (0x40002000U 
                                        & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->z80_top_direct_n__DOT__in_halt) 
                  | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_intr_ALTERA_SYNTHESIZED)) 
                 | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((IData)(
                                                             (0x40000000U 
                                                              == 
                                                              (0x40002000U 
                                                               & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((IData)(
                                                             (0x40000000U 
                                                              == 
                                                              (0x40002000U 
                                                               & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((IData)(
                                                             (0x40000000U 
                                                              == 
                                                              (0x40002000U 
                                                               & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    z80_top_direct_n__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold) 
           | ((((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                 >> 0x1fU) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 1U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->z80_top_direct_n__DOT__in_halt) 
                  | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_intr_ALTERA_SYNTHESIZED)) 
                 | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                       >> 0x1fU) 
                                                      & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                         >> 1U)) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    z80_top_direct_n__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold) 
           | ((((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                 >> 0x1fU) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 1U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->z80_top_direct_n__DOT__in_halt) 
                  | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_intr_ALTERA_SYNTHESIZED)) 
                 | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                       >> 0x1fU) 
                                                      & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                         >> 1U)) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                       >> 0x1fU) 
                                                      & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                         >> 1U)) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                       >> 0x1fU) 
                                                      & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                         >> 1U)) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    z80_top_direct_n__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold) 
           | ((((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                 >> 0x1fU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 1U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->z80_top_direct_n__DOT__in_halt) 
                  | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_intr_ALTERA_SYNTHESIZED)) 
                 | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                       >> 0x1fU) 
                                                      & (~ 
                                                         (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                          >> 1U))) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    z80_top_direct_n__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold) 
           | ((((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                 >> 0x1fU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 1U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->z80_top_direct_n__DOT__in_halt) 
                  | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_intr_ALTERA_SYNTHESIZED)) 
                 | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                       >> 0x1fU) 
                                                      & (~ 
                                                         (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                          >> 1U))) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                       >> 0x1fU) 
                                                      & (~ 
                                                         (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                          >> 1U))) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                       >> 0x1fU) 
                                                      & (~ 
                                                         (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                          >> 1U))) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((IData)(
                                                             (0x810000U 
                                                              == 
                                                              (0x810000U 
                                                               & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((IData)(
                                                             (0x810000U 
                                                              == 
                                                              (0x810000U 
                                                               & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((IData)(
                                                             (0x810000U 
                                                              == 
                                                              (0x810000U 
                                                               & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((IData)(
                                                             (0x810000U 
                                                              == 
                                                              (0x810000U 
                                                               & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((IData)(
                                                             (0x810000U 
                                                              == 
                                                              (0x810000U 
                                                               & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((IData)(
                                                             (0x810000U 
                                                              == 
                                                              (0x810000U 
                                                               & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((IData)(
                                                             (0x800000U 
                                                              == 
                                                              (0x810000U 
                                                               & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((IData)(
                                                             (0x800000U 
                                                              == 
                                                              (0x810000U 
                                                               & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                      >> 0xcU) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                      >> 0xcU) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                      >> 0xcU) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    z80_top_direct_n__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->z80_top_direct_n__DOT__in_halt) 
                  | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_intr_ALTERA_SYNTHESIZED)) 
                 | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                      >> 0xcU) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    z80_top_direct_n__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))) 
              & (((IData)(vlSelf->z80_top_direct_n__DOT__in_halt) 
                  | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_intr_ALTERA_SYNTHESIZED)) 
                 | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                      >> 0xcU) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                      >> 0xbU) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                      >> 0xbU) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    z80_top_direct_n__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->z80_top_direct_n__DOT__in_halt) 
                  | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_intr_ALTERA_SYNTHESIZED)) 
                 | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                      >> 0xbU) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    z80_top_direct_n__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))) 
              & (((IData)(vlSelf->z80_top_direct_n__DOT__in_halt) 
                  | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_intr_ALTERA_SYNTHESIZED)) 
                 | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                      >> 0xbU) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    z80_top_direct_n__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->z80_top_direct_n__DOT__in_halt) 
                  | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_intr_ALTERA_SYNTHESIZED)) 
                 | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    z80_top_direct_n__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold) 
           | ((((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
                & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                   >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                 & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->z80_top_direct_n__DOT__in_halt) 
                  | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_intr_ALTERA_SYNTHESIZED)) 
                 | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | ((((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
                                                      & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                         >> 0x14U)) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                      & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                         >> 0x14U)) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    z80_top_direct_n__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold) 
           | ((((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
                & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                   >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                 & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->z80_top_direct_n__DOT__in_halt) 
                  | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_intr_ALTERA_SYNTHESIZED)) 
                 | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | ((((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
                                                      & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                         >> 0x15U)) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                      >> 9U) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                       >> 0xfU) 
                                                      & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                         >> 6U)) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                       >> 0xfU) 
                                                      & (~ 
                                                         (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                          >> 6U))) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    z80_top_direct_n__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold) 
           | ((((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                 >> 5U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                              >> 0x1cU))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->z80_top_direct_n__DOT__in_halt) 
                  | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_intr_ALTERA_SYNTHESIZED)) 
                 | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 5U) 
                                                      & (~ 
                                                         (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                          >> 0x1cU))) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    z80_top_direct_n__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold) 
           | ((((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                 >> 5U) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                           >> 0x1cU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->z80_top_direct_n__DOT__in_halt) 
                  | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_intr_ALTERA_SYNTHESIZED)) 
                 | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 5U) 
                                                      & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                         >> 0x1cU)) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                       >> 0x1bU) 
                                                      & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                         >> 0x15U)) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    z80_top_direct_n__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold) 
           | ((((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 0x1bU) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                              >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->z80_top_direct_n__DOT__in_halt) 
                  | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_intr_ALTERA_SYNTHESIZED)) 
                 | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                       >> 0x1bU) 
                                                      & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                         >> 0x15U)) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    z80_top_direct_n__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold) 
           | ((((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 0x1bU) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                              >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))) 
              & (((IData)(vlSelf->z80_top_direct_n__DOT__in_halt) 
                  | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_intr_ALTERA_SYNTHESIZED)) 
                 | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                       >> 0x1bU) 
                                                      & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                         >> 0x15U)) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                       >> 0x1bU) 
                                                      & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                         >> 0x14U)) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    z80_top_direct_n__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold) 
           | ((((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 0x1bU) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                              >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->z80_top_direct_n__DOT__in_halt) 
                  | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_intr_ALTERA_SYNTHESIZED)) 
                 | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                       >> 0x1bU) 
                                                      & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                         >> 0x14U)) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    z80_top_direct_n__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold) 
           | ((((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 0x1bU) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                              >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))) 
              & (((IData)(vlSelf->z80_top_direct_n__DOT__in_halt) 
                  | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_intr_ALTERA_SYNTHESIZED)) 
                 | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | ((((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                       >> 0x1bU) 
                                                      & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                         >> 0x14U)) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    z80_top_direct_n__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0x1dU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->z80_top_direct_n__DOT__in_halt) 
                  | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_intr_ALTERA_SYNTHESIZED)) 
                 | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                      >> 0x1dU) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    z80_top_direct_n__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0x1dU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->z80_top_direct_n__DOT__in_halt) 
                  | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_intr_ALTERA_SYNTHESIZED)) 
                 | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                      >> 0x1dU) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    z80_top_direct_n__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->z80_top_direct_n__DOT__in_halt) 
                  | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_intr_ALTERA_SYNTHESIZED)) 
                 | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                      >> 0xbU) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    z80_top_direct_n__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->z80_top_direct_n__DOT__in_halt) 
                  | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_intr_ALTERA_SYNTHESIZED)) 
                 | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                      >> 0xbU) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    z80_top_direct_n__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0xfU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->z80_top_direct_n__DOT__in_halt) 
                  | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_intr_ALTERA_SYNTHESIZED)) 
                 | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                      >> 0xfU) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    z80_top_direct_n__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x10U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->z80_top_direct_n__DOT__in_halt) 
                  | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_intr_ALTERA_SYNTHESIZED)) 
                 | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                      >> 0x10U) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    z80_top_direct_n__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0x1aU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->z80_top_direct_n__DOT__in_halt) 
                  | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_intr_ALTERA_SYNTHESIZED)) 
                 | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                      >> 0x1aU) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    z80_top_direct_n__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->z80_top_direct_n__DOT__in_halt) 
                  | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_intr_ALTERA_SYNTHESIZED)) 
                 | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    z80_top_direct_n__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->z80_top_direct_n__DOT__in_halt) 
                  | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_intr_ALTERA_SYNTHESIZED)) 
                 | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    z80_top_direct_n__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->z80_top_direct_n__DOT__in_halt) 
                  | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_intr_ALTERA_SYNTHESIZED)) 
                 | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    z80_top_direct_n__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->z80_top_direct_n__DOT__in_halt) 
                  | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_intr_ALTERA_SYNTHESIZED)) 
                 | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                      >> 0xaU) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                      >> 3U) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                      >> 3U) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                      >> 0xdU) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                      >> 0xdU) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                      >> 0xeU) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                      >> 0xeU) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                      >> 0x18U) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    z80_top_direct_n__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->z80_top_direct_n__DOT__in_halt) 
                  | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_intr_ALTERA_SYNTHESIZED)) 
                 | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                      >> 0x11U) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    z80_top_direct_n__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (((IData)(vlSelf->z80_top_direct_n__DOT__in_halt) 
                  | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_intr_ALTERA_SYNTHESIZED)) 
                 | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                      >> 0x11U) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    z80_top_direct_n__DOT__execute___DOT__pc_inc_hold 
        = ((IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold) 
           | (((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)) 
              & (((IData)(vlSelf->z80_top_direct_n__DOT__in_halt) 
                  | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_intr_ALTERA_SYNTHESIZED)) 
                 | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                                 | (((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)) 
                                                    & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__pc_inc_hold))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla17npla50M1T1_2 
        = (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x11U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                             >> 0x12U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla17npla50M1T1_2))) 
               & ((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                   << 0x19U) | (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                >> 7U))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla17npla50M1T1_3 
        = (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x11U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                             >> 0x12U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla17npla50M1T1_3))) 
           & ((2U & ((~ (IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__rsel3)) 
                     << 1U)) | (IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__rsel3)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi = 
        (((vlSelf->z80_top_direct_n__DOT__pla[0U] >> 0x11U) 
          & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x12U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        (((vlSelf->z80_top_direct_n__DOT__pla[0U] >> 0x11U) 
          & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x12U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2d = (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                  >> 0x11U) 
                                                 & (~ 
                                                    (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 0x12U))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1d = (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                  >> 0x11U) 
                                                 & (~ 
                                                    (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 0x12U))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe = 
        (((vlSelf->z80_top_direct_n__DOT__pla[0U] >> 0x11U) 
          & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x12U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA 
        = (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x11U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                             >> 0x12U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc = 
        (((vlSelf->z80_top_direct_n__DOT__pla[0U] >> 0x11U) 
          & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x12U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla17npla50M2T1_3 
        = (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x11U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                             >> 0x12U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla17npla50M2T1_3))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                  >> 0x11U) 
                                                 & (~ 
                                                    (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 0x12U))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x11U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x12U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla17npla50M2T2_4 
        = (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x11U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                             >> 0x12U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla17npla50M2T2_4)))));
    vlSelf->z80_top_direct_n__DOT__setM1 = (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                              >> 0x11U) 
                                             & (~ (
                                                   vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                   >> 0x12U))) 
                                            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla61npla58npla59M1T1_2 
        = ((IData)((0x20000000U == (0x2c000000U & vlSelf->z80_top_direct_n__DOT__pla[1U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla61npla58npla59M1T1_2))) 
                  & ((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                      << 0x19U) | (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                   >> 7U)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla61npla58npla59M1T1_3 
        = ((IData)((0x20000000U == (0x2c000000U & vlSelf->z80_top_direct_n__DOT__pla[1U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla61npla58npla59M1T1_3))) 
              & ((2U & ((~ (IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__rsel3)) 
                        << 1U)) | (IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__rsel3))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi) 
         | ((IData)((0x20000000U == (0x2c000000U & 
                                     vlSelf->z80_top_direct_n__DOT__pla[1U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo) 
         | ((IData)((0x20000000U == (0x2c000000U & 
                                     vlSelf->z80_top_direct_n__DOT__pla[1U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2u = ((IData)(
                                                        (0x20000000U 
                                                         == 
                                                         (0x2c000000U 
                                                          & vlSelf->z80_top_direct_n__DOT__pla[1U]))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_oe = ((IData)(
                                                         (0x20000000U 
                                                          == 
                                                          (0x2c000000U 
                                                           & vlSelf->z80_top_direct_n__DOT__pla[1U]))) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA) 
           | ((IData)((0x20000000U == (0x2c000000U 
                                       & vlSelf->z80_top_direct_n__DOT__pla[1U]))) 
              & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                 & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__setM1 = ((IData)(vlSelf->z80_top_direct_n__DOT__setM1) 
                                            | ((IData)(
                                                       (0x20000000U 
                                                        == 
                                                        (0x2c000000U 
                                                         & vlSelf->z80_top_direct_n__DOT__pla[1U]))) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla61npla58npla59M1T4_3 
        = ((IData)((0x20000000U == (0x2c000000U & vlSelf->z80_top_direct_n__DOT__pla[1U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla61npla58npla59M1T4_3))) 
                  & ((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                      << 0x1cU) | (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                   >> 4U)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla61npla58npla59M1T4_4 
        = ((IData)((0x20000000U == (0x2c000000U & vlSelf->z80_top_direct_n__DOT__pla[1U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla61npla58npla59M1T4_4))) 
              & ((2U & ((~ (IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__rsel0)) 
                        << 1U)) | (IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__rsel0))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi = 
        (((IData)((0x20000000U == (0x2c000000U & vlSelf->z80_top_direct_n__DOT__pla[1U]))) 
          & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))) 
         & (~ (IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__rsel0)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo = 
        (((IData)((0x20000000U == (0x2c000000U & vlSelf->z80_top_direct_n__DOT__pla[1U]))) 
          & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))) 
         & (IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__rsel0));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2u) 
                                                | (((IData)(
                                                            (0x20000000U 
                                                             == 
                                                             (0x2c000000U 
                                                              & vlSelf->z80_top_direct_n__DOT__pla[1U]))) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))) 
                                                   & (~ (IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__rsel0))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d) 
                                                | (((IData)(
                                                            (0x20000000U 
                                                             == 
                                                             (0x2c000000U 
                                                              & vlSelf->z80_top_direct_n__DOT__pla[1U]))) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__rsel0)));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe 
        = ((IData)((0x20000000U == (0x2c000000U & vlSelf->z80_top_direct_n__DOT__pla[1U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus 
        = ((IData)((0x20000000U == (0x2c000000U & vlSelf->z80_top_direct_n__DOT__pla[1U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_use_ixiypla58M1T1_2 
        = (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
            & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x1aU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_use_ixiypla58M1T1_2))) 
                  & ((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                      << 0x19U) | (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                   >> 7U)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_use_ixiypla58M1T1_3 
        = (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
            & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x1aU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_use_ixiypla58M1T1_3))) 
              & ((2U & ((~ (IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__rsel3)) 
                        << 1U)) | (IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__rsel3))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi) 
         | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x1aU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo) 
         | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x1aU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d) 
                                                | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x1aU)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1d) 
                                                | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x1aU)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe) 
         | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x1aU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA) 
           | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x1aU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc) 
         | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x1aU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla58M2T1_3 
        = (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
            & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x1aU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla58M2T1_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x1aU)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc) 
         | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x1aU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla58M2T2_4 
        = (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
            & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x1aU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla58M2T2_4)))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d 
        = (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
            & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x1aU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
           | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x1aU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
           | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x1aU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
           | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x1aU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
           | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x1aU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla58M1T1_2 
        = (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
            & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x1aU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla58M1T1_2))) 
                  & ((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                      << 0x19U) | (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                   >> 7U)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla58M1T1_3 
        = (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
            & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x1aU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla58M1T1_3))) 
              & ((2U & ((~ (IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__rsel3)) 
                        << 1U)) | (IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__rsel3))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi) 
         | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x1aU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo) 
         | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x1aU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d) 
                                                | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x1aU)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1d) 
                                                | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x1aU)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe) 
         | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x1aU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA) 
           | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x1aU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla58M2T1_2 
        = (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
            & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x1aU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla58M2T1_2)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla58M2T1_3 
        = (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
            & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x1aU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla58M2T1_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4d = (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x1aU)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x1aU)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__setM1 = ((IData)(vlSelf->z80_top_direct_n__DOT__setM1) 
                                            | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                   >> 0x1aU)) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__setM1 = ((IData)(vlSelf->z80_top_direct_n__DOT__setM1) 
                                            | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                   >> 0x1aU)) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA) 
           | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x1bU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc) 
         | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x1bU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla59M2T1_3 
        = (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
            & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x1bU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla59M2T1_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x1bU)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc) 
         | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x1bU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla59M2T2_4 
        = (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
            & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x1bU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_use_ixiypla59M2T2_4)))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
           | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x1bU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
           | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x1bU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
           | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x1bU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
           | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x1bU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
           | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x1bU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA) 
           | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x1bU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla59M1T4_4 
        = (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
            & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x1bU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla59M1T4_4))) 
                  & ((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                      << 0x1cU) | (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                   >> 4U)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla59M1T4_5 
        = (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
            & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x1bU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla59M1T4_5))) 
              & ((2U & ((~ (IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__rsel0)) 
                        << 1U)) | (IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__rsel0))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                 >> 0x1bU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))) 
            & (~ (IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__rsel0))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                 >> 0x1bU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__rsel0)));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2u) 
                                                | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                     & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                        >> 0x1bU)) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))) 
                                                   & (~ (IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__rsel0))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d) 
                                                | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                     & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                        >> 0x1bU)) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__rsel0)));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla59M2T1_2 
        = (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
            & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x1bU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla59M2T1_2)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla59M2T1_3 
        = (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
            & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x1bU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla59M2T1_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4d) 
                                                | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x1bU)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x1bU)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__setM1 = ((IData)(vlSelf->z80_top_direct_n__DOT__setM1) 
                                            | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                   >> 0x1bU)) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla59M4T1_3 
        = (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
            & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x1bU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_nuse_ixiypla59M4T1_3))) 
                  & ((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                      << 0x1cU) | (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                   >> 4U)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla59M4T1_4 
        = (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
            & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x1bU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_nuse_ixiypla59M4T1_4))) 
              & ((2U & ((~ (IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__rsel0)) 
                        << 1U)) | (IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__rsel0))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                 >> 0x1bU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))) 
            & (~ (IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__rsel0))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                 >> 0x1bU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__rsel0)));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2u) 
                                                | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                     & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                        >> 0x1bU)) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))) 
                                                   & (~ (IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__rsel0))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d) 
                                                | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                     & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                        >> 0x1bU)) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__rsel0)));
    vlSelf->z80_top_direct_n__DOT__setM1 = ((IData)(vlSelf->z80_top_direct_n__DOT__setM1) 
                                            | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                   >> 0x1bU)) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 8U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 8U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla40M2T1_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
            >> 8U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla40M2T1_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 8U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 8U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla40M2T2_4 
        = ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
            >> 8U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla40M2T2_4)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 8U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla40M3T1_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
            >> 8U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla40M3T1_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 8U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 8U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 8U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla40M3T2_4 
        = ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
            >> 8U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla40M3T2_4)))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 8U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 8U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 8U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 8U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA) 
           | ((IData)((0x40000U == (0x40100U & vlSelf->z80_top_direct_n__DOT__pla[1U]))) 
              & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                 & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc) 
         | ((IData)((0x40000U == (0x40100U & vlSelf->z80_top_direct_n__DOT__pla[1U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla50npla40M2T1_3 
        = ((IData)((0x40000U == (0x40100U & vlSelf->z80_top_direct_n__DOT__pla[1U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla50npla40M2T1_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | ((IData)(
                                                           (0x40000U 
                                                            == 
                                                            (0x40100U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[1U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc) 
         | ((IData)((0x40000U == (0x40100U & vlSelf->z80_top_direct_n__DOT__pla[1U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla50npla40M2T2_4 
        = ((IData)((0x40000U == (0x40100U & vlSelf->z80_top_direct_n__DOT__pla[1U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla50npla40M2T2_4)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla50npla40M3T1_2 
        = ((IData)((0x40000U == (0x40100U & vlSelf->z80_top_direct_n__DOT__pla[1U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla50npla40M3T1_2)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla50npla40M3T1_3 
        = ((IData)((0x40000U == (0x40100U & vlSelf->z80_top_direct_n__DOT__pla[1U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla50npla40M3T1_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4d) 
                                                | ((IData)(
                                                           (0x40000U 
                                                            == 
                                                            (0x40100U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[1U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | ((IData)(
                                                           (0x40000U 
                                                            == 
                                                            (0x40100U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[1U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__setM1 = ((IData)(vlSelf->z80_top_direct_n__DOT__setM1) 
                                            | ((IData)(
                                                       (0x40000U 
                                                        == 
                                                        (0x40100U 
                                                         & vlSelf->z80_top_direct_n__DOT__pla[1U]))) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__setM1 = ((IData)(vlSelf->z80_top_direct_n__DOT__setM1) 
                                            | ((IData)(
                                                       (0x40000U 
                                                        == 
                                                        (0x40100U 
                                                         & vlSelf->z80_top_direct_n__DOT__pla[1U]))) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA) 
           | ((IData)((0x2100U == (0x2100U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
              & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                 & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla8pla13M1T4_4 
        = ((IData)((0x2100U == (0x2100U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla8pla13M1T4_4)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla8pla13M1T4_5 
        = ((IData)((0x2100U == (0x2100U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla8pla13M1T4_5)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi) 
         | ((IData)((0x2100U == (0x2100U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2u) 
                                                | ((IData)(
                                                           (0x2100U 
                                                            == 
                                                            (0x2100U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla8pla13M2T1_2 
        = ((IData)((0x2100U == (0x2100U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla8pla13M2T1_2))) 
                  & ((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                      << 0x19U) | (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                   >> 7U)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla8pla13M2T1_3 
        = ((IData)((0x2100U == (0x2100U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla8pla13M2T1_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4d) 
                                                | ((IData)(
                                                           (0x2100U 
                                                            == 
                                                            (0x2100U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | ((IData)(
                                                           (0x2100U 
                                                            == 
                                                            (0x2100U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz = 
        ((IData)((0x2100U == (0x2100U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
         & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla8pla13M2T2_4 
        = ((IData)((0x2100U == (0x2100U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla8pla13M2T2_4)))));
    vlSelf->z80_top_direct_n__DOT__setM1 = ((IData)(vlSelf->z80_top_direct_n__DOT__setM1) 
                                            | ((IData)(
                                                       (0x2100U 
                                                        == 
                                                        (0x2100U 
                                                         & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla8npla13M1T1_2 
        = ((IData)((0x100U == (0x2100U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla8npla13M1T1_2)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla8npla13M1T1_3 
        = ((IData)((0x100U == (0x2100U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla8npla13M1T1_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi) 
         | ((IData)((0x100U == (0x2100U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo) 
         | ((IData)((0x100U == (0x2100U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d) 
                                                | ((IData)(
                                                           (0x100U 
                                                            == 
                                                            (0x2100U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1d) 
                                                | ((IData)(
                                                           (0x100U 
                                                            == 
                                                            (0x2100U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe) 
         | ((IData)((0x100U == (0x2100U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA) 
           | ((IData)((0x100U == (0x2100U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
              & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                 & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla8npla13M2T1_2 
        = ((IData)((0x100U == (0x2100U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla8npla13M2T1_2))) 
                  & ((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                      << 0x19U) | (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                   >> 7U)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla8npla13M2T1_3 
        = ((IData)((0x100U == (0x2100U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla8npla13M2T1_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4d) 
                                                | ((IData)(
                                                           (0x100U 
                                                            == 
                                                            (0x2100U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | ((IData)(
                                                           (0x100U 
                                                            == 
                                                            (0x2100U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz) 
         | ((IData)((0x100U == (0x2100U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla8npla13M2T2_4 
        = ((IData)((0x100U == (0x2100U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla8npla13M2T2_4)))));
    vlSelf->z80_top_direct_n__DOT__setM1 = ((IData)(vlSelf->z80_top_direct_n__DOT__setM1) 
                                            | ((IData)(
                                                       (0x100U 
                                                        == 
                                                        (0x2100U 
                                                         & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                          >> 0xdU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
              >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                        >> 0xdU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla38pla13M2T1_3 
        = (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                       >> 0xdU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla38pla13M2T1_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 6U) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                       >> 0xdU)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
              >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                        >> 0xdU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla38pla13M2T2_4 
        = (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                       >> 0xdU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla38pla13M2T2_4)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we_lo 
        = (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                       >> 0xdU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
              >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                        >> 0xdU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla38pla13M2T3_6 
        = (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                       >> 0xdU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla38pla13M2T3_6))) 
              & (1U | (2U & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
              >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                        >> 0xdU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 6U) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                       >> 0xdU)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1d) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 6U) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                       >> 0xdU)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
              >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                        >> 0xdU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
              >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                        >> 0xdU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla38pla13M3T1_3 
        = (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                       >> 0xdU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla38pla13M3T1_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 6U) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                       >> 0xdU)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
              >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                        >> 0xdU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla38pla13M3T2_4 
        = (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                       >> 0xdU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla38pla13M3T2_4)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
              >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                        >> 0xdU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla38pla13M3T3_5 
        = (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                       >> 0xdU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla38pla13M3T3_5)))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4d) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 6U) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                       >> 0xdU)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 6U) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                       >> 0xdU)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we_hi 
        = (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                       >> 0xdU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
              >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                        >> 0xdU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla38pla13M3T3_10 
        = (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                       >> 0xdU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla38pla13M3T3_10))) 
              & (2U | (1U & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
              >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                        >> 0xdU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 6U) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                       >> 0xdU)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1d) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 6U) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                       >> 0xdU)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
              >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                        >> 0xdU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla38pla13M4T1_3 
        = (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                       >> 0xdU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla38pla13M4T1_3)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla38pla13M4T1_4 
        = (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                       >> 0xdU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla38pla13M4T1_4)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
              >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                        >> 0xdU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2u) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 6U) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                       >> 0xdU)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
              >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                        >> 0xdU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla38pla13M4T2_4 
        = (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                       >> 0xdU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla38pla13M4T2_4)))));
    vlSelf->z80_top_direct_n__DOT__setM1 = ((IData)(vlSelf->z80_top_direct_n__DOT__setM1) 
                                            | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 6U) 
                                                & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                   >> 0xdU)) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla38npla13M1T1_2 
        = (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 6U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                          >> 0xdU))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla38npla13M1T1_2)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla38npla13M1T1_3 
        = (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 6U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                          >> 0xdU))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla38npla13M1T1_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
              >> 6U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                           >> 0xdU))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
              >> 6U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                           >> 0xdU))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 6U) 
                                                    & (~ 
                                                       (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                        >> 0xdU))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1d) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 6U) 
                                                    & (~ 
                                                       (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                        >> 0xdU))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
              >> 6U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                           >> 0xdU))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 6U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                             >> 0xdU))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
              >> 6U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                           >> 0xdU))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla38npla13M2T1_3 
        = (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 6U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                          >> 0xdU))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla38npla13M2T1_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 6U) 
                                                    & (~ 
                                                       (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                        >> 0xdU))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
              >> 6U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                           >> 0xdU))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla38npla13M2T2_4 
        = (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 6U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                          >> 0xdU))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla38npla13M2T2_4)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we_lo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we_lo) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 6U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                             >> 0xdU))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
              >> 6U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                           >> 0xdU))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla38npla13M2T3_6 
        = (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 6U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                          >> 0xdU))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla38npla13M2T3_6))) 
              & (1U | (2U & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
              >> 6U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                           >> 0xdU))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 6U) 
                                                    & (~ 
                                                       (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                        >> 0xdU))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1d) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 6U) 
                                                    & (~ 
                                                       (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                        >> 0xdU))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
              >> 6U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                           >> 0xdU))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
              >> 6U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                           >> 0xdU))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla38npla13M3T1_3 
        = (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 6U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                          >> 0xdU))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla38npla13M3T1_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 6U) 
                                                    & (~ 
                                                       (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                        >> 0xdU))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
              >> 6U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                           >> 0xdU))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla38npla13M3T2_4 
        = (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 6U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                          >> 0xdU))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla38npla13M3T2_4)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we_hi 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we_hi) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 6U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                             >> 0xdU))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
              >> 6U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                           >> 0xdU))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla38npla13M3T3_6 
        = (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 6U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                          >> 0xdU))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla38npla13M3T3_6))) 
              & (2U | (1U & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
              >> 6U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                           >> 0xdU))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 6U) 
                                                    & (~ 
                                                       (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                        >> 0xdU))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1d) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 6U) 
                                                    & (~ 
                                                       (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                        >> 0xdU))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
              >> 6U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                           >> 0xdU))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
              >> 6U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                           >> 0xdU))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla38npla13M4T1_3 
        = (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 6U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                          >> 0xdU))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla38npla13M4T1_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4d) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 6U) 
                                                    & (~ 
                                                       (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                        >> 0xdU))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 6U) 
                                                    & (~ 
                                                       (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                        >> 0xdU))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
              >> 6U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                           >> 0xdU))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla38npla13M4T2_4 
        = (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 6U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                          >> 0xdU))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla38npla13M4T2_4)))));
    vlSelf->z80_top_direct_n__DOT__setM1 = ((IData)(vlSelf->z80_top_direct_n__DOT__setM1) 
                                            | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 6U) 
                                                & (~ 
                                                   (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0xdU))) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla83M1T1_2 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 0x13U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla83M1T1_2)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla83M1T1_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 0x13U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla83M1T1_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x13U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x13U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_alu = 
        ((vlSelf->z80_top_direct_n__DOT__pla[2U] >> 0x13U) 
         & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_oe = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_oe) 
                                                 | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                     >> 0x13U) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe = 
        ((vlSelf->z80_top_direct_n__DOT__pla[2U] >> 0x13U) 
         & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_high 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 0x13U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 0x13U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 0x13U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 0x13U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 0x13U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 0x13U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla83M1T2_2 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 0x13U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla83M1T2_2)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla83M1T2_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 0x13U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla83M1T2_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x13U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x13U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla83M1T3_1 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 0x13U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla83M1T3_1)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla83M1T3_2 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 0x13U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla83M1T3_2)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x13U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x13U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x13U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 0x13U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x13U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x13U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x13U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x13U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x13U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla83M1T4_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 0x13U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla83M1T4_3))) 
              & ((2U & ((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                            >> 6U)) << 1U)) | (1U & 
                                               (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                >> 6U)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
              >> 0x13U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))) 
            & (~ (IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__rsel3))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
              >> 0x13U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__rsel3)));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2u) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                     >> 0x13U) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))) 
                                                   & (~ (IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__rsel3))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                     >> 0x13U) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__rsel3)));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_alu) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x13U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x13U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x13U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x13U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low = 
        ((vlSelf->z80_top_direct_n__DOT__pla[2U] >> 0x13U) 
         & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x13U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x13U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x13U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x13U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x13U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__setM1 = ((IData)(vlSelf->z80_top_direct_n__DOT__setM1) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                >> 0x13U) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla57M1T3_1 
        = ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
            >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla57M1T3_1)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla57M1T3_2 
        = ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
            >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla57M1T3_2)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla57M1T4_4 
        = ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
            >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla57M1T4_4))) 
              & ((2U & ((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                            >> 6U)) << 1U)) | (1U & 
                                               (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                >> 6U)))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4d) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x19U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2u) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x19U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_oe = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_oe) 
                                                 | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 0x19U) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__setM1 = ((IData)(vlSelf->z80_top_direct_n__DOT__setM1) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                >> 0x19U) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla7M1T1_2 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 7U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla7M1T1_2))) 
                  & ((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                      << 0x19U) | (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                   >> 7U)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla7M1T1_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 7U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla7M1T1_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 7U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 7U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 7U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1d) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 7U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 7U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 7U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 7U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla7M2T1_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 7U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla7M2T1_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 7U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 7U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla7M2T2_4 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 7U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla7M2T2_4)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 7U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla7M3T1_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 7U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla7M3T1_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 7U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla7M3T1_6 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 7U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla7M3T1_6))) 
                  & ((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                      << 0x19U) | (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                   >> 7U)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla7M3T1_7 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 7U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla7M3T1_7)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 7U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 7U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 7U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1d) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 7U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 7U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 7U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla7M3T2_4 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 7U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla7M3T2_4)))));
    vlSelf->z80_top_direct_n__DOT__setM1 = ((IData)(vlSelf->z80_top_direct_n__DOT__setM1) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                >> 7U) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA) 
           | ((IData)((0x40002000U == (0x40002000U 
                                       & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
              & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                 & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc) 
         | ((IData)((0x40002000U == (0x40002000U & 
                                     vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M2T1_3 
        = ((IData)((0x40002000U == (0x40002000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M2T1_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | ((IData)(
                                                           (0x40002000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc) 
         | ((IData)((0x40002000U == (0x40002000U & 
                                     vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M2T2_4 
        = ((IData)((0x40002000U == (0x40002000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M2T2_4)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we_lo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we_lo) 
           | ((IData)((0x40002000U == (0x40002000U 
                                       & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
              & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                 & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz) 
         | ((IData)((0x40002000U == (0x40002000U & 
                                     vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M2T3_6 
        = ((IData)((0x40002000U == (0x40002000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M2T3_6))) 
              & (1U | (2U & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo) 
         | ((IData)((0x40002000U == (0x40002000U & 
                                     vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d) 
                                                | ((IData)(
                                                           (0x40002000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1d) 
                                                | ((IData)(
                                                           (0x40002000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe) 
         | ((IData)((0x40002000U == (0x40002000U & 
                                     vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc) 
         | ((IData)((0x40002000U == (0x40002000U & 
                                     vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M3T1_3 
        = ((IData)((0x40002000U == (0x40002000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M3T1_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | ((IData)(
                                                           (0x40002000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc) 
         | ((IData)((0x40002000U == (0x40002000U & 
                                     vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M3T2_4 
        = ((IData)((0x40002000U == (0x40002000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M3T2_4)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz) 
         | ((IData)((0x40002000U == (0x40002000U & 
                                     vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M3T3_5 
        = ((IData)((0x40002000U == (0x40002000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M3T3_5)))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4d) 
                                                | ((IData)(
                                                           (0x40002000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | ((IData)(
                                                           (0x40002000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we_hi 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we_hi) 
           | ((IData)((0x40002000U == (0x40002000U 
                                       & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
              & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                 & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz) 
         | ((IData)((0x40002000U == (0x40002000U & 
                                     vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M3T3_10 
        = ((IData)((0x40002000U == (0x40002000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M3T3_10))) 
              & (2U | (1U & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi) 
         | ((IData)((0x40002000U == (0x40002000U & 
                                     vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d) 
                                                | ((IData)(
                                                           (0x40002000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1d) 
                                                | ((IData)(
                                                           (0x40002000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe) 
         | ((IData)((0x40002000U == (0x40002000U & 
                                     vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla30pla13M4T1_3 
        = ((IData)((0x40002000U == (0x40002000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla30pla13M4T1_3))) 
                  & ((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                      << 0x19U) | (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                   >> 7U)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla30pla13M4T1_4 
        = ((IData)((0x40002000U == (0x40002000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla30pla13M4T1_4)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo) 
         | ((IData)((0x40002000U == (0x40002000U & 
                                     vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz) 
         | ((IData)((0x40002000U == (0x40002000U & 
                                     vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M4T2_4 
        = ((IData)((0x40002000U == (0x40002000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M4T2_4)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz) 
         | ((IData)((0x40002000U == (0x40002000U & 
                                     vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M4T3_5 
        = ((IData)((0x40002000U == (0x40002000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M4T3_5)))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4d) 
                                                | ((IData)(
                                                           (0x40002000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | ((IData)(
                                                           (0x40002000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla30pla13M5T1_3 
        = ((IData)((0x40002000U == (0x40002000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla30pla13M5T1_3))) 
                  & ((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                      << 0x19U) | (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                   >> 7U)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla30pla13M5T1_4 
        = ((IData)((0x40002000U == (0x40002000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla30pla13M5T1_4)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi) 
         | ((IData)((0x40002000U == (0x40002000U & 
                                     vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2u) 
                                                | ((IData)(
                                                           (0x40002000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz) 
         | ((IData)((0x40002000U == (0x40002000U & 
                                     vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M5T2_4 
        = ((IData)((0x40002000U == (0x40002000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla30pla13M5T2_4)))));
    vlSelf->z80_top_direct_n__DOT__setM1 = ((IData)(vlSelf->z80_top_direct_n__DOT__setM1) 
                                            | ((IData)(
                                                       (0x40002000U 
                                                        == 
                                                        (0x40002000U 
                                                         & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA) 
           | ((IData)((0x40000000U == (0x40002000U 
                                       & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
              & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                 & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M2T1_3 
        = ((IData)((0x40000000U == (0x40002000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M2T1_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | ((IData)(
                                                           (0x40000000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M2T2_4 
        = ((IData)((0x40000000U == (0x40002000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M2T2_4)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we_lo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we_lo) 
           | ((IData)((0x40000000U == (0x40002000U 
                                       & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
              & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                 & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M2T3_6 
        = ((IData)((0x40000000U == (0x40002000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M2T3_6))) 
              & (1U | (2U & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d) 
                                                | ((IData)(
                                                           (0x40000000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1d) 
                                                | ((IData)(
                                                           (0x40000000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M3T1_3 
        = ((IData)((0x40000000U == (0x40002000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M3T1_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | ((IData)(
                                                           (0x40000000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M3T2_4 
        = ((IData)((0x40000000U == (0x40002000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M3T2_4)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we_hi 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we_hi) 
           | ((IData)((0x40000000U == (0x40002000U 
                                       & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
              & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                 & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M3T3_6 
        = ((IData)((0x40000000U == (0x40002000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M3T3_6))) 
              & (2U | (1U & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d) 
                                                | ((IData)(
                                                           (0x40000000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1d) 
                                                | ((IData)(
                                                           (0x40000000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M4T1_3 
        = ((IData)((0x40000000U == (0x40002000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M4T1_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4d) 
                                                | ((IData)(
                                                           (0x40000000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | ((IData)(
                                                           (0x40000000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M4T2_4 
        = ((IData)((0x40000000U == (0x40002000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M4T2_4)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla30npla13M4T3_5 
        = ((IData)((0x40000000U == (0x40002000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla30npla13M4T3_5))) 
                  & ((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                      << 0x19U) | (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                   >> 7U)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla30npla13M4T3_6 
        = ((IData)((0x40000000U == (0x40002000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla30npla13M4T3_6)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d) 
                                                | ((IData)(
                                                           (0x40000000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1d) 
                                                | ((IData)(
                                                           (0x40000000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M5T1_3 
        = ((IData)((0x40000000U == (0x40002000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M5T1_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4d) 
                                                | ((IData)(
                                                           (0x40000000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | ((IData)(
                                                           (0x40000000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M5T2_4 
        = ((IData)((0x40000000U == (0x40002000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla30npla13M5T2_4)))));
    vlSelf->z80_top_direct_n__DOT__setM1 = ((IData)(vlSelf->z80_top_direct_n__DOT__setM1) 
                                            | ((IData)(
                                                       (0x40000000U 
                                                        == 
                                                        (0x40002000U 
                                                         & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla30npla13M5T3_4 
        = ((IData)((0x40000000U == (0x40002000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla30npla13M5T3_4))) 
                  & ((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                      << 0x19U) | (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                   >> 7U)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla30npla13M5T3_5 
        = ((IData)((0x40000000U == (0x40002000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla30npla13M5T3_5)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d) 
                                                | ((IData)(
                                                           (0x40000000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1d) 
                                                | ((IData)(
                                                           (0x40000000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0x1fU) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                             >> 1U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M2T1_3 
        = (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x1fU) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                          >> 1U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M2T1_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 1U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M2T2_4 
        = (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x1fU) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                          >> 1U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M2T2_4)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we_lo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we_lo) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0x1fU) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                             >> 1U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M2T3_6 
        = (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x1fU) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                          >> 1U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M2T3_6))) 
              & (1U | (2U & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 1U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1d) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 1U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M3T1_3 
        = (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x1fU) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                          >> 1U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M3T1_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 1U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M3T2_4 
        = (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x1fU) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                          >> 1U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M3T2_4)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M3T3_5 
        = (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x1fU) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                          >> 1U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M3T3_5)))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4d) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 1U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 1U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we_hi 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we_hi) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0x1fU) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                             >> 1U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M3T3_10 
        = (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x1fU) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                          >> 1U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M3T3_10))) 
              & (2U | (1U & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 1U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1d) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 1U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla31pla33M4T1_3 
        = (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x1fU) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                          >> 1U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla31pla33M4T1_3))) 
                  & ((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                      << 0x19U) | (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                   >> 7U)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla31pla33M4T1_4 
        = (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x1fU) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                          >> 1U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla31pla33M4T1_4)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M4T2_4 
        = (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x1fU) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                          >> 1U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M4T2_4)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M4T3_5 
        = (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x1fU) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                          >> 1U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M4T3_5)))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4d) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 1U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 1U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla31pla33M5T1_3 
        = (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x1fU) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                          >> 1U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla31pla33M5T1_3))) 
                  & ((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                      << 0x19U) | (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                   >> 7U)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla31pla33M5T1_4 
        = (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x1fU) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                          >> 1U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla31pla33M5T1_4)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2u) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 1U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M5T2_4 
        = (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x1fU) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                          >> 1U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla31pla33M5T2_4)))));
    vlSelf->z80_top_direct_n__DOT__setM1 = ((IData)(vlSelf->z80_top_direct_n__DOT__setM1) 
                                            | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                 >> 0x1fU) 
                                                & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                   >> 1U)) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0x1fU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                >> 1U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M2T1_3 
        = (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x1fU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                             >> 1U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M2T1_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (~ 
                                                       (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                        >> 1U))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M2T2_4 
        = (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x1fU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                             >> 1U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M2T2_4)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we_lo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we_lo) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0x1fU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                >> 1U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M2T3_6 
        = (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x1fU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                             >> 1U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M2T3_6))) 
              & (1U | (2U & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (~ 
                                                       (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                        >> 1U))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1d) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (~ 
                                                       (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                        >> 1U))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M3T1_3 
        = (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x1fU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                             >> 1U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M3T1_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (~ 
                                                       (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                        >> 1U))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M3T2_4 
        = (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x1fU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                             >> 1U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M3T2_4)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we_hi 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we_hi) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0x1fU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                >> 1U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M3T3_6 
        = (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x1fU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                             >> 1U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M3T3_6))) 
              & (2U | (1U & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (~ 
                                                       (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                        >> 1U))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1d) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (~ 
                                                       (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                        >> 1U))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M4T1_3 
        = (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x1fU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                             >> 1U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M4T1_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4d) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (~ 
                                                       (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                        >> 1U))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (~ 
                                                       (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                        >> 1U))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M4T2_4 
        = (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x1fU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                             >> 1U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M4T2_4)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla31npla33M4T3_5 
        = (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x1fU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                             >> 1U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla31npla33M4T3_5))) 
                  & ((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                      << 0x19U) | (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                   >> 7U)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla31npla33M4T3_6 
        = (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x1fU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                             >> 1U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla31npla33M4T3_6)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (~ 
                                                       (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                        >> 1U))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1d) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (~ 
                                                       (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                        >> 1U))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M5T1_3 
        = (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x1fU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                             >> 1U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M5T1_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4d) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (~ 
                                                       (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                        >> 1U))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (~ 
                                                       (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                        >> 1U))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M5T2_4 
        = (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x1fU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                             >> 1U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla31npla33M5T2_4)))));
    vlSelf->z80_top_direct_n__DOT__setM1 = ((IData)(vlSelf->z80_top_direct_n__DOT__setM1) 
                                            | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                 >> 0x1fU) 
                                                & (~ 
                                                   (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 1U))) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla31npla33M5T3_4 
        = (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x1fU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                             >> 1U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla31npla33M5T3_4))) 
                  & ((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                      << 0x19U) | (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                   >> 7U)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla31npla33M5T3_5 
        = (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x1fU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                             >> 1U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla31npla33M5T3_5)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (~ 
                                                       (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                        >> 1U))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1d) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (~ 
                                                       (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                        >> 1U))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla5M1T4_2 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla5M1T4_2)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla5M1T4_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla5M1T4_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4d) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 5U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 5U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla5M1T5_2 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla5M1T5_2)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla5M1T5_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla5M1T5_3)))));
    vlSelf->z80_top_direct_n__DOT__setM1 = ((IData)(vlSelf->z80_top_direct_n__DOT__setM1) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                >> 5U) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__T6))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA) 
           | ((IData)((0x810000U == (0x810000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
              & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                 & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla23pla16M1T5_4 
        = ((IData)((0x810000U == (0x810000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla23pla16M1T5_4)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla23pla16M1T5_5 
        = ((IData)((0x810000U == (0x810000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla23pla16M1T5_5)))));
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
}
