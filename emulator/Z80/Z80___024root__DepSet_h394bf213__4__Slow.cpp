// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Z80.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Z80___024root.h"

VL_ATTR_COLD void Z80___024root___settle__TOP__6(Z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Z80___024root___settle__TOP__6\n"); );
    // Init
    CData/*0:0*/ z80_top_direct_n__DOT__ctl_flags_hf_cpl;
    CData/*0:0*/ z80_top_direct_n__DOT__alu_shift_in;
    CData/*0:0*/ z80_top_direct_n__DOT__alu_shift_right;
    CData/*0:0*/ z80_top_direct_n__DOT__alu_shift_left;
    CData/*0:0*/ z80_top_direct_n__DOT__alu_core_cf_in;
    CData/*0:0*/ z80_top_direct_n__DOT__reg_sw_4d_hi;
    SData/*15:0*/ z80_top_direct_n__DOT____Vcelloutt__address_latch___abus__out;
    CData/*7:0*/ z80_top_direct_n__DOT__db_hi_as__en3;
    CData/*7:0*/ z80_top_direct_n__DOT__db_hi_ds__en4;
    SData/*15:0*/ z80_top_direct_n__DOT__abus__en7;
    CData/*7:0*/ z80_top_direct_n__DOT__db_down__en10;
    CData/*7:0*/ z80_top_direct_n__DOT__db_up__en11;
    CData/*7:0*/ z80_top_direct_n__DOT__D__en15;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__setIXIY;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla45M2T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla45M2T1_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla45M2T2_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla45M2T2_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla45M2T3_6;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla45M3T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla45M3T1_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla45M3T2_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla45M3T2_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla45M3T3_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla45M3T3_9;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla46M2T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla46M2T1_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla46M2T2_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla46M2T2_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla46M2T3_6;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla46M3T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla46M3T1_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla46M3T2_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla46M3T2_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla46M3T3_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla46M3T3_9;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M1T3_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla56M1T5_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla56M1T5_5;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M2T1_6;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla56M2T2_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla56M2T2_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla56M2T3_5;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla56M2T3_6;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M3T1_6;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla56M3T2_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla56M3T2_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M3T3_6;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M4T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M4T3_6;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M5T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M5T3_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M5T3_9;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla49M1T3_1;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla49M1T3_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla49M2T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla49M2T2_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla49M3T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla49M3T2_4;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla78M1T1_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla78M1T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla79M1T1_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla79M1T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla80M1T1_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla80M1T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla84M1T1_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla84M1T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla85M1T1_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla85M1T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla86M1T1_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla86M1T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla88M1T1_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla88M1T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_ixy_dT2_1;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_ixy_dT2_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_ixy_dT3_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_ixy_dT4_1;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_ixy_dT4_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_ixy_dT5_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_ixy_dT5_7;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_1M1T1_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_1M1T2_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_1M1T3_3;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_setM1_2;
    CData/*0:0*/ z80_top_direct_n__DOT__alu_control___DOT__SYNTHESIZED_WIRE_2;
    CData/*0:0*/ z80_top_direct_n__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_23;
    CData/*3:0*/ z80_top_direct_n__DOT__alu___DOT__alu_op2;
    CData/*3:0*/ z80_top_direct_n__DOT__alu___DOT__db_low__en;
    CData/*7:0*/ z80_top_direct_n__DOT__alu___DOT__db__out__en10;
    CData/*7:0*/ z80_top_direct_n__DOT__alu___DOT__db__out__en11;
    CData/*7:0*/ z80_top_direct_n__DOT__alu___DOT__db__out__en12;
    CData/*7:0*/ z80_top_direct_n__DOT__alu___DOT__db__out__en13;
    CData/*0:0*/ z80_top_direct_n__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_0;
    CData/*0:0*/ z80_top_direct_n__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_1;
    CData/*0:0*/ z80_top_direct_n__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_0__DOT__SYNTHESIZED_WIRE_10;
    CData/*0:0*/ z80_top_direct_n__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_1__DOT__SYNTHESIZED_WIRE_10;
    CData/*0:0*/ z80_top_direct_n__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_2__DOT__SYNTHESIZED_WIRE_10;
    CData/*0:0*/ z80_top_direct_n__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_3__DOT__SYNTHESIZED_WIRE_10;
    CData/*0:0*/ z80_top_direct_n__DOT__alu___DOT__b2v_input_shift__DOT__SYNTHESIZED_WIRE_32;
    CData/*0:0*/ z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_28;
    CData/*0:0*/ z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_30;
    CData/*0:0*/ z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_32;
    CData/*0:0*/ z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_34;
    CData/*0:0*/ z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_36;
    CData/*0:0*/ z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_38;
    CData/*0:0*/ z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_40;
    CData/*0:0*/ z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_42;
    CData/*0:0*/ z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_44;
    CData/*0:0*/ z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_46;
    CData/*0:0*/ z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_48;
    CData/*0:0*/ z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_50;
    CData/*0:0*/ z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_52;
    CData/*0:0*/ z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_54;
    CData/*0:0*/ z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_56;
    CData/*0:0*/ z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_58;
    CData/*0:0*/ z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_60;
    CData/*0:0*/ z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_62;
    CData/*0:0*/ z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_64;
    CData/*0:0*/ z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_66;
    CData/*0:0*/ z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_68;
    CData/*0:0*/ z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_70;
    CData/*0:0*/ z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_72;
    CData/*0:0*/ z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_74;
    CData/*0:0*/ z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_76;
    CData/*0:0*/ z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_78;
    CData/*0:0*/ z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_80;
    CData/*0:0*/ z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_82;
    CData/*7:0*/ z80_top_direct_n__DOT__reg_file___DOT__db__en0;
    CData/*7:0*/ z80_top_direct_n__DOT__reg_file___DOT__db__en1;
    CData/*7:0*/ z80_top_direct_n__DOT__reg_file___DOT__db__en2;
    CData/*7:0*/ z80_top_direct_n__DOT__reg_file___DOT__db__en3;
    CData/*7:0*/ z80_top_direct_n__DOT__reg_file___DOT__db__en4;
    CData/*7:0*/ z80_top_direct_n__DOT__reg_file___DOT__db__en5;
    CData/*7:0*/ z80_top_direct_n__DOT__reg_file___DOT__db__en6;
    CData/*7:0*/ z80_top_direct_n__DOT__reg_file___DOT__db__en7;
    CData/*7:0*/ z80_top_direct_n__DOT__reg_file___DOT__db__en8;
    CData/*7:0*/ z80_top_direct_n__DOT__reg_file___DOT__db__en9;
    CData/*7:0*/ z80_top_direct_n__DOT__reg_file___DOT__db__en10;
    CData/*7:0*/ z80_top_direct_n__DOT__reg_file___DOT__db__en11;
    CData/*7:0*/ z80_top_direct_n__DOT__reg_file___DOT__db__en12;
    CData/*7:0*/ z80_top_direct_n__DOT__reg_file___DOT__db__en13;
    CData/*7:0*/ z80_top_direct_n__DOT__reg_file___DOT__db__en14;
    CData/*7:0*/ z80_top_direct_n__DOT__reg_file___DOT__db__en15;
    CData/*7:0*/ z80_top_direct_n__DOT__reg_file___DOT__db__en16;
    CData/*7:0*/ z80_top_direct_n__DOT__reg_file___DOT__db__en17;
    CData/*7:0*/ z80_top_direct_n__DOT__reg_file___DOT__db__en18;
    CData/*7:0*/ z80_top_direct_n__DOT__reg_file___DOT__db__en19;
    CData/*7:0*/ z80_top_direct_n__DOT__reg_file___DOT__db__en20;
    CData/*7:0*/ z80_top_direct_n__DOT__reg_file___DOT__db__en21;
    CData/*7:0*/ z80_top_direct_n__DOT__reg_file___DOT__db__en22;
    CData/*7:0*/ z80_top_direct_n__DOT__reg_file___DOT__db__en23;
    CData/*7:0*/ z80_top_direct_n__DOT__reg_file___DOT__db__en24;
    CData/*7:0*/ z80_top_direct_n__DOT__reg_file___DOT__db__en25;
    CData/*7:0*/ z80_top_direct_n__DOT__reg_file___DOT__db__en26;
    CData/*7:0*/ z80_top_direct_n__DOT__reg_file___DOT__db__en27;
    CData/*7:0*/ z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__en;
    CData/*7:0*/ z80_top_direct_n__DOT__reg_file___DOT__db_hi_ds__out__en28;
    CData/*7:0*/ z80_top_direct_n__DOT__reg_file___DOT__db_hi_ds__out__en29;
    CData/*7:0*/ z80_top_direct_n__DOT__reg_file___DOT__db_hi_ds__out__en30;
    CData/*7:0*/ z80_top_direct_n__DOT__reg_file___DOT__db_hi_ds__out__en31;
    CData/*7:0*/ z80_top_direct_n__DOT__reg_file___DOT__db_hi_as__out__en34;
    CData/*7:0*/ z80_top_direct_n__DOT__reg_file___DOT__db_hi_as__out__en35;
    CData/*7:0*/ z80_top_direct_n__DOT__reg_file___DOT__db_hi_as__out__en36;
    CData/*7:0*/ z80_top_direct_n__DOT__reg_file___DOT__db_hi_as__out__en37;
    CData/*7:0*/ z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__en50;
    CData/*7:0*/ z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__en51;
    CData/*7:0*/ z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__en52;
    CData/*7:0*/ z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__en53;
    CData/*7:0*/ z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__en54;
    CData/*7:0*/ z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__en55;
    CData/*7:0*/ z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__en56;
    CData/*7:0*/ z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__en57;
    CData/*7:0*/ z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__en70;
    CData/*7:0*/ z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__en71;
    CData/*7:0*/ z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__en72;
    CData/*7:0*/ z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__en73;
    CData/*7:0*/ z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__en74;
    CData/*7:0*/ z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__en75;
    CData/*7:0*/ z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__en76;
    CData/*7:0*/ z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__en77;
    CData/*7:0*/ z80_top_direct_n__DOT__reg_file___DOT__db_lo_as__out__en80;
    CData/*7:0*/ z80_top_direct_n__DOT__reg_file___DOT__db_lo_as__out__en81;
    CData/*7:0*/ z80_top_direct_n__DOT__reg_file___DOT__db_lo_as__out__en82;
    CData/*7:0*/ z80_top_direct_n__DOT__reg_file___DOT__db_lo_as__out__en83;
    CData/*7:0*/ z80_top_direct_n__DOT__reg_file___DOT__db_lo_ds__out__en84;
    CData/*7:0*/ z80_top_direct_n__DOT__reg_file___DOT__db_lo_ds__out__en85;
    CData/*7:0*/ z80_top_direct_n__DOT__reg_file___DOT__db_lo_ds__out__en86;
    CData/*7:0*/ z80_top_direct_n__DOT__reg_file___DOT__db_lo_ds__out__en87;
    CData/*0:0*/ z80_top_direct_n__DOT__reg_control___DOT__SYNTHESIZED_WIRE_52;
    CData/*0:0*/ z80_top_direct_n__DOT__reg_control___DOT__SYNTHESIZED_WIRE_54;
    CData/*0:0*/ z80_top_direct_n__DOT__reg_control___DOT__SYNTHESIZED_WIRE_55;
    CData/*0:0*/ z80_top_direct_n__DOT__reg_control___DOT__SYNTHESIZED_WIRE_56;
    CData/*0:0*/ z80_top_direct_n__DOT__reg_control___DOT__SYNTHESIZED_WIRE_58;
    CData/*0:0*/ z80_top_direct_n__DOT__reg_control___DOT__SYNTHESIZED_WIRE_59;
    CData/*0:0*/ z80_top_direct_n__DOT__reg_control___DOT__SYNTHESIZED_WIRE_61;
    CData/*0:0*/ z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_40;
    CData/*0:0*/ z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_41;
    CData/*0:0*/ z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_42;
    CData/*0:0*/ z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_43;
    CData/*0:0*/ z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_44;
    CData/*0:0*/ z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_45;
    CData/*0:0*/ z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_46;
    CData/*0:0*/ z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_47;
    CData/*0:0*/ z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_48;
    CData/*0:0*/ z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_49;
    CData/*0:0*/ z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_50;
    CData/*0:0*/ z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_51;
    CData/*0:0*/ z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_52;
    CData/*0:0*/ z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_53;
    CData/*0:0*/ z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_22;
    CData/*0:0*/ z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_25;
    CData/*0:0*/ z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_31;
    CData/*0:0*/ z80_top_direct_n__DOT__bus_control___DOT__SYNTHESIZED_WIRE_0;
    CData/*7:0*/ z80_top_direct_n__DOT__sw2___DOT__db_down__out__en0;
    CData/*7:0*/ z80_top_direct_n__DOT__sw2___DOT__db_down__out__en1;
    CData/*7:0*/ z80_top_direct_n__DOT__sw2___DOT__db_down__out__en2;
    CData/*7:0*/ z80_top_direct_n__DOT__sw2___DOT__db_down__out__en3;
    CData/*7:0*/ z80_top_direct_n__DOT__sw2___DOT__db_up__out__en4;
    CData/*7:0*/ z80_top_direct_n__DOT__sw2___DOT__db_up__out__en5;
    CData/*7:0*/ z80_top_direct_n__DOT__sw2___DOT__db_up__out__en6;
    CData/*7:0*/ z80_top_direct_n__DOT__sw2___DOT__db_up__out__en7;
    CData/*2:0*/ z80_top_direct_n__DOT__sw1___DOT__SYNTHESIZED_WIRE_2;
    CData/*7:0*/ z80_top_direct_n__DOT__sw1___DOT__db_up__out__en0;
    CData/*7:0*/ z80_top_direct_n__DOT__sw1___DOT__db_up__out__en1;
    CData/*7:0*/ z80_top_direct_n__DOT__sw1___DOT__db_up__out__en2;
    CData/*7:0*/ z80_top_direct_n__DOT__sw1___DOT__db_up__out__en3;
    CData/*7:0*/ z80_top_direct_n__DOT__sw1___DOT__db_down__out__en7;
    CData/*7:0*/ z80_top_direct_n__DOT__sw1___DOT__db_down__out__en8;
    // Body
    vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))) 
              & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_bs_oe))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__setM1 = ((IData)(vlSelf->z80_top_direct_n__DOT__setM1) 
                                            | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 0xdU) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff))) 
                                               & (~ (IData)(vlSelf->z80_top_direct_n__DOT__flags_cond_true))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla45M2T1_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
            >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla45M2T1_3)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla45M2T1_4 
        = ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
            >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla45M2T1_4)))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4d) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0xdU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0xdU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla45M2T2_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
            >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla45M2T2_3)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla45M2T2_4 
        = ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
            >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla45M2T2_4)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we_lo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we_lo) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla45M2T3_6 
        = ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
            >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla45M2T3_6))) 
              & (1U | (2U & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0xdU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1d) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0xdU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla45M3T1_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
            >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla45M3T1_3)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla45M3T1_4 
        = ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
            >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla45M3T1_4)))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4d) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0xdU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0xdU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla45M3T2_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
            >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla45M3T2_3)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla45M3T2_4 
        = ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
            >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla45M3T2_4)))));
    vlSelf->z80_top_direct_n__DOT__setM1 = ((IData)(vlSelf->z80_top_direct_n__DOT__setM1) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                >> 0xdU) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla45M3T3_4 
        = ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
            >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla45M3T3_4)))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4d) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0xdU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0xdU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we_hi 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we_hi) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla45M3T3_9 
        = ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
            >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla45M3T3_9))) 
              & (2U | (1U & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0xdU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1d) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0xdU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0xeU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla46M2T1_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
            >> 0xeU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla46M2T1_3)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla46M2T1_4 
        = ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
            >> 0xeU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla46M2T1_4)))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4d) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0xeU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0xeU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla46M2T2_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
            >> 0xeU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla46M2T2_3)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla46M2T2_4 
        = ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
            >> 0xeU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla46M2T2_4)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we_lo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we_lo) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0xeU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0xeU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla46M2T3_6 
        = ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
            >> 0xeU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla46M2T3_6))) 
              & (1U | (2U & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0xeU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0xeU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1d) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0xeU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0xeU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla46M3T1_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
            >> 0xeU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla46M3T1_3)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla46M3T1_4 
        = ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
            >> 0xeU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla46M3T1_4)))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4d) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0xeU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0xeU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla46M3T2_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
            >> 0xeU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla46M3T2_3)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla46M3T2_4 
        = ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
            >> 0xeU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla46M3T2_4)))));
    vlSelf->z80_top_direct_n__DOT__setM1 = ((IData)(vlSelf->z80_top_direct_n__DOT__setM1) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                >> 0xeU) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0xeU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla46M3T3_4 
        = ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
            >> 0xeU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla46M3T3_4)))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4d) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0xeU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0xeU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we_hi 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we_hi) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0xeU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0xeU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla46M3T3_9 
        = ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
            >> 0xeU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla46M3T3_9))) 
              & (2U | (1U & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0xeU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0xeU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1d) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0xeU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0xeU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M1T3_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
            >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M1T3_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_oe = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_oe) 
                                                 | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 0x18U) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1d) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 0x18U) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))) 
                                                   & (~ (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_ff_oe = 
        (((vlSelf->z80_top_direct_n__DOT__pla[1U] >> 0x18U) 
          & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))) 
         & ((IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_intr_ALTERA_SYNTHESIZED) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__im1)));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla56M1T5_4 
        = ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
            >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla56M1T5_4)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla56M1T5_5 
        = ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
            >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla56M1T5_5)))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4d) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1d) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff))) 
              & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_bs_oe))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M2T1_6 
        = ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
            >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
           | (2U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M2T1_6)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2u) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla56M2T2_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
            >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla56M2T2_3)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla56M2T2_4 
        = ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
            >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla56M2T2_4)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla56M2T3_5 
        = ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
            >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla56M2T3_5)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla56M2T3_6 
        = ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
            >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla56M2T3_6)))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4d) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M3T1_6 
        = ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
            >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
           | (1U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M3T1_6)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla56M3T2_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
            >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla56M3T2_3)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla56M3T2_4 
        = ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
            >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla56M3T2_4)))));
    vlSelf->z80_top_direct_n__DOT__setM1 = ((IData)(vlSelf->z80_top_direct_n__DOT__setM1) 
                                            | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 0x18U) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))) 
                                               & (~ 
                                                  ((IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_intr_ALTERA_SYNTHESIZED) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__im2)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M3T3_6 
        = ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
            >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M3T3_6)))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4d) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M4T1_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
            >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
           | (2U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M4T1_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4d) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2u) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_oe = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_oe) 
                                                 | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 0x18U) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
              & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_bs_oe))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we_lo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we_lo) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M4T3_6 
        = ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
            >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M4T3_6))) 
              & (1U | (2U & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1d) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M5T1_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
            >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
           | (2U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M5T1_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4d) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2u) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_oe = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_oe) 
                                                 | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 0x18U) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__setM1 = ((IData)(vlSelf->z80_top_direct_n__DOT__setM1) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                >> 0x18U) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M5T3_4 
        = ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
            >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M5T3_4)))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4d) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we_hi 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we_hi) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M5T3_9 
        = ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
            >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla56M5T3_9))) 
              & (2U | (1U & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1d) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla49M1T3_1 
        = ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
            >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla49M1T3_1)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla49M1T3_2 
        = ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
            >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla49M1T3_2)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))) 
              & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_bs_oe))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla49M2T1_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
            >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla49M2T1_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x11U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla49M2T2_4 
        = ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
            >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla49M2T2_4)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla49M3T1_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
            >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla49M3T1_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x11U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla49M3T2_4 
        = ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
            >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_pla49M3T2_4)))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_bs_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_bs_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_state_ixiy_we 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 3U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    z80_top_direct_n__DOT__execute___DOT__setIXIY = 
        ((vlSelf->z80_top_direct_n__DOT__pla[0U] >> 3U) 
         & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 3U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__setM1 = ((IData)(vlSelf->z80_top_direct_n__DOT__setM1) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                >> 3U) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__setM1 = ((IData)(vlSelf->z80_top_direct_n__DOT__setM1) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                >> 0xcU) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x13U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__setM1 = ((IData)(vlSelf->z80_top_direct_n__DOT__setM1) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                >> 0x13U) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_neg 
        = (1U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_neg) 
                 | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                    >> 0xcU)));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0xcU) & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low)));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf 
        = (1U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf) 
                 | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                     >> 0xcU) & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low)))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_neg 
        = (1U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_neg) 
                 | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                    >> 0xeU)));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0xeU) & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low)));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf 
        = (1U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf) 
                 | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                     >> 0xeU) & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla78M1T1_2 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 0xeU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla78M1T1_2)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla78M1T1_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 0xeU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla78M1T1_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0xeU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0xeU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0xeU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_neg 
        = (1U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_neg) 
                 | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                    >> 0xfU)));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0xfU) & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low)));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf 
        = (1U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf) 
                 | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                     >> 0xfU) & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla79M1T1_2 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 0xfU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla79M1T1_2)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla79M1T1_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 0xfU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla79M1T1_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0xfU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0xfU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0xfU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf 
        = (1U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf) 
                 | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                     >> 0x10U) & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla80M1T1_2 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 0x10U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla80M1T1_2)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla80M1T1_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 0x10U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla80M1T1_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x10U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x10U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x10U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x14U) & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low)));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x14U) & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low)));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf 
        = (1U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf) 
                 | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                     >> 0x14U) & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla84M1T1_2 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 0x14U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla84M1T1_2)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla84M1T1_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 0x14U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla84M1T1_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x14U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x14U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x14U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set 
        = (1U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set) 
                 | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                    >> 0x15U)));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla85M1T1_2 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 0x15U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla85M1T1_2)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla85M1T1_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 0x15U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla85M1T1_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x15U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x15U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x15U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x15U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x15U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set 
        = (1U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set) 
                 | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                    >> 0x16U)));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl 
        = (1U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl) 
                 | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                    >> 0x16U)));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla86M1T1_2 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 0x16U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla86M1T1_2)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla86M1T1_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 0x16U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla86M1T1_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x16U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x16U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x16U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x16U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x16U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set 
        = (1U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set) 
                 | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                    >> 0x18U)));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl 
        = (1U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl) 
                 | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                    >> 0x18U)));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla88M1T1_2 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
               | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_pla88M1T1_2)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla88M1T1_3 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_pla88M1T1_3)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d) 
                                                | ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1d) 
                                                | ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe) 
         | ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_alu) 
         | ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe) 
           | (((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)) 
              & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_bs_oe))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus) 
           | ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we) 
           | ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_ixy_dT2_1 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_ixy_dT2_1)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_ixy_dT2_2 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | (1U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_ixy_dT2_2)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo) 
         | ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d) 
                                                | ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_alu) 
         | ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe) 
           | (((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)) 
              & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_bs_oe))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus) 
           | ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low) 
         | ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set) 
           | (((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low)));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl) 
           | (((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low)));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf) 
           | (((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)) 
              & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we) 
           | ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we_lo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we_lo) 
           | ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz) 
         | ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_ixy_dT3_3 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_ixy_dT3_3))) 
              & (1U | (2U & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo) 
         | ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2u = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2u) 
                                                | ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_alu) 
         | ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_oe = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_oe) 
                                                 | ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe) 
         | ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_high) 
           | ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf) 
           | (((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)) 
              & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf2_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf2_we) 
           | ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_ixy_dT4_1 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel) 
         | (2U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_sel_ixy_dT4_1)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_ixy_dT4_2 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
           | (2U & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_gp_hilo_ixy_dT4_2)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi) 
         | ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo) 
         | ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_alu) 
         | ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe) 
           | (((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)) 
              & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_bs_oe))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_zero 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_zero) 
           | ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus) 
           | ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low) 
         | ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf) 
           | (((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)) 
              & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we) 
           | ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_use_cf2 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_use_cf2) 
           | ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_neg) 
           | (((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__DFFE_inst_latch_sf)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz) 
         | ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff)));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_ixy_dT5_2 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_ixy_dT5_2)))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4d = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4d) 
                                                | ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we_hi 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we_hi) 
           | ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz) 
         | ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff)));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_ixy_dT5_7 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
           | ((- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_ixy_dT5_7))) 
              & (2U | (1U & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo)))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi) 
         | ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_alu) 
         | ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_oe = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_oe) 
                                                 | ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe) 
         | ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_high 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_high) 
           | ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf) 
           | (((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff)) 
              & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) 
           | ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_neg 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_neg) 
           | (((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff)) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__DFFE_inst_latch_sf)));
    vlSelf->z80_top_direct_n__DOT__ctl_state_ixiy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_state_ixiy_we) 
           | ((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_state_ixiy_clr 
        = (((IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff)) 
           & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__setIXIY)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc) 
         | ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_1M1T1_3 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_1M1T1_3)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_1M1T2_2 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_1M1T2_2)))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe) 
         | ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_state_ixiy_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_state_ixiy_we) 
           | ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_state_ixiy_clr 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_state_ixiy_clr) 
           | (((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)) 
              & (~ (IData)(z80_top_direct_n__DOT__execute___DOT__setIXIY))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_zero_oe 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_zero_oe) 
           | (((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__in_halt)));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_ff_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_ff_oe) 
         | (((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)) 
            & (((IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_intr_ALTERA_SYNTHESIZED) 
                & ((IData)(vlSelf->z80_top_direct_n__DOT__im1) 
                   | (IData)(vlSelf->z80_top_direct_n__DOT__im2))) 
               | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_1M1T3_3 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_1M1T3_3)))));
    vlSelf->z80_top_direct_n__DOT__setM1 = ((IData)(vlSelf->z80_top_direct_n__DOT__setM1) 
                                            | ((~ (IData)(vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA)) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc) 
         | (IData)(vlSelf->z80_top_direct_n__DOT__setM1));
    z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_setM1_2 
        = vlSelf->z80_top_direct_n__DOT__setM1;
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo 
        = (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                 | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_reg_sys_hilo_setM1_2)))));
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_al_we) 
                                                | (IData)(vlSelf->z80_top_direct_n__DOT__setM1));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe) 
         & (~ ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_zero_oe) 
               | (IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_ff_oe))));
    vlSelf->z80_top_direct_n__DOT__decode_state___DOT__SYNTHESIZED_WIRE_4 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_state_tbl_we) 
           & (~ (IData)(vlSelf->z80_top_direct_n__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_9)));
    vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__sel 
        = ((0xffffeU & ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                         >> 0xcU) & (((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)) 
                                     << 1U))) | (IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf2_sel_shift));
    vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__db__out__out0 
        = ((0x7fU & (IData)(vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__db__out__out0)) 
           | (((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_oe) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__DFFE_inst_latch_sf)) 
              << 7U));
    vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__db__out__out2 
        = ((0xf1U & (IData)(vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__db__out__out2)) 
           | ((((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_oe) 
                & (IData)(vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__flags_xf)) 
               << 3U) | ((((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_oe) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__DFFE_inst_latch_pf)) 
                          << 2U) | (((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_oe) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__DFFE_inst_latch_nf)) 
                                    << 1U))));
    vlSelf->z80_top_direct_n__DOT__alu_control___DOT__out 
        = ((0xf9U & (IData)(vlSelf->z80_top_direct_n__DOT__alu_control___DOT__out)) 
           | (6U & ((- (IData)((((IData)(vlSelf->z80_top_direct_n__DOT__flags_hf2) 
                                 | (IData)(vlSelf->z80_top_direct_n__DOT__alu_low_gt_9)) 
                                | (IData)(vlSelf->z80_top_direct_n__DOT__ctl_66_oe)))) 
                    << 1U)));
    z80_top_direct_n__DOT__alu_control___DOT__SYNTHESIZED_WIRE_2 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_66_oe) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__alu_control___DOT__SYNTHESIZED_WIRE_21 
        = (1U & ((((IData)(vlSelf->z80_top_direct_n__DOT__ctl_66_oe) 
                   | ((IData)((0xaU == (0xaU & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__op1_high)))) 
                      | (IData)((0xcU == (0xcU & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__op1_high)))))) 
                  | (IData)(vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__DFFE_inst_latch_cf)) 
                 | ((IData)(vlSelf->z80_top_direct_n__DOT__alu_low_gt_9) 
                    & (IData)((9U == (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__op1_high))))));
    z80_top_direct_n__DOT__alu_shift_right = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_shift_en) 
                                              & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                 >> 6U));
    z80_top_direct_n__DOT__alu_shift_left = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_shift_en) 
                                             & (~ (
                                                   vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                   >> 6U)));
    vlSelf->z80_top_direct_n__DOT__prefix = ((0x40U 
                                              & ((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                 << 6U)) 
                                             | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
                                                 << 5U) 
                                                | ((0x10U 
                                                    & ((~ (IData)(vlSelf->z80_top_direct_n__DOT__in_halt)) 
                                                       << 4U)) 
                                                   | (((IData)(vlSelf->z80_top_direct_n__DOT__ctl_state_alu) 
                                                       << 3U) 
                                                      | ((4U 
                                                          & ((~ 
                                                              ((IData)(vlSelf->z80_top_direct_n__DOT__decode_state___DOT__DFFE_instED) 
                                                               | (IData)(vlSelf->z80_top_direct_n__DOT__decode_state___DOT__DFFE_instCB))) 
                                                             << 2U)) 
                                                         | (((IData)(vlSelf->z80_top_direct_n__DOT__decode_state___DOT__DFFE_instCB) 
                                                             << 1U) 
                                                            | (IData)(vlSelf->z80_top_direct_n__DOT__decode_state___DOT__DFFE_instED)))))));
    vlSelf->z80_top_direct_n__DOT__bus_db_pin_re = 
        ((((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff) 
           & (IData)(vlSelf->z80_top_direct_n__DOT__fMRead)) 
          | ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff) 
             & (IData)(vlSelf->z80_top_direct_n__DOT__fIORead))) 
         | ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff)));
    vlSelf->nWR = ((IData)(vlSelf->z80_top_direct_n__DOT__pin_control_oe) 
                   & (~ (((IData)(vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__iorq) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__fIOWrite)) 
                         | (IData)(vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__mwr_wr))));
    vlSelf->z80_top_direct_n__DOT__bus_db_pin_oe = 
        (((((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff) 
            | (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)) 
           | (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)) 
          & (IData)(vlSelf->z80_top_direct_n__DOT__fIOWrite)) 
         | ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff) 
               | (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__alu___DOT__db_low__out2 
        = ((3U & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__db_low__out2)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_oe))) 
                       << 2U) & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__op2_low))));
    vlSelf->z80_top_direct_n__DOT__alu___DOT__db_low__out3 
        = ((0xcU & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__db_low__out3)) 
           | (3U & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_oe))) 
                    & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__op2_low))));
    vlSelf->z80_top_direct_n__DOT__alu___DOT__db_high__out16 
        = ((3U & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__db_high__out16)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_oe))) 
                       << 2U) & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__op2_high))));
    vlSelf->z80_top_direct_n__DOT__alu___DOT__db_high__out17 
        = ((0xcU & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__db_high__out17)) 
           | (3U & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_oe))) 
                    & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__op2_high))));
    vlSelf->z80_top_direct_n__DOT__alu___DOT__db_low__out6 
        = ((3U & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__db_low__out6)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_oe))) 
                       << 2U) & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__op1_low))));
    vlSelf->z80_top_direct_n__DOT__alu___DOT__db_low__out7 
        = ((0xcU & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__db_low__out7)) 
           | (3U & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_oe))) 
                    & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__op1_low))));
    vlSelf->z80_top_direct_n__DOT__alu___DOT__db_high__out20 
        = ((3U & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__db_high__out20)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_oe))) 
                       << 2U) & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__op1_high))));
    vlSelf->z80_top_direct_n__DOT__alu___DOT__db_high__out21 
        = ((0xcU & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__db_high__out21)) 
           | (3U & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_oe))) 
                    & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__op1_high))));
    z80_top_direct_n__DOT__abus__en7 = (0xffffU & (
                                                   (((((((0xc000U 
                                                          & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe))) 
                                                             << 0xeU)) 
                                                         | (0x3000U 
                                                            & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe))) 
                                                               << 0xcU))) 
                                                        | (0xc00U 
                                                           & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe))) 
                                                              << 0xaU))) 
                                                       | (0x300U 
                                                          & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe))) 
                                                             << 8U))) 
                                                      | (0xc0U 
                                                         & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe))) 
                                                            << 6U))) 
                                                     | (0x30U 
                                                        & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe))) 
                                                           << 4U))) 
                                                    | (0xcU 
                                                       & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe))) 
                                                          << 2U))) 
                                                   | (3U 
                                                      & (- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe))))));
    vlSelf->z80_top_direct_n__DOT__sw1___DOT__db_up__out__out0 
        = ((0x3fU & (IData)(vlSelf->z80_top_direct_n__DOT__sw1___DOT__db_up__out__out0)) 
           | (0xc0U & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1u))) 
                        << 6U) & (IData)(vlSelf->z80_top_direct_n__DOT__db1))));
    vlSelf->z80_top_direct_n__DOT__sw1___DOT__db_up__out__out1 
        = ((0xcfU & (IData)(vlSelf->z80_top_direct_n__DOT__sw1___DOT__db_up__out__out1)) 
           | (0x30U & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1u))) 
                        << 4U) & (IData)(vlSelf->z80_top_direct_n__DOT__db1))));
    vlSelf->z80_top_direct_n__DOT__sw1___DOT__db_up__out__out2 
        = ((0xf3U & (IData)(vlSelf->z80_top_direct_n__DOT__sw1___DOT__db_up__out__out2)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1u))) 
                       << 2U) & (IData)(vlSelf->z80_top_direct_n__DOT__db1))));
    vlSelf->z80_top_direct_n__DOT__sw1___DOT__db_up__out__out3 
        = ((0xfcU & (IData)(vlSelf->z80_top_direct_n__DOT__sw1___DOT__db_up__out__out3)) 
           | (3U & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1u))) 
                    & (IData)(vlSelf->z80_top_direct_n__DOT__db1))));
    z80_top_direct_n__DOT__sw1___DOT__db_up__out__en0 
        = (0xc0U & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1u))) 
                     << 6U) & (IData)(vlSelf->z80_top_direct_n__DOT__db_down__en12)));
    z80_top_direct_n__DOT__sw1___DOT__db_up__out__en1 
        = (0x30U & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1u))) 
                     << 4U) & (IData)(vlSelf->z80_top_direct_n__DOT__db_down__en12)));
    z80_top_direct_n__DOT__sw1___DOT__db_up__out__en2 
        = (0xcU & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1u))) 
                    << 2U) & (IData)(vlSelf->z80_top_direct_n__DOT__db_down__en12)));
    z80_top_direct_n__DOT__sw1___DOT__db_up__out__en3 
        = (3U & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1u))) 
                 & (IData)(vlSelf->z80_top_direct_n__DOT__db_down__en12)));
    z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__en50 
        = (0xc0U & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u))) 
                     << 6U) & (IData)(vlSelf->z80_top_direct_n__DOT__db_lo_as__en5)));
    z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__en51 
        = (0x30U & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u))) 
                     << 4U) & (IData)(vlSelf->z80_top_direct_n__DOT__db_lo_as__en5)));
    z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__en52 
        = (0xcU & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u))) 
                    << 2U) & (IData)(vlSelf->z80_top_direct_n__DOT__db_lo_as__en5)));
    z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__en53 
        = (3U & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u))) 
                 & (IData)(vlSelf->z80_top_direct_n__DOT__db_lo_as__en5)));
    z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_53 
        = (1U & (((IData)(vlSelf->z80_top_direct_n__DOT__address_latch___DOT__Q) 
                  >> 0xdU) ^ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_dec)));
    z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_52 
        = (1U & (((IData)(vlSelf->z80_top_direct_n__DOT__address_latch___DOT__Q) 
                  >> 0xcU) ^ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_dec)));
    z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_50 
        = (1U & (((IData)(vlSelf->z80_top_direct_n__DOT__address_latch___DOT__Q) 
                  >> 0xaU) ^ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_dec)));
    z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_49 
        = (1U & (((IData)(vlSelf->z80_top_direct_n__DOT__address_latch___DOT__Q) 
                  >> 9U) ^ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_dec)));
    z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_46 
        = (1U & (((IData)(vlSelf->z80_top_direct_n__DOT__address_latch___DOT__Q) 
                  >> 8U) ^ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_dec)));
    z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_48 
        = (1U & (((IData)(vlSelf->z80_top_direct_n__DOT__address_latch___DOT__Q) 
                  >> 7U) ^ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_dec)));
    z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_43 
        = (1U & (((IData)(vlSelf->z80_top_direct_n__DOT__address_latch___DOT__Q) 
                  >> 5U) ^ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_dec)));
    z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_44 
        = (1U & (((IData)(vlSelf->z80_top_direct_n__DOT__address_latch___DOT__Q) 
                  >> 4U) ^ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_dec)));
    z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_45 
        = (1U & (((IData)(vlSelf->z80_top_direct_n__DOT__address_latch___DOT__Q) 
                  >> 3U) ^ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_dec)));
    z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_42 
        = (1U & (((IData)(vlSelf->z80_top_direct_n__DOT__address_latch___DOT__Q) 
                  >> 2U) ^ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_dec)));
    z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_40 
        = (1U & (((IData)(vlSelf->z80_top_direct_n__DOT__address_latch___DOT__Q) 
                  >> 1U) ^ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_dec)));
    z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_41 
        = (1U & ((IData)(vlSelf->z80_top_direct_n__DOT__address_latch___DOT__Q) 
                 ^ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_dec)));
    vlSelf->nMREQ = (((IData)(vlSelf->z80_top_direct_n__DOT__pin_control_oe) 
                      & (~ ((~ (IData)(vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__DFFE_mreq_ff2)) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__SYNTHESIZED_WIRE_17)))) 
                     & (~ (((IData)(vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__m1_mreq) 
                            | (IData)(vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__mrd_mreq)) 
                           | ((IData)(vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__mwr_wr) 
                              | (IData)(vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__wait_mwr)))));
    vlSelf->nRD = ((IData)(vlSelf->z80_top_direct_n__DOT__pin_control_oe) 
                   & (~ (((IData)(vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__m1_mreq) 
                          | (IData)(vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__mrd_mreq)) 
                         | ((IData)(vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__iorq) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__fIORead)))));
    vlSelf->z80_top_direct_n__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_5 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__clk_delay___DOT__hold_clk_busrq_ALTERA_SYNTHESIZED) 
           | (IData)(vlSelf->z80_top_direct_n__DOT__setM1));
    vlSelf->z80_top_direct_n__DOT__interrupts___DOT__test1 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__setM1) 
           & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_no_ints)));
    vlSelf->z80_top_direct_n__DOT__sequencer___DOT__ena_M 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
           | (IData)(vlSelf->z80_top_direct_n__DOT__setM1));
    vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_37 
        = ((((~ (IData)(((0U != (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__db_low)) 
                         | (0U != (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__db_high))))) 
             & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_alu)) 
            | (((IData)(vlSelf->z80_top_direct_n__DOT__db1) 
                >> 6U) & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_bus))) 
           & ((~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_zero_16bit)) 
              | (IData)(vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_39)));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__db_lo_ds__out__out84 
        = ((0x3fU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__db_lo_ds__out__out84)) 
           | (0xc0U & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo))) 
                        << 6U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__db_lo_ds__out__out85 
        = ((0xcfU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__db_lo_ds__out__out85)) 
           | (0x30U & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo))) 
                        << 4U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__db_lo_ds__out__out86 
        = ((0xf3U & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__db_lo_ds__out__out86)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo))) 
                       << 2U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__db_lo_ds__out__out87 
        = ((0xfcU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__db_lo_ds__out__out87)) 
           | (3U & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo))) 
                    & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0))));
    vlSelf->z80_top_direct_n__DOT__data_pins___DOT__db__out__out4 
        = ((0x3fU & (IData)(vlSelf->z80_top_direct_n__DOT__data_pins___DOT__db__out__out4)) 
           | (0xc0U & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe))) 
                        << 6U) & (IData)(vlSelf->z80_top_direct_n__DOT__data_pins___DOT__dout))));
    vlSelf->z80_top_direct_n__DOT__data_pins___DOT__db__out__out5 
        = ((0xcfU & (IData)(vlSelf->z80_top_direct_n__DOT__data_pins___DOT__db__out__out5)) 
           | (0x30U & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe))) 
                        << 4U) & (IData)(vlSelf->z80_top_direct_n__DOT__data_pins___DOT__dout))));
    vlSelf->z80_top_direct_n__DOT__data_pins___DOT__db__out__out6 
        = ((0xf3U & (IData)(vlSelf->z80_top_direct_n__DOT__data_pins___DOT__db__out__out6)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe))) 
                       << 2U) & (IData)(vlSelf->z80_top_direct_n__DOT__data_pins___DOT__dout))));
    vlSelf->z80_top_direct_n__DOT__data_pins___DOT__db__out__out7 
        = ((0xfcU & (IData)(vlSelf->z80_top_direct_n__DOT__data_pins___DOT__db__out__out7)) 
           | (3U & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe))) 
                    & (IData)(vlSelf->z80_top_direct_n__DOT__data_pins___DOT__dout))));
    vlSelf->z80_top_direct_n__DOT__alu___DOT__db__out__out10 
        = ((0xf3U & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__db__out__out10)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_oe))) 
                       << 2U) & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__db_low))));
    vlSelf->z80_top_direct_n__DOT__alu___DOT__db__out__out11 
        = ((0xfcU & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__db__out__out11)) 
           | (3U & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_oe))) 
                    & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__db_low))));
    vlSelf->z80_top_direct_n__DOT__alu___DOT__db__out__out12 
        = ((0x3fU & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__db__out__out12)) 
           | (0xc0U & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_oe))) 
                        << 6U) & ((IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__db_high) 
                                  << 4U))));
    vlSelf->z80_top_direct_n__DOT__alu___DOT__db__out__out13 
        = ((0xcfU & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__db__out__out13)) 
           | (0x30U & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_oe))) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__db_high)) 
                       << 4U)));
    vlSelf->z80_top_direct_n__DOT__alu___DOT__db_low__out4 
        = ((3U & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__db_low__out4)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe))) 
                       << 2U) & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__result_lo))));
    vlSelf->z80_top_direct_n__DOT__alu___DOT__db_low__out5 
        = ((0xcU & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__db_low__out5)) 
           | (3U & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe))) 
                    & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__result_lo))));
    z80_top_direct_n__DOT__alu___DOT__db_low__en = 
        (0xfU & ((((((((((0xcU & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_bs_oe))) 
                                  << 2U)) | (3U & (- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_bs_oe))))) 
                        | (0xcU & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_oe))) 
                                   << 2U))) | (3U & 
                                               (- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_oe))))) 
                      | (0xcU & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe))) 
                                 << 2U))) | (3U & (- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe))))) 
                    | (0xcU & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_oe))) 
                               << 2U))) | (3U & (- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_oe))))) 
                  | (0xcU & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe))) 
                             << 2U))) | (3U & (- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe))))));
    z80_top_direct_n__DOT__bus_control___DOT__SYNTHESIZED_WIRE_0 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_ff_oe) 
           | (IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_zero_oe));
    z80_top_direct_n__DOT__alu___DOT__alu_op2 = (0xfU 
                                                 & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_high))) 
                                                     & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_neg))) 
                                                         & (~ (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__op2_high))) 
                                                        | ((IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__op2_high) 
                                                           & (- (IData)(
                                                                        (1U 
                                                                         & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_neg)))))))) 
                                                    | ((((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_neg))) 
                                                         & (~ (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__op2_low))) 
                                                        | ((IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__op2_low) 
                                                           & (- (IData)(
                                                                        (1U 
                                                                         & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_neg))))))) 
                                                       & (- (IData)(
                                                                    (1U 
                                                                     & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_high))))))));
    vlSelf->z80_top_direct_n__DOT__alu___DOT__alu_op1 
        = (((- (IData)((1U & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low))))) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__op1_high)) 
           | ((IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__op1_low) 
              & (- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low)))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__db_lo_as__out__out80 
        = ((0x3fU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__db_lo_as__out__out80)) 
           | (0xc0U & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4d))) 
                        << 6U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__db_lo_as__out__out81 
        = ((0xcfU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__db_lo_as__out__out81)) 
           | (0x30U & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4d))) 
                        << 4U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__db_lo_as__out__out82 
        = ((0xf3U & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__db_lo_as__out__out82)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4d))) 
                       << 2U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__db_lo_as__out__out83 
        = ((0xfcU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__db_lo_as__out__out83)) 
           | (3U & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4d))) 
                    & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0))));
    vlSelf->z80_top_direct_n__DOT__sw2___DOT__db_down__out__out0 
        = ((0x3fU & (IData)(vlSelf->z80_top_direct_n__DOT__sw2___DOT__db_down__out__out0)) 
           | (0xc0U & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d))) 
                        << 6U) & (IData)(vlSelf->z80_top_direct_n__DOT__db1))));
    vlSelf->z80_top_direct_n__DOT__sw2___DOT__db_down__out__out1 
        = ((0xcfU & (IData)(vlSelf->z80_top_direct_n__DOT__sw2___DOT__db_down__out__out1)) 
           | (0x30U & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d))) 
                        << 4U) & (IData)(vlSelf->z80_top_direct_n__DOT__db1))));
    vlSelf->z80_top_direct_n__DOT__sw2___DOT__db_down__out__out2 
        = ((0xf3U & (IData)(vlSelf->z80_top_direct_n__DOT__sw2___DOT__db_down__out__out2)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d))) 
                       << 2U) & (IData)(vlSelf->z80_top_direct_n__DOT__db1))));
    vlSelf->z80_top_direct_n__DOT__sw2___DOT__db_down__out__out3 
        = ((0xfcU & (IData)(vlSelf->z80_top_direct_n__DOT__sw2___DOT__db_down__out__out3)) 
           | (3U & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d))) 
                    & (IData)(vlSelf->z80_top_direct_n__DOT__db1))));
    z80_top_direct_n__DOT__sw2___DOT__db_down__out__en0 
        = (0xc0U & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d))) 
                     << 6U) & (IData)(vlSelf->z80_top_direct_n__DOT__db_up__en9)));
    z80_top_direct_n__DOT__sw2___DOT__db_down__out__en1 
        = (0x30U & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d))) 
                     << 4U) & (IData)(vlSelf->z80_top_direct_n__DOT__db_up__en9)));
    z80_top_direct_n__DOT__sw2___DOT__db_down__out__en2 
        = (0xcU & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d))) 
                    << 2U) & (IData)(vlSelf->z80_top_direct_n__DOT__db_up__en9)));
    z80_top_direct_n__DOT__sw2___DOT__db_down__out__en3 
        = (3U & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2d))) 
                 & (IData)(vlSelf->z80_top_direct_n__DOT__db_up__en9)));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__db_hi_ds__out__out28 
        = ((0x3fU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__db_hi_ds__out__out28)) 
           | (0xc0U & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi))) 
                        << 6U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__db_hi_ds__out__out29 
        = ((0xcfU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__db_hi_ds__out__out29)) 
           | (0x30U & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi))) 
                        << 4U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__db_hi_ds__out__out30 
        = ((0xf3U & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__db_hi_ds__out__out30)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi))) 
                       << 2U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__db_hi_ds__out__out31 
        = ((0xfcU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__db_hi_ds__out__out31)) 
           | (3U & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi))) 
                    & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1))));
    z80_top_direct_n__DOT__reg_file___DOT__db_hi_ds__out__en28 
        = (0xc0U & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi))) 
                     << 6U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__en)));
    z80_top_direct_n__DOT__reg_file___DOT__db_hi_ds__out__en29 
        = (0x30U & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi))) 
                     << 4U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__en)));
    z80_top_direct_n__DOT__reg_file___DOT__db_hi_ds__out__en30 
        = (0xcU & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi))) 
                    << 2U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__en)));
    z80_top_direct_n__DOT__reg_file___DOT__db_hi_ds__out__en31 
        = (3U & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi))) 
                 & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__en)));
    vlSelf->z80_top_direct_n__DOT__reg_sel_pc = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc) 
                                                 & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_not_pc)));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__out54 
        = ((0x3fU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__out54)) 
           | (0xc0U & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo))) 
                        << 6U) & (IData)(vlSelf->z80_top_direct_n__DOT__db1))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__out55 
        = ((0xcfU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__out55)) 
           | (0x30U & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo))) 
                        << 4U) & (IData)(vlSelf->z80_top_direct_n__DOT__db1))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__out56 
        = ((0xf3U & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__out56)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo))) 
                       << 2U) & (IData)(vlSelf->z80_top_direct_n__DOT__db1))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__out57 
        = ((0xfcU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__out57)) 
           | (3U & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo))) 
                    & (IData)(vlSelf->z80_top_direct_n__DOT__db1))));
    z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__en54 
        = (0xc0U & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo))) 
                     << 6U) & (IData)(vlSelf->z80_top_direct_n__DOT__db_lo_ds__en6)));
    z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__en55 
        = (0x30U & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo))) 
                     << 4U) & (IData)(vlSelf->z80_top_direct_n__DOT__db_lo_ds__en6)));
    z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__en56 
        = (0xcU & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo))) 
                    << 2U) & (IData)(vlSelf->z80_top_direct_n__DOT__db_lo_ds__en6)));
    z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__en57 
        = (3U & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo))) 
                 & (IData)(vlSelf->z80_top_direct_n__DOT__db_lo_ds__en6)));
    vlSelf->z80_top_direct_n__DOT__reg_sys_we_hi = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we) 
         | (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we_hi));
    vlSelf->z80_top_direct_n__DOT__reg_control___DOT__reg_sys_we_lo_ALTERA_SYNTHESIZED 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we_lo) 
           | (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we));
    vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_24 
        = (((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set) 
            | (((IData)(vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__DFFE_inst_latch_cf2) 
                & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_use_cf2)) 
               | ((IData)(vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__DFFE_inst_latch_cf) 
                  & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_use_cf2))))) 
           ^ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl));
    z80_top_direct_n__DOT__reg_control___DOT__SYNTHESIZED_WIRE_52 
        = (IData)((0U == (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel)));
    z80_top_direct_n__DOT__reg_control___DOT__SYNTHESIZED_WIRE_59 
        = (IData)((1U == (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel)));
    z80_top_direct_n__DOT__reg_control___DOT__SYNTHESIZED_WIRE_55 
        = (IData)((3U == (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel)));
    z80_top_direct_n__DOT__reg_control___DOT__SYNTHESIZED_WIRE_61 
        = (IData)((2U == (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel)));
    vlSelf->z80_top_direct_n__DOT__alu_control___DOT__out 
        = ((0x9fU & (IData)(vlSelf->z80_top_direct_n__DOT__alu_control___DOT__out)) 
           | (0x60U & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__alu_control___DOT__SYNTHESIZED_WIRE_21))) 
                       << 5U)));
    z80_top_direct_n__DOT__alu___DOT__b2v_input_shift__DOT__SYNTHESIZED_WIRE_32 
        = (1U & (~ ((IData)(z80_top_direct_n__DOT__alu_shift_right) 
                    | (IData)(z80_top_direct_n__DOT__alu_shift_left))));
    z80_top_direct_n__DOT__D__en15 = (0xffU & ((((0xc0U 
                                                  & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__bus_db_pin_oe))) 
                                                     << 6U)) 
                                                 | (0x30U 
                                                    & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__bus_db_pin_oe))) 
                                                       << 4U))) 
                                                | (0xcU 
                                                   & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__bus_db_pin_oe))) 
                                                      << 2U))) 
                                               | (3U 
                                                  & (- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__bus_db_pin_oe))))));
    vlSelf->z80_top_direct_n__DOT__data_pins___DOT__D__out__out0 
        = ((0x3fU & (IData)(vlSelf->z80_top_direct_n__DOT__data_pins___DOT__D__out__out0)) 
           | (0xc0U & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__bus_db_pin_oe))) 
                        << 6U) & (IData)(vlSelf->z80_top_direct_n__DOT__data_pins___DOT__dout))));
    vlSelf->z80_top_direct_n__DOT__data_pins___DOT__D__out__out1 
        = ((0xcfU & (IData)(vlSelf->z80_top_direct_n__DOT__data_pins___DOT__D__out__out1)) 
           | (0x30U & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__bus_db_pin_oe))) 
                        << 4U) & (IData)(vlSelf->z80_top_direct_n__DOT__data_pins___DOT__dout))));
    vlSelf->z80_top_direct_n__DOT__data_pins___DOT__D__out__out2 
        = ((0xf3U & (IData)(vlSelf->z80_top_direct_n__DOT__data_pins___DOT__D__out__out2)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__bus_db_pin_oe))) 
                       << 2U) & (IData)(vlSelf->z80_top_direct_n__DOT__data_pins___DOT__dout))));
    vlSelf->z80_top_direct_n__DOT__data_pins___DOT__D__out__out3 
        = ((0xfcU & (IData)(vlSelf->z80_top_direct_n__DOT__data_pins___DOT__D__out__out3)) 
           | (3U & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__bus_db_pin_oe))) 
                    & (IData)(vlSelf->z80_top_direct_n__DOT__data_pins___DOT__dout))));
    z80_top_direct_n__DOT__db_up__en11 = ((((IData)(z80_top_direct_n__DOT__sw1___DOT__db_up__out__en0) 
                                            | (IData)(z80_top_direct_n__DOT__sw1___DOT__db_up__out__en1)) 
                                           | (IData)(z80_top_direct_n__DOT__sw1___DOT__db_up__out__en2)) 
                                          | (IData)(z80_top_direct_n__DOT__sw1___DOT__db_up__out__en3));
    vlSelf->z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__address_ALTERA_SYNTHESIZED 
        = ((0xfffcU & (IData)(vlSelf->z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__address_ALTERA_SYNTHESIZED)) 
           | ((2U & ((0xfffffffeU & (IData)(vlSelf->z80_top_direct_n__DOT__address_latch___DOT__Q)) 
                     ^ (((IData)(z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_41) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy)) 
                        << 1U))) | (1U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                                          ^ (IData)(vlSelf->z80_top_direct_n__DOT__address_latch___DOT__Q)))));
    z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_22 
        = (((IData)(z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_41) 
            & (IData)(z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_40)) 
           & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy));
    z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_47 
        = (((((((((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_cy) 
                  & (IData)(z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_40)) 
                 & (IData)(z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_41)) 
                & (IData)(z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_42)) 
               & (IData)(z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_43)) 
              & (IData)(z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_44)) 
             & (((IData)(vlSelf->z80_top_direct_n__DOT__address_latch___DOT__Q) 
                 >> 6U) ^ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_dec))) 
            & (IData)(z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_45)) 
           & (~ ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                 & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    z80_top_direct_n__DOT__alu___DOT__db__out__en10 
        = (0xcU & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_oe))) 
                    << 2U) & (IData)(z80_top_direct_n__DOT__alu___DOT__db_low__en)));
    z80_top_direct_n__DOT__alu___DOT__db__out__en11 
        = (3U & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_oe))) 
                 & (IData)(z80_top_direct_n__DOT__alu___DOT__db_low__en)));
    z80_top_direct_n__DOT__alu___DOT__db__out__en12 
        = (0xc0U & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_oe))) 
                     << 6U) & ((IData)(z80_top_direct_n__DOT__alu___DOT__db_low__en) 
                               << 4U)));
    z80_top_direct_n__DOT__alu___DOT__db__out__en13 
        = (0x30U & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_oe))) 
                     & (IData)(z80_top_direct_n__DOT__alu___DOT__db_low__en)) 
                    << 4U));
    vlSelf->z80_top_direct_n__DOT__bus_control___DOT__db__out__out0 
        = ((0x3fU & (IData)(vlSelf->z80_top_direct_n__DOT__bus_control___DOT__db__out__out0)) 
           | (0xc0U & (((- (IData)((IData)(z80_top_direct_n__DOT__bus_control___DOT__SYNTHESIZED_WIRE_0))) 
                        << 6U) & (- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_ff_oe))))));
    vlSelf->z80_top_direct_n__DOT__bus_control___DOT__db__out__out1 
        = ((0xcfU & (IData)(vlSelf->z80_top_direct_n__DOT__bus_control___DOT__db__out__out1)) 
           | (0x30U & (((- (IData)((IData)(z80_top_direct_n__DOT__bus_control___DOT__SYNTHESIZED_WIRE_0))) 
                        << 4U) & (- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_ff_oe))))));
    vlSelf->z80_top_direct_n__DOT__bus_control___DOT__db__out__out2 
        = ((0xf3U & (IData)(vlSelf->z80_top_direct_n__DOT__bus_control___DOT__db__out__out2)) 
           | (0xcU & (((- (IData)((IData)(z80_top_direct_n__DOT__bus_control___DOT__SYNTHESIZED_WIRE_0))) 
                       << 2U) & (- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_ff_oe))))));
    vlSelf->z80_top_direct_n__DOT__bus_control___DOT__db__out__out3 
        = ((0xfcU & (IData)(vlSelf->z80_top_direct_n__DOT__bus_control___DOT__db__out__out3)) 
           | (3U & ((- (IData)((IData)(z80_top_direct_n__DOT__bus_control___DOT__SYNTHESIZED_WIRE_0))) 
                    & (- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_ff_oe))))));
    z80_top_direct_n__DOT__db_down__en10 = ((((IData)(z80_top_direct_n__DOT__sw2___DOT__db_down__out__en0) 
                                              | (IData)(z80_top_direct_n__DOT__sw2___DOT__db_down__out__en1)) 
                                             | (IData)(z80_top_direct_n__DOT__sw2___DOT__db_down__out__en2)) 
                                            | (IData)(z80_top_direct_n__DOT__sw2___DOT__db_down__out__en3));
    z80_top_direct_n__DOT__db_hi_ds__en4 = ((((IData)(z80_top_direct_n__DOT__reg_file___DOT__db_hi_ds__out__en28) 
                                              | (IData)(z80_top_direct_n__DOT__reg_file___DOT__db_hi_ds__out__en29)) 
                                             | (IData)(z80_top_direct_n__DOT__reg_file___DOT__db_hi_ds__out__en30)) 
                                            | (IData)(z80_top_direct_n__DOT__reg_file___DOT__db_hi_ds__out__en31));
    z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_80 
        = (((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
               >> 1U)) & (~ (IData)(vlSelf->z80_top_direct_n__DOT__reg_sys_we_hi)));
    z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_72 
        = (((IData)(vlSelf->z80_top_direct_n__DOT__reg_sel_pc) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
               >> 1U)) & (~ (IData)(vlSelf->z80_top_direct_n__DOT__reg_sys_we_hi)));
    z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_60 
        = (((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_ir) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
               >> 1U)) & (~ (IData)(vlSelf->z80_top_direct_n__DOT__reg_sys_we_hi)));
    z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_74 
        = (((~ (IData)(vlSelf->z80_top_direct_n__DOT__reg_control___DOT__reg_sys_we_lo_ALTERA_SYNTHESIZED)) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo)) 
           & (IData)(vlSelf->z80_top_direct_n__DOT__reg_sel_pc));
    z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_62 
        = (((~ (IData)(vlSelf->z80_top_direct_n__DOT__reg_control___DOT__reg_sys_we_lo_ALTERA_SYNTHESIZED)) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo)) 
           & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_ir));
    z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_82 
        = (((~ (IData)(vlSelf->z80_top_direct_n__DOT__reg_control___DOT__reg_sys_we_lo_ALTERA_SYNTHESIZED)) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo)) 
           & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz));
    z80_top_direct_n__DOT__reg_sw_4d_hi = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4d) 
                                           & (~ ((((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
                                                   >> 1U) 
                                                  & (~ (IData)(vlSelf->z80_top_direct_n__DOT__reg_control___DOT__reg_sys_we_lo_ALTERA_SYNTHESIZED))) 
                                                 & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_ir))));
    vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__db__out__out3 
        = ((0xfeU & (IData)(vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__db__out__out3)) 
           | ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_oe) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_24)));
    z80_top_direct_n__DOT__ctl_flags_hf_cpl = (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                 >> 0xbU) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                               & (IData)(vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__DFFE_inst_latch_nf));
    z80_top_direct_n__DOT__ctl_flags_hf_cpl = ((IData)(z80_top_direct_n__DOT__ctl_flags_hf_cpl) 
                                               | ((((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                     >> 1U) 
                                                    & (~ 
                                                       (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                        >> 0x14U))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__DFFE_inst_latch_nf)));
    z80_top_direct_n__DOT__ctl_flags_hf_cpl = ((IData)(z80_top_direct_n__DOT__ctl_flags_hf_cpl) 
                                               | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__DFFE_inst_latch_nf)));
    z80_top_direct_n__DOT__ctl_flags_hf_cpl = ((IData)(z80_top_direct_n__DOT__ctl_flags_hf_cpl) 
                                               | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x14U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__DFFE_inst_latch_nf)));
    z80_top_direct_n__DOT__ctl_flags_hf_cpl = ((IData)(z80_top_direct_n__DOT__ctl_flags_hf_cpl) 
                                               | ((((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                     >> 2U) 
                                                    & (~ 
                                                       (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                        >> 0x15U))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__DFFE_inst_latch_nf)));
    z80_top_direct_n__DOT__ctl_flags_hf_cpl = ((IData)(z80_top_direct_n__DOT__ctl_flags_hf_cpl) 
                                               | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x15U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__DFFE_inst_latch_nf)));
    z80_top_direct_n__DOT__ctl_flags_hf_cpl = ((IData)(z80_top_direct_n__DOT__ctl_flags_hf_cpl) 
                                               | ((((~ 
                                                     (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                      >> 6U)) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                       >> 4U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__DFFE_inst_latch_nf)));
    z80_top_direct_n__DOT__ctl_flags_hf_cpl = ((IData)(z80_top_direct_n__DOT__ctl_flags_hf_cpl) 
                                               | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                    >> 0xdU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__DFFE_inst_latch_nf)));
    z80_top_direct_n__DOT__ctl_flags_hf_cpl = ((IData)(z80_top_direct_n__DOT__ctl_flags_hf_cpl) 
                                               | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                    >> 0x11U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__DFFE_inst_latch_nf)));
    z80_top_direct_n__DOT__ctl_flags_hf_cpl = ((IData)(z80_top_direct_n__DOT__ctl_flags_hf_cpl) 
                                               | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                    >> 0x12U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__DFFE_inst_latch_nf)));
    z80_top_direct_n__DOT__ctl_flags_hf_cpl = ((IData)(z80_top_direct_n__DOT__ctl_flags_hf_cpl) 
                                               | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                    >> 0x19U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
                                                  & (~ (IData)(vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_24))));
    vlSelf->z80_top_direct_n__DOT__reg_sel_bc = ((IData)(z80_top_direct_n__DOT__reg_control___DOT__SYNTHESIZED_WIRE_52) 
                                                 & (~ (IData)(vlSelf->z80_top_direct_n__DOT__reg_control___DOT__bank_exx)));
    vlSelf->z80_top_direct_n__DOT__reg_sel_bc2 = ((IData)(z80_top_direct_n__DOT__reg_control___DOT__SYNTHESIZED_WIRE_52) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__reg_control___DOT__bank_exx));
    vlSelf->z80_top_direct_n__DOT__reg_sel_sp = ((IData)(z80_top_direct_n__DOT__reg_control___DOT__SYNTHESIZED_WIRE_55) 
                                                 & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp));
    z80_top_direct_n__DOT__reg_control___DOT__SYNTHESIZED_WIRE_54 
        = ((IData)(z80_top_direct_n__DOT__reg_control___DOT__SYNTHESIZED_WIRE_55) 
           & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp)));
    z80_top_direct_n__DOT__reg_control___DOT__SYNTHESIZED_WIRE_56 
        = ((IData)(z80_top_direct_n__DOT__reg_control___DOT__SYNTHESIZED_WIRE_61) 
           & (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy));
    z80_top_direct_n__DOT__reg_control___DOT__SYNTHESIZED_WIRE_58 
        = ((IData)(z80_top_direct_n__DOT__reg_control___DOT__SYNTHESIZED_WIRE_61) 
           & (~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)));
    vlSelf->z80_top_direct_n__DOT__alu_control___DOT__db__out__out0 
        = ((0x3fU & (IData)(vlSelf->z80_top_direct_n__DOT__alu_control___DOT__db__out__out0)) 
           | (0xc0U & (((- (IData)((IData)(z80_top_direct_n__DOT__alu_control___DOT__SYNTHESIZED_WIRE_2))) 
                        << 6U) & (IData)(vlSelf->z80_top_direct_n__DOT__alu_control___DOT__out))));
    vlSelf->z80_top_direct_n__DOT__alu_control___DOT__db__out__out1 
        = ((0xcfU & (IData)(vlSelf->z80_top_direct_n__DOT__alu_control___DOT__db__out__out1)) 
           | (0x30U & (((- (IData)((IData)(z80_top_direct_n__DOT__alu_control___DOT__SYNTHESIZED_WIRE_2))) 
                        << 4U) & (IData)(vlSelf->z80_top_direct_n__DOT__alu_control___DOT__out))));
    vlSelf->z80_top_direct_n__DOT__alu_control___DOT__db__out__out2 
        = ((0xf3U & (IData)(vlSelf->z80_top_direct_n__DOT__alu_control___DOT__db__out__out2)) 
           | (0xcU & (((- (IData)((IData)(z80_top_direct_n__DOT__alu_control___DOT__SYNTHESIZED_WIRE_2))) 
                       << 2U) & (IData)(vlSelf->z80_top_direct_n__DOT__alu_control___DOT__out))));
    vlSelf->z80_top_direct_n__DOT__alu_control___DOT__db__out__out3 
        = ((0xfcU & (IData)(vlSelf->z80_top_direct_n__DOT__alu_control___DOT__db__out__out3)) 
           | (3U & ((- (IData)((IData)(z80_top_direct_n__DOT__alu_control___DOT__SYNTHESIZED_WIRE_2))) 
                    & (IData)(vlSelf->z80_top_direct_n__DOT__alu_control___DOT__out))));
    vlSelf->D = ((((((0xc0U & ((IData)(vlSelf->z80_top_direct_n__DOT__data_pins___DOT__D__out__out0) 
                               & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__bus_db_pin_oe))) 
                                  << 6U))) | (0x30U 
                                              & ((IData)(vlSelf->z80_top_direct_n__DOT__data_pins___DOT__D__out__out1) 
                                                 & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__bus_db_pin_oe))) 
                                                    << 4U)))) 
                    | (0xcU & ((IData)(vlSelf->z80_top_direct_n__DOT__data_pins___DOT__D__out__out2) 
                               & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__bus_db_pin_oe))) 
                                  << 2U)))) | (3U & 
                                               ((IData)(vlSelf->z80_top_direct_n__DOT__data_pins___DOT__D__out__out3) 
                                                & (- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__bus_db_pin_oe)))))) 
                  & (IData)(z80_top_direct_n__DOT__D__en15)) 
                 & (IData)(z80_top_direct_n__DOT__D__en15));
    z80_top_direct_n__DOT__sw1___DOT__db_down__out__en7 
        = (0x30U & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1d))) 
                     << 4U) & (IData)(z80_top_direct_n__DOT__db_up__en11)));
    z80_top_direct_n__DOT__sw1___DOT__db_down__out__en8 
        = (0xf8U & (((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1d) 
                     << 3U) & (IData)(z80_top_direct_n__DOT__db_up__en11)));
    vlSelf->z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__address_ALTERA_SYNTHESIZED 
        = ((0xfff3U & (IData)(vlSelf->z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__address_ALTERA_SYNTHESIZED)) 
           | ((8U & ((0xfffffff8U & (IData)(vlSelf->z80_top_direct_n__DOT__address_latch___DOT__Q)) 
                     ^ (((IData)(z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_42) 
                         & (IData)(z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_22)) 
                        << 3U))) | (4U & (((IData)(z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_22) 
                                           << 2U) ^ 
                                          (0xfffffffcU 
                                           & (IData)(vlSelf->z80_top_direct_n__DOT__address_latch___DOT__Q))))));
    z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_25 
        = (((IData)(z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_42) 
            & (IData)(z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_45)) 
           & (IData)(z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_22));
    vlSelf->z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__address_ALTERA_SYNTHESIZED 
        = ((0xfe7fU & (IData)(vlSelf->z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__address_ALTERA_SYNTHESIZED)) 
           | ((0x100U & ((0xffffff00U & (IData)(vlSelf->z80_top_direct_n__DOT__address_latch___DOT__Q)) 
                         ^ (((IData)(z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_48) 
                             & (IData)(z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_47)) 
                            << 8U))) | (0x80U & (((IData)(z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_47) 
                                                  << 7U) 
                                                 ^ 
                                                 (0xffffff80U 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__address_latch___DOT__Q))))));
    z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_31 
        = (((IData)(z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_48) 
            & (IData)(z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_46)) 
           & (IData)(z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_47));
    z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_51 
        = ((((((IData)(z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_46) 
               & (IData)(z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_47)) 
              & (IData)(z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_48)) 
             & (IData)(z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_49)) 
            & (IData)(z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_50)) 
           & (((IData)(vlSelf->z80_top_direct_n__DOT__address_latch___DOT__Q) 
               >> 0xbU) ^ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_dec)));
    vlSelf->z80_top_direct_n__DOT__db0 = (((((((0xc0U 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__bus_control___DOT__db__out__out0) 
                                                   & ((- (IData)((IData)(z80_top_direct_n__DOT__bus_control___DOT__SYNTHESIZED_WIRE_0))) 
                                                      << 6U))) 
                                               | (0x30U 
                                                  & ((IData)(vlSelf->z80_top_direct_n__DOT__bus_control___DOT__db__out__out1) 
                                                     & ((- (IData)((IData)(z80_top_direct_n__DOT__bus_control___DOT__SYNTHESIZED_WIRE_0))) 
                                                        << 4U)))) 
                                              | (0xcU 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__bus_control___DOT__db__out__out2) 
                                                    & ((- (IData)((IData)(z80_top_direct_n__DOT__bus_control___DOT__SYNTHESIZED_WIRE_0))) 
                                                       << 2U)))) 
                                             | (3U 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__bus_control___DOT__db__out__out3) 
                                                   & (- (IData)((IData)(z80_top_direct_n__DOT__bus_control___DOT__SYNTHESIZED_WIRE_0)))))) 
                                            & ((((0xc0U 
                                                  & ((- (IData)((IData)(z80_top_direct_n__DOT__bus_control___DOT__SYNTHESIZED_WIRE_0))) 
                                                     << 6U)) 
                                                 | (0x30U 
                                                    & ((- (IData)((IData)(z80_top_direct_n__DOT__bus_control___DOT__SYNTHESIZED_WIRE_0))) 
                                                       << 4U))) 
                                                | (0xcU 
                                                   & ((- (IData)((IData)(z80_top_direct_n__DOT__bus_control___DOT__SYNTHESIZED_WIRE_0))) 
                                                      << 2U))) 
                                               | (3U 
                                                  & (- (IData)((IData)(z80_top_direct_n__DOT__bus_control___DOT__SYNTHESIZED_WIRE_0)))))) 
                                           | ((((((IData)(vlSelf->z80_top_direct_n__DOT__sw1___DOT__db_up__out__out0) 
                                                  & (IData)(z80_top_direct_n__DOT__sw1___DOT__db_up__out__en0)) 
                                                 | ((IData)(vlSelf->z80_top_direct_n__DOT__sw1___DOT__db_up__out__out1) 
                                                    & (IData)(z80_top_direct_n__DOT__sw1___DOT__db_up__out__en1))) 
                                                | ((IData)(vlSelf->z80_top_direct_n__DOT__sw1___DOT__db_up__out__out2) 
                                                   & (IData)(z80_top_direct_n__DOT__sw1___DOT__db_up__out__en2))) 
                                               | ((IData)(vlSelf->z80_top_direct_n__DOT__sw1___DOT__db_up__out__out3) 
                                                  & (IData)(z80_top_direct_n__DOT__sw1___DOT__db_up__out__en3))) 
                                              & (IData)(z80_top_direct_n__DOT__db_up__en11))) 
                                          | (((((0xc0U 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__data_pins___DOT__db__out__out4) 
                                                    & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe))) 
                                                       << 6U))) 
                                                | (0x30U 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__data_pins___DOT__db__out__out5) 
                                                      & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe))) 
                                                         << 4U)))) 
                                               | (0xcU 
                                                  & ((IData)(vlSelf->z80_top_direct_n__DOT__data_pins___DOT__db__out__out6) 
                                                     & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe))) 
                                                        << 2U)))) 
                                              | (3U 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__data_pins___DOT__db__out__out7) 
                                                    & (- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe)))))) 
                                             & ((((0xc0U 
                                                   & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe))) 
                                                      << 6U)) 
                                                  | (0x30U 
                                                     & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe))) 
                                                        << 4U))) 
                                                 | (0xcU 
                                                    & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe))) 
                                                       << 2U))) 
                                                | (3U 
                                                   & (- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe)))))));
    z80_top_direct_n__DOT__sw2___DOT__db_up__out__en4 
        = (0xc0U & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2u))) 
                     << 6U) & (IData)(z80_top_direct_n__DOT__db_down__en10)));
    z80_top_direct_n__DOT__sw2___DOT__db_up__out__en5 
        = (0x30U & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2u))) 
                     << 4U) & (IData)(z80_top_direct_n__DOT__db_down__en10)));
    z80_top_direct_n__DOT__sw2___DOT__db_up__out__en6 
        = (0xcU & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2u))) 
                    << 2U) & (IData)(z80_top_direct_n__DOT__db_down__en10)));
    z80_top_direct_n__DOT__sw2___DOT__db_up__out__en7 
        = (3U & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2u))) 
                 & (IData)(z80_top_direct_n__DOT__db_down__en10)));
    z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__en74 
        = (0xc0U & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi))) 
                     << 6U) & (IData)(z80_top_direct_n__DOT__db_hi_ds__en4)));
    z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__en75 
        = (0x30U & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi))) 
                     << 4U) & (IData)(z80_top_direct_n__DOT__db_hi_ds__en4)));
    z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__en76 
        = (0xcU & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi))) 
                    << 2U) & (IData)(z80_top_direct_n__DOT__db_hi_ds__en4)));
    z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__en77 
        = (3U & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi))) 
                 & (IData)(z80_top_direct_n__DOT__db_hi_ds__en4)));
    vlSelf->z80_top_direct_n__DOT__db2 = ((((((((IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__db__out__out10) 
                                                & (IData)(z80_top_direct_n__DOT__alu___DOT__db__out__en10)) 
                                               | ((IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__db__out__out11) 
                                                  & (IData)(z80_top_direct_n__DOT__alu___DOT__db__out__en11))) 
                                              | ((IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__db__out__out12) 
                                                 & (IData)(z80_top_direct_n__DOT__alu___DOT__db__out__en12))) 
                                             | ((IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__db__out__out13) 
                                                & (IData)(z80_top_direct_n__DOT__alu___DOT__db__out__en13))) 
                                            & ((((IData)(z80_top_direct_n__DOT__alu___DOT__db__out__en10) 
                                                 | (IData)(z80_top_direct_n__DOT__alu___DOT__db__out__en11)) 
                                                | (IData)(z80_top_direct_n__DOT__alu___DOT__db__out__en12)) 
                                               | (IData)(z80_top_direct_n__DOT__alu___DOT__db__out__en13))) 
                                           | ((((((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__db_hi_ds__out__out28) 
                                                  & (IData)(z80_top_direct_n__DOT__reg_file___DOT__db_hi_ds__out__en28)) 
                                                 | ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__db_hi_ds__out__out29) 
                                                    & (IData)(z80_top_direct_n__DOT__reg_file___DOT__db_hi_ds__out__en29))) 
                                                | ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__db_hi_ds__out__out30) 
                                                   & (IData)(z80_top_direct_n__DOT__reg_file___DOT__db_hi_ds__out__en30))) 
                                               | ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__db_hi_ds__out__out31) 
                                                  & (IData)(z80_top_direct_n__DOT__reg_file___DOT__db_hi_ds__out__en31))) 
                                              & (IData)(z80_top_direct_n__DOT__db_hi_ds__en4))) 
                                          | ((((((IData)(vlSelf->z80_top_direct_n__DOT__sw2___DOT__db_down__out__out0) 
                                                 & (IData)(z80_top_direct_n__DOT__sw2___DOT__db_down__out__en0)) 
                                                | ((IData)(vlSelf->z80_top_direct_n__DOT__sw2___DOT__db_down__out__out1) 
                                                   & (IData)(z80_top_direct_n__DOT__sw2___DOT__db_down__out__en1))) 
                                               | ((IData)(vlSelf->z80_top_direct_n__DOT__sw2___DOT__db_down__out__out2) 
                                                  & (IData)(z80_top_direct_n__DOT__sw2___DOT__db_down__out__en2))) 
                                              | ((IData)(vlSelf->z80_top_direct_n__DOT__sw2___DOT__db_down__out__out3) 
                                                 & (IData)(z80_top_direct_n__DOT__sw2___DOT__db_down__out__en3))) 
                                             & (IData)(z80_top_direct_n__DOT__db_down__en10)));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_wz_hi__DOT__db__out__out0 
        = ((0x3fU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_wz_hi__DOT__db__out__out0)) 
           | (0xc0U & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_80))) 
                        << 6U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_wz_hi__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_wz_hi__DOT__db__out__out1 
        = ((0xcfU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_wz_hi__DOT__db__out__out1)) 
           | (0x30U & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_80))) 
                        << 4U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_wz_hi__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_wz_hi__DOT__db__out__out2 
        = ((0xf3U & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_wz_hi__DOT__db__out__out2)) 
           | (0xcU & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_80))) 
                       << 2U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_wz_hi__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_wz_hi__DOT__db__out__out3 
        = ((0xfcU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_wz_hi__DOT__db__out__out3)) 
           | (3U & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_80))) 
                    & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_wz_hi__DOT__latch))));
    z80_top_direct_n__DOT__reg_file___DOT__db__en26 
        = (0xffU & ((((0xc0U & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_80))) 
                                << 6U)) | (0x30U & 
                                           ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_80))) 
                                            << 4U))) 
                     | (0xcU & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_80))) 
                                << 2U))) | (3U & (- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_80))))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_pc_hi__DOT__db__out__out0 
        = ((0x3fU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_pc_hi__DOT__db__out__out0)) 
           | (0xc0U & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_72))) 
                        << 6U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_pc_hi__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_pc_hi__DOT__db__out__out1 
        = ((0xcfU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_pc_hi__DOT__db__out__out1)) 
           | (0x30U & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_72))) 
                        << 4U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_pc_hi__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_pc_hi__DOT__db__out__out2 
        = ((0xf3U & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_pc_hi__DOT__db__out__out2)) 
           | (0xcU & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_72))) 
                       << 2U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_pc_hi__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_pc_hi__DOT__db__out__out3 
        = ((0xfcU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_pc_hi__DOT__db__out__out3)) 
           | (3U & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_72))) 
                    & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_pc_hi__DOT__latch))));
    z80_top_direct_n__DOT__reg_file___DOT__db__en22 
        = (0xffU & ((((0xc0U & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_72))) 
                                << 6U)) | (0x30U & 
                                           ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_72))) 
                                            << 4U))) 
                     | (0xcU & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_72))) 
                                << 2U))) | (3U & (- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_72))))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ir_hi__DOT__db__out__out0 
        = ((0x3fU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ir_hi__DOT__db__out__out0)) 
           | (0xc0U & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_60))) 
                        << 6U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ir_hi__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ir_hi__DOT__db__out__out1 
        = ((0xcfU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ir_hi__DOT__db__out__out1)) 
           | (0x30U & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_60))) 
                        << 4U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ir_hi__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ir_hi__DOT__db__out__out2 
        = ((0xf3U & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ir_hi__DOT__db__out__out2)) 
           | (0xcU & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_60))) 
                       << 2U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ir_hi__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ir_hi__DOT__db__out__out3 
        = ((0xfcU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ir_hi__DOT__db__out__out3)) 
           | (3U & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_60))) 
                    & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ir_hi__DOT__latch))));
    z80_top_direct_n__DOT__reg_file___DOT__db__en16 
        = (0xffU & ((((0xc0U & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_60))) 
                                << 6U)) | (0x30U & 
                                           ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_60))) 
                                            << 4U))) 
                     | (0xcU & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_60))) 
                                << 2U))) | (3U & (- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_60))))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_pc_lo__DOT__db__out__out0 
        = ((0x3fU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_pc_lo__DOT__db__out__out0)) 
           | (0xc0U & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_74))) 
                        << 6U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_pc_lo__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_pc_lo__DOT__db__out__out1 
        = ((0xcfU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_pc_lo__DOT__db__out__out1)) 
           | (0x30U & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_74))) 
                        << 4U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_pc_lo__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_pc_lo__DOT__db__out__out2 
        = ((0xf3U & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_pc_lo__DOT__db__out__out2)) 
           | (0xcU & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_74))) 
                       << 2U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_pc_lo__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_pc_lo__DOT__db__out__out3 
        = ((0xfcU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_pc_lo__DOT__db__out__out3)) 
           | (3U & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_74))) 
                    & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_pc_lo__DOT__latch))));
    z80_top_direct_n__DOT__reg_file___DOT__db__en23 
        = (0xffU & ((((0xc0U & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_74))) 
                                << 6U)) | (0x30U & 
                                           ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_74))) 
                                            << 4U))) 
                     | (0xcU & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_74))) 
                                << 2U))) | (3U & (- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_74))))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ir_lo__DOT__db__out__out0 
        = ((0x3fU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ir_lo__DOT__db__out__out0)) 
           | (0xc0U & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_62))) 
                        << 6U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ir_lo__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ir_lo__DOT__db__out__out1 
        = ((0xcfU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ir_lo__DOT__db__out__out1)) 
           | (0x30U & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_62))) 
                        << 4U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ir_lo__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ir_lo__DOT__db__out__out2 
        = ((0xf3U & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ir_lo__DOT__db__out__out2)) 
           | (0xcU & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_62))) 
                       << 2U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ir_lo__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ir_lo__DOT__db__out__out3 
        = ((0xfcU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ir_lo__DOT__db__out__out3)) 
           | (3U & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_62))) 
                    & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ir_lo__DOT__latch))));
    z80_top_direct_n__DOT__reg_file___DOT__db__en17 
        = (0xffU & ((((0xc0U & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_62))) 
                                << 6U)) | (0x30U & 
                                           ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_62))) 
                                            << 4U))) 
                     | (0xcU & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_62))) 
                                << 2U))) | (3U & (- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_62))))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_wz_lo__DOT__db__out__out0 
        = ((0x3fU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_wz_lo__DOT__db__out__out0)) 
           | (0xc0U & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_82))) 
                        << 6U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_wz_lo__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_wz_lo__DOT__db__out__out1 
        = ((0xcfU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_wz_lo__DOT__db__out__out1)) 
           | (0x30U & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_82))) 
                        << 4U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_wz_lo__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_wz_lo__DOT__db__out__out2 
        = ((0xf3U & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_wz_lo__DOT__db__out__out2)) 
           | (0xcU & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_82))) 
                       << 2U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_wz_lo__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_wz_lo__DOT__db__out__out3 
        = ((0xfcU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_wz_lo__DOT__db__out__out3)) 
           | (3U & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_82))) 
                    & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_wz_lo__DOT__latch))));
    z80_top_direct_n__DOT__reg_file___DOT__db__en27 
        = (0xffU & ((((0xc0U & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_82))) 
                                << 6U)) | (0x30U & 
                                           ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_82))) 
                                            << 4U))) 
                     | (0xcU & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_82))) 
                                << 2U))) | (3U & (- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_82))))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__db_hi_as__out__out34 
        = ((0x3fU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__db_hi_as__out__out34)) 
           | (0xc0U & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_sw_4d_hi))) 
                        << 6U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__db_hi_as__out__out35 
        = ((0xcfU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__db_hi_as__out__out35)) 
           | (0x30U & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_sw_4d_hi))) 
                        << 4U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__db_hi_as__out__out36 
        = ((0xf3U & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__db_hi_as__out__out36)) 
           | (0xcU & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_sw_4d_hi))) 
                       << 2U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__db_hi_as__out__out37 
        = ((0xfcU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__db_hi_as__out__out37)) 
           | (3U & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_sw_4d_hi))) 
                    & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1))));
    z80_top_direct_n__DOT__reg_file___DOT__db_hi_as__out__en34 
        = (0xc0U & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_sw_4d_hi))) 
                     << 6U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__en)));
    z80_top_direct_n__DOT__reg_file___DOT__db_hi_as__out__en35 
        = (0x30U & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_sw_4d_hi))) 
                     << 4U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__en)));
    z80_top_direct_n__DOT__reg_file___DOT__db_hi_as__out__en36 
        = (0xcU & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_sw_4d_hi))) 
                    << 2U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__en)));
    z80_top_direct_n__DOT__reg_file___DOT__db_hi_as__out__en37 
        = (3U & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_sw_4d_hi))) 
                 & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__en)));
    z80_top_direct_n__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_23 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__DFFE_inst_latch_hf) 
           ^ (IData)(z80_top_direct_n__DOT__ctl_flags_hf_cpl));
    z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_40 
        = (((IData)(vlSelf->z80_top_direct_n__DOT__reg_sel_bc) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
               >> 1U)) & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we)));
    z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_42 
        = (((~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we)) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo)) 
           & (IData)(vlSelf->z80_top_direct_n__DOT__reg_sel_bc));
    z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_36 
        = (((IData)(vlSelf->z80_top_direct_n__DOT__reg_sel_bc2) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
               >> 1U)) & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we)));
    z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_38 
        = (((~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we)) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo)) 
           & (IData)(vlSelf->z80_top_direct_n__DOT__reg_sel_bc2));
    z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_76 
        = (((IData)(vlSelf->z80_top_direct_n__DOT__reg_sel_sp) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
               >> 1U)) & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we)));
    z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_78 
        = (((~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we)) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo)) 
           & (IData)(vlSelf->z80_top_direct_n__DOT__reg_sel_sp));
    vlSelf->z80_top_direct_n__DOT__reg_sel_af = ((~ (IData)(vlSelf->z80_top_direct_n__DOT__reg_control___DOT__bank_af)) 
                                                 & (IData)(z80_top_direct_n__DOT__reg_control___DOT__SYNTHESIZED_WIRE_54));
    vlSelf->z80_top_direct_n__DOT__reg_sel_af2 = ((IData)(vlSelf->z80_top_direct_n__DOT__reg_control___DOT__bank_af) 
                                                  & (IData)(z80_top_direct_n__DOT__reg_control___DOT__SYNTHESIZED_WIRE_54));
    vlSelf->z80_top_direct_n__DOT__reg_sel_ix = ((IData)(z80_top_direct_n__DOT__reg_control___DOT__SYNTHESIZED_WIRE_56) 
                                                 & (IData)(vlSelf->z80_top_direct_n__DOT__decode_state___DOT__DFFE_inst4));
    vlSelf->z80_top_direct_n__DOT__reg_sel_iy = ((IData)(z80_top_direct_n__DOT__reg_control___DOT__SYNTHESIZED_WIRE_56) 
                                                 & (~ (IData)(vlSelf->z80_top_direct_n__DOT__decode_state___DOT__DFFE_inst4)));
    vlSelf->z80_top_direct_n__DOT__reg_sel_de = ((~ (IData)(vlSelf->z80_top_direct_n__DOT__reg_control___DOT__bank_exx)) 
                                                 & (((~ (IData)(vlSelf->z80_top_direct_n__DOT__reg_control___DOT__bank_hl_de1)) 
                                                     & (IData)(z80_top_direct_n__DOT__reg_control___DOT__SYNTHESIZED_WIRE_59)) 
                                                    | ((IData)(vlSelf->z80_top_direct_n__DOT__reg_control___DOT__bank_hl_de1) 
                                                       & (IData)(z80_top_direct_n__DOT__reg_control___DOT__SYNTHESIZED_WIRE_58))));
    vlSelf->z80_top_direct_n__DOT__reg_sel_hl = ((~ (IData)(vlSelf->z80_top_direct_n__DOT__reg_control___DOT__bank_exx)) 
                                                 & (((IData)(vlSelf->z80_top_direct_n__DOT__reg_control___DOT__bank_hl_de1) 
                                                     & (IData)(z80_top_direct_n__DOT__reg_control___DOT__SYNTHESIZED_WIRE_59)) 
                                                    | ((~ (IData)(vlSelf->z80_top_direct_n__DOT__reg_control___DOT__bank_hl_de1)) 
                                                       & (IData)(z80_top_direct_n__DOT__reg_control___DOT__SYNTHESIZED_WIRE_58))));
    vlSelf->z80_top_direct_n__DOT__reg_sel_de2 = ((IData)(vlSelf->z80_top_direct_n__DOT__reg_control___DOT__bank_exx) 
                                                  & (((~ (IData)(vlSelf->z80_top_direct_n__DOT__reg_control___DOT__bank_hl_de2)) 
                                                      & (IData)(z80_top_direct_n__DOT__reg_control___DOT__SYNTHESIZED_WIRE_59)) 
                                                     | ((IData)(vlSelf->z80_top_direct_n__DOT__reg_control___DOT__bank_hl_de2) 
                                                        & (IData)(z80_top_direct_n__DOT__reg_control___DOT__SYNTHESIZED_WIRE_58))));
    vlSelf->z80_top_direct_n__DOT__reg_sel_hl2 = ((IData)(vlSelf->z80_top_direct_n__DOT__reg_control___DOT__bank_exx) 
                                                  & (((IData)(vlSelf->z80_top_direct_n__DOT__reg_control___DOT__bank_hl_de2) 
                                                      & (IData)(z80_top_direct_n__DOT__reg_control___DOT__SYNTHESIZED_WIRE_59)) 
                                                     | ((~ (IData)(vlSelf->z80_top_direct_n__DOT__reg_control___DOT__bank_hl_de2)) 
                                                        & (IData)(z80_top_direct_n__DOT__reg_control___DOT__SYNTHESIZED_WIRE_58))));
    vlSelf->z80_top_direct_n__DOT__db_down__en12 = 
        (0xffU & (((((0xc0U & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1d))) 
                               << 6U)) | (6U & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1d))) 
                                                << 1U))) 
                    | (IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1d)) 
                   | (IData)(z80_top_direct_n__DOT__sw1___DOT__db_down__out__en7)) 
                  | (IData)(z80_top_direct_n__DOT__sw1___DOT__db_down__out__en8)));
    vlSelf->z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__address_ALTERA_SYNTHESIZED 
        = ((0xffcfU & (IData)(vlSelf->z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__address_ALTERA_SYNTHESIZED)) 
           | ((0x20U & ((0xffffffe0U & (IData)(vlSelf->z80_top_direct_n__DOT__address_latch___DOT__Q)) 
                        ^ (((IData)(z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_44) 
                            & (IData)(z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_25)) 
                           << 5U))) | (0x10U & (((IData)(z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_25) 
                                                 << 4U) 
                                                ^ (0xfffffff0U 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__address_latch___DOT__Q))))));
    vlSelf->z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__address_ALTERA_SYNTHESIZED 
        = ((0xffbfU & (IData)(vlSelf->z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__address_ALTERA_SYNTHESIZED)) 
           | (0x40U & (((((IData)(z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_44) 
                          & (IData)(z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_43)) 
                         & (IData)(z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_25)) 
                        << 6U) ^ (0xffffffc0U & (IData)(vlSelf->z80_top_direct_n__DOT__address_latch___DOT__Q)))));
    vlSelf->z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__address_ALTERA_SYNTHESIZED 
        = ((0xf9ffU & (IData)(vlSelf->z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__address_ALTERA_SYNTHESIZED)) 
           | ((0x400U & ((0xfffffc00U & (IData)(vlSelf->z80_top_direct_n__DOT__address_latch___DOT__Q)) 
                         ^ (((IData)(z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_49) 
                             & (IData)(z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_31)) 
                            << 0xaU))) | (0x200U & 
                                          (((IData)(z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_31) 
                                            << 9U) 
                                           ^ (0xfffffe00U 
                                              & (IData)(vlSelf->z80_top_direct_n__DOT__address_latch___DOT__Q))))));
    vlSelf->z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__address_ALTERA_SYNTHESIZED 
        = ((0xf7ffU & (IData)(vlSelf->z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__address_ALTERA_SYNTHESIZED)) 
           | (0x800U & (((((IData)(z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_49) 
                           & (IData)(z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_50)) 
                          & (IData)(z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_31)) 
                         << 0xbU) ^ (0xfffff800U & (IData)(vlSelf->z80_top_direct_n__DOT__address_latch___DOT__Q)))));
    vlSelf->z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__address_ALTERA_SYNTHESIZED 
        = ((0xcfffU & (IData)(vlSelf->z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__address_ALTERA_SYNTHESIZED)) 
           | ((0x2000U & ((0xffffe000U & (IData)(vlSelf->z80_top_direct_n__DOT__address_latch___DOT__Q)) 
                          ^ (((IData)(z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_52) 
                              & (IData)(z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_51)) 
                             << 0xdU))) | (0x1000U 
                                           & (((IData)(z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_51) 
                                               << 0xcU) 
                                              ^ (0xfffff000U 
                                                 & (IData)(vlSelf->z80_top_direct_n__DOT__address_latch___DOT__Q))))));
    vlSelf->z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__address_ALTERA_SYNTHESIZED 
        = ((0x3fffU & (IData)(vlSelf->z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__address_ALTERA_SYNTHESIZED)) 
           | ((0x8000U & ((((((IData)(z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_51) 
                              & (IData)(z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_52)) 
                             & (IData)(z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_53)) 
                            << 0xfU) & ((0xffff8000U 
                                         & ((IData)(vlSelf->z80_top_direct_n__DOT__address_latch___DOT__Q) 
                                            << 1U)) 
                                        ^ ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_inc_dec) 
                                           << 0xfU))) 
                          ^ (0xffff8000U & (IData)(vlSelf->z80_top_direct_n__DOT__address_latch___DOT__Q)))) 
              | (0x4000U & (((((IData)(z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_52) 
                               & (IData)(z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_53)) 
                              & (IData)(z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__SYNTHESIZED_WIRE_51)) 
                             << 0xeU) ^ (0xffffc000U 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__address_latch___DOT__Q))))));
    vlSelf->z80_top_direct_n__DOT__sw1___DOT__db_down__out__out7 
        = ((0xcfU & (IData)(vlSelf->z80_top_direct_n__DOT__sw1___DOT__db_down__out__out7)) 
           | (0x30U & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1d))) 
                        << 4U) & (IData)(vlSelf->z80_top_direct_n__DOT__db0))));
    vlSelf->z80_top_direct_n__DOT__sw1___DOT__db_down__out__out8 
        = ((0xf7U & (IData)(vlSelf->z80_top_direct_n__DOT__sw1___DOT__db_down__out__out8)) 
           | (0xfffffff8U & (((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1d) 
                              << 3U) & (IData)(vlSelf->z80_top_direct_n__DOT__db0))));
    vlSelf->z80_top_direct_n__DOT__sw1___DOT__db_down__out__out4 
        = ((0x3fU & (IData)(vlSelf->z80_top_direct_n__DOT__sw1___DOT__db_down__out__out4)) 
           | (0xc0U & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1d))) 
                        << 6U) & ((IData)(vlSelf->z80_top_direct_n__DOT__db0) 
                                  & ((- (IData)((1U 
                                                 & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_mask543_en))))) 
                                     << 6U)))));
    vlSelf->z80_top_direct_n__DOT__alu___DOT__b2v_input_bit_select__DOT__bs_out_low_ALTERA_SYNTHESIZED 
        = ((0xeU & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__b2v_input_bit_select__DOT__bs_out_low_ALTERA_SYNTHESIZED)) 
           | (IData)((0U == (0x38U & (IData)(vlSelf->z80_top_direct_n__DOT__db0)))));
    vlSelf->z80_top_direct_n__DOT__alu___DOT__b2v_input_bit_select__DOT__bs_out_low_ALTERA_SYNTHESIZED 
        = ((0xdU & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__b2v_input_bit_select__DOT__bs_out_low_ALTERA_SYNTHESIZED)) 
           | ((IData)((8U == (0x38U & (IData)(vlSelf->z80_top_direct_n__DOT__db0)))) 
              << 1U));
    vlSelf->z80_top_direct_n__DOT__alu___DOT__b2v_input_bit_select__DOT__bs_out_low_ALTERA_SYNTHESIZED 
        = ((0xbU & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__b2v_input_bit_select__DOT__bs_out_low_ALTERA_SYNTHESIZED)) 
           | ((IData)((0x10U == (0x38U & (IData)(vlSelf->z80_top_direct_n__DOT__db0)))) 
              << 2U));
    vlSelf->z80_top_direct_n__DOT__alu___DOT__b2v_input_bit_select__DOT__bs_out_low_ALTERA_SYNTHESIZED 
        = ((7U & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__b2v_input_bit_select__DOT__bs_out_low_ALTERA_SYNTHESIZED)) 
           | ((IData)((0x18U == (0x38U & (IData)(vlSelf->z80_top_direct_n__DOT__db0)))) 
              << 3U));
    vlSelf->z80_top_direct_n__DOT__alu___DOT__b2v_input_bit_select__DOT__bs_out_high_ALTERA_SYNTHESIZED 
        = ((0xeU & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__b2v_input_bit_select__DOT__bs_out_high_ALTERA_SYNTHESIZED)) 
           | (IData)((0x20U == (0x38U & (IData)(vlSelf->z80_top_direct_n__DOT__db0)))));
    vlSelf->z80_top_direct_n__DOT__alu___DOT__b2v_input_bit_select__DOT__bs_out_high_ALTERA_SYNTHESIZED 
        = ((0xdU & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__b2v_input_bit_select__DOT__bs_out_high_ALTERA_SYNTHESIZED)) 
           | ((IData)((0x28U == (0x38U & (IData)(vlSelf->z80_top_direct_n__DOT__db0)))) 
              << 1U));
    vlSelf->z80_top_direct_n__DOT__alu___DOT__b2v_input_bit_select__DOT__bs_out_high_ALTERA_SYNTHESIZED 
        = ((0xbU & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__b2v_input_bit_select__DOT__bs_out_high_ALTERA_SYNTHESIZED)) 
           | ((IData)((0x30U == (0x38U & (IData)(vlSelf->z80_top_direct_n__DOT__db0)))) 
              << 2U));
    vlSelf->z80_top_direct_n__DOT__alu___DOT__b2v_input_bit_select__DOT__bs_out_high_ALTERA_SYNTHESIZED 
        = ((7U & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__b2v_input_bit_select__DOT__bs_out_high_ALTERA_SYNTHESIZED)) 
           | ((IData)((0x38U == (0x38U & (IData)(vlSelf->z80_top_direct_n__DOT__db0)))) 
              << 3U));
    z80_top_direct_n__DOT__sw1___DOT__SYNTHESIZED_WIRE_2 
        = (7U & ((IData)(vlSelf->z80_top_direct_n__DOT__db0) 
                 & (- (IData)((1U & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_mask543_en)))))));
    vlSelf->z80_top_direct_n__DOT__db_up__en9 = ((((IData)(z80_top_direct_n__DOT__sw2___DOT__db_up__out__en4) 
                                                   | (IData)(z80_top_direct_n__DOT__sw2___DOT__db_up__out__en5)) 
                                                  | (IData)(z80_top_direct_n__DOT__sw2___DOT__db_up__out__en6)) 
                                                 | (IData)(z80_top_direct_n__DOT__sw2___DOT__db_up__out__en7));
    vlSelf->z80_top_direct_n__DOT__sw2___DOT__db_up__out__out4 
        = ((0x3fU & (IData)(vlSelf->z80_top_direct_n__DOT__sw2___DOT__db_up__out__out4)) 
           | (0xc0U & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2u))) 
                        << 6U) & (IData)(vlSelf->z80_top_direct_n__DOT__db2))));
    vlSelf->z80_top_direct_n__DOT__sw2___DOT__db_up__out__out5 
        = ((0xcfU & (IData)(vlSelf->z80_top_direct_n__DOT__sw2___DOT__db_up__out__out5)) 
           | (0x30U & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2u))) 
                        << 4U) & (IData)(vlSelf->z80_top_direct_n__DOT__db2))));
    vlSelf->z80_top_direct_n__DOT__sw2___DOT__db_up__out__out6 
        = ((0xf3U & (IData)(vlSelf->z80_top_direct_n__DOT__sw2___DOT__db_up__out__out6)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2u))) 
                       << 2U) & (IData)(vlSelf->z80_top_direct_n__DOT__db2))));
    vlSelf->z80_top_direct_n__DOT__sw2___DOT__db_up__out__out7 
        = ((0xfcU & (IData)(vlSelf->z80_top_direct_n__DOT__sw2___DOT__db_up__out__out7)) 
           | (3U & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_2u))) 
                    & (IData)(vlSelf->z80_top_direct_n__DOT__db2))));
    vlSelf->z80_top_direct_n__DOT__alu___DOT__b2v_input_shift__DOT__out_low_ALTERA_SYNTHESIZED 
        = ((3U & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__b2v_input_shift__DOT__out_low_ALTERA_SYNTHESIZED)) 
           | (0xcU & ((0xfffffffcU & (((IData)(vlSelf->z80_top_direct_n__DOT__db2) 
                                       & ((- (IData)((IData)(z80_top_direct_n__DOT__alu___DOT__b2v_input_shift__DOT__SYNTHESIZED_WIRE_32))) 
                                          << 2U)) | 
                                      (((IData)(vlSelf->z80_top_direct_n__DOT__db2) 
                                        << 1U) & ((- (IData)((IData)(z80_top_direct_n__DOT__alu_shift_left))) 
                                                  << 2U)))) 
                      | (0x7ffffffcU & (((IData)(vlSelf->z80_top_direct_n__DOT__db2) 
                                         >> 1U) & (
                                                   (- (IData)((IData)(z80_top_direct_n__DOT__alu_shift_right))) 
                                                   << 2U))))));
    vlSelf->z80_top_direct_n__DOT__alu___DOT__b2v_input_shift__DOT__out_high_ALTERA_SYNTHESIZED 
        = ((0xcU & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__b2v_input_shift__DOT__out_high_ALTERA_SYNTHESIZED)) 
           | (3U & (((((IData)(vlSelf->z80_top_direct_n__DOT__db2) 
                       >> 4U) & (- (IData)((IData)(z80_top_direct_n__DOT__alu___DOT__b2v_input_shift__DOT__SYNTHESIZED_WIRE_32)))) 
                     | (((IData)(vlSelf->z80_top_direct_n__DOT__db2) 
                         >> 3U) & (- (IData)((IData)(z80_top_direct_n__DOT__alu_shift_left))))) 
                    | (((IData)(vlSelf->z80_top_direct_n__DOT__db2) 
                        >> 5U) & (- (IData)((IData)(z80_top_direct_n__DOT__alu_shift_right)))))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__out74 
        = ((0x3fU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__out74)) 
           | (0xc0U & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi))) 
                        << 6U) & (IData)(vlSelf->z80_top_direct_n__DOT__db2))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__out75 
        = ((0xcfU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__out75)) 
           | (0x30U & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi))) 
                        << 4U) & (IData)(vlSelf->z80_top_direct_n__DOT__db2))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__out76 
        = ((0xf3U & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__out76)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi))) 
                       << 2U) & (IData)(vlSelf->z80_top_direct_n__DOT__db2))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__out77 
        = ((0xfcU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__out77)) 
           | (3U & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi))) 
                    & (IData)(vlSelf->z80_top_direct_n__DOT__db2))));
    z80_top_direct_n__DOT__alu_shift_in = (1U & (((
                                                   ((((IData)(
                                                              (0U 
                                                               == 
                                                               (0x1c0U 
                                                                & vlSelf->z80_top_direct_n__DOT__pla[3U]))) 
                                                      & ((IData)(vlSelf->z80_top_direct_n__DOT__db2) 
                                                         >> 7U)) 
                                                     | ((IData)(
                                                                (0x80U 
                                                                 == 
                                                                 (0x1c0U 
                                                                  & vlSelf->z80_top_direct_n__DOT__pla[3U]))) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__DFFE_inst_latch_cf))) 
                                                    | ((IData)(
                                                               (0x40U 
                                                                == 
                                                                (0x1c0U 
                                                                 & vlSelf->z80_top_direct_n__DOT__pla[3U]))) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__db2))) 
                                                   | ((IData)(
                                                              (0xc0U 
                                                               == 
                                                               (0x1c0U 
                                                                & vlSelf->z80_top_direct_n__DOT__pla[3U]))) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__DFFE_inst_latch_cf))) 
                                                  | ((IData)(
                                                             (0x140U 
                                                              == 
                                                              (0x1c0U 
                                                               & vlSelf->z80_top_direct_n__DOT__pla[3U]))) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__db2) 
                                                        >> 7U))) 
                                                 | (IData)(
                                                           (0x180U 
                                                            == 
                                                            (0x1c0U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[3U])))));
    z80_top_direct_n__DOT__db_hi_as__en3 = ((((((IData)(z80_top_direct_n__DOT__reg_file___DOT__db__en16) 
                                                | (IData)(z80_top_direct_n__DOT__reg_file___DOT__db__en22)) 
                                               | (IData)(z80_top_direct_n__DOT__reg_file___DOT__db_hi_as__out__en34)) 
                                              | (IData)(z80_top_direct_n__DOT__reg_file___DOT__db_hi_as__out__en35)) 
                                             | (IData)(z80_top_direct_n__DOT__reg_file___DOT__db_hi_as__out__en36)) 
                                            | (IData)(z80_top_direct_n__DOT__reg_file___DOT__db_hi_as__out__en37));
    vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__db__out__out1 
        = ((0x8fU & (IData)(vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__db__out__out1)) 
           | ((((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_oe) 
                & (IData)(vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_39)) 
               << 6U) | ((((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_oe) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__flags_yf)) 
                          << 5U) | (((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_oe) 
                                     & (IData)(z80_top_direct_n__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_23)) 
                                    << 4U))));
    z80_top_direct_n__DOT__alu_core_cf_in = (((~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf)) 
                                              & (IData)(vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_24)) 
                                             | ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf) 
                                                & (IData)(z80_top_direct_n__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_23)));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc_hi__DOT__db__out__out0 
        = ((0x3fU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc_hi__DOT__db__out__out0)) 
           | (0xc0U & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_40))) 
                        << 6U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc_hi__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc_hi__DOT__db__out__out1 
        = ((0xcfU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc_hi__DOT__db__out__out1)) 
           | (0x30U & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_40))) 
                        << 4U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc_hi__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc_hi__DOT__db__out__out2 
        = ((0xf3U & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc_hi__DOT__db__out__out2)) 
           | (0xcU & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_40))) 
                       << 2U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc_hi__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc_hi__DOT__db__out__out3 
        = ((0xfcU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc_hi__DOT__db__out__out3)) 
           | (3U & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_40))) 
                    & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc_hi__DOT__latch))));
    z80_top_direct_n__DOT__reg_file___DOT__db__en6 
        = (0xffU & ((((0xc0U & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_40))) 
                                << 6U)) | (0x30U & 
                                           ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_40))) 
                                            << 4U))) 
                     | (0xcU & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_40))) 
                                << 2U))) | (3U & (- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_40))))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc_lo__DOT__db__out__out0 
        = ((0x3fU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc_lo__DOT__db__out__out0)) 
           | (0xc0U & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_42))) 
                        << 6U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc_lo__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc_lo__DOT__db__out__out1 
        = ((0xcfU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc_lo__DOT__db__out__out1)) 
           | (0x30U & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_42))) 
                        << 4U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc_lo__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc_lo__DOT__db__out__out2 
        = ((0xf3U & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc_lo__DOT__db__out__out2)) 
           | (0xcU & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_42))) 
                       << 2U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc_lo__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc_lo__DOT__db__out__out3 
        = ((0xfcU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc_lo__DOT__db__out__out3)) 
           | (3U & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_42))) 
                    & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc_lo__DOT__latch))));
    z80_top_direct_n__DOT__reg_file___DOT__db__en7 
        = (0xffU & ((((0xc0U & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_42))) 
                                << 6U)) | (0x30U & 
                                           ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_42))) 
                                            << 4U))) 
                     | (0xcU & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_42))) 
                                << 2U))) | (3U & (- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_42))))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc2_hi__DOT__db__out__out0 
        = ((0x3fU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc2_hi__DOT__db__out__out0)) 
           | (0xc0U & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_36))) 
                        << 6U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc2_hi__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc2_hi__DOT__db__out__out1 
        = ((0xcfU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc2_hi__DOT__db__out__out1)) 
           | (0x30U & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_36))) 
                        << 4U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc2_hi__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc2_hi__DOT__db__out__out2 
        = ((0xf3U & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc2_hi__DOT__db__out__out2)) 
           | (0xcU & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_36))) 
                       << 2U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc2_hi__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc2_hi__DOT__db__out__out3 
        = ((0xfcU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc2_hi__DOT__db__out__out3)) 
           | (3U & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_36))) 
                    & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc2_hi__DOT__latch))));
    z80_top_direct_n__DOT__reg_file___DOT__db__en4 
        = (0xffU & ((((0xc0U & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_36))) 
                                << 6U)) | (0x30U & 
                                           ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_36))) 
                                            << 4U))) 
                     | (0xcU & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_36))) 
                                << 2U))) | (3U & (- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_36))))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc2_lo__DOT__db__out__out0 
        = ((0x3fU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc2_lo__DOT__db__out__out0)) 
           | (0xc0U & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_38))) 
                        << 6U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc2_lo__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc2_lo__DOT__db__out__out1 
        = ((0xcfU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc2_lo__DOT__db__out__out1)) 
           | (0x30U & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_38))) 
                        << 4U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc2_lo__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc2_lo__DOT__db__out__out2 
        = ((0xf3U & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc2_lo__DOT__db__out__out2)) 
           | (0xcU & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_38))) 
                       << 2U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc2_lo__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc2_lo__DOT__db__out__out3 
        = ((0xfcU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc2_lo__DOT__db__out__out3)) 
           | (3U & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_38))) 
                    & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc2_lo__DOT__latch))));
    z80_top_direct_n__DOT__reg_file___DOT__db__en5 
        = (0xffU & ((((0xc0U & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_38))) 
                                << 6U)) | (0x30U & 
                                           ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_38))) 
                                            << 4U))) 
                     | (0xcU & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_38))) 
                                << 2U))) | (3U & (- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_38))))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_sp_hi__DOT__db__out__out0 
        = ((0x3fU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_sp_hi__DOT__db__out__out0)) 
           | (0xc0U & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_76))) 
                        << 6U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_sp_hi__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_sp_hi__DOT__db__out__out1 
        = ((0xcfU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_sp_hi__DOT__db__out__out1)) 
           | (0x30U & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_76))) 
                        << 4U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_sp_hi__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_sp_hi__DOT__db__out__out2 
        = ((0xf3U & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_sp_hi__DOT__db__out__out2)) 
           | (0xcU & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_76))) 
                       << 2U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_sp_hi__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_sp_hi__DOT__db__out__out3 
        = ((0xfcU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_sp_hi__DOT__db__out__out3)) 
           | (3U & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_76))) 
                    & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_sp_hi__DOT__latch))));
    z80_top_direct_n__DOT__reg_file___DOT__db__en24 
        = (0xffU & ((((0xc0U & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_76))) 
                                << 6U)) | (0x30U & 
                                           ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_76))) 
                                            << 4U))) 
                     | (0xcU & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_76))) 
                                << 2U))) | (3U & (- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_76))))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_sp_lo__DOT__db__out__out0 
        = ((0x3fU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_sp_lo__DOT__db__out__out0)) 
           | (0xc0U & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_78))) 
                        << 6U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_sp_lo__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_sp_lo__DOT__db__out__out1 
        = ((0xcfU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_sp_lo__DOT__db__out__out1)) 
           | (0x30U & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_78))) 
                        << 4U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_sp_lo__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_sp_lo__DOT__db__out__out2 
        = ((0xf3U & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_sp_lo__DOT__db__out__out2)) 
           | (0xcU & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_78))) 
                       << 2U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_sp_lo__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_sp_lo__DOT__db__out__out3 
        = ((0xfcU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_sp_lo__DOT__db__out__out3)) 
           | (3U & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_78))) 
                    & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_sp_lo__DOT__latch))));
    z80_top_direct_n__DOT__reg_file___DOT__db__en25 
        = (0xffU & ((((0xc0U & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_78))) 
                                << 6U)) | (0x30U & 
                                           ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_78))) 
                                            << 4U))) 
                     | (0xcU & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_78))) 
                                << 2U))) | (3U & (- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_78))))));
    z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_32 
        = (((IData)(vlSelf->z80_top_direct_n__DOT__reg_sel_af) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
               >> 1U)) & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we)));
    z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_34 
        = (((~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we)) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo)) 
           & (IData)(vlSelf->z80_top_direct_n__DOT__reg_sel_af));
    z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_28 
        = (((IData)(vlSelf->z80_top_direct_n__DOT__reg_sel_af2) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
               >> 1U)) & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we)));
    z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_30 
        = (((~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we)) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo)) 
           & (IData)(vlSelf->z80_top_direct_n__DOT__reg_sel_af2));
    z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_64 
        = (((IData)(vlSelf->z80_top_direct_n__DOT__reg_sel_ix) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
               >> 1U)) & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we)));
    z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_66 
        = (((~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we)) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo)) 
           & (IData)(vlSelf->z80_top_direct_n__DOT__reg_sel_ix));
    z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_68 
        = (((IData)(vlSelf->z80_top_direct_n__DOT__reg_sel_iy) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
               >> 1U)) & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we)));
    z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_70 
        = (((~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we)) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo)) 
           & (IData)(vlSelf->z80_top_direct_n__DOT__reg_sel_iy));
    z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_48 
        = (((IData)(vlSelf->z80_top_direct_n__DOT__reg_sel_de) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
               >> 1U)) & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we)));
    z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_50 
        = (((~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we)) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo)) 
           & (IData)(vlSelf->z80_top_direct_n__DOT__reg_sel_de));
    z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_56 
        = (((IData)(vlSelf->z80_top_direct_n__DOT__reg_sel_hl) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
               >> 1U)) & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we)));
    z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_58 
        = (((~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we)) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo)) 
           & (IData)(vlSelf->z80_top_direct_n__DOT__reg_sel_hl));
    z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_44 
        = (((IData)(vlSelf->z80_top_direct_n__DOT__reg_sel_de2) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
               >> 1U)) & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we)));
    z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_46 
        = (((~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we)) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo)) 
           & (IData)(vlSelf->z80_top_direct_n__DOT__reg_sel_de2));
    z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_52 
        = (((IData)(vlSelf->z80_top_direct_n__DOT__reg_sel_hl2) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
               >> 1U)) & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we)));
    z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_54 
        = (((~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we)) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo)) 
           & (IData)(vlSelf->z80_top_direct_n__DOT__reg_sel_hl2));
    vlSelf->z80_top_direct_n__DOT__address_latch___DOT__abus__out__out0 
        = ((0x3fffU & (IData)(vlSelf->z80_top_direct_n__DOT__address_latch___DOT__abus__out__out0)) 
           | (0xc000U & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe))) 
                          << 0xeU) & (IData)(vlSelf->z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__address_ALTERA_SYNTHESIZED))));
    vlSelf->z80_top_direct_n__DOT__address_latch___DOT__abus__out__out1 
        = ((0xcfffU & (IData)(vlSelf->z80_top_direct_n__DOT__address_latch___DOT__abus__out__out1)) 
           | (0x3000U & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe))) 
                          << 0xcU) & (IData)(vlSelf->z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__address_ALTERA_SYNTHESIZED))));
    vlSelf->z80_top_direct_n__DOT__address_latch___DOT__abus__out__out2 
        = ((0xf3ffU & (IData)(vlSelf->z80_top_direct_n__DOT__address_latch___DOT__abus__out__out2)) 
           | (0xc00U & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe))) 
                         << 0xaU) & (IData)(vlSelf->z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__address_ALTERA_SYNTHESIZED))));
    vlSelf->z80_top_direct_n__DOT__address_latch___DOT__abus__out__out3 
        = ((0xfcffU & (IData)(vlSelf->z80_top_direct_n__DOT__address_latch___DOT__abus__out__out3)) 
           | (0x300U & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe))) 
                         << 8U) & (IData)(vlSelf->z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__address_ALTERA_SYNTHESIZED))));
    vlSelf->z80_top_direct_n__DOT__address_latch___DOT__abus__out__out4 
        = ((0xff3fU & (IData)(vlSelf->z80_top_direct_n__DOT__address_latch___DOT__abus__out__out4)) 
           | (0xc0U & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe))) 
                        << 6U) & (IData)(vlSelf->z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__address_ALTERA_SYNTHESIZED))));
    vlSelf->z80_top_direct_n__DOT__address_latch___DOT__abus__out__out5 
        = ((0xffcfU & (IData)(vlSelf->z80_top_direct_n__DOT__address_latch___DOT__abus__out__out5)) 
           | (0x30U & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe))) 
                        << 4U) & (IData)(vlSelf->z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__address_ALTERA_SYNTHESIZED))));
    vlSelf->z80_top_direct_n__DOT__address_latch___DOT__abus__out__out6 
        = ((0xfff3U & (IData)(vlSelf->z80_top_direct_n__DOT__address_latch___DOT__abus__out__out6)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe))) 
                       << 2U) & (IData)(vlSelf->z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__address_ALTERA_SYNTHESIZED))));
    vlSelf->z80_top_direct_n__DOT__address_latch___DOT__abus__out__out7 
        = ((0xfffcU & (IData)(vlSelf->z80_top_direct_n__DOT__address_latch___DOT__abus__out__out7)) 
           | (3U & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe))) 
                    & (IData)(vlSelf->z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__address_ALTERA_SYNTHESIZED))));
    vlSelf->z80_top_direct_n__DOT__alu___DOT__db_low__out0 
        = ((3U & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__db_low__out0)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_bs_oe))) 
                       << 2U) & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__b2v_input_bit_select__DOT__bs_out_low_ALTERA_SYNTHESIZED))));
    vlSelf->z80_top_direct_n__DOT__alu___DOT__db_low__out1 
        = ((0xcU & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__db_low__out1)) 
           | (3U & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_bs_oe))) 
                    & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__b2v_input_bit_select__DOT__bs_out_low_ALTERA_SYNTHESIZED))));
    vlSelf->z80_top_direct_n__DOT__alu___DOT__db_high__out14 
        = ((3U & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__db_high__out14)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_bs_oe))) 
                       << 2U) & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__b2v_input_bit_select__DOT__bs_out_high_ALTERA_SYNTHESIZED))));
    vlSelf->z80_top_direct_n__DOT__alu___DOT__db_high__out15 
        = ((0xcU & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__db_high__out15)) 
           | (3U & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_bs_oe))) 
                    & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__b2v_input_bit_select__DOT__bs_out_high_ALTERA_SYNTHESIZED))));
    vlSelf->z80_top_direct_n__DOT__sw1___DOT__db_down__out__out5 
        = ((0xf9U & (IData)(vlSelf->z80_top_direct_n__DOT__sw1___DOT__db_down__out__out5)) 
           | (6U & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1d))) 
                     << 1U) & (IData)(z80_top_direct_n__DOT__sw1___DOT__SYNTHESIZED_WIRE_2))));
    vlSelf->z80_top_direct_n__DOT__sw1___DOT__db_down__out__out6 
        = ((0xfeU & (IData)(vlSelf->z80_top_direct_n__DOT__sw1___DOT__db_down__out__out6)) 
           | ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1d) 
              & (IData)(z80_top_direct_n__DOT__sw1___DOT__SYNTHESIZED_WIRE_2)));
    vlSelf->z80_top_direct_n__DOT__alu___DOT__b2v_input_shift__DOT__out_low_ALTERA_SYNTHESIZED 
        = ((0xcU & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__b2v_input_shift__DOT__out_low_ALTERA_SYNTHESIZED)) 
           | ((((0xfffffffeU & ((IData)(vlSelf->z80_top_direct_n__DOT__db2) 
                                & ((IData)(z80_top_direct_n__DOT__alu___DOT__b2v_input_shift__DOT__SYNTHESIZED_WIRE_32) 
                                   << 1U))) | (((IData)(vlSelf->z80_top_direct_n__DOT__db2) 
                                                & (IData)(z80_top_direct_n__DOT__alu_shift_left)) 
                                               << 1U)) 
               | (0x7ffffffeU & (((IData)(vlSelf->z80_top_direct_n__DOT__db2) 
                                  >> 1U) & ((IData)(z80_top_direct_n__DOT__alu_shift_right) 
                                            << 1U)))) 
              | ((((IData)(vlSelf->z80_top_direct_n__DOT__db2) 
                   & (IData)(z80_top_direct_n__DOT__alu___DOT__b2v_input_shift__DOT__SYNTHESIZED_WIRE_32)) 
                  | ((IData)(z80_top_direct_n__DOT__alu_shift_in) 
                     & (IData)(z80_top_direct_n__DOT__alu_shift_left))) 
                 | (((IData)(vlSelf->z80_top_direct_n__DOT__db2) 
                     >> 1U) & (IData)(z80_top_direct_n__DOT__alu_shift_right)))));
    vlSelf->z80_top_direct_n__DOT__alu___DOT__b2v_input_shift__DOT__out_high_ALTERA_SYNTHESIZED 
        = ((3U & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__b2v_input_shift__DOT__out_high_ALTERA_SYNTHESIZED)) 
           | ((((0xffffff8U & (((IData)(vlSelf->z80_top_direct_n__DOT__db2) 
                                >> 4U) & ((IData)(z80_top_direct_n__DOT__alu___DOT__b2v_input_shift__DOT__SYNTHESIZED_WIRE_32) 
                                          << 3U))) 
                | (0x1ffffff8U & (((IData)(vlSelf->z80_top_direct_n__DOT__db2) 
                                   >> 3U) & ((IData)(z80_top_direct_n__DOT__alu_shift_left) 
                                             << 3U)))) 
               | (((IData)(z80_top_direct_n__DOT__alu_shift_in) 
                   & (IData)(z80_top_direct_n__DOT__alu_shift_right)) 
                  << 3U)) | (((0xffffffcU & (((IData)(vlSelf->z80_top_direct_n__DOT__db2) 
                                              >> 4U) 
                                             & ((IData)(z80_top_direct_n__DOT__alu___DOT__b2v_input_shift__DOT__SYNTHESIZED_WIRE_32) 
                                                << 2U))) 
                              | (0x1ffffffcU & (((IData)(vlSelf->z80_top_direct_n__DOT__db2) 
                                                 >> 3U) 
                                                & ((IData)(z80_top_direct_n__DOT__alu_shift_left) 
                                                   << 2U)))) 
                             | (0x7fffffcU & (((IData)(vlSelf->z80_top_direct_n__DOT__db2) 
                                               >> 5U) 
                                              & ((IData)(z80_top_direct_n__DOT__alu_shift_right) 
                                                 << 2U))))));
    z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__en70 
        = (0xc0U & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u))) 
                     << 6U) & (IData)(z80_top_direct_n__DOT__db_hi_as__en3)));
    z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__en71 
        = (0x30U & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u))) 
                     << 4U) & (IData)(z80_top_direct_n__DOT__db_hi_as__en3)));
    z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__en72 
        = (0xcU & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u))) 
                    << 2U) & (IData)(z80_top_direct_n__DOT__db_hi_as__en3)));
    z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__en73 
        = (3U & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u))) 
                 & (IData)(z80_top_direct_n__DOT__db_hi_as__en3)));
    z80_top_direct_n__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_0__DOT__SYNTHESIZED_WIRE_10 
        = (1U & (~ ((((IData)(z80_top_direct_n__DOT__alu_core_cf_in) 
                      & ((IData)(z80_top_direct_n__DOT__alu___DOT__alu_op2) 
                         | (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__alu_op1))) 
                     | ((IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__alu_op1) 
                        & (IData)(z80_top_direct_n__DOT__alu___DOT__alu_op2))) 
                    | (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af_hi__DOT__db__out__out0 
        = ((0x3fU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af_hi__DOT__db__out__out0)) 
           | (0xc0U & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_32))) 
                        << 6U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af_hi__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af_hi__DOT__db__out__out1 
        = ((0xcfU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af_hi__DOT__db__out__out1)) 
           | (0x30U & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_32))) 
                        << 4U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af_hi__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af_hi__DOT__db__out__out2 
        = ((0xf3U & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af_hi__DOT__db__out__out2)) 
           | (0xcU & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_32))) 
                       << 2U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af_hi__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af_hi__DOT__db__out__out3 
        = ((0xfcU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af_hi__DOT__db__out__out3)) 
           | (3U & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_32))) 
                    & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af_hi__DOT__latch))));
    z80_top_direct_n__DOT__reg_file___DOT__db__en2 
        = (0xffU & ((((0xc0U & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_32))) 
                                << 6U)) | (0x30U & 
                                           ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_32))) 
                                            << 4U))) 
                     | (0xcU & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_32))) 
                                << 2U))) | (3U & (- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_32))))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af_lo__DOT__db__out__out0 
        = ((0x3fU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af_lo__DOT__db__out__out0)) 
           | (0xc0U & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_34))) 
                        << 6U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af_lo__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af_lo__DOT__db__out__out1 
        = ((0xcfU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af_lo__DOT__db__out__out1)) 
           | (0x30U & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_34))) 
                        << 4U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af_lo__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af_lo__DOT__db__out__out2 
        = ((0xf3U & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af_lo__DOT__db__out__out2)) 
           | (0xcU & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_34))) 
                       << 2U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af_lo__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af_lo__DOT__db__out__out3 
        = ((0xfcU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af_lo__DOT__db__out__out3)) 
           | (3U & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_34))) 
                    & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af_lo__DOT__latch))));
    z80_top_direct_n__DOT__reg_file___DOT__db__en3 
        = (0xffU & ((((0xc0U & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_34))) 
                                << 6U)) | (0x30U & 
                                           ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_34))) 
                                            << 4U))) 
                     | (0xcU & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_34))) 
                                << 2U))) | (3U & (- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_34))))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af2_hi__DOT__db__out__out0 
        = ((0x3fU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af2_hi__DOT__db__out__out0)) 
           | (0xc0U & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_28))) 
                        << 6U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af2_hi__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af2_hi__DOT__db__out__out1 
        = ((0xcfU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af2_hi__DOT__db__out__out1)) 
           | (0x30U & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_28))) 
                        << 4U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af2_hi__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af2_hi__DOT__db__out__out2 
        = ((0xf3U & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af2_hi__DOT__db__out__out2)) 
           | (0xcU & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_28))) 
                       << 2U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af2_hi__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af2_hi__DOT__db__out__out3 
        = ((0xfcU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af2_hi__DOT__db__out__out3)) 
           | (3U & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_28))) 
                    & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af2_hi__DOT__latch))));
    z80_top_direct_n__DOT__reg_file___DOT__db__en0 
        = (0xffU & ((((0xc0U & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_28))) 
                                << 6U)) | (0x30U & 
                                           ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_28))) 
                                            << 4U))) 
                     | (0xcU & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_28))) 
                                << 2U))) | (3U & (- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_28))))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af2_lo__DOT__db__out__out0 
        = ((0x3fU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af2_lo__DOT__db__out__out0)) 
           | (0xc0U & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_30))) 
                        << 6U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af2_lo__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af2_lo__DOT__db__out__out1 
        = ((0xcfU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af2_lo__DOT__db__out__out1)) 
           | (0x30U & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_30))) 
                        << 4U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af2_lo__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af2_lo__DOT__db__out__out2 
        = ((0xf3U & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af2_lo__DOT__db__out__out2)) 
           | (0xcU & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_30))) 
                       << 2U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af2_lo__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af2_lo__DOT__db__out__out3 
        = ((0xfcU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af2_lo__DOT__db__out__out3)) 
           | (3U & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_30))) 
                    & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af2_lo__DOT__latch))));
    z80_top_direct_n__DOT__reg_file___DOT__db__en1 
        = (0xffU & ((((0xc0U & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_30))) 
                                << 6U)) | (0x30U & 
                                           ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_30))) 
                                            << 4U))) 
                     | (0xcU & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_30))) 
                                << 2U))) | (3U & (- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_30))))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ix_hi__DOT__db__out__out0 
        = ((0x3fU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ix_hi__DOT__db__out__out0)) 
           | (0xc0U & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_64))) 
                        << 6U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ix_hi__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ix_hi__DOT__db__out__out1 
        = ((0xcfU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ix_hi__DOT__db__out__out1)) 
           | (0x30U & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_64))) 
                        << 4U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ix_hi__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ix_hi__DOT__db__out__out2 
        = ((0xf3U & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ix_hi__DOT__db__out__out2)) 
           | (0xcU & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_64))) 
                       << 2U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ix_hi__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ix_hi__DOT__db__out__out3 
        = ((0xfcU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ix_hi__DOT__db__out__out3)) 
           | (3U & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_64))) 
                    & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ix_hi__DOT__latch))));
    z80_top_direct_n__DOT__reg_file___DOT__db__en18 
        = (0xffU & ((((0xc0U & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_64))) 
                                << 6U)) | (0x30U & 
                                           ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_64))) 
                                            << 4U))) 
                     | (0xcU & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_64))) 
                                << 2U))) | (3U & (- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_64))))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ix_lo__DOT__db__out__out0 
        = ((0x3fU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ix_lo__DOT__db__out__out0)) 
           | (0xc0U & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_66))) 
                        << 6U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ix_lo__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ix_lo__DOT__db__out__out1 
        = ((0xcfU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ix_lo__DOT__db__out__out1)) 
           | (0x30U & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_66))) 
                        << 4U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ix_lo__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ix_lo__DOT__db__out__out2 
        = ((0xf3U & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ix_lo__DOT__db__out__out2)) 
           | (0xcU & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_66))) 
                       << 2U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ix_lo__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ix_lo__DOT__db__out__out3 
        = ((0xfcU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ix_lo__DOT__db__out__out3)) 
           | (3U & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_66))) 
                    & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ix_lo__DOT__latch))));
    z80_top_direct_n__DOT__reg_file___DOT__db__en19 
        = (0xffU & ((((0xc0U & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_66))) 
                                << 6U)) | (0x30U & 
                                           ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_66))) 
                                            << 4U))) 
                     | (0xcU & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_66))) 
                                << 2U))) | (3U & (- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_66))))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_iy_hi__DOT__db__out__out0 
        = ((0x3fU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_iy_hi__DOT__db__out__out0)) 
           | (0xc0U & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_68))) 
                        << 6U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_iy_hi__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_iy_hi__DOT__db__out__out1 
        = ((0xcfU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_iy_hi__DOT__db__out__out1)) 
           | (0x30U & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_68))) 
                        << 4U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_iy_hi__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_iy_hi__DOT__db__out__out2 
        = ((0xf3U & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_iy_hi__DOT__db__out__out2)) 
           | (0xcU & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_68))) 
                       << 2U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_iy_hi__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_iy_hi__DOT__db__out__out3 
        = ((0xfcU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_iy_hi__DOT__db__out__out3)) 
           | (3U & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_68))) 
                    & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_iy_hi__DOT__latch))));
    z80_top_direct_n__DOT__reg_file___DOT__db__en20 
        = (0xffU & ((((0xc0U & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_68))) 
                                << 6U)) | (0x30U & 
                                           ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_68))) 
                                            << 4U))) 
                     | (0xcU & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_68))) 
                                << 2U))) | (3U & (- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_68))))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_iy_lo__DOT__db__out__out0 
        = ((0x3fU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_iy_lo__DOT__db__out__out0)) 
           | (0xc0U & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_70))) 
                        << 6U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_iy_lo__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_iy_lo__DOT__db__out__out1 
        = ((0xcfU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_iy_lo__DOT__db__out__out1)) 
           | (0x30U & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_70))) 
                        << 4U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_iy_lo__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_iy_lo__DOT__db__out__out2 
        = ((0xf3U & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_iy_lo__DOT__db__out__out2)) 
           | (0xcU & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_70))) 
                       << 2U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_iy_lo__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_iy_lo__DOT__db__out__out3 
        = ((0xfcU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_iy_lo__DOT__db__out__out3)) 
           | (3U & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_70))) 
                    & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_iy_lo__DOT__latch))));
    z80_top_direct_n__DOT__reg_file___DOT__db__en21 
        = (0xffU & ((((0xc0U & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_70))) 
                                << 6U)) | (0x30U & 
                                           ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_70))) 
                                            << 4U))) 
                     | (0xcU & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_70))) 
                                << 2U))) | (3U & (- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_70))))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de_hi__DOT__db__out__out0 
        = ((0x3fU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de_hi__DOT__db__out__out0)) 
           | (0xc0U & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_48))) 
                        << 6U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de_hi__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de_hi__DOT__db__out__out1 
        = ((0xcfU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de_hi__DOT__db__out__out1)) 
           | (0x30U & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_48))) 
                        << 4U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de_hi__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de_hi__DOT__db__out__out2 
        = ((0xf3U & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de_hi__DOT__db__out__out2)) 
           | (0xcU & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_48))) 
                       << 2U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de_hi__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de_hi__DOT__db__out__out3 
        = ((0xfcU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de_hi__DOT__db__out__out3)) 
           | (3U & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_48))) 
                    & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de_hi__DOT__latch))));
    z80_top_direct_n__DOT__reg_file___DOT__db__en10 
        = (0xffU & ((((0xc0U & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_48))) 
                                << 6U)) | (0x30U & 
                                           ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_48))) 
                                            << 4U))) 
                     | (0xcU & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_48))) 
                                << 2U))) | (3U & (- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_48))))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de_lo__DOT__db__out__out0 
        = ((0x3fU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de_lo__DOT__db__out__out0)) 
           | (0xc0U & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_50))) 
                        << 6U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de_lo__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de_lo__DOT__db__out__out1 
        = ((0xcfU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de_lo__DOT__db__out__out1)) 
           | (0x30U & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_50))) 
                        << 4U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de_lo__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de_lo__DOT__db__out__out2 
        = ((0xf3U & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de_lo__DOT__db__out__out2)) 
           | (0xcU & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_50))) 
                       << 2U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de_lo__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de_lo__DOT__db__out__out3 
        = ((0xfcU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de_lo__DOT__db__out__out3)) 
           | (3U & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_50))) 
                    & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de_lo__DOT__latch))));
    z80_top_direct_n__DOT__reg_file___DOT__db__en11 
        = (0xffU & ((((0xc0U & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_50))) 
                                << 6U)) | (0x30U & 
                                           ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_50))) 
                                            << 4U))) 
                     | (0xcU & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_50))) 
                                << 2U))) | (3U & (- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_50))))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl_hi__DOT__db__out__out0 
        = ((0x3fU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl_hi__DOT__db__out__out0)) 
           | (0xc0U & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_56))) 
                        << 6U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl_hi__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl_hi__DOT__db__out__out1 
        = ((0xcfU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl_hi__DOT__db__out__out1)) 
           | (0x30U & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_56))) 
                        << 4U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl_hi__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl_hi__DOT__db__out__out2 
        = ((0xf3U & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl_hi__DOT__db__out__out2)) 
           | (0xcU & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_56))) 
                       << 2U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl_hi__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl_hi__DOT__db__out__out3 
        = ((0xfcU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl_hi__DOT__db__out__out3)) 
           | (3U & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_56))) 
                    & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl_hi__DOT__latch))));
    z80_top_direct_n__DOT__reg_file___DOT__db__en14 
        = (0xffU & ((((0xc0U & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_56))) 
                                << 6U)) | (0x30U & 
                                           ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_56))) 
                                            << 4U))) 
                     | (0xcU & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_56))) 
                                << 2U))) | (3U & (- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_56))))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl_lo__DOT__db__out__out0 
        = ((0x3fU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl_lo__DOT__db__out__out0)) 
           | (0xc0U & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_58))) 
                        << 6U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl_lo__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl_lo__DOT__db__out__out1 
        = ((0xcfU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl_lo__DOT__db__out__out1)) 
           | (0x30U & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_58))) 
                        << 4U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl_lo__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl_lo__DOT__db__out__out2 
        = ((0xf3U & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl_lo__DOT__db__out__out2)) 
           | (0xcU & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_58))) 
                       << 2U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl_lo__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl_lo__DOT__db__out__out3 
        = ((0xfcU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl_lo__DOT__db__out__out3)) 
           | (3U & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_58))) 
                    & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl_lo__DOT__latch))));
    z80_top_direct_n__DOT__reg_file___DOT__db__en15 
        = (0xffU & ((((0xc0U & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_58))) 
                                << 6U)) | (0x30U & 
                                           ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_58))) 
                                            << 4U))) 
                     | (0xcU & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_58))) 
                                << 2U))) | (3U & (- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_58))))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de2_hi__DOT__db__out__out0 
        = ((0x3fU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de2_hi__DOT__db__out__out0)) 
           | (0xc0U & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_44))) 
                        << 6U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de2_hi__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de2_hi__DOT__db__out__out1 
        = ((0xcfU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de2_hi__DOT__db__out__out1)) 
           | (0x30U & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_44))) 
                        << 4U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de2_hi__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de2_hi__DOT__db__out__out2 
        = ((0xf3U & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de2_hi__DOT__db__out__out2)) 
           | (0xcU & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_44))) 
                       << 2U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de2_hi__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de2_hi__DOT__db__out__out3 
        = ((0xfcU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de2_hi__DOT__db__out__out3)) 
           | (3U & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_44))) 
                    & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de2_hi__DOT__latch))));
    z80_top_direct_n__DOT__reg_file___DOT__db__en8 
        = (0xffU & ((((0xc0U & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_44))) 
                                << 6U)) | (0x30U & 
                                           ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_44))) 
                                            << 4U))) 
                     | (0xcU & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_44))) 
                                << 2U))) | (3U & (- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_44))))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de2_lo__DOT__db__out__out0 
        = ((0x3fU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de2_lo__DOT__db__out__out0)) 
           | (0xc0U & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_46))) 
                        << 6U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de2_lo__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de2_lo__DOT__db__out__out1 
        = ((0xcfU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de2_lo__DOT__db__out__out1)) 
           | (0x30U & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_46))) 
                        << 4U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de2_lo__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de2_lo__DOT__db__out__out2 
        = ((0xf3U & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de2_lo__DOT__db__out__out2)) 
           | (0xcU & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_46))) 
                       << 2U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de2_lo__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de2_lo__DOT__db__out__out3 
        = ((0xfcU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de2_lo__DOT__db__out__out3)) 
           | (3U & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_46))) 
                    & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de2_lo__DOT__latch))));
    z80_top_direct_n__DOT__reg_file___DOT__db__en9 
        = (0xffU & ((((0xc0U & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_46))) 
                                << 6U)) | (0x30U & 
                                           ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_46))) 
                                            << 4U))) 
                     | (0xcU & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_46))) 
                                << 2U))) | (3U & (- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_46))))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl2_hi__DOT__db__out__out0 
        = ((0x3fU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl2_hi__DOT__db__out__out0)) 
           | (0xc0U & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_52))) 
                        << 6U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl2_hi__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl2_hi__DOT__db__out__out1 
        = ((0xcfU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl2_hi__DOT__db__out__out1)) 
           | (0x30U & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_52))) 
                        << 4U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl2_hi__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl2_hi__DOT__db__out__out2 
        = ((0xf3U & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl2_hi__DOT__db__out__out2)) 
           | (0xcU & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_52))) 
                       << 2U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl2_hi__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl2_hi__DOT__db__out__out3 
        = ((0xfcU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl2_hi__DOT__db__out__out3)) 
           | (3U & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_52))) 
                    & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl2_hi__DOT__latch))));
    z80_top_direct_n__DOT__reg_file___DOT__db__en12 
        = (0xffU & ((((0xc0U & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_52))) 
                                << 6U)) | (0x30U & 
                                           ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_52))) 
                                            << 4U))) 
                     | (0xcU & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_52))) 
                                << 2U))) | (3U & (- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_52))))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl2_lo__DOT__db__out__out0 
        = ((0x3fU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl2_lo__DOT__db__out__out0)) 
           | (0xc0U & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_54))) 
                        << 6U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl2_lo__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl2_lo__DOT__db__out__out1 
        = ((0xcfU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl2_lo__DOT__db__out__out1)) 
           | (0x30U & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_54))) 
                        << 4U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl2_lo__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl2_lo__DOT__db__out__out2 
        = ((0xf3U & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl2_lo__DOT__db__out__out2)) 
           | (0xcU & (((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_54))) 
                       << 2U) & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl2_lo__DOT__latch))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl2_lo__DOT__db__out__out3 
        = ((0xfcU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl2_lo__DOT__db__out__out3)) 
           | (3U & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_54))) 
                    & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl2_lo__DOT__latch))));
    z80_top_direct_n__DOT__reg_file___DOT__db__en13 
        = (0xffU & ((((0xc0U & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_54))) 
                                << 6U)) | (0x30U & 
                                           ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_54))) 
                                            << 4U))) 
                     | (0xcU & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_54))) 
                                << 2U))) | (3U & (- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_54))))));
    z80_top_direct_n__DOT____Vcelloutt__address_latch___abus__out 
        = ((((((((0xc000U & ((IData)(vlSelf->z80_top_direct_n__DOT__address_latch___DOT__abus__out__out0) 
                             & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe))) 
                                << 0xeU))) | (0x3000U 
                                              & ((IData)(vlSelf->z80_top_direct_n__DOT__address_latch___DOT__abus__out__out1) 
                                                 & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe))) 
                                                    << 0xcU)))) 
                | (0xc00U & ((IData)(vlSelf->z80_top_direct_n__DOT__address_latch___DOT__abus__out__out2) 
                             & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe))) 
                                << 0xaU)))) | (0x300U 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__address_latch___DOT__abus__out__out3) 
                                                  & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe))) 
                                                     << 8U)))) 
              | (0xc0U & ((IData)(vlSelf->z80_top_direct_n__DOT__address_latch___DOT__abus__out__out4) 
                          & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe))) 
                             << 6U)))) | (0x30U & ((IData)(vlSelf->z80_top_direct_n__DOT__address_latch___DOT__abus__out__out5) 
                                                   & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe))) 
                                                      << 4U)))) 
            | (0xcU & ((IData)(vlSelf->z80_top_direct_n__DOT__address_latch___DOT__abus__out__out6) 
                       & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe))) 
                          << 2U)))) | (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__address_latch___DOT__abus__out__out7) 
                                             & (- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe))))));
    vlSelf->z80_top_direct_n__DOT__alu___DOT__db_low__out8 
        = ((3U & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__db_low__out8)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe))) 
                       << 2U) & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__b2v_input_shift__DOT__out_low_ALTERA_SYNTHESIZED))));
    vlSelf->z80_top_direct_n__DOT__alu___DOT__db_low__out9 
        = ((0xcU & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__db_low__out9)) 
           | (3U & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe))) 
                    & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__b2v_input_shift__DOT__out_low_ALTERA_SYNTHESIZED))));
    vlSelf->z80_top_direct_n__DOT__alu___DOT__db_high__out22 
        = ((3U & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__db_high__out22)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe))) 
                       << 2U) & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__b2v_input_shift__DOT__out_high_ALTERA_SYNTHESIZED))));
    vlSelf->z80_top_direct_n__DOT__alu___DOT__db_high__out23 
        = ((0xcU & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__db_high__out23)) 
           | (3U & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe))) 
                    & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__b2v_input_shift__DOT__out_high_ALTERA_SYNTHESIZED))));
    vlSelf->z80_top_direct_n__DOT__alu___DOT__b2v_core__DOT__result_ALTERA_SYNTHESIZED 
        = ((0xeU & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__b2v_core__DOT__result_ALTERA_SYNTHESIZED)) 
           | (((((IData)(z80_top_direct_n__DOT__alu___DOT__alu_op2) 
                 | (IData)(z80_top_direct_n__DOT__alu_core_cf_in)) 
                | (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__alu_op1)) 
               & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V) 
                  | (IData)(z80_top_direct_n__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_0__DOT__SYNTHESIZED_WIRE_10))) 
              | (((IData)(z80_top_direct_n__DOT__alu_core_cf_in) 
                  & (IData)(z80_top_direct_n__DOT__alu___DOT__alu_op2)) 
                 & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__alu_op1))));
    z80_top_direct_n__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_0 
        = (1U & (~ ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R) 
                    | (IData)(z80_top_direct_n__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_0__DOT__SYNTHESIZED_WIRE_10))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__en 
        = ((((((((((((((((((((IData)(z80_top_direct_n__DOT__reg_file___DOT__db__en0) 
                             | (IData)(z80_top_direct_n__DOT__reg_file___DOT__db__en2)) 
                            | (IData)(z80_top_direct_n__DOT__reg_file___DOT__db__en4)) 
                           | (IData)(z80_top_direct_n__DOT__reg_file___DOT__db__en6)) 
                          | (IData)(z80_top_direct_n__DOT__reg_file___DOT__db__en8)) 
                         | (IData)(z80_top_direct_n__DOT__reg_file___DOT__db__en10)) 
                        | (IData)(z80_top_direct_n__DOT__reg_file___DOT__db__en12)) 
                       | (IData)(z80_top_direct_n__DOT__reg_file___DOT__db__en14)) 
                      | (IData)(z80_top_direct_n__DOT__reg_file___DOT__db__en18)) 
                     | (IData)(z80_top_direct_n__DOT__reg_file___DOT__db__en20)) 
                    | (IData)(z80_top_direct_n__DOT__reg_file___DOT__db__en24)) 
                   | (IData)(z80_top_direct_n__DOT__reg_file___DOT__db__en26)) 
                  | (IData)(z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__en70)) 
                 | (IData)(z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__en71)) 
                | (IData)(z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__en72)) 
               | (IData)(z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__en73)) 
              | (IData)(z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__en74)) 
             | (IData)(z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__en75)) 
            | (IData)(z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__en76)) 
           | (IData)(z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__en77));
    z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__en 
        = ((((((((((((((((((((IData)(z80_top_direct_n__DOT__reg_file___DOT__db__en1) 
                             | (IData)(z80_top_direct_n__DOT__reg_file___DOT__db__en3)) 
                            | (IData)(z80_top_direct_n__DOT__reg_file___DOT__db__en5)) 
                           | (IData)(z80_top_direct_n__DOT__reg_file___DOT__db__en7)) 
                          | (IData)(z80_top_direct_n__DOT__reg_file___DOT__db__en9)) 
                         | (IData)(z80_top_direct_n__DOT__reg_file___DOT__db__en11)) 
                        | (IData)(z80_top_direct_n__DOT__reg_file___DOT__db__en13)) 
                       | (IData)(z80_top_direct_n__DOT__reg_file___DOT__db__en15)) 
                      | (IData)(z80_top_direct_n__DOT__reg_file___DOT__db__en19)) 
                     | (IData)(z80_top_direct_n__DOT__reg_file___DOT__db__en21)) 
                    | (IData)(z80_top_direct_n__DOT__reg_file___DOT__db__en25)) 
                   | (IData)(z80_top_direct_n__DOT__reg_file___DOT__db__en27)) 
                  | (IData)(z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__en50)) 
                 | (IData)(z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__en51)) 
                | (IData)(z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__en52)) 
               | (IData)(z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__en53)) 
              | (IData)(z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__en54)) 
             | (IData)(z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__en55)) 
            | (IData)(z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__en56)) 
           | (IData)(z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__en57));
    vlSelf->z80_top_direct_n__DOT__db_hi_as = (0xffU 
                                               & ((((((((((((0xc0U 
                                                             & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ir_hi__DOT__db__out__out0) 
                                                                & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_60))) 
                                                                   << 6U))) 
                                                            | (0x30U 
                                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ir_hi__DOT__db__out__out1) 
                                                                  & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_60))) 
                                                                     << 4U)))) 
                                                           | (0xcU 
                                                              & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ir_hi__DOT__db__out__out2) 
                                                                 & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_60))) 
                                                                    << 2U)))) 
                                                          | (3U 
                                                             & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ir_hi__DOT__db__out__out3) 
                                                                & (- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_60)))))) 
                                                         & (IData)(z80_top_direct_n__DOT__reg_file___DOT__db__en16)) 
                                                        | (((((0xc0U 
                                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_pc_hi__DOT__db__out__out0) 
                                                                  & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_72))) 
                                                                     << 6U))) 
                                                              | (0x30U 
                                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_pc_hi__DOT__db__out__out1) 
                                                                    & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_72))) 
                                                                       << 4U)))) 
                                                             | (0xcU 
                                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_pc_hi__DOT__db__out__out2) 
                                                                   & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_72))) 
                                                                      << 2U)))) 
                                                            | (3U 
                                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_pc_hi__DOT__db__out__out3) 
                                                                  & (- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_72)))))) 
                                                           & (IData)(z80_top_direct_n__DOT__reg_file___DOT__db__en22))) 
                                                       | ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__db_hi_as__out__out34) 
                                                          & (IData)(z80_top_direct_n__DOT__reg_file___DOT__db_hi_as__out__en34))) 
                                                      | ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__db_hi_as__out__out35) 
                                                         & (IData)(z80_top_direct_n__DOT__reg_file___DOT__db_hi_as__out__en35))) 
                                                     | ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__db_hi_as__out__out36) 
                                                        & (IData)(z80_top_direct_n__DOT__reg_file___DOT__db_hi_as__out__en36))) 
                                                    | ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__db_hi_as__out__out37) 
                                                       & (IData)(z80_top_direct_n__DOT__reg_file___DOT__db_hi_as__out__en37))) 
                                                   & (IData)(z80_top_direct_n__DOT__db_hi_as__en3)) 
                                                  | (((IData)(z80_top_direct_n__DOT____Vcelloutt__address_latch___abus__out) 
                                                      & (IData)(z80_top_direct_n__DOT__abus__en7)) 
                                                     >> 8U)));
    vlSelf->z80_top_direct_n__DOT__alu___DOT__db_low 
        = ((((((((((0xcU & ((IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__db_low__out0) 
                            & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_bs_oe))) 
                               << 2U))) | (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__db_low__out1) 
                                                 & (- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_bs_oe)))))) 
                  | (0xcU & ((IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__db_low__out2) 
                             & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_oe))) 
                                << 2U)))) | (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__db_low__out3) 
                                                   & (- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_oe)))))) 
                | (0xcU & ((IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__db_low__out4) 
                           & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe))) 
                              << 2U)))) | (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__db_low__out5) 
                                                 & (- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe)))))) 
              | (0xcU & ((IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__db_low__out6) 
                         & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_oe))) 
                            << 2U)))) | (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__db_low__out7) 
                                               & (- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_oe)))))) 
            | (0xcU & ((IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__db_low__out8) 
                       & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe))) 
                          << 2U)))) | (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__db_low__out9) 
                                             & (- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe))))));
    z80_top_direct_n__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_1__DOT__SYNTHESIZED_WIRE_10 
        = (1U & (~ ((((IData)(z80_top_direct_n__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_0) 
                      & (((IData)(z80_top_direct_n__DOT__alu___DOT__alu_op2) 
                          | (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__alu_op1)) 
                         >> 1U)) | (((IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__alu_op1) 
                                     & (IData)(z80_top_direct_n__DOT__alu___DOT__alu_op2)) 
                                    >> 1U)) | (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S))));
    z80_top_direct_n__DOT__reg_file___DOT__db_lo_ds__out__en84 
        = (0xc0U & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo))) 
                     << 6U) & (IData)(z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__en)));
    z80_top_direct_n__DOT__reg_file___DOT__db_lo_ds__out__en85 
        = (0x30U & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo))) 
                     << 4U) & (IData)(z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__en)));
    z80_top_direct_n__DOT__reg_file___DOT__db_lo_ds__out__en86 
        = (0xcU & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo))) 
                    << 2U) & (IData)(z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__en)));
    z80_top_direct_n__DOT__reg_file___DOT__db_lo_ds__out__en87 
        = (3U & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo))) 
                 & (IData)(z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__en)));
    z80_top_direct_n__DOT__reg_file___DOT__db_lo_as__out__en80 
        = (0xc0U & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4d))) 
                     << 6U) & (IData)(z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__en)));
    z80_top_direct_n__DOT__reg_file___DOT__db_lo_as__out__en81 
        = (0x30U & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4d))) 
                     << 4U) & (IData)(z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__en)));
    z80_top_direct_n__DOT__reg_file___DOT__db_lo_as__out__en82 
        = (0xcU & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4d))) 
                    << 2U) & (IData)(z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__en)));
    z80_top_direct_n__DOT__reg_file___DOT__db_lo_as__out__en83 
        = (3U & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4d))) 
                 & (IData)(z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__en)));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__out70 
        = ((0x3fU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__out70)) 
           | (0xc0U & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u))) 
                        << 6U) & (IData)(vlSelf->z80_top_direct_n__DOT__db_hi_as))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__out71 
        = ((0xcfU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__out71)) 
           | (0x30U & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u))) 
                        << 4U) & (IData)(vlSelf->z80_top_direct_n__DOT__db_hi_as))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__out72 
        = ((0xf3U & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__out72)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u))) 
                       << 2U) & (IData)(vlSelf->z80_top_direct_n__DOT__db_hi_as))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__out73 
        = ((0xfcU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__out73)) 
           | (3U & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u))) 
                    & (IData)(vlSelf->z80_top_direct_n__DOT__db_hi_as))));
    vlSelf->z80_top_direct_n__DOT__alu___DOT__b2v_core__DOT__result_ALTERA_SYNTHESIZED 
        = ((0xdU & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__b2v_core__DOT__result_ALTERA_SYNTHESIZED)) 
           | (((((0xfffffffeU & (IData)(z80_top_direct_n__DOT__alu___DOT__alu_op2)) 
                 | ((IData)(z80_top_direct_n__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_0) 
                    << 1U)) | (0xfffffffeU & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__alu_op1))) 
               & (((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V) 
                   | (IData)(z80_top_direct_n__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_1__DOT__SYNTHESIZED_WIRE_10)) 
                  << 1U)) | (0xfffffffeU & ((((IData)(z80_top_direct_n__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_0) 
                                              << 1U) 
                                             & (IData)(z80_top_direct_n__DOT__alu___DOT__alu_op2)) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__alu_op1)))));
    z80_top_direct_n__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_1 
        = (1U & (~ ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R) 
                    | (IData)(z80_top_direct_n__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_1__DOT__SYNTHESIZED_WIRE_10))));
    vlSelf->z80_top_direct_n__DOT__db_lo_ds__en6 = 
        ((((IData)(z80_top_direct_n__DOT__reg_file___DOT__db_lo_ds__out__en84) 
           | (IData)(z80_top_direct_n__DOT__reg_file___DOT__db_lo_ds__out__en85)) 
          | (IData)(z80_top_direct_n__DOT__reg_file___DOT__db_lo_ds__out__en86)) 
         | (IData)(z80_top_direct_n__DOT__reg_file___DOT__db_lo_ds__out__en87));
    vlSelf->z80_top_direct_n__DOT__db1 = (((((((((0xc0U 
                                                  & ((IData)(vlSelf->z80_top_direct_n__DOT__alu_control___DOT__db__out__out0) 
                                                     & ((- (IData)((IData)(z80_top_direct_n__DOT__alu_control___DOT__SYNTHESIZED_WIRE_2))) 
                                                        << 6U))) 
                                                 | (0x30U 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__alu_control___DOT__db__out__out1) 
                                                       & ((- (IData)((IData)(z80_top_direct_n__DOT__alu_control___DOT__SYNTHESIZED_WIRE_2))) 
                                                          << 4U)))) 
                                                | (0xcU 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__alu_control___DOT__db__out__out2) 
                                                      & ((- (IData)((IData)(z80_top_direct_n__DOT__alu_control___DOT__SYNTHESIZED_WIRE_2))) 
                                                         << 2U)))) 
                                               | (3U 
                                                  & ((IData)(vlSelf->z80_top_direct_n__DOT__alu_control___DOT__db__out__out3) 
                                                     & (- (IData)((IData)(z80_top_direct_n__DOT__alu_control___DOT__SYNTHESIZED_WIRE_2)))))) 
                                              & ((((0xc0U 
                                                    & ((- (IData)((IData)(z80_top_direct_n__DOT__alu_control___DOT__SYNTHESIZED_WIRE_2))) 
                                                       << 6U)) 
                                                   | (0x30U 
                                                      & ((- (IData)((IData)(z80_top_direct_n__DOT__alu_control___DOT__SYNTHESIZED_WIRE_2))) 
                                                         << 4U))) 
                                                  | (0xcU 
                                                     & ((- (IData)((IData)(z80_top_direct_n__DOT__alu_control___DOT__SYNTHESIZED_WIRE_2))) 
                                                        << 2U))) 
                                                 | (3U 
                                                    & (- (IData)((IData)(z80_top_direct_n__DOT__alu_control___DOT__SYNTHESIZED_WIRE_2)))))) 
                                             | ((((((IData)(vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__db__out__out0) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_oe) 
                                                       << 7U)) 
                                                   | (0x70U 
                                                      & ((IData)(vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__db__out__out1) 
                                                         & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_oe))) 
                                                            << 4U)))) 
                                                  | (0xeU 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__db__out__out2) 
                                                        & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_oe))) 
                                                           << 1U)))) 
                                                 | ((IData)(vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__db__out__out3) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_oe))) 
                                                & (((((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_oe) 
                                                      << 7U) 
                                                     | (0x70U 
                                                        & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_oe))) 
                                                           << 4U))) 
                                                    | (0xeU 
                                                       & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_oe))) 
                                                          << 1U))) 
                                                   | (IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_oe)))) 
                                            | ((((((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__db_lo_ds__out__out84) 
                                                   & (IData)(z80_top_direct_n__DOT__reg_file___DOT__db_lo_ds__out__en84)) 
                                                  | ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__db_lo_ds__out__out85) 
                                                     & (IData)(z80_top_direct_n__DOT__reg_file___DOT__db_lo_ds__out__en85))) 
                                                 | ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__db_lo_ds__out__out86) 
                                                    & (IData)(z80_top_direct_n__DOT__reg_file___DOT__db_lo_ds__out__en86))) 
                                                | ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__db_lo_ds__out__out87) 
                                                   & (IData)(z80_top_direct_n__DOT__reg_file___DOT__db_lo_ds__out__en87))) 
                                               & (IData)(vlSelf->z80_top_direct_n__DOT__db_lo_ds__en6))) 
                                           | ((((((IData)(vlSelf->z80_top_direct_n__DOT__sw2___DOT__db_up__out__out4) 
                                                  & (IData)(z80_top_direct_n__DOT__sw2___DOT__db_up__out__en4)) 
                                                 | ((IData)(vlSelf->z80_top_direct_n__DOT__sw2___DOT__db_up__out__out5) 
                                                    & (IData)(z80_top_direct_n__DOT__sw2___DOT__db_up__out__en5))) 
                                                | ((IData)(vlSelf->z80_top_direct_n__DOT__sw2___DOT__db_up__out__out6) 
                                                   & (IData)(z80_top_direct_n__DOT__sw2___DOT__db_up__out__en6))) 
                                               | ((IData)(vlSelf->z80_top_direct_n__DOT__sw2___DOT__db_up__out__out7) 
                                                  & (IData)(z80_top_direct_n__DOT__sw2___DOT__db_up__out__en7))) 
                                              & (IData)(vlSelf->z80_top_direct_n__DOT__db_up__en9))) 
                                          | ((((((0xc0U 
                                                  & ((IData)(vlSelf->z80_top_direct_n__DOT__sw1___DOT__db_down__out__out4) 
                                                     & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1d))) 
                                                        << 6U))) 
                                                 | (6U 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sw1___DOT__db_down__out__out5) 
                                                       & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1d))) 
                                                          << 1U)))) 
                                                | ((IData)(vlSelf->z80_top_direct_n__DOT__sw1___DOT__db_down__out__out6) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_1d))) 
                                               | ((IData)(vlSelf->z80_top_direct_n__DOT__sw1___DOT__db_down__out__out7) 
                                                  & (IData)(z80_top_direct_n__DOT__sw1___DOT__db_down__out__en7))) 
                                              | ((IData)(vlSelf->z80_top_direct_n__DOT__sw1___DOT__db_down__out__out8) 
                                                 & (IData)(z80_top_direct_n__DOT__sw1___DOT__db_down__out__en8))) 
                                             & (IData)(vlSelf->z80_top_direct_n__DOT__db_down__en12)));
    vlSelf->z80_top_direct_n__DOT__db_lo_as__en5 = 
        ((((((IData)(z80_top_direct_n__DOT__reg_file___DOT__db__en17) 
             | (IData)(z80_top_direct_n__DOT__reg_file___DOT__db__en23)) 
            | (IData)(z80_top_direct_n__DOT__reg_file___DOT__db_lo_as__out__en80)) 
           | (IData)(z80_top_direct_n__DOT__reg_file___DOT__db_lo_as__out__en81)) 
          | (IData)(z80_top_direct_n__DOT__reg_file___DOT__db_lo_as__out__en82)) 
         | (IData)(z80_top_direct_n__DOT__reg_file___DOT__db_lo_as__out__en83));
    vlSelf->z80_top_direct_n__DOT__db_lo_as = (0xffU 
                                               & ((((((((((((0xc0U 
                                                             & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ir_lo__DOT__db__out__out0) 
                                                                & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_62))) 
                                                                   << 6U))) 
                                                            | (0x30U 
                                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ir_lo__DOT__db__out__out1) 
                                                                  & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_62))) 
                                                                     << 4U)))) 
                                                           | (0xcU 
                                                              & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ir_lo__DOT__db__out__out2) 
                                                                 & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_62))) 
                                                                    << 2U)))) 
                                                          | (3U 
                                                             & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ir_lo__DOT__db__out__out3) 
                                                                & (- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_62)))))) 
                                                         & (IData)(z80_top_direct_n__DOT__reg_file___DOT__db__en17)) 
                                                        | (((((0xc0U 
                                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_pc_lo__DOT__db__out__out0) 
                                                                  & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_74))) 
                                                                     << 6U))) 
                                                              | (0x30U 
                                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_pc_lo__DOT__db__out__out1) 
                                                                    & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_74))) 
                                                                       << 4U)))) 
                                                             | (0xcU 
                                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_pc_lo__DOT__db__out__out2) 
                                                                   & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_74))) 
                                                                      << 2U)))) 
                                                            | (3U 
                                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_pc_lo__DOT__db__out__out3) 
                                                                  & (- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_74)))))) 
                                                           & (IData)(z80_top_direct_n__DOT__reg_file___DOT__db__en23))) 
                                                       | ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__db_lo_as__out__out80) 
                                                          & (IData)(z80_top_direct_n__DOT__reg_file___DOT__db_lo_as__out__en80))) 
                                                      | ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__db_lo_as__out__out81) 
                                                         & (IData)(z80_top_direct_n__DOT__reg_file___DOT__db_lo_as__out__en81))) 
                                                     | ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__db_lo_as__out__out82) 
                                                        & (IData)(z80_top_direct_n__DOT__reg_file___DOT__db_lo_as__out__en82))) 
                                                    | ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__db_lo_as__out__out83) 
                                                       & (IData)(z80_top_direct_n__DOT__reg_file___DOT__db_lo_as__out__en83))) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__db_lo_as__en5)) 
                                                  | ((IData)(z80_top_direct_n__DOT____Vcelloutt__address_latch___abus__out) 
                                                     & (IData)(z80_top_direct_n__DOT__abus__en7))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1 
        = ((((((((((((((((((((((((0xc0U & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af2_hi__DOT__db__out__out0) 
                                           & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_28))) 
                                              << 6U))) 
                                 | (0x30U & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af2_hi__DOT__db__out__out1) 
                                             & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_28))) 
                                                << 4U)))) 
                                | (0xcU & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af2_hi__DOT__db__out__out2) 
                                           & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_28))) 
                                              << 2U)))) 
                               | (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af2_hi__DOT__db__out__out3) 
                                        & (- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_28)))))) 
                              & (IData)(z80_top_direct_n__DOT__reg_file___DOT__db__en0)) 
                             | (((((0xc0U & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af_hi__DOT__db__out__out0) 
                                             & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_32))) 
                                                << 6U))) 
                                   | (0x30U & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af_hi__DOT__db__out__out1) 
                                               & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_32))) 
                                                  << 4U)))) 
                                  | (0xcU & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af_hi__DOT__db__out__out2) 
                                             & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_32))) 
                                                << 2U)))) 
                                 | (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af_hi__DOT__db__out__out3) 
                                          & (- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_32)))))) 
                                & (IData)(z80_top_direct_n__DOT__reg_file___DOT__db__en2))) 
                            | (((((0xc0U & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc2_hi__DOT__db__out__out0) 
                                            & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_36))) 
                                               << 6U))) 
                                  | (0x30U & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc2_hi__DOT__db__out__out1) 
                                              & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_36))) 
                                                 << 4U)))) 
                                 | (0xcU & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc2_hi__DOT__db__out__out2) 
                                            & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_36))) 
                                               << 2U)))) 
                                | (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc2_hi__DOT__db__out__out3) 
                                         & (- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_36)))))) 
                               & (IData)(z80_top_direct_n__DOT__reg_file___DOT__db__en4))) 
                           | (((((0xc0U & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc_hi__DOT__db__out__out0) 
                                           & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_40))) 
                                              << 6U))) 
                                 | (0x30U & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc_hi__DOT__db__out__out1) 
                                             & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_40))) 
                                                << 4U)))) 
                                | (0xcU & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc_hi__DOT__db__out__out2) 
                                           & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_40))) 
                                              << 2U)))) 
                               | (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc_hi__DOT__db__out__out3) 
                                        & (- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_40)))))) 
                              & (IData)(z80_top_direct_n__DOT__reg_file___DOT__db__en6))) 
                          | (((((0xc0U & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de2_hi__DOT__db__out__out0) 
                                          & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_44))) 
                                             << 6U))) 
                                | (0x30U & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de2_hi__DOT__db__out__out1) 
                                            & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_44))) 
                                               << 4U)))) 
                               | (0xcU & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de2_hi__DOT__db__out__out2) 
                                          & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_44))) 
                                             << 2U)))) 
                              | (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de2_hi__DOT__db__out__out3) 
                                       & (- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_44)))))) 
                             & (IData)(z80_top_direct_n__DOT__reg_file___DOT__db__en8))) 
                         | (((((0xc0U & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de_hi__DOT__db__out__out0) 
                                         & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_48))) 
                                            << 6U))) 
                               | (0x30U & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de_hi__DOT__db__out__out1) 
                                           & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_48))) 
                                              << 4U)))) 
                              | (0xcU & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de_hi__DOT__db__out__out2) 
                                         & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_48))) 
                                            << 2U)))) 
                             | (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de_hi__DOT__db__out__out3) 
                                      & (- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_48)))))) 
                            & (IData)(z80_top_direct_n__DOT__reg_file___DOT__db__en10))) 
                        | (((((0xc0U & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl2_hi__DOT__db__out__out0) 
                                        & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_52))) 
                                           << 6U))) 
                              | (0x30U & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl2_hi__DOT__db__out__out1) 
                                          & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_52))) 
                                             << 4U)))) 
                             | (0xcU & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl2_hi__DOT__db__out__out2) 
                                        & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_52))) 
                                           << 2U)))) 
                            | (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl2_hi__DOT__db__out__out3) 
                                     & (- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_52)))))) 
                           & (IData)(z80_top_direct_n__DOT__reg_file___DOT__db__en12))) 
                       | (((((0xc0U & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl_hi__DOT__db__out__out0) 
                                       & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_56))) 
                                          << 6U))) 
                             | (0x30U & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl_hi__DOT__db__out__out1) 
                                         & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_56))) 
                                            << 4U)))) 
                            | (0xcU & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl_hi__DOT__db__out__out2) 
                                       & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_56))) 
                                          << 2U)))) 
                           | (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl_hi__DOT__db__out__out3) 
                                    & (- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_56)))))) 
                          & (IData)(z80_top_direct_n__DOT__reg_file___DOT__db__en14))) 
                      | (((((0xc0U & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ix_hi__DOT__db__out__out0) 
                                      & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_64))) 
                                         << 6U))) | 
                            (0x30U & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ix_hi__DOT__db__out__out1) 
                                      & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_64))) 
                                         << 4U)))) 
                           | (0xcU & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ix_hi__DOT__db__out__out2) 
                                      & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_64))) 
                                         << 2U)))) 
                          | (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ix_hi__DOT__db__out__out3) 
                                   & (- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_64)))))) 
                         & (IData)(z80_top_direct_n__DOT__reg_file___DOT__db__en18))) 
                     | (((((0xc0U & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_iy_hi__DOT__db__out__out0) 
                                     & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_68))) 
                                        << 6U))) | 
                           (0x30U & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_iy_hi__DOT__db__out__out1) 
                                     & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_68))) 
                                        << 4U)))) | 
                          (0xcU & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_iy_hi__DOT__db__out__out2) 
                                   & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_68))) 
                                      << 2U)))) | (3U 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_iy_hi__DOT__db__out__out3) 
                                                      & (- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_68)))))) 
                        & (IData)(z80_top_direct_n__DOT__reg_file___DOT__db__en20))) 
                    | (((((0xc0U & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_sp_hi__DOT__db__out__out0) 
                                    & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_76))) 
                                       << 6U))) | (0x30U 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_sp_hi__DOT__db__out__out1) 
                                                      & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_76))) 
                                                         << 4U)))) 
                         | (0xcU & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_sp_hi__DOT__db__out__out2) 
                                    & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_76))) 
                                       << 2U)))) | 
                        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_sp_hi__DOT__db__out__out3) 
                               & (- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_76)))))) 
                       & (IData)(z80_top_direct_n__DOT__reg_file___DOT__db__en24))) 
                   | (((((0xc0U & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_wz_hi__DOT__db__out__out0) 
                                   & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_80))) 
                                      << 6U))) | (0x30U 
                                                  & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_wz_hi__DOT__db__out__out1) 
                                                     & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_80))) 
                                                        << 4U)))) 
                        | (0xcU & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_wz_hi__DOT__db__out__out2) 
                                   & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_80))) 
                                      << 2U)))) | (3U 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_wz_hi__DOT__db__out__out3) 
                                                      & (- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_80)))))) 
                      & (IData)(z80_top_direct_n__DOT__reg_file___DOT__db__en26))) 
                  | ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__out70) 
                     & (IData)(z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__en70))) 
                 | ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__out71) 
                    & (IData)(z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__en71))) 
                | ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__out72) 
                   & (IData)(z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__en72))) 
               | ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__out73) 
                  & (IData)(z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__en73))) 
              | ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__out74) 
                 & (IData)(z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__en74))) 
             | ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__out75) 
                & (IData)(z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__en75))) 
            | ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__out76) 
               & (IData)(z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__en76))) 
           | ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__out77) 
              & (IData)(z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__en77)));
    z80_top_direct_n__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_2__DOT__SYNTHESIZED_WIRE_10 
        = (1U & (~ ((((IData)(z80_top_direct_n__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_1) 
                      & (((IData)(z80_top_direct_n__DOT__alu___DOT__alu_op2) 
                          | (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__alu_op1)) 
                         >> 2U)) | (((IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__alu_op1) 
                                     & (IData)(z80_top_direct_n__DOT__alu___DOT__alu_op2)) 
                                    >> 2U)) | (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S))));
    vlSelf->z80_top_direct_n__DOT__address_latch___DOT__abusz 
        = ((- (IData)((1U & (~ ((((IData)(vlSelf->z80_top_direct_n__DOT__resets___DOT__clrpc_int) 
                                  | (IData)(vlSelf->z80_top_direct_n__DOT__resets___DOT__SYNTHESIZED_WIRE_9)) 
                                 | (IData)(vlSelf->z80_top_direct_n__DOT__resets___DOT__DFFE_intr_ff3)) 
                                | (IData)(vlSelf->z80_top_direct_n__DOT__resets___DOT__SYNTHESIZED_WIRE_10)))))) 
           & (((IData)(vlSelf->z80_top_direct_n__DOT__db_hi_as) 
               << 8U) | (IData)(vlSelf->z80_top_direct_n__DOT__db_lo_as)));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__out50 
        = ((0x3fU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__out50)) 
           | (0xc0U & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u))) 
                        << 6U) & (IData)(vlSelf->z80_top_direct_n__DOT__db_lo_as))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__out51 
        = ((0xcfU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__out51)) 
           | (0x30U & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u))) 
                        << 4U) & (IData)(vlSelf->z80_top_direct_n__DOT__db_lo_as))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__out52 
        = ((0xf3U & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__out52)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u))) 
                       << 2U) & (IData)(vlSelf->z80_top_direct_n__DOT__db_lo_as))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__out53 
        = ((0xfcU & (IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__out53)) 
           | (3U & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_sw_4u))) 
                    & (IData)(vlSelf->z80_top_direct_n__DOT__db_lo_as))));
    vlSelf->z80_top_direct_n__DOT__alu___DOT__b2v_core__DOT__result_ALTERA_SYNTHESIZED 
        = ((0xbU & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__b2v_core__DOT__result_ALTERA_SYNTHESIZED)) 
           | (((((0xfffffffcU & (IData)(z80_top_direct_n__DOT__alu___DOT__alu_op2)) 
                 | ((IData)(z80_top_direct_n__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_1) 
                    << 2U)) | (0xfffffffcU & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__alu_op1))) 
               & (((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V) 
                   | (IData)(z80_top_direct_n__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_2__DOT__SYNTHESIZED_WIRE_10)) 
                  << 2U)) | (0xfffffffcU & ((((IData)(z80_top_direct_n__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_1) 
                                              << 2U) 
                                             & (IData)(z80_top_direct_n__DOT__alu___DOT__alu_op2)) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__alu_op1)))));
    vlSelf->z80_top_direct_n__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_5 
        = (1U & (~ ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R) 
                    | (IData)(z80_top_direct_n__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_2__DOT__SYNTHESIZED_WIRE_10))));
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0 
        = ((((((((((((((((((((((((0xc0U & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af2_lo__DOT__db__out__out0) 
                                           & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_30))) 
                                              << 6U))) 
                                 | (0x30U & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af2_lo__DOT__db__out__out1) 
                                             & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_30))) 
                                                << 4U)))) 
                                | (0xcU & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af2_lo__DOT__db__out__out2) 
                                           & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_30))) 
                                              << 2U)))) 
                               | (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af2_lo__DOT__db__out__out3) 
                                        & (- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_30)))))) 
                              & (IData)(z80_top_direct_n__DOT__reg_file___DOT__db__en1)) 
                             | (((((0xc0U & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af_lo__DOT__db__out__out0) 
                                             & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_34))) 
                                                << 6U))) 
                                   | (0x30U & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af_lo__DOT__db__out__out1) 
                                               & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_34))) 
                                                  << 4U)))) 
                                  | (0xcU & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af_lo__DOT__db__out__out2) 
                                             & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_34))) 
                                                << 2U)))) 
                                 | (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af_lo__DOT__db__out__out3) 
                                          & (- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_34)))))) 
                                & (IData)(z80_top_direct_n__DOT__reg_file___DOT__db__en3))) 
                            | (((((0xc0U & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc2_lo__DOT__db__out__out0) 
                                            & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_38))) 
                                               << 6U))) 
                                  | (0x30U & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc2_lo__DOT__db__out__out1) 
                                              & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_38))) 
                                                 << 4U)))) 
                                 | (0xcU & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc2_lo__DOT__db__out__out2) 
                                            & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_38))) 
                                               << 2U)))) 
                                | (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc2_lo__DOT__db__out__out3) 
                                         & (- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_38)))))) 
                               & (IData)(z80_top_direct_n__DOT__reg_file___DOT__db__en5))) 
                           | (((((0xc0U & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc_lo__DOT__db__out__out0) 
                                           & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_42))) 
                                              << 6U))) 
                                 | (0x30U & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc_lo__DOT__db__out__out1) 
                                             & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_42))) 
                                                << 4U)))) 
                                | (0xcU & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc_lo__DOT__db__out__out2) 
                                           & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_42))) 
                                              << 2U)))) 
                               | (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc_lo__DOT__db__out__out3) 
                                        & (- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_42)))))) 
                              & (IData)(z80_top_direct_n__DOT__reg_file___DOT__db__en7))) 
                          | (((((0xc0U & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de2_lo__DOT__db__out__out0) 
                                          & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_46))) 
                                             << 6U))) 
                                | (0x30U & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de2_lo__DOT__db__out__out1) 
                                            & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_46))) 
                                               << 4U)))) 
                               | (0xcU & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de2_lo__DOT__db__out__out2) 
                                          & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_46))) 
                                             << 2U)))) 
                              | (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de2_lo__DOT__db__out__out3) 
                                       & (- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_46)))))) 
                             & (IData)(z80_top_direct_n__DOT__reg_file___DOT__db__en9))) 
                         | (((((0xc0U & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de_lo__DOT__db__out__out0) 
                                         & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_50))) 
                                            << 6U))) 
                               | (0x30U & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de_lo__DOT__db__out__out1) 
                                           & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_50))) 
                                              << 4U)))) 
                              | (0xcU & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de_lo__DOT__db__out__out2) 
                                         & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_50))) 
                                            << 2U)))) 
                             | (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de_lo__DOT__db__out__out3) 
                                      & (- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_50)))))) 
                            & (IData)(z80_top_direct_n__DOT__reg_file___DOT__db__en11))) 
                        | (((((0xc0U & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl2_lo__DOT__db__out__out0) 
                                        & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_54))) 
                                           << 6U))) 
                              | (0x30U & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl2_lo__DOT__db__out__out1) 
                                          & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_54))) 
                                             << 4U)))) 
                             | (0xcU & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl2_lo__DOT__db__out__out2) 
                                        & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_54))) 
                                           << 2U)))) 
                            | (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl2_lo__DOT__db__out__out3) 
                                     & (- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_54)))))) 
                           & (IData)(z80_top_direct_n__DOT__reg_file___DOT__db__en13))) 
                       | (((((0xc0U & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl_lo__DOT__db__out__out0) 
                                       & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_58))) 
                                          << 6U))) 
                             | (0x30U & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl_lo__DOT__db__out__out1) 
                                         & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_58))) 
                                            << 4U)))) 
                            | (0xcU & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl_lo__DOT__db__out__out2) 
                                       & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_58))) 
                                          << 2U)))) 
                           | (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl_lo__DOT__db__out__out3) 
                                    & (- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_58)))))) 
                          & (IData)(z80_top_direct_n__DOT__reg_file___DOT__db__en15))) 
                      | (((((0xc0U & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ix_lo__DOT__db__out__out0) 
                                      & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_66))) 
                                         << 6U))) | 
                            (0x30U & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ix_lo__DOT__db__out__out1) 
                                      & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_66))) 
                                         << 4U)))) 
                           | (0xcU & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ix_lo__DOT__db__out__out2) 
                                      & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_66))) 
                                         << 2U)))) 
                          | (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ix_lo__DOT__db__out__out3) 
                                   & (- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_66)))))) 
                         & (IData)(z80_top_direct_n__DOT__reg_file___DOT__db__en19))) 
                     | (((((0xc0U & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_iy_lo__DOT__db__out__out0) 
                                     & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_70))) 
                                        << 6U))) | 
                           (0x30U & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_iy_lo__DOT__db__out__out1) 
                                     & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_70))) 
                                        << 4U)))) | 
                          (0xcU & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_iy_lo__DOT__db__out__out2) 
                                   & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_70))) 
                                      << 2U)))) | (3U 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_iy_lo__DOT__db__out__out3) 
                                                      & (- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_70)))))) 
                        & (IData)(z80_top_direct_n__DOT__reg_file___DOT__db__en21))) 
                    | (((((0xc0U & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_sp_lo__DOT__db__out__out0) 
                                    & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_78))) 
                                       << 6U))) | (0x30U 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_sp_lo__DOT__db__out__out1) 
                                                      & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_78))) 
                                                         << 4U)))) 
                         | (0xcU & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_sp_lo__DOT__db__out__out2) 
                                    & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_78))) 
                                       << 2U)))) | 
                        (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_sp_lo__DOT__db__out__out3) 
                               & (- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_78)))))) 
                       & (IData)(z80_top_direct_n__DOT__reg_file___DOT__db__en25))) 
                   | (((((0xc0U & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_wz_lo__DOT__db__out__out0) 
                                   & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_82))) 
                                      << 6U))) | (0x30U 
                                                  & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_wz_lo__DOT__db__out__out1) 
                                                     & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_82))) 
                                                        << 4U)))) 
                        | (0xcU & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_wz_lo__DOT__db__out__out2) 
                                   & ((- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_82))) 
                                      << 2U)))) | (3U 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_wz_lo__DOT__db__out__out3) 
                                                      & (- (IData)((IData)(z80_top_direct_n__DOT__reg_file___DOT__SYNTHESIZED_WIRE_82)))))) 
                      & (IData)(z80_top_direct_n__DOT__reg_file___DOT__db__en27))) 
                  | ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__out50) 
                     & (IData)(z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__en50))) 
                 | ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__out51) 
                    & (IData)(z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__en51))) 
                | ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__out52) 
                   & (IData)(z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__en52))) 
               | ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__out53) 
                  & (IData)(z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__en53))) 
              | ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__out54) 
                 & (IData)(z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__en54))) 
             | ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__out55) 
                & (IData)(z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__en55))) 
            | ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__out56) 
               & (IData)(z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__en56))) 
           | ((IData)(vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__out57) 
              & (IData)(z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__en57)));
    z80_top_direct_n__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_3__DOT__SYNTHESIZED_WIRE_10 
        = (1U & (~ ((((IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_5) 
                      & (((IData)(z80_top_direct_n__DOT__alu___DOT__alu_op2) 
                          | (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__alu_op1)) 
                         >> 3U)) | (((IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__alu_op1) 
                                     & (IData)(z80_top_direct_n__DOT__alu___DOT__alu_op2)) 
                                    >> 3U)) | (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S))));
    vlSelf->z80_top_direct_n__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_3 
        = (1U & (~ ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R) 
                    | (IData)(z80_top_direct_n__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_3__DOT__SYNTHESIZED_WIRE_10))));
    vlSelf->z80_top_direct_n__DOT__alu___DOT__b2v_core__DOT__result_ALTERA_SYNTHESIZED 
        = ((7U & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__b2v_core__DOT__result_ALTERA_SYNTHESIZED)) 
           | (((((0xfffffff8U & (IData)(z80_top_direct_n__DOT__alu___DOT__alu_op2)) 
                 | ((IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_5) 
                    << 3U)) | (0xfffffff8U & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__alu_op1))) 
               & (((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V) 
                   | (IData)(z80_top_direct_n__DOT__alu___DOT__b2v_core__DOT__b2v_alu_slice_bit_3__DOT__SYNTHESIZED_WIRE_10)) 
                  << 3U)) | (0xfffffff8U & ((((IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_5) 
                                              << 3U) 
                                             & (IData)(z80_top_direct_n__DOT__alu___DOT__alu_op2)) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__alu_op1)))));
    vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_40 
        = (((IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_3) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_alu)) 
           | (((IData)(vlSelf->z80_top_direct_n__DOT__db1) 
               >> 4U) & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_bus)));
    vlSelf->z80_top_direct_n__DOT__alu_parity_out = 
        (1U & (VL_REDXOR_4(vlSelf->z80_top_direct_n__DOT__alu___DOT__b2v_core__DOT__result_ALTERA_SYNTHESIZED) 
               ^ ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low) 
                  | (IData)(vlSelf->z80_top_direct_n__DOT__alu_control___DOT__DFFE_latch_pf_tmp))));
    vlSelf->z80_top_direct_n__DOT__alu___DOT__db_high__out18 
        = ((3U & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__db_high__out18)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe))) 
                       << 2U) & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__b2v_core__DOT__result_ALTERA_SYNTHESIZED))));
    vlSelf->z80_top_direct_n__DOT__alu___DOT__db_high__out19 
        = ((0xcU & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__db_high__out19)) 
           | (3U & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe))) 
                    & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__b2v_core__DOT__result_ALTERA_SYNTHESIZED))));
    vlSelf->z80_top_direct_n__DOT__alu___DOT__db_high 
        = ((((((((((0xcU & ((IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__db_high__out14) 
                            & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_bs_oe))) 
                               << 2U))) | (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__db_high__out15) 
                                                 & (- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_bs_oe)))))) 
                  | (0xcU & ((IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__db_high__out16) 
                             & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_oe))) 
                                << 2U)))) | (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__db_high__out17) 
                                                   & (- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_oe)))))) 
                | (0xcU & ((IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__db_high__out18) 
                           & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe))) 
                              << 2U)))) | (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__db_high__out19) 
                                                 & (- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe)))))) 
              | (0xcU & ((IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__db_high__out20) 
                         & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_oe))) 
                            << 2U)))) | (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__db_high__out21) 
                                               & (- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_oe)))))) 
            | (0xcU & ((IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__db_high__out22) 
                       & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe))) 
                          << 2U)))) | (3U & ((IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__db_high__out23) 
                                             & (- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe))))));
}

VL_ATTR_COLD void Z80___024root___initial__TOP__1(Z80___024root* vlSelf);

VL_ATTR_COLD void Z80___024root___eval_initial(Z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Z80___024root___eval_initial\n"); );
    // Body
    Z80___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vclklast__TOP__CLK = vlSelf->CLK;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__z80_top_direct_n__DOT__resets___DOT__SYNTHESIZED_WIRE_8 
        = vlSelf->__VinpClk__TOP__z80_top_direct_n__DOT__resets___DOT__SYNTHESIZED_WIRE_8;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__z80_top_direct_n__DOT__interrupts___DOT__SYNTHESIZED_WIRE_21 
        = vlSelf->__VinpClk__TOP__z80_top_direct_n__DOT__interrupts___DOT__SYNTHESIZED_WIRE_21;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__z80_top_direct_n__DOT__interrupts___DOT__SYNTHESIZED_WIRE_15 
        = vlSelf->__VinpClk__TOP__z80_top_direct_n__DOT__interrupts___DOT__SYNTHESIZED_WIRE_15;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__z80_top_direct_n__DOT__resets___DOT__SYNTHESIZED_WIRE_6 
        = vlSelf->__VinpClk__TOP__z80_top_direct_n__DOT__resets___DOT__SYNTHESIZED_WIRE_6;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__z80_top_direct_n__DOT__interrupts___DOT__SYNTHESIZED_WIRE_9 
        = vlSelf->__VinpClk__TOP__z80_top_direct_n__DOT__interrupts___DOT__SYNTHESIZED_WIRE_9;
    vlSelf->__Vclklast__TOP__z80_top_direct_n__DOT__nmi 
        = vlSelf->z80_top_direct_n__DOT__nmi;
}

VL_ATTR_COLD void Z80___024root___settle__TOP__2(Z80___024root* vlSelf);
VL_ATTR_COLD void Z80___024root___settle__TOP__3(Z80___024root* vlSelf);
VL_ATTR_COLD void Z80___024root___settle__TOP__4(Z80___024root* vlSelf);
VL_ATTR_COLD void Z80___024root___settle__TOP__5(Z80___024root* vlSelf);

VL_ATTR_COLD void Z80___024root___eval_settle(Z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Z80___024root___eval_settle\n"); );
    // Body
    Z80___024root___settle__TOP__2(vlSelf);
    Z80___024root___settle__TOP__3(vlSelf);
    Z80___024root___settle__TOP__4(vlSelf);
    Z80___024root___settle__TOP__5(vlSelf);
    Z80___024root___settle__TOP__6(vlSelf);
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
    vlSelf->nM1 = VL_RAND_RESET_I(1);
    vlSelf->nMREQ = VL_RAND_RESET_I(1);
    vlSelf->nIORQ = VL_RAND_RESET_I(1);
    vlSelf->nRD = VL_RAND_RESET_I(1);
    vlSelf->nWR = VL_RAND_RESET_I(1);
    vlSelf->nRFSH = VL_RAND_RESET_I(1);
    vlSelf->nHALT = VL_RAND_RESET_I(1);
    vlSelf->nBUSACK = VL_RAND_RESET_I(1);
    vlSelf->nWAIT = VL_RAND_RESET_I(1);
    vlSelf->nINT = VL_RAND_RESET_I(1);
    vlSelf->nNMI = VL_RAND_RESET_I(1);
    vlSelf->nRESET = VL_RAND_RESET_I(1);
    vlSelf->nBUSRQ = VL_RAND_RESET_I(1);
    vlSelf->CLK = VL_RAND_RESET_I(1);
    vlSelf->A = VL_RAND_RESET_I(16);
    vlSelf->D = VL_RAND_RESET_I(8);
    vlSelf->z80_top_direct_n__DOT__pin_control_oe = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__in_halt = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__use_ixiy = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_state_iy_set = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_state_ixiy_clr = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_state_ixiy_we = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_state_tbl_cb_set = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_state_alu = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_repeat_we = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_state_tbl_we = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_iff1_iff2 = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_iffx_we = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_iffx_bit = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_im_we = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_no_ints = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_ir_we = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_mWrite = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_iorw = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_shift_en = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_hf = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_66_oe = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_pf_sel = VL_RAND_RESET_I(2);
    vlSelf->z80_top_direct_n__DOT__ctl_alu_oe = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_alu_shift_oe = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_oe = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_alu_res_oe = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_oe = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_alu_bs_oe = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_low = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_zero = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_zero = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_lq = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_neg = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_alu_sel_op2_high = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_flags_oe = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_flags_bus = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_flags_alu = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_set = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_set = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_cpl = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf2_we = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_flags_use_cf2 = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_alu_zero_16bit = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf2_sel_shift = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4u = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_hi = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_reg_in_lo = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_lo = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_reg_out_hi = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_reg_ex_de_hl = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_reg_use_sp = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_pc = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_ir = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_reg_not_pc = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we_lo = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we_hi = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_we = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_sw_4d = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo = VL_RAND_RESET_I(2);
    vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_sel = VL_RAND_RESET_I(2);
    vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo = VL_RAND_RESET_I(2);
    vlSelf->z80_top_direct_n__DOT__ctl_inc_cy = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_inc_dec = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_al_we = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_apin_mux = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_apin_mux2 = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_bus_ff_oe = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_bus_zero_oe = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1u = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_sw_1d = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2u = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_sw_2d = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_sw_mask543_en = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_oe = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__nextM = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__setM1 = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__fMRead = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__fMWrite = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__fIORead = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__fIOWrite = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__im1 = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__im2 = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__opcode = VL_RAND_RESET_I(8);
    vlSelf->z80_top_direct_n__DOT__bus_db_pin_oe = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__bus_db_pin_re = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(105, vlSelf->z80_top_direct_n__DOT__pla);
    vlSelf->z80_top_direct_n__DOT__M5 = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__T6 = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__flags_cond_true = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__flags_hf2 = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__alu_parity_out = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__alu_low_gt_9 = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__reg_sel_bc = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__reg_sel_bc2 = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__reg_sel_ix = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__reg_sel_iy = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__reg_sel_de = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__reg_sel_hl = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__reg_sel_de2 = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__reg_sel_hl2 = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__reg_sel_af = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__reg_sel_af2 = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__reg_sel_pc = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__reg_sel_sp = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__reg_sys_we_hi = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__nmi = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__fpga_reset = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__db0 = VL_RAND_RESET_I(8);
    vlSelf->z80_top_direct_n__DOT__db1 = VL_RAND_RESET_I(8);
    vlSelf->z80_top_direct_n__DOT__db2 = VL_RAND_RESET_I(8);
    vlSelf->z80_top_direct_n__DOT__db_hi_as = VL_RAND_RESET_I(8);
    vlSelf->z80_top_direct_n__DOT__db_lo_as = VL_RAND_RESET_I(8);
    vlSelf->z80_top_direct_n__DOT__prefix = VL_RAND_RESET_I(7);
    vlSelf->z80_top_direct_n__DOT__db_lo_as__en5 = 0;
    vlSelf->z80_top_direct_n__DOT__db_lo_ds__en6 = 0;
    vlSelf->z80_top_direct_n__DOT__db_up__en9 = 0;
    vlSelf->z80_top_direct_n__DOT__db_down__en12 = 0;
    vlSelf->z80_top_direct_n__DOT__abus__en13 = 0;
    vlSelf->z80_top_direct_n__DOT__clk_delay___DOT__hold_clk_busrq_ALTERA_SYNTHESIZED = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_1 = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__clk_delay___DOT__DFF_inst5 = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_7 = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_8 = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_5 = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_9 = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__decode_state___DOT__DFFE_instNonRep = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__decode_state___DOT__DFFE_instIY1 = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__decode_state___DOT__DFFE_inst4 = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__decode_state___DOT__DFFE_instED = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__decode_state___DOT__DFFE_instCB = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__decode_state___DOT__SYNTHESIZED_WIRE_4 = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__execute___DOT__validPLA = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__execute___DOT__ixy_d = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__execute___DOT__nonRep = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__execute___DOT__rsel0 = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__execute___DOT__rsel3 = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__interrupts___DOT__iff1 = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_intr_ALTERA_SYNTHESIZED = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__interrupts___DOT__int_armed = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__interrupts___DOT__nmi_armed = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__interrupts___DOT__test1 = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__interrupts___DOT__DFFE_instIFF2 = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__interrupts___DOT__DFFE_inst44 = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__interrupts___DOT__SYNTHESIZED_WIRE_21 = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__interrupts___DOT__SYNTHESIZED_WIRE_9 = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__interrupts___DOT__SYNTHESIZED_WIRE_15 = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__resets___DOT__clrpc_int = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__resets___DOT__x1 = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__resets___DOT__SYNTHESIZED_WIRE_8 = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__resets___DOT__SYNTHESIZED_WIRE_9 = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__resets___DOT__DFFE_intr_ff3 = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__resets___DOT__SYNTHESIZED_WIRE_10 = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__resets___DOT__SYNTHESIZED_WIRE_11 = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__resets___DOT__SYNTHESIZED_WIRE_12 = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__resets___DOT__SYNTHESIZED_WIRE_6 = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__iorq = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__m1_mreq = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__mrd_mreq = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__mwr_wr = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__q1 = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__q2 = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__wait_iorq = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__wait_iorqinta = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__wait_m_ALTERA_SYNTHESIZED1 = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__wait_mrd = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__wait_mwr = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__DFFE_m1_ff3 = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__DFFE_iorq_ff4 = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__SYNTHESIZED_WIRE_15 = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__DFFE_mrd_ff3 = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__DFFE_intr_ff3 = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__SYNTHESIZED_WIRE_16 = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__SYNTHESIZED_WIRE_17 = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__DFFE_iorq_ff1 = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__DFFE_m1_ff1 = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__DFFE_mrd_ff1 = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__DFFE_mwr_ff1 = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__DFFE_mreq_ff2 = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__sequencer___DOT__ena_M = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__sequencer___DOT__ena_T = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__alu_control___DOT__out = VL_RAND_RESET_I(8);
    vlSelf->z80_top_direct_n__DOT__alu_control___DOT__sel = VL_RAND_RESET_I(2);
    vlSelf->z80_top_direct_n__DOT__alu_control___DOT__DFFE_latch_pf_tmp = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__alu_control___DOT__SYNTHESIZED_WIRE_21 = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__alu_control___DOT__db__out__out0 = 0;
    vlSelf->z80_top_direct_n__DOT__alu_control___DOT__db__out__out1 = 0;
    vlSelf->z80_top_direct_n__DOT__alu_control___DOT__db__out__out2 = 0;
    vlSelf->z80_top_direct_n__DOT__alu_control___DOT__db__out__out3 = 0;
    vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__flags_xf = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__flags_yf = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__sel = VL_RAND_RESET_I(2);
    vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__DFFE_inst_latch_hf = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_39 = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__DFFE_inst_latch_sf = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__DFFE_inst_latch_pf = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__DFFE_inst_latch_nf = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_24 = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_40 = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_37 = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__DFFE_inst_latch_cf = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__DFFE_inst_latch_cf2 = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__db__out__out0 = 0;
    vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__db__out__out1 = 0;
    vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__db__out__out2 = 0;
    vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__db__out__out3 = 0;
    vlSelf->z80_top_direct_n__DOT__alu___DOT__alu_op1 = VL_RAND_RESET_I(4);
    vlSelf->z80_top_direct_n__DOT__alu___DOT__db_high = VL_RAND_RESET_I(4);
    vlSelf->z80_top_direct_n__DOT__alu___DOT__db_low = VL_RAND_RESET_I(4);
    vlSelf->z80_top_direct_n__DOT__alu___DOT__op1_high = VL_RAND_RESET_I(4);
    vlSelf->z80_top_direct_n__DOT__alu___DOT__op1_low = VL_RAND_RESET_I(4);
    vlSelf->z80_top_direct_n__DOT__alu___DOT__op2_high = VL_RAND_RESET_I(4);
    vlSelf->z80_top_direct_n__DOT__alu___DOT__op2_low = VL_RAND_RESET_I(4);
    vlSelf->z80_top_direct_n__DOT__alu___DOT__result_lo = VL_RAND_RESET_I(4);
    vlSelf->z80_top_direct_n__DOT__alu___DOT__db_low__out0 = 0;
    vlSelf->z80_top_direct_n__DOT__alu___DOT__db_low__out1 = 0;
    vlSelf->z80_top_direct_n__DOT__alu___DOT__db_low__out2 = 0;
    vlSelf->z80_top_direct_n__DOT__alu___DOT__db_low__out3 = 0;
    vlSelf->z80_top_direct_n__DOT__alu___DOT__db_low__out4 = 0;
    vlSelf->z80_top_direct_n__DOT__alu___DOT__db_low__out5 = 0;
    vlSelf->z80_top_direct_n__DOT__alu___DOT__db_low__out6 = 0;
    vlSelf->z80_top_direct_n__DOT__alu___DOT__db_low__out7 = 0;
    vlSelf->z80_top_direct_n__DOT__alu___DOT__db_low__out8 = 0;
    vlSelf->z80_top_direct_n__DOT__alu___DOT__db_low__out9 = 0;
    vlSelf->z80_top_direct_n__DOT__alu___DOT__db__out__out10 = 0;
    vlSelf->z80_top_direct_n__DOT__alu___DOT__db__out__out11 = 0;
    vlSelf->z80_top_direct_n__DOT__alu___DOT__db__out__out12 = 0;
    vlSelf->z80_top_direct_n__DOT__alu___DOT__db__out__out13 = 0;
    vlSelf->z80_top_direct_n__DOT__alu___DOT__db_high__out14 = 0;
    vlSelf->z80_top_direct_n__DOT__alu___DOT__db_high__out15 = 0;
    vlSelf->z80_top_direct_n__DOT__alu___DOT__db_high__out16 = 0;
    vlSelf->z80_top_direct_n__DOT__alu___DOT__db_high__out17 = 0;
    vlSelf->z80_top_direct_n__DOT__alu___DOT__db_high__out18 = 0;
    vlSelf->z80_top_direct_n__DOT__alu___DOT__db_high__out19 = 0;
    vlSelf->z80_top_direct_n__DOT__alu___DOT__db_high__out20 = 0;
    vlSelf->z80_top_direct_n__DOT__alu___DOT__db_high__out21 = 0;
    vlSelf->z80_top_direct_n__DOT__alu___DOT__db_high__out22 = 0;
    vlSelf->z80_top_direct_n__DOT__alu___DOT__db_high__out23 = 0;
    vlSelf->z80_top_direct_n__DOT__alu___DOT__b2v_core__DOT__result_ALTERA_SYNTHESIZED = VL_RAND_RESET_I(4);
    vlSelf->z80_top_direct_n__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_5 = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_3 = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__alu___DOT__b2v_input_bit_select__DOT__bs_out_high_ALTERA_SYNTHESIZED = VL_RAND_RESET_I(4);
    vlSelf->z80_top_direct_n__DOT__alu___DOT__b2v_input_bit_select__DOT__bs_out_low_ALTERA_SYNTHESIZED = VL_RAND_RESET_I(4);
    vlSelf->z80_top_direct_n__DOT__alu___DOT__b2v_input_shift__DOT__out_high_ALTERA_SYNTHESIZED = VL_RAND_RESET_I(4);
    vlSelf->z80_top_direct_n__DOT__alu___DOT__b2v_input_shift__DOT__out_low_ALTERA_SYNTHESIZED = VL_RAND_RESET_I(4);
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0 = VL_RAND_RESET_I(8);
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1 = VL_RAND_RESET_I(8);
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__en = VL_RAND_RESET_I(8);
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__db_hi_ds__out__out28 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__db_hi_ds__out__out29 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__db_hi_ds__out__out30 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__db_hi_ds__out__out31 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__db_hi_as__out__out34 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__db_hi_as__out__out35 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__db_hi_as__out__out36 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__db_hi_as__out__out37 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__out50 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__out51 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__out52 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__out53 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__out54 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__out55 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__out56 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0__out57 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__out70 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__out71 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__out72 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__out73 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__out74 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__out75 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__out76 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__out77 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__db_lo_as__out__out80 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__db_lo_as__out__out81 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__db_lo_as__out__out82 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__db_lo_as__out__out83 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__db_lo_ds__out__out84 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__db_lo_ds__out__out85 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__db_lo_ds__out__out86 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__db_lo_ds__out__out87 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af2_hi__DOT__latch = VL_RAND_RESET_I(8);
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af2_hi__DOT__db__out__out0 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af2_hi__DOT__db__out__out1 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af2_hi__DOT__db__out__out2 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af2_hi__DOT__db__out__out3 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af2_lo__DOT__latch = VL_RAND_RESET_I(8);
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af2_lo__DOT__db__out__out0 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af2_lo__DOT__db__out__out1 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af2_lo__DOT__db__out__out2 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af2_lo__DOT__db__out__out3 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af_hi__DOT__latch = VL_RAND_RESET_I(8);
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af_hi__DOT__db__out__out0 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af_hi__DOT__db__out__out1 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af_hi__DOT__db__out__out2 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af_hi__DOT__db__out__out3 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af_lo__DOT__latch = VL_RAND_RESET_I(8);
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af_lo__DOT__db__out__out0 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af_lo__DOT__db__out__out1 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af_lo__DOT__db__out__out2 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af_lo__DOT__db__out__out3 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc2_hi__DOT__latch = VL_RAND_RESET_I(8);
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc2_hi__DOT__db__out__out0 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc2_hi__DOT__db__out__out1 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc2_hi__DOT__db__out__out2 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc2_hi__DOT__db__out__out3 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc2_lo__DOT__latch = VL_RAND_RESET_I(8);
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc2_lo__DOT__db__out__out0 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc2_lo__DOT__db__out__out1 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc2_lo__DOT__db__out__out2 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc2_lo__DOT__db__out__out3 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc_hi__DOT__latch = VL_RAND_RESET_I(8);
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc_hi__DOT__db__out__out0 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc_hi__DOT__db__out__out1 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc_hi__DOT__db__out__out2 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc_hi__DOT__db__out__out3 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc_lo__DOT__latch = VL_RAND_RESET_I(8);
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc_lo__DOT__db__out__out0 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc_lo__DOT__db__out__out1 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc_lo__DOT__db__out__out2 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc_lo__DOT__db__out__out3 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de2_hi__DOT__latch = VL_RAND_RESET_I(8);
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de2_hi__DOT__db__out__out0 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de2_hi__DOT__db__out__out1 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de2_hi__DOT__db__out__out2 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de2_hi__DOT__db__out__out3 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de2_lo__DOT__latch = VL_RAND_RESET_I(8);
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de2_lo__DOT__db__out__out0 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de2_lo__DOT__db__out__out1 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de2_lo__DOT__db__out__out2 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de2_lo__DOT__db__out__out3 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de_hi__DOT__latch = VL_RAND_RESET_I(8);
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de_hi__DOT__db__out__out0 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de_hi__DOT__db__out__out1 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de_hi__DOT__db__out__out2 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de_hi__DOT__db__out__out3 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de_lo__DOT__latch = VL_RAND_RESET_I(8);
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de_lo__DOT__db__out__out0 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de_lo__DOT__db__out__out1 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de_lo__DOT__db__out__out2 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de_lo__DOT__db__out__out3 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl2_hi__DOT__latch = VL_RAND_RESET_I(8);
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl2_hi__DOT__db__out__out0 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl2_hi__DOT__db__out__out1 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl2_hi__DOT__db__out__out2 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl2_hi__DOT__db__out__out3 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl2_lo__DOT__latch = VL_RAND_RESET_I(8);
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl2_lo__DOT__db__out__out0 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl2_lo__DOT__db__out__out1 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl2_lo__DOT__db__out__out2 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl2_lo__DOT__db__out__out3 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl_hi__DOT__latch = VL_RAND_RESET_I(8);
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl_hi__DOT__db__out__out0 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl_hi__DOT__db__out__out1 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl_hi__DOT__db__out__out2 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl_hi__DOT__db__out__out3 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl_lo__DOT__latch = VL_RAND_RESET_I(8);
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl_lo__DOT__db__out__out0 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl_lo__DOT__db__out__out1 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl_lo__DOT__db__out__out2 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl_lo__DOT__db__out__out3 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ir_hi__DOT__latch = VL_RAND_RESET_I(8);
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ir_hi__DOT__db__out__out0 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ir_hi__DOT__db__out__out1 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ir_hi__DOT__db__out__out2 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ir_hi__DOT__db__out__out3 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ir_lo__DOT__latch = VL_RAND_RESET_I(8);
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ir_lo__DOT__db__out__out0 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ir_lo__DOT__db__out__out1 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ir_lo__DOT__db__out__out2 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ir_lo__DOT__db__out__out3 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ix_hi__DOT__latch = VL_RAND_RESET_I(8);
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ix_hi__DOT__db__out__out0 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ix_hi__DOT__db__out__out1 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ix_hi__DOT__db__out__out2 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ix_hi__DOT__db__out__out3 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ix_lo__DOT__latch = VL_RAND_RESET_I(8);
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ix_lo__DOT__db__out__out0 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ix_lo__DOT__db__out__out1 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ix_lo__DOT__db__out__out2 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ix_lo__DOT__db__out__out3 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_iy_hi__DOT__latch = VL_RAND_RESET_I(8);
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_iy_hi__DOT__db__out__out0 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_iy_hi__DOT__db__out__out1 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_iy_hi__DOT__db__out__out2 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_iy_hi__DOT__db__out__out3 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_iy_lo__DOT__latch = VL_RAND_RESET_I(8);
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_iy_lo__DOT__db__out__out0 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_iy_lo__DOT__db__out__out1 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_iy_lo__DOT__db__out__out2 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_iy_lo__DOT__db__out__out3 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_pc_hi__DOT__latch = VL_RAND_RESET_I(8);
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_pc_hi__DOT__db__out__out0 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_pc_hi__DOT__db__out__out1 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_pc_hi__DOT__db__out__out2 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_pc_hi__DOT__db__out__out3 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_pc_lo__DOT__latch = VL_RAND_RESET_I(8);
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_pc_lo__DOT__db__out__out0 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_pc_lo__DOT__db__out__out1 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_pc_lo__DOT__db__out__out2 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_pc_lo__DOT__db__out__out3 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_sp_hi__DOT__latch = VL_RAND_RESET_I(8);
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_sp_hi__DOT__db__out__out0 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_sp_hi__DOT__db__out__out1 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_sp_hi__DOT__db__out__out2 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_sp_hi__DOT__db__out__out3 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_sp_lo__DOT__latch = VL_RAND_RESET_I(8);
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_sp_lo__DOT__db__out__out0 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_sp_lo__DOT__db__out__out1 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_sp_lo__DOT__db__out__out2 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_sp_lo__DOT__db__out__out3 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_wz_hi__DOT__latch = VL_RAND_RESET_I(8);
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_wz_hi__DOT__db__out__out0 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_wz_hi__DOT__db__out__out1 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_wz_hi__DOT__db__out__out2 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_wz_hi__DOT__db__out__out3 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_wz_lo__DOT__latch = VL_RAND_RESET_I(8);
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_wz_lo__DOT__db__out__out0 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_wz_lo__DOT__db__out__out1 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_wz_lo__DOT__db__out__out2 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_wz_lo__DOT__db__out__out3 = 0;
    vlSelf->z80_top_direct_n__DOT__reg_control___DOT__bank_af = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__reg_control___DOT__bank_exx = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__reg_control___DOT__bank_hl_de1 = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__reg_control___DOT__bank_hl_de2 = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__reg_control___DOT__reg_sys_we_lo_ALTERA_SYNTHESIZED = VL_RAND_RESET_I(1);
    vlSelf->z80_top_direct_n__DOT__address_latch___DOT__abusz = VL_RAND_RESET_I(16);
    vlSelf->z80_top_direct_n__DOT__address_latch___DOT__Q = VL_RAND_RESET_I(16);
    vlSelf->z80_top_direct_n__DOT__address_latch___DOT__abus__out__out0 = 0;
    vlSelf->z80_top_direct_n__DOT__address_latch___DOT__abus__out__out1 = 0;
    vlSelf->z80_top_direct_n__DOT__address_latch___DOT__abus__out__out2 = 0;
    vlSelf->z80_top_direct_n__DOT__address_latch___DOT__abus__out__out3 = 0;
    vlSelf->z80_top_direct_n__DOT__address_latch___DOT__abus__out__out4 = 0;
    vlSelf->z80_top_direct_n__DOT__address_latch___DOT__abus__out__out5 = 0;
    vlSelf->z80_top_direct_n__DOT__address_latch___DOT__abus__out__out6 = 0;
    vlSelf->z80_top_direct_n__DOT__address_latch___DOT__abus__out__out7 = 0;
    vlSelf->z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__address_ALTERA_SYNTHESIZED = VL_RAND_RESET_I(16);
    vlSelf->z80_top_direct_n__DOT__bus_control___DOT__db__out__out0 = 0;
    vlSelf->z80_top_direct_n__DOT__bus_control___DOT__db__out__out1 = 0;
    vlSelf->z80_top_direct_n__DOT__bus_control___DOT__db__out__out2 = 0;
    vlSelf->z80_top_direct_n__DOT__bus_control___DOT__db__out__out3 = 0;
    vlSelf->z80_top_direct_n__DOT__sw2___DOT__db_down__out__out0 = 0;
    vlSelf->z80_top_direct_n__DOT__sw2___DOT__db_down__out__out1 = 0;
    vlSelf->z80_top_direct_n__DOT__sw2___DOT__db_down__out__out2 = 0;
    vlSelf->z80_top_direct_n__DOT__sw2___DOT__db_down__out__out3 = 0;
    vlSelf->z80_top_direct_n__DOT__sw2___DOT__db_up__out__out4 = 0;
    vlSelf->z80_top_direct_n__DOT__sw2___DOT__db_up__out__out5 = 0;
    vlSelf->z80_top_direct_n__DOT__sw2___DOT__db_up__out__out6 = 0;
    vlSelf->z80_top_direct_n__DOT__sw2___DOT__db_up__out__out7 = 0;
    vlSelf->z80_top_direct_n__DOT__sw1___DOT__db_up__out__out0 = 0;
    vlSelf->z80_top_direct_n__DOT__sw1___DOT__db_up__out__out1 = 0;
    vlSelf->z80_top_direct_n__DOT__sw1___DOT__db_up__out__out2 = 0;
    vlSelf->z80_top_direct_n__DOT__sw1___DOT__db_up__out__out3 = 0;
    vlSelf->z80_top_direct_n__DOT__sw1___DOT__db_down__out__out4 = 0;
    vlSelf->z80_top_direct_n__DOT__sw1___DOT__db_down__out__out5 = 0;
    vlSelf->z80_top_direct_n__DOT__sw1___DOT__db_down__out__out6 = 0;
    vlSelf->z80_top_direct_n__DOT__sw1___DOT__db_down__out__out7 = 0;
    vlSelf->z80_top_direct_n__DOT__sw1___DOT__db_down__out__out8 = 0;
    vlSelf->z80_top_direct_n__DOT__address_pins___DOT__DFFE_apin_latch = VL_RAND_RESET_I(16);
    vlSelf->z80_top_direct_n__DOT__address_pins___DOT__abus__out__out0 = 0;
    vlSelf->z80_top_direct_n__DOT__address_pins___DOT__abus__out__out1 = 0;
    vlSelf->z80_top_direct_n__DOT__address_pins___DOT__abus__out__out2 = 0;
    vlSelf->z80_top_direct_n__DOT__address_pins___DOT__abus__out__out3 = 0;
    vlSelf->z80_top_direct_n__DOT__address_pins___DOT__abus__out__out4 = 0;
    vlSelf->z80_top_direct_n__DOT__address_pins___DOT__abus__out__out5 = 0;
    vlSelf->z80_top_direct_n__DOT__address_pins___DOT__abus__out__out6 = 0;
    vlSelf->z80_top_direct_n__DOT__address_pins___DOT__abus__out__out7 = 0;
    vlSelf->z80_top_direct_n__DOT__data_pins___DOT__dout = VL_RAND_RESET_I(8);
    vlSelf->z80_top_direct_n__DOT__data_pins___DOT__D__out__out0 = 0;
    vlSelf->z80_top_direct_n__DOT__data_pins___DOT__D__out__out1 = 0;
    vlSelf->z80_top_direct_n__DOT__data_pins___DOT__D__out__out2 = 0;
    vlSelf->z80_top_direct_n__DOT__data_pins___DOT__D__out__out3 = 0;
    vlSelf->z80_top_direct_n__DOT__data_pins___DOT__db__out__out4 = 0;
    vlSelf->z80_top_direct_n__DOT__data_pins___DOT__db__out__out5 = 0;
    vlSelf->z80_top_direct_n__DOT__data_pins___DOT__db__out__out6 = 0;
    vlSelf->z80_top_direct_n__DOT__data_pins___DOT__db__out__out7 = 0;
    vlSelf->__Vdly__z80_top_direct_n__DOT__resets___DOT__x1 = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__z80_top_direct_n__DOT__resets___DOT__SYNTHESIZED_WIRE_8 = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__z80_top_direct_n__DOT__interrupts___DOT__SYNTHESIZED_WIRE_21 = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__z80_top_direct_n__DOT__interrupts___DOT__SYNTHESIZED_WIRE_15 = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__z80_top_direct_n__DOT__resets___DOT__SYNTHESIZED_WIRE_6 = VL_RAND_RESET_I(1);
    vlSelf->__VinpClk__TOP__z80_top_direct_n__DOT__interrupts___DOT__SYNTHESIZED_WIRE_9 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__z80_top_direct_n__DOT__db1 = VL_RAND_RESET_I(8);
    vlSelf->__Vchglast__TOP__z80_top_direct_n__DOT__prefix = VL_RAND_RESET_I(7);
    vlSelf->__Vchglast__TOP__z80_top_direct_n__DOT__db_lo_as__en5 = 0;
    vlSelf->__Vchglast__TOP__z80_top_direct_n__DOT__db_lo_ds__en6 = 0;
    vlSelf->__Vchglast__TOP__z80_top_direct_n__DOT__db_up__en9 = 0;
    vlSelf->__Vchglast__TOP__z80_top_direct_n__DOT__db_down__en12 = 0;
    vlSelf->__Vchglast__TOP__z80_top_direct_n__DOT__interrupts___DOT__SYNTHESIZED_WIRE_21 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__z80_top_direct_n__DOT__interrupts___DOT__SYNTHESIZED_WIRE_9 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__z80_top_direct_n__DOT__interrupts___DOT__SYNTHESIZED_WIRE_15 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__z80_top_direct_n__DOT__resets___DOT__SYNTHESIZED_WIRE_8 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__z80_top_direct_n__DOT__resets___DOT__SYNTHESIZED_WIRE_6 = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__z80_top_direct_n__DOT__alu___DOT__db_high = VL_RAND_RESET_I(4);
    vlSelf->__Vchglast__TOP__z80_top_direct_n__DOT__alu___DOT__db_low = VL_RAND_RESET_I(4);
    vlSelf->__Vchglast__TOP__z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0 = VL_RAND_RESET_I(8);
    vlSelf->__Vchglast__TOP__z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1 = VL_RAND_RESET_I(8);
    vlSelf->__Vchglast__TOP__z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1__en = VL_RAND_RESET_I(8);
}
