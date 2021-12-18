// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Z80.h for the primary calling header

#include "verilated.h"

#include "Z80___024root.h"

VL_INLINE_OPT void Z80___024root___sequent__TOP__7(Z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Z80___024root___sequent__TOP__7\n"); );
    // Body
    vlSelf->__Vdly__z80_top_direct_n__DOT__resets___DOT__x1 
        = vlSelf->z80_top_direct_n__DOT__resets___DOT__x1;
    vlSelf->__Vdly__z80_top_direct_n__DOT__resets___DOT__x1 
        = (1U & ((~ (IData)(vlSelf->z80_top_direct_n__DOT__resets___DOT__SYNTHESIZED_WIRE_8)) 
                 | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__resets___DOT__x1)) 
                     & (~ (IData)(vlSelf->nRESET))) 
                    | ((IData)(vlSelf->z80_top_direct_n__DOT__resets___DOT__x1) 
                       & (~ (IData)(vlSelf->nRESET))))));
}

VL_INLINE_OPT void Z80___024root___sequent__TOP__8(Z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Z80___024root___sequent__TOP__8\n"); );
    // Body
    vlSelf->z80_top_direct_n__DOT__fpga_reset = 0U;
    if (vlSelf->z80_top_direct_n__DOT__ctl_alu_op_low) {
        vlSelf->z80_top_direct_n__DOT__alu_control___DOT__DFFE_latch_pf_tmp 
            = vlSelf->z80_top_direct_n__DOT__alu_parity_out;
        vlSelf->z80_top_direct_n__DOT__alu___DOT__result_lo 
            = vlSelf->z80_top_direct_n__DOT__alu___DOT__b2v_core__DOT__result_ALTERA_SYNTHESIZED;
    }
    if ((((IData)(vlSelf->z80_top_direct_n__DOT__reg_sel_pc) 
          & (IData)(vlSelf->z80_top_direct_n__DOT__reg_sys_we_hi)) 
         & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
            >> 1U))) {
        vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_pc_hi__DOT__latch 
            = vlSelf->z80_top_direct_n__DOT__db_hi_as;
    }
    if (vlSelf->z80_top_direct_n__DOT__ctl_flags_hf_we) {
        vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__DFFE_inst_latch_hf 
            = vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_40;
    }
    if ((((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_ir) 
          & (IData)(vlSelf->z80_top_direct_n__DOT__reg_sys_we_hi)) 
         & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
            >> 1U))) {
        vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ir_hi__DOT__latch 
            = vlSelf->z80_top_direct_n__DOT__db_hi_as;
    }
    if ((((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
          & (IData)(vlSelf->z80_top_direct_n__DOT__reg_control___DOT__reg_sys_we_lo_ALTERA_SYNTHESIZED)) 
         & (IData)(vlSelf->z80_top_direct_n__DOT__reg_sel_pc))) {
        vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_pc_lo__DOT__latch 
            = vlSelf->z80_top_direct_n__DOT__db_lo_as;
    }
    if ((((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
          & (IData)(vlSelf->z80_top_direct_n__DOT__reg_control___DOT__reg_sys_we_lo_ALTERA_SYNTHESIZED)) 
         & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_ir))) {
        vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ir_lo__DOT__latch 
            = vlSelf->z80_top_direct_n__DOT__db_lo_as;
    }
    if ((((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
          & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we)) 
         & (IData)(vlSelf->z80_top_direct_n__DOT__reg_sel_sp))) {
        vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_sp_lo__DOT__latch 
            = vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0;
    }
    if ((((IData)(vlSelf->z80_top_direct_n__DOT__reg_sel_sp) 
          & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we)) 
         & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
            >> 1U))) {
        vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_sp_hi__DOT__latch 
            = vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1;
    }
    if ((((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
          & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we)) 
         & (IData)(vlSelf->z80_top_direct_n__DOT__reg_sel_iy))) {
        vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_iy_lo__DOT__latch 
            = vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0;
    }
    if ((((IData)(vlSelf->z80_top_direct_n__DOT__reg_sel_iy) 
          & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we)) 
         & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
            >> 1U))) {
        vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_iy_hi__DOT__latch 
            = vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1;
    }
    if ((((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
          & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we)) 
         & (IData)(vlSelf->z80_top_direct_n__DOT__reg_sel_ix))) {
        vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ix_lo__DOT__latch 
            = vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0;
    }
    if ((((IData)(vlSelf->z80_top_direct_n__DOT__reg_sel_ix) 
          & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we)) 
         & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
            >> 1U))) {
        vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_ix_hi__DOT__latch 
            = vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1;
    }
    if ((((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
          & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we)) 
         & (IData)(vlSelf->z80_top_direct_n__DOT__reg_sel_bc))) {
        vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc_lo__DOT__latch 
            = vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0;
    }
    if ((((IData)(vlSelf->z80_top_direct_n__DOT__reg_sel_bc) 
          & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we)) 
         & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
            >> 1U))) {
        vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc_hi__DOT__latch 
            = vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1;
    }
    if ((((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
          & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we)) 
         & (IData)(vlSelf->z80_top_direct_n__DOT__reg_sel_bc2))) {
        vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc2_lo__DOT__latch 
            = vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0;
    }
    if ((((IData)(vlSelf->z80_top_direct_n__DOT__reg_sel_bc2) 
          & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we)) 
         & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
            >> 1U))) {
        vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_bc2_hi__DOT__latch 
            = vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1;
    }
    if ((((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
          & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we)) 
         & (IData)(vlSelf->z80_top_direct_n__DOT__reg_sel_af))) {
        vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af_lo__DOT__latch 
            = vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0;
    }
    if ((((IData)(vlSelf->z80_top_direct_n__DOT__reg_sel_af) 
          & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we)) 
         & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
            >> 1U))) {
        vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af_hi__DOT__latch 
            = vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1;
    }
    if ((((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
          & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we)) 
         & (IData)(vlSelf->z80_top_direct_n__DOT__reg_sel_af2))) {
        vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af2_lo__DOT__latch 
            = vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0;
    }
    if ((((IData)(vlSelf->z80_top_direct_n__DOT__reg_sel_af2) 
          & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we)) 
         & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
            >> 1U))) {
        vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_af2_hi__DOT__latch 
            = vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1;
    }
    if ((((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
          & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we)) 
         & (IData)(vlSelf->z80_top_direct_n__DOT__reg_sel_hl))) {
        vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl_lo__DOT__latch 
            = vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0;
    }
    if ((((IData)(vlSelf->z80_top_direct_n__DOT__reg_sel_hl) 
          & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we)) 
         & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
            >> 1U))) {
        vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl_hi__DOT__latch 
            = vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1;
    }
    if ((((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
          & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we)) 
         & (IData)(vlSelf->z80_top_direct_n__DOT__reg_sel_hl2))) {
        vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl2_lo__DOT__latch 
            = vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0;
    }
    if ((((IData)(vlSelf->z80_top_direct_n__DOT__reg_sel_hl2) 
          & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we)) 
         & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
            >> 1U))) {
        vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_hl2_hi__DOT__latch 
            = vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1;
    }
    if ((((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
          & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we)) 
         & (IData)(vlSelf->z80_top_direct_n__DOT__reg_sel_de))) {
        vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de_lo__DOT__latch 
            = vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0;
    }
    if ((((IData)(vlSelf->z80_top_direct_n__DOT__reg_sel_de) 
          & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we)) 
         & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
            >> 1U))) {
        vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de_hi__DOT__latch 
            = vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1;
    }
    if ((((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
          & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we)) 
         & (IData)(vlSelf->z80_top_direct_n__DOT__reg_sel_de2))) {
        vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de2_lo__DOT__latch 
            = vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0;
    }
    if ((((IData)(vlSelf->z80_top_direct_n__DOT__reg_sel_de2) 
          & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_we)) 
         & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_gp_hilo) 
            >> 1U))) {
        vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_de2_hi__DOT__latch 
            = vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1;
    }
    if (vlSelf->z80_top_direct_n__DOT__ctl_flags_xy_we) {
        vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__flags_xf 
            = ((((IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__db_low) 
                 >> 3U) & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_alu)) 
               | (((IData)(vlSelf->z80_top_direct_n__DOT__db1) 
                   >> 3U) & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_bus)));
        vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__flags_yf 
            = ((((IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__db_high) 
                 >> 1U) & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_alu)) 
               | (((IData)(vlSelf->z80_top_direct_n__DOT__db1) 
                   >> 5U) & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_bus)));
    }
    if ((((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz) 
          & (IData)(vlSelf->z80_top_direct_n__DOT__reg_sys_we_hi)) 
         & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
            >> 1U))) {
        vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_wz_hi__DOT__latch 
            = vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp1;
    }
    if ((((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sys_hilo) 
          & (IData)(vlSelf->z80_top_direct_n__DOT__reg_control___DOT__reg_sys_we_lo_ALTERA_SYNTHESIZED)) 
         & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_sel_wz))) {
        vlSelf->z80_top_direct_n__DOT__reg_file___DOT__b2v_latch_wz_lo__DOT__latch 
            = vlSelf->z80_top_direct_n__DOT__reg_file___DOT__gdfx_temp0;
    }
    if ((((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we) 
          & (~ (IData)(vlSelf->z80_top_direct_n__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_9))) 
         & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf2_we)))) {
        vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__DFFE_inst_latch_cf 
            = (((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_alu) 
                & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_3)) 
               | ((IData)(vlSelf->z80_top_direct_n__DOT__db1) 
                  & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_bus)));
    }
    if (vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) {
        vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__DFFE_inst_latch_nf 
            = ((((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_set) 
                 | (((IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__db_high) 
                     >> 3U) & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_alu))) 
                | (((IData)(vlSelf->z80_top_direct_n__DOT__db1) 
                    >> 1U) & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_bus))) 
               & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr)));
    }
    if (((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf2_we) 
         & (~ (IData)(vlSelf->z80_top_direct_n__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_9)))) {
        vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__DFFE_inst_latch_cf2 
            = (1U & ((((IData)((0U == (IData)(vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__sel))) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_3)) 
                      | ((IData)((2U == (IData)(vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__sel))) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__alu_control___DOT__SYNTHESIZED_WIRE_21))) 
                     | ((IData)((1U == (IData)(vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__sel))) 
                        & (((IData)(vlSelf->z80_top_direct_n__DOT__db2) 
                            & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                               >> 6U)) | (((IData)(vlSelf->z80_top_direct_n__DOT__db2) 
                                           >> 7U) & 
                                          (~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                              >> 6U)))))));
    }
    if (((vlSelf->z80_top_direct_n__DOT__pla[2U] >> 0xdU) 
         & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)))) {
        vlSelf->z80_top_direct_n__DOT__flags_hf2 = vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_40;
    }
    if (((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))) {
        vlSelf->z80_top_direct_n__DOT__flags_cond_true 
            = (1U & ((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                         >> 6U)) ^ (((((IData)((0U 
                                                == (IData)(vlSelf->z80_top_direct_n__DOT__alu_control___DOT__sel))) 
                                       & (IData)(vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_39)) 
                                      | ((IData)((2U 
                                                  == (IData)(vlSelf->z80_top_direct_n__DOT__alu_control___DOT__sel))) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__DFFE_inst_latch_pf))) 
                                     | ((IData)((3U 
                                                 == (IData)(vlSelf->z80_top_direct_n__DOT__alu_control___DOT__sel))) 
                                        & (IData)(vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__DFFE_inst_latch_sf))) 
                                    | ((IData)((1U 
                                                == (IData)(vlSelf->z80_top_direct_n__DOT__alu_control___DOT__sel))) 
                                       & (IData)(vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_24)))));
    }
    if (vlSelf->z80_top_direct_n__DOT__ctl_flags_sz_we) {
        vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_39 
            = vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__SYNTHESIZED_WIRE_37;
        vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__DFFE_inst_latch_sf 
            = ((((IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__db_high) 
                 >> 3U) & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_alu)) 
               | (((IData)(vlSelf->z80_top_direct_n__DOT__db1) 
                   >> 7U) & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_bus)));
    }
    if (vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we) {
        vlSelf->z80_top_direct_n__DOT__alu_flags___DOT__DFFE_inst_latch_pf 
            = (((((((IData)((0U == (IData)(vlSelf->z80_top_direct_n__DOT__ctl_pf_sel))) 
                    & (IData)(vlSelf->z80_top_direct_n__DOT__alu_parity_out)) 
                   | ((IData)((2U == (IData)(vlSelf->z80_top_direct_n__DOT__ctl_pf_sel))) 
                      & (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__DFFE_instIFF2))) 
                  | ((IData)((3U == (IData)(vlSelf->z80_top_direct_n__DOT__ctl_pf_sel))) 
                     & (~ (IData)(vlSelf->z80_top_direct_n__DOT__decode_state___DOT__DFFE_instNonRep)))) 
                 | ((IData)((1U == (IData)(vlSelf->z80_top_direct_n__DOT__ctl_pf_sel))) 
                    & ((IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_3) 
                       ^ (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__b2v_core__DOT__SYNTHESIZED_WIRE_5)))) 
                & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_alu)) 
               | (((IData)(vlSelf->z80_top_direct_n__DOT__db1) 
                   >> 2U) & (IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_bus)));
    }
}

VL_INLINE_OPT void Z80___024root___combo__TOP__11(Z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Z80___024root___combo__TOP__11\n"); );
    // Body
    vlSelf->z80_top_direct_n__DOT__nmi = (1U & (~ (IData)(vlSelf->nNMI)));
}

VL_INLINE_OPT void Z80___024root___sequent__TOP__13(Z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Z80___024root___sequent__TOP__13\n"); );
    // Body
    if (vlSelf->z80_top_direct_n__DOT__resets___DOT__SYNTHESIZED_WIRE_6) {
        vlSelf->z80_top_direct_n__DOT__resets___DOT__clrpc_int 
            = (((~ (IData)(vlSelf->z80_top_direct_n__DOT__resets___DOT__clrpc_int)) 
                & ((IData)(vlSelf->z80_top_direct_n__DOT__resets___DOT__x1) 
                   & (IData)(vlSelf->z80_top_direct_n__DOT__resets___DOT__SYNTHESIZED_WIRE_11))) 
               | ((IData)(vlSelf->z80_top_direct_n__DOT__resets___DOT__clrpc_int) 
                  & (~ (IData)(vlSelf->z80_top_direct_n__DOT__resets___DOT__SYNTHESIZED_WIRE_11))));
        if (vlSelf->z80_top_direct_n__DOT__sequencer___DOT__ena_T) {
            vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__mwr_wr 
                = vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__wait_mwr;
            vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__DFFE_mrd_ff3 
                = vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__wait_mrd;
            vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__DFFE_iorq_ff4 
                = vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__wait_iorq;
            vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__DFFE_mreq_ff2 
                = vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__SYNTHESIZED_WIRE_17;
            vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__wait_mwr 
                = vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__DFFE_mwr_ff1;
            vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__wait_mrd 
                = vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__DFFE_mrd_ff1;
            vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__wait_iorq 
                = vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__SYNTHESIZED_WIRE_15;
            vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__SYNTHESIZED_WIRE_17 
                = vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__SYNTHESIZED_WIRE_16;
        }
    } else {
        vlSelf->z80_top_direct_n__DOT__resets___DOT__clrpc_int = 0U;
        vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__mwr_wr = 0U;
        vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__DFFE_mrd_ff3 = 0U;
        vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__DFFE_iorq_ff4 = 0U;
        vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__DFFE_mreq_ff2 = 0U;
        vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__wait_mwr = 0U;
        vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__wait_mrd = 0U;
        vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__wait_iorq = 0U;
        vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__SYNTHESIZED_WIRE_17 = 0U;
    }
    vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__mrd_mreq 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__DFFE_mrd_ff3) 
           | (IData)(vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__wait_mrd));
}

VL_INLINE_OPT void Z80___024root___sequent__TOP__14(Z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Z80___024root___sequent__TOP__14\n"); );
    // Body
    if (vlSelf->z80_top_direct_n__DOT__resets___DOT__SYNTHESIZED_WIRE_6) {
        if (vlSelf->z80_top_direct_n__DOT__decode_state___DOT__SYNTHESIZED_WIRE_4) {
            vlSelf->z80_top_direct_n__DOT__decode_state___DOT__DFFE_instCB 
                = vlSelf->z80_top_direct_n__DOT__ctl_state_tbl_cb_set;
        }
        if (vlSelf->z80_top_direct_n__DOT__sequencer___DOT__ena_T) {
            vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__DFFE_mwr_ff1 
                = vlSelf->z80_top_direct_n__DOT__ctl_mWrite;
            vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__DFFE_mrd_ff1 
                = vlSelf->z80_top_direct_n__DOT__ctl_mRead;
            vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__SYNTHESIZED_WIRE_15 
                = vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__DFFE_iorq_ff1;
        }
        if (vlSelf->z80_top_direct_n__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_5) {
            vlSelf->z80_top_direct_n__DOT__clk_delay___DOT__hold_clk_busrq_ALTERA_SYNTHESIZED 
                = vlSelf->z80_top_direct_n__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_8;
        }
        if ((1U & (~ (IData)(vlSelf->z80_top_direct_n__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_9)))) {
            vlSelf->z80_top_direct_n__DOT__reg_control___DOT__bank_hl_de1 
                = ((IData)(vlSelf->z80_top_direct_n__DOT__reg_control___DOT__bank_hl_de1) 
                   ^ ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_ex_de_hl) 
                      & (~ (IData)(vlSelf->z80_top_direct_n__DOT__reg_control___DOT__bank_exx))));
            vlSelf->z80_top_direct_n__DOT__reg_control___DOT__bank_hl_de2 
                = ((IData)(vlSelf->z80_top_direct_n__DOT__reg_control___DOT__bank_hl_de2) 
                   ^ ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_ex_de_hl) 
                      & (IData)(vlSelf->z80_top_direct_n__DOT__reg_control___DOT__bank_exx)));
        }
        if (vlSelf->z80_top_direct_n__DOT__sequencer___DOT__ena_T) {
            vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__DFFE_m1_ff3 
                = vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__wait_m_ALTERA_SYNTHESIZED1;
        }
        if (vlSelf->z80_top_direct_n__DOT__ctl_im_we) {
            vlSelf->z80_top_direct_n__DOT__im1 = (IData)(
                                                         (0x10U 
                                                          == 
                                                          (0x18U 
                                                           & (IData)(vlSelf->z80_top_direct_n__DOT__db0))));
            vlSelf->z80_top_direct_n__DOT__im2 = (IData)(
                                                         (0x18U 
                                                          == 
                                                          (0x18U 
                                                           & (IData)(vlSelf->z80_top_direct_n__DOT__db0))));
        }
        if (vlSelf->z80_top_direct_n__DOT__interrupts___DOT__test1) {
            vlSelf->z80_top_direct_n__DOT__interrupts___DOT__DFFE_inst44 
                = vlSelf->z80_top_direct_n__DOT__interrupts___DOT__int_armed;
        }
        if (vlSelf->z80_top_direct_n__DOT__ctl_state_ixiy_we) {
            vlSelf->z80_top_direct_n__DOT__decode_state___DOT__DFFE_instIY1 
                = vlSelf->z80_top_direct_n__DOT__ctl_state_iy_set;
        }
        if (vlSelf->z80_top_direct_n__DOT__ctl_repeat_we) {
            vlSelf->z80_top_direct_n__DOT__decode_state___DOT__DFFE_instNonRep 
                = (1U & (~ (IData)((1U != (IData)(vlSelf->z80_top_direct_n__DOT__address_latch___DOT__Q)))));
        }
        if (vlSelf->z80_top_direct_n__DOT__ctl_state_ixiy_we) {
            vlSelf->z80_top_direct_n__DOT__decode_state___DOT__DFFE_inst4 
                = (1U & (~ ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_state_iy_set) 
                            | (IData)(vlSelf->z80_top_direct_n__DOT__ctl_state_ixiy_clr))));
        }
        if (vlSelf->z80_top_direct_n__DOT__sequencer___DOT__ena_T) {
            vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__q2 
                = vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__q1;
        }
        if ((1U & (~ (IData)(vlSelf->z80_top_direct_n__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_9)))) {
            vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__DFFE_intr_ff3 
                = vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__wait_iorqinta;
        }
        if (vlSelf->z80_top_direct_n__DOT__sequencer___DOT__ena_T) {
            vlSelf->z80_top_direct_n__DOT__T6 = ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff) 
                                                 & (~ (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__ena_M)));
        }
        if (vlSelf->z80_top_direct_n__DOT__sequencer___DOT__ena_M) {
            vlSelf->z80_top_direct_n__DOT__M5 = ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                 & (~ (IData)(vlSelf->z80_top_direct_n__DOT__setM1)));
        }
        if (vlSelf->z80_top_direct_n__DOT__decode_state___DOT__SYNTHESIZED_WIRE_4) {
            vlSelf->z80_top_direct_n__DOT__decode_state___DOT__DFFE_instED 
                = ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                    >> 0x13U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                 & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
        }
        if ((1U & (~ (IData)(vlSelf->z80_top_direct_n__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_9)))) {
            vlSelf->z80_top_direct_n__DOT__reg_control___DOT__bank_af 
                = ((IData)(vlSelf->z80_top_direct_n__DOT__reg_control___DOT__bank_af) 
                   ^ ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                       >> 7U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                 & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
            vlSelf->z80_top_direct_n__DOT__reg_control___DOT__bank_exx 
                = ((IData)(vlSelf->z80_top_direct_n__DOT__reg_control___DOT__bank_exx) 
                   ^ ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                       >> 1U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                 & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
        }
        vlSelf->z80_top_direct_n__DOT__in_halt = ((
                                                   (~ (IData)(vlSelf->z80_top_direct_n__DOT__in_halt)) 
                                                   & ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                       >> 0x1fU) 
                                                      & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)))) 
                                                  | ((IData)(vlSelf->z80_top_direct_n__DOT__in_halt) 
                                                     & (~ 
                                                        ((IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED) 
                                                         | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_intr_ALTERA_SYNTHESIZED)))));
        if (((IData)(vlSelf->z80_top_direct_n__DOT__ctl_ir_we) 
             & (~ (IData)(vlSelf->z80_top_direct_n__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_9)))) {
            vlSelf->z80_top_direct_n__DOT__opcode = vlSelf->z80_top_direct_n__DOT__db0;
        }
        if (vlSelf->z80_top_direct_n__DOT__sequencer___DOT__ena_T) {
            vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__DFFE_iorq_ff1 
                = vlSelf->z80_top_direct_n__DOT__ctl_iorw;
        }
    } else {
        vlSelf->z80_top_direct_n__DOT__decode_state___DOT__DFFE_instCB = 0U;
        vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__DFFE_mwr_ff1 = 0U;
        vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__DFFE_mrd_ff1 = 0U;
        vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__SYNTHESIZED_WIRE_15 = 0U;
        vlSelf->z80_top_direct_n__DOT__clk_delay___DOT__hold_clk_busrq_ALTERA_SYNTHESIZED = 0U;
        vlSelf->z80_top_direct_n__DOT__reg_control___DOT__bank_hl_de1 = 0U;
        vlSelf->z80_top_direct_n__DOT__reg_control___DOT__bank_hl_de2 = 0U;
        vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__DFFE_m1_ff3 = 0U;
        vlSelf->z80_top_direct_n__DOT__im1 = 0U;
        vlSelf->z80_top_direct_n__DOT__im2 = 0U;
        vlSelf->z80_top_direct_n__DOT__interrupts___DOT__DFFE_inst44 = 0U;
        vlSelf->z80_top_direct_n__DOT__decode_state___DOT__DFFE_instIY1 = 0U;
        vlSelf->z80_top_direct_n__DOT__decode_state___DOT__DFFE_instNonRep = 0U;
        vlSelf->z80_top_direct_n__DOT__decode_state___DOT__DFFE_inst4 = 0U;
        vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__q2 = 0U;
        vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__DFFE_intr_ff3 = 0U;
        vlSelf->z80_top_direct_n__DOT__T6 = 0U;
        vlSelf->z80_top_direct_n__DOT__M5 = 0U;
        vlSelf->z80_top_direct_n__DOT__decode_state___DOT__DFFE_instED = 0U;
        vlSelf->z80_top_direct_n__DOT__reg_control___DOT__bank_af = 0U;
        vlSelf->z80_top_direct_n__DOT__reg_control___DOT__bank_exx = 0U;
        vlSelf->z80_top_direct_n__DOT__in_halt = 0U;
        vlSelf->z80_top_direct_n__DOT__opcode = 0U;
        vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__DFFE_iorq_ff1 = 0U;
    }
    vlSelf->z80_top_direct_n__DOT__use_ixiy = ((IData)(vlSelf->z80_top_direct_n__DOT__decode_state___DOT__DFFE_instIY1) 
                                               | (IData)(vlSelf->z80_top_direct_n__DOT__decode_state___DOT__DFFE_inst4));
    if (vlSelf->z80_top_direct_n__DOT__resets___DOT__SYNTHESIZED_WIRE_6) {
        if (vlSelf->z80_top_direct_n__DOT__sequencer___DOT__ena_T) {
            vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__q1 
                = vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__SYNTHESIZED_WIRE_16;
            vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff 
                = ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff) 
                   & (~ (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__ena_M)));
        }
        if (vlSelf->z80_top_direct_n__DOT__sequencer___DOT__ena_M) {
            vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff 
                = ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                   & (~ (IData)(vlSelf->z80_top_direct_n__DOT__setM1)));
        }
    } else {
        vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__q1 = 0U;
        vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff = 0U;
        vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff = 0U;
    }
    vlSelf->nHALT = (1U & (~ (IData)(vlSelf->z80_top_direct_n__DOT__in_halt)));
    if (vlSelf->z80_top_direct_n__DOT__resets___DOT__SYNTHESIZED_WIRE_6) {
        if (vlSelf->z80_top_direct_n__DOT__interrupts___DOT__test1) {
            vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED 
                = vlSelf->z80_top_direct_n__DOT__interrupts___DOT__nmi_armed;
        }
        if (vlSelf->z80_top_direct_n__DOT__sequencer___DOT__ena_T) {
            vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__SYNTHESIZED_WIRE_16 
                = (1U & (~ ((IData)(vlSelf->z80_top_direct_n__DOT__setM1) 
                            | ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)))));
            vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff 
                = ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff) 
                   & (~ (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__ena_M)));
        }
        if (vlSelf->z80_top_direct_n__DOT__sequencer___DOT__ena_M) {
            vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff 
                = ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                   & (~ (IData)(vlSelf->z80_top_direct_n__DOT__setM1)));
        }
    } else {
        vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED = 0U;
        vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__SYNTHESIZED_WIRE_16 = 0U;
        vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff = 0U;
        vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff = 0U;
    }
    vlSelf->nRFSH = (1U & (~ ((~ (IData)(vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__q2)) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__SYNTHESIZED_WIRE_16))));
    if (vlSelf->z80_top_direct_n__DOT__resets___DOT__SYNTHESIZED_WIRE_6) {
        if (vlSelf->z80_top_direct_n__DOT__sequencer___DOT__ena_M) {
            vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff 
                = ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                   & (~ (IData)(vlSelf->z80_top_direct_n__DOT__setM1)));
        }
    } else {
        vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff = 0U;
    }
}

VL_INLINE_OPT void Z80___024root___sequent__TOP__15(Z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Z80___024root___sequent__TOP__15\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->z80_top_direct_n__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_9)))) {
        vlSelf->z80_top_direct_n__DOT__resets___DOT__DFFE_intr_ff3 
            = vlSelf->z80_top_direct_n__DOT__resets___DOT__SYNTHESIZED_WIRE_9;
    }
    if (((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we) 
         | (IData)(vlSelf->z80_top_direct_n__DOT__bus_db_pin_re))) {
        vlSelf->z80_top_direct_n__DOT__data_pins___DOT__dout 
            = (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__bus_db_pin_re))) 
                & (IData)(vlSelf->D)) | ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we))) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__db0)));
    }
    if (((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus) 
         | (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_zero))) {
        vlSelf->z80_top_direct_n__DOT__alu___DOT__op1_high 
            = (((IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__db_high) 
                & (- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus)))) 
               & (- (IData)((1U & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_zero))))));
    }
    if ((((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus) 
          | (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_low)) 
         | (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_zero))) {
        vlSelf->z80_top_direct_n__DOT__alu___DOT__op1_low 
            = ((((IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__db_high) 
                 & (- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_low)))) 
                | ((IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__db_low) 
                   & (- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_bus))))) 
               & (- (IData)((1U & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_zero))))));
    }
    if ((((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus) 
          | (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_lq)) 
         | (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_zero))) {
        vlSelf->z80_top_direct_n__DOT__alu___DOT__op2_high 
            = ((((IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__db_low) 
                 & (- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_lq)))) 
                | ((IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__db_high) 
                   & (- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus))))) 
               & (- (IData)((1U & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_zero))))));
        vlSelf->z80_top_direct_n__DOT__alu___DOT__op2_low 
            = ((((IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__alu_op1) 
                 & (- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_lq)))) 
                | ((IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__db_low) 
                   & (- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_bus))))) 
               & (- (IData)((1U & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_zero))))));
    }
    if ((((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff) 
          & (((((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                | (IData)(vlSelf->z80_top_direct_n__DOT__fMWrite)) 
               | (IData)(vlSelf->z80_top_direct_n__DOT__fMRead)) 
              | (IData)(vlSelf->z80_top_direct_n__DOT__fIORead)) 
             | (IData)(vlSelf->z80_top_direct_n__DOT__fIOWrite))) 
         | ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff)))) {
        vlSelf->z80_top_direct_n__DOT__address_pins___DOT__DFFE_apin_latch 
            = (((((IData)(vlSelf->z80_top_direct_n__DOT__address_latch___DOT__abusz) 
                  & (- (IData)((1U & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_apin_mux)))))) 
                 | ((IData)(vlSelf->z80_top_direct_n__DOT__address_latch___DOT__b2v_inst_inc_dec__DOT__address_ALTERA_SYNTHESIZED) 
                    & (- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_apin_mux))))) 
                & (- (IData)((1U & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_apin_mux2)))))) 
               | ((IData)(vlSelf->z80_top_direct_n__DOT__address_latch___DOT__Q) 
                  & (- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__ctl_apin_mux2)))));
    }
    if ((1U & (~ (IData)(vlSelf->z80_top_direct_n__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_9)))) {
        vlSelf->z80_top_direct_n__DOT__resets___DOT__SYNTHESIZED_WIRE_9 
            = vlSelf->z80_top_direct_n__DOT__resets___DOT__SYNTHESIZED_WIRE_10;
    }
    vlSelf->z80_top_direct_n__DOT__alu_low_gt_9 = (1U 
                                                   & ((IData)(
                                                              (0xaU 
                                                               == 
                                                               (0xaU 
                                                                & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__op1_low)))) 
                                                      | (IData)(
                                                                (0xcU 
                                                                 == 
                                                                 (0xcU 
                                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__alu___DOT__op1_low))))));
    if ((1U & (~ (IData)(vlSelf->z80_top_direct_n__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_9)))) {
        vlSelf->z80_top_direct_n__DOT__resets___DOT__SYNTHESIZED_WIRE_10 
            = vlSelf->z80_top_direct_n__DOT__resets___DOT__SYNTHESIZED_WIRE_12;
    }
}

VL_INLINE_OPT void Z80___024root___sequent__TOP__16(Z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Z80___024root___sequent__TOP__16\n"); );
    // Body
    vlSelf->z80_top_direct_n__DOT__interrupts___DOT__nmi_armed 
        = vlSelf->z80_top_direct_n__DOT__interrupts___DOT__SYNTHESIZED_WIRE_9;
}

VL_INLINE_OPT void Z80___024root___sequent__TOP__17(Z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Z80___024root___sequent__TOP__17\n"); );
    // Body
    if (vlSelf->z80_top_direct_n__DOT__resets___DOT__SYNTHESIZED_WIRE_6) {
        vlSelf->z80_top_direct_n__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_8 
            = (1U & (~ (IData)(vlSelf->nBUSRQ)));
        if (vlSelf->z80_top_direct_n__DOT__sequencer___DOT__ena_T) {
            vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__wait_m_ALTERA_SYNTHESIZED1 
                = vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__DFFE_m1_ff1;
        }
        vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__wait_iorqinta 
            = vlSelf->z80_top_direct_n__DOT__clk_delay___DOT__DFF_inst5;
        if (vlSelf->z80_top_direct_n__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_1) {
            vlSelf->z80_top_direct_n__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_9 
                = (1U & (~ (IData)(vlSelf->nWAIT)));
        }
        if (vlSelf->z80_top_direct_n__DOT__sequencer___DOT__ena_T) {
            vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__DFFE_m1_ff1 
                = vlSelf->z80_top_direct_n__DOT__setM1;
        }
    } else {
        vlSelf->z80_top_direct_n__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_8 = 0U;
        vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__wait_m_ALTERA_SYNTHESIZED1 = 0U;
        vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__wait_iorqinta = 0U;
        vlSelf->z80_top_direct_n__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_9 = 0U;
        vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__DFFE_m1_ff1 = 1U;
    }
    vlSelf->z80_top_direct_n__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_1 
        = (((((IData)(vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__wait_mrd) 
              | ((IData)(vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__wait_iorqinta) 
                 | (IData)(vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__wait_iorq))) 
             | (IData)(vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__wait_m_ALTERA_SYNTHESIZED1)) 
            | (IData)(vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__wait_mwr)) 
           | (IData)(vlSelf->z80_top_direct_n__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_9));
}

VL_INLINE_OPT void Z80___024root___sequent__TOP__18(Z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Z80___024root___sequent__TOP__18\n"); );
    // Body
    vlSelf->z80_top_direct_n__DOT__interrupts___DOT__int_armed 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__SYNTHESIZED_WIRE_21) 
           & ((IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__iff1) 
              & (~ (IData)(vlSelf->nINT))));
}

VL_INLINE_OPT void Z80___024root___multiclk__TOP__19(Z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Z80___024root___multiclk__TOP__19\n"); );
    // Body
    vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__iorq 
        = (((IData)(vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__wait_iorq) 
            | (IData)(vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__DFFE_iorq_ff4)) 
           | (IData)(vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__SYNTHESIZED_WIRE_15));
    vlSelf->nBUSACK = (1U & (~ ((IData)(vlSelf->z80_top_direct_n__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_8) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__clk_delay___DOT__hold_clk_busrq_ALTERA_SYNTHESIZED))));
}

VL_INLINE_OPT void Z80___024root___combo__TOP__20(Z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Z80___024root___combo__TOP__20\n"); );
    // Body
    vlSelf->z80_top_direct_n__DOT__pin_control_oe = 
        ((~ (IData)(vlSelf->z80_top_direct_n__DOT__clk_delay___DOT__hold_clk_busrq_ALTERA_SYNTHESIZED)) 
         & (IData)(vlSelf->z80_top_direct_n__DOT__resets___DOT__SYNTHESIZED_WIRE_6));
    vlSelf->z80_top_direct_n__DOT__pla[0U] = ((0xfffffffeU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[0U]) 
                                              | (0x1a0U 
                                                 == 
                                                 (0x1f4U 
                                                  & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))));
    vlSelf->z80_top_direct_n__DOT__pla[0U] = ((0xfffffffdU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[0U]) 
                                              | ((0x4d9U 
                                                  == 
                                                  (0x4ffU 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 1U));
    vlSelf->z80_top_direct_n__DOT__pla[0U] = ((0xfffffffbU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[0U]) 
                                              | ((0x4ebU 
                                                  == 
                                                  (0x4ffU 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 2U));
    vlSelf->z80_top_direct_n__DOT__pla[0U] = ((0xfffffff7U 
                                               & vlSelf->z80_top_direct_n__DOT__pla[0U]) 
                                              | ((0x4ddU 
                                                  == 
                                                  (0x4dfU 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 3U));
    vlSelf->z80_top_direct_n__DOT__pla[0U] = ((0xffffffdfU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[0U]) 
                                              | ((0x4f9U 
                                                  == 
                                                  (0x4ffU 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 5U));
    vlSelf->z80_top_direct_n__DOT__pla[0U] = ((0xffffffbfU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[0U]) 
                                              | ((0x4e9U 
                                                  == 
                                                  (0x4ffU 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 6U));
    vlSelf->z80_top_direct_n__DOT__pla[0U] = ((0xffffff7fU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[0U]) 
                                              | ((0x401U 
                                                  == 
                                                  (0x4cfU 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 7U));
    vlSelf->z80_top_direct_n__DOT__pla[0U] = ((0xfffffeffU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[0U]) 
                                              | ((0x402U 
                                                  == 
                                                  (0x4e7U 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 8U));
    vlSelf->z80_top_direct_n__DOT__pla[0U] = ((0xfffffdffU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[0U]) 
                                              | ((0x403U 
                                                  == 
                                                  (0x4c7U 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 9U));
    vlSelf->z80_top_direct_n__DOT__pla[0U] = ((0xfffffbffU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[0U]) 
                                              | ((0x4e3U 
                                                  == 
                                                  (0x4ffU 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 0xaU));
    vlSelf->z80_top_direct_n__DOT__pla[0U] = ((0xfffff7ffU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[0U]) 
                                              | ((0x1a1U 
                                                  == 
                                                  (0x1e7U 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 0xbU));
    vlSelf->z80_top_direct_n__DOT__pla[0U] = ((0xffffefffU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[0U]) 
                                              | ((0x1a0U 
                                                  == 
                                                  (0x1e7U 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 0xcU));
    vlSelf->z80_top_direct_n__DOT__pla[0U] = ((0xffffdfffU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[0U]) 
                                              | ((0x402U 
                                                  == 
                                                  (0x4cfU 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 0xdU));
    vlSelf->z80_top_direct_n__DOT__pla[0U] = ((0xffff7fffU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[0U]) 
                                              | ((0x167U 
                                                  == 
                                                  (0x1f7U 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 0xfU));
    vlSelf->z80_top_direct_n__DOT__pla[0U] = ((0xfffeffffU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[0U]) 
                                              | ((0x4c5U 
                                                  == 
                                                  (0x4cfU 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 0x10U));
    vlSelf->z80_top_direct_n__DOT__pla[0U] = ((0xfffdffffU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[0U]) 
                                              | ((0x406U 
                                                  == 
                                                  (0x4c7U 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 0x11U));
    vlSelf->z80_top_direct_n__DOT__pla[0U] = ((0xffefffffU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[0U]) 
                                              | ((0x1a3U 
                                                  == 
                                                  (0x1e7U 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 0x14U));
    vlSelf->z80_top_direct_n__DOT__pla[0U] = ((0xffdfffffU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[0U]) 
                                              | ((0x1a2U 
                                                  == 
                                                  (0x1e7U 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 0x15U));
    vlSelf->z80_top_direct_n__DOT__pla[0U] = ((0xff7fffffU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[0U]) 
                                              | ((0x4c1U 
                                                  == 
                                                  (0x4cbU 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 0x17U));
    vlSelf->z80_top_direct_n__DOT__pla[0U] = ((0xfeffffffU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[0U]) 
                                              | ((0x4cdU 
                                                  == 
                                                  (0x4ffU 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 0x18U));
    vlSelf->z80_top_direct_n__DOT__pla[0U] = ((0xfdffffffU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[0U]) 
                                              | ((0x407U 
                                                  == 
                                                  (0x4e7U 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 0x19U));
    vlSelf->z80_top_direct_n__DOT__pla[0U] = ((0xfbffffffU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[0U]) 
                                              | ((0x410U 
                                                  == 
                                                  (0x4ffU 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 0x1aU));
    vlSelf->z80_top_direct_n__DOT__pla[0U] = ((0xf7ffffffU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[0U]) 
                                              | ((0x140U 
                                                  == 
                                                  (0x1c6U 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 0x1bU));
    vlSelf->z80_top_direct_n__DOT__pla[0U] = ((0xefffffffU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[0U]) 
                                              | ((0x4d3U 
                                                  == 
                                                  (0x4ffU 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 0x1cU));
    vlSelf->z80_top_direct_n__DOT__pla[0U] = ((0xdfffffffU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[0U]) 
                                              | ((0x4c3U 
                                                  == 
                                                  (0x4ffU 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 0x1dU));
    vlSelf->z80_top_direct_n__DOT__pla[0U] = ((0xbfffffffU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[0U]) 
                                              | ((0x422U 
                                                  == 
                                                  (0x4f7U 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 0x1eU));
    vlSelf->z80_top_direct_n__DOT__pla[0U] = ((0x7fffffffU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[0U]) 
                                              | ((0x143U 
                                                  == 
                                                  (0x1c7U 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 0x1fU));
    vlSelf->z80_top_direct_n__DOT__pla[1U] = ((0xfffffffdU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[1U]) 
                                              | ((0x143U 
                                                  == 
                                                  (0x1cfU 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 1U));
    vlSelf->z80_top_direct_n__DOT__pla[1U] = ((0xfffffffbU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[1U]) 
                                              | ((0x141U 
                                                  == 
                                                  (0x1c7U 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 2U));
    vlSelf->z80_top_direct_n__DOT__pla[1U] = ((0xfffffff7U 
                                               & vlSelf->z80_top_direct_n__DOT__pla[1U]) 
                                              | ((0x4c9U 
                                                  == 
                                                  (0x4ffU 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 3U));
    vlSelf->z80_top_direct_n__DOT__pla[1U] = ((0xffffffdfU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[1U]) 
                                              | ((0x4d3U 
                                                  == 
                                                  (0x4f7U 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 5U));
    vlSelf->z80_top_direct_n__DOT__pla[1U] = ((0xffffffbfU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[1U]) 
                                              | ((0x432U 
                                                  == 
                                                  (0x4f7U 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 6U));
    vlSelf->z80_top_direct_n__DOT__pla[1U] = ((0xffffff7fU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[1U]) 
                                              | ((0x408U 
                                                  == 
                                                  (0x4ffU 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 7U));
    vlSelf->z80_top_direct_n__DOT__pla[1U] = ((0xfffffeffU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[1U]) 
                                              | ((0x2436U 
                                                  == 
                                                  (0x24ffU 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 8U));
    vlSelf->z80_top_direct_n__DOT__pla[1U] = ((0xfffffbffU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[1U]) 
                                              | ((0x4c4U 
                                                  == 
                                                  (0x4c7U 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 0xaU));
    vlSelf->z80_top_direct_n__DOT__pla[1U] = ((0xfffff7ffU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[1U]) 
                                              | ((0x4c2U 
                                                  == 
                                                  (0x4c7U 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 0xbU));
    vlSelf->z80_top_direct_n__DOT__pla[1U] = ((0xffffefffU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[1U]) 
                                              | ((0x4cbU 
                                                  == 
                                                  (0x4ffU 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 0xcU));
    vlSelf->z80_top_direct_n__DOT__pla[1U] = ((0xffffdfffU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[1U]) 
                                              | ((0x4c0U 
                                                  == 
                                                  (0x4c7U 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 0xdU));
    vlSelf->z80_top_direct_n__DOT__pla[1U] = ((0xffffbfffU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[1U]) 
                                              | ((0x145U 
                                                  == 
                                                  (0x1c7U 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 0xeU));
    vlSelf->z80_top_direct_n__DOT__pla[1U] = ((0xffff7fffU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[1U]) 
                                              | ((0x418U 
                                                  == 
                                                  (0x4ffU 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 0xfU));
    vlSelf->z80_top_direct_n__DOT__pla[1U] = ((0xfffeffffU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[1U]) 
                                              | ((0x420U 
                                                  == 
                                                  (0x4e7U 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 0x10U));
    vlSelf->z80_top_direct_n__DOT__pla[1U] = ((0xfffdffffU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[1U]) 
                                              | ((0x20cbU 
                                                  == 
                                                  (0x20ffU 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 0x11U));
    vlSelf->z80_top_direct_n__DOT__pla[1U] = ((0xfffbffffU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[1U]) 
                                              | ((0x436U 
                                                  == 
                                                  (0x4ffU 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 0x12U));
    vlSelf->z80_top_direct_n__DOT__pla[1U] = ((0xfff7ffffU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[1U]) 
                                              | ((0x4edU 
                                                  == 
                                                  (0x4ffU 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 0x13U));
    vlSelf->z80_top_direct_n__DOT__pla[1U] = ((0xffefffffU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[1U]) 
                                              | ((0x486U 
                                                  == 
                                                  (0x4c7U 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 0x14U));
    vlSelf->z80_top_direct_n__DOT__pla[1U] = ((0xffdfffffU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[1U]) 
                                              | ((0x434U 
                                                  == 
                                                  (0x4feU 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 0x15U));
    vlSelf->z80_top_direct_n__DOT__pla[1U] = ((0xff7fffffU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[1U]) 
                                              | ((0x206U 
                                                  == 
                                                  (0x207U 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 0x17U));
    vlSelf->z80_top_direct_n__DOT__pla[1U] = ((0xfeffffffU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[1U]) 
                                              | ((0x4c7U 
                                                  == 
                                                  (0x4c7U 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 0x18U));
    vlSelf->z80_top_direct_n__DOT__pla[1U] = ((0xfdffffffU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[1U]) 
                                              | ((0x147U 
                                                  == 
                                                  (0x1f7U 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 0x19U));
    vlSelf->z80_top_direct_n__DOT__pla[1U] = ((0xfbffffffU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[1U]) 
                                              | ((0x1446U 
                                                  == 
                                                  (0x14c7U 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 0x1aU));
    vlSelf->z80_top_direct_n__DOT__pla[1U] = ((0xf7ffffffU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[1U]) 
                                              | ((0x1470U 
                                                  == 
                                                  (0x14f8U 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 0x1bU));
    vlSelf->z80_top_direct_n__DOT__pla[1U] = ((0xdfffffffU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[1U]) 
                                              | ((0x440U 
                                                  == 
                                                  (0x4c0U 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 0x1dU));
    vlSelf->z80_top_direct_n__DOT__pla[2U] = ((0xfffffffeU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[2U]) 
                                              | (0x4c6U 
                                                 == 
                                                 (0x4c7U 
                                                  & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))));
    vlSelf->z80_top_direct_n__DOT__pla[2U] = ((0xfffffffdU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[2U]) 
                                              | ((0x480U 
                                                  == 
                                                  (0x4c0U 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 1U));
    vlSelf->z80_top_direct_n__DOT__pla[2U] = ((0xfffffffbU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[2U]) 
                                              | ((0x404U 
                                                  == 
                                                  (0x4c6U 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 2U));
    vlSelf->z80_top_direct_n__DOT__pla[2U] = ((0xffffffefU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[2U]) 
                                              | ((0x142U 
                                                  == 
                                                  (0x1c7U 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 4U));
    vlSelf->z80_top_direct_n__DOT__pla[2U] = ((0xffffffdfU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[2U]) 
                                              | ((0x409U 
                                                  == 
                                                  (0x4cfU 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 5U));
    vlSelf->z80_top_direct_n__DOT__pla[2U] = ((0xffffffbfU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[2U]) 
                                              | ((0x200U 
                                                  == 
                                                  (0x2c0U 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 6U));
    vlSelf->z80_top_direct_n__DOT__pla[2U] = ((0xfffffeffU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[2U]) 
                                              | ((0x240U 
                                                  == 
                                                  (0x2c0U 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 8U));
    vlSelf->z80_top_direct_n__DOT__pla[2U] = ((0xfffffdffU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[2U]) 
                                              | ((0x280U 
                                                  == 
                                                  (0x2c0U 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 9U));
    vlSelf->z80_top_direct_n__DOT__pla[2U] = ((0xfffffbffU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[2U]) 
                                              | ((0x2c0U 
                                                  == 
                                                  (0x2c0U 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 0xaU));
    vlSelf->z80_top_direct_n__DOT__pla[2U] = ((0xfffff7ffU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[2U]) 
                                              | ((0x405U 
                                                  == 
                                                  (0x4c7U 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 0xbU));
    vlSelf->z80_top_direct_n__DOT__pla[2U] = ((0xffffefffU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[2U]) 
                                              | ((0x838U 
                                                  == 
                                                  (0x838U 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 0xcU));
    vlSelf->z80_top_direct_n__DOT__pla[2U] = ((0xffffdfffU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[2U]) 
                                              | ((0x427U 
                                                  == 
                                                  (0x4ffU 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 0xdU));
    vlSelf->z80_top_direct_n__DOT__pla[2U] = ((0xffffbfffU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[2U]) 
                                              | ((0x810U 
                                                  == 
                                                  (0x838U 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 0xeU));
    vlSelf->z80_top_direct_n__DOT__pla[2U] = ((0xffff7fffU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[2U]) 
                                              | ((0x818U 
                                                  == 
                                                  (0x838U 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 0xfU));
    vlSelf->z80_top_direct_n__DOT__pla[2U] = ((0xfffeffffU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[2U]) 
                                              | ((0x808U 
                                                  == 
                                                  (0x838U 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 0x10U));
    vlSelf->z80_top_direct_n__DOT__pla[2U] = ((0xfffdffffU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[2U]) 
                                              | ((0x42fU 
                                                  == 
                                                  (0x4ffU 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 0x11U));
    vlSelf->z80_top_direct_n__DOT__pla[2U] = ((0xfffbffffU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[2U]) 
                                              | ((0x144U 
                                                  == 
                                                  (0x1c7U 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 0x12U));
    vlSelf->z80_top_direct_n__DOT__pla[2U] = ((0xfff7ffffU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[2U]) 
                                              | ((0x157U 
                                                  == 
                                                  (0x1f7U 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 0x13U));
    vlSelf->z80_top_direct_n__DOT__pla[2U] = ((0xffefffffU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[2U]) 
                                              | ((0x800U 
                                                  == 
                                                  (0x838U 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 0x14U));
    vlSelf->z80_top_direct_n__DOT__pla[2U] = ((0xffdfffffU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[2U]) 
                                              | ((0x820U 
                                                  == 
                                                  (0x838U 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 0x15U));
    vlSelf->z80_top_direct_n__DOT__pla[2U] = ((0xffbfffffU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[2U]) 
                                              | ((0x830U 
                                                  == 
                                                  (0x838U 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 0x16U));
    vlSelf->z80_top_direct_n__DOT__pla[2U] = ((0xfeffffffU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[2U]) 
                                              | ((0x828U 
                                                  == 
                                                  (0x838U 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 0x18U));
    vlSelf->z80_top_direct_n__DOT__pla[2U] = ((0xfdffffffU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[2U]) 
                                              | ((0x43fU 
                                                  == 
                                                  (0x4ffU 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 0x19U));
    vlSelf->z80_top_direct_n__DOT__pla[2U] = ((0xf7ffffffU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[2U]) 
                                              | ((0x1a2U 
                                                  == 
                                                  (0x1e6U 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 0x1bU));
    vlSelf->z80_top_direct_n__DOT__pla[2U] = ((0xefffffffU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[2U]) 
                                              | ((0x437U 
                                                  == 
                                                  (0x4ffU 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 0x1cU));
    vlSelf->z80_top_direct_n__DOT__pla[2U] = ((0x7fffffffU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[2U]) 
                                              | ((0x476U 
                                                  == 
                                                  (0x4ffU 
                                                   & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                       << 8U) 
                                                      | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                 << 0x1fU));
    vlSelf->z80_top_direct_n__DOT__pla[3U] = ((0x1feU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[3U]) 
                                              | (0x1ffU 
                                                 & (0x146U 
                                                    == 
                                                    (0x1c7U 
                                                     & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                         << 8U) 
                                                        | (IData)(vlSelf->z80_top_direct_n__DOT__opcode))))));
    vlSelf->z80_top_direct_n__DOT__pla[3U] = ((0x1fdU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[3U]) 
                                              | (0x1ffU 
                                                 & ((0x4f3U 
                                                     == 
                                                     (0x4f7U 
                                                      & (((IData)(vlSelf->z80_top_direct_n__DOT__prefix) 
                                                          << 8U) 
                                                         | (IData)(vlSelf->z80_top_direct_n__DOT__opcode)))) 
                                                    << 1U)));
    vlSelf->z80_top_direct_n__DOT__pla[3U] = ((0x1f7U 
                                               & vlSelf->z80_top_direct_n__DOT__pla[3U]) 
                                              | (0x1ffU 
                                                 & ((1U 
                                                     == 
                                                     (1U 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__opcode))) 
                                                    << 3U)));
    vlSelf->z80_top_direct_n__DOT__pla[3U] = ((0x1efU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[3U]) 
                                              | (0x1ffU 
                                                 & ((2U 
                                                     == 
                                                     (2U 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__opcode))) 
                                                    << 4U)));
    vlSelf->z80_top_direct_n__DOT__pla[3U] = ((0x1dfU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[3U]) 
                                              | (0x1ffU 
                                                 & ((4U 
                                                     == 
                                                     (4U 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__opcode))) 
                                                    << 5U)));
    vlSelf->z80_top_direct_n__DOT__pla[3U] = ((0x1bfU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[3U]) 
                                              | (0x1ffU 
                                                 & ((8U 
                                                     == 
                                                     (8U 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__opcode))) 
                                                    << 6U)));
    vlSelf->z80_top_direct_n__DOT__pla[3U] = ((0x17fU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[3U]) 
                                              | (0x1ffU 
                                                 & ((0x10U 
                                                     == 
                                                     (0x10U 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__opcode))) 
                                                    << 7U)));
    vlSelf->z80_top_direct_n__DOT__pla[3U] = ((0xffU 
                                               & vlSelf->z80_top_direct_n__DOT__pla[3U]) 
                                              | (0x1ffU 
                                                 & ((0x20U 
                                                     == 
                                                     (0x20U 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__opcode))) 
                                                    << 8U)));
    vlSelf->nM1 = (1U & ((~ (IData)(vlSelf->z80_top_direct_n__DOT__resets___DOT__SYNTHESIZED_WIRE_6)) 
                         | (IData)(vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__SYNTHESIZED_WIRE_16)));
    vlSelf->z80_top_direct_n__DOT__interrupts___DOT__SYNTHESIZED_WIRE_9 
        = ((~ (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED)) 
           & (IData)(vlSelf->z80_top_direct_n__DOT__resets___DOT__SYNTHESIZED_WIRE_6));
    vlSelf->z80_top_direct_n__DOT__abus__en13 = (0xffffU 
                                                 & ((((((((0xc000U 
                                                           & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__pin_control_oe))) 
                                                              << 0xeU)) 
                                                          | (0x3000U 
                                                             & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__pin_control_oe))) 
                                                                << 0xcU))) 
                                                         | (0xc00U 
                                                            & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__pin_control_oe))) 
                                                               << 0xaU))) 
                                                        | (0x300U 
                                                           & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__pin_control_oe))) 
                                                              << 8U))) 
                                                       | (0xc0U 
                                                          & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__pin_control_oe))) 
                                                             << 6U))) 
                                                      | (0x30U 
                                                         & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__pin_control_oe))) 
                                                            << 4U))) 
                                                     | (0xcU 
                                                        & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__pin_control_oe))) 
                                                           << 2U))) 
                                                    | (3U 
                                                       & (- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__pin_control_oe))))));
    vlSelf->z80_top_direct_n__DOT__address_pins___DOT__abus__out__out0 
        = ((0x3fffU & (IData)(vlSelf->z80_top_direct_n__DOT__address_pins___DOT__abus__out__out0)) 
           | (0xc000U & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__pin_control_oe))) 
                          << 0xeU) & (IData)(vlSelf->z80_top_direct_n__DOT__address_pins___DOT__DFFE_apin_latch))));
    vlSelf->z80_top_direct_n__DOT__address_pins___DOT__abus__out__out1 
        = ((0xcfffU & (IData)(vlSelf->z80_top_direct_n__DOT__address_pins___DOT__abus__out__out1)) 
           | (0x3000U & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__pin_control_oe))) 
                          << 0xcU) & (IData)(vlSelf->z80_top_direct_n__DOT__address_pins___DOT__DFFE_apin_latch))));
    vlSelf->z80_top_direct_n__DOT__address_pins___DOT__abus__out__out2 
        = ((0xf3ffU & (IData)(vlSelf->z80_top_direct_n__DOT__address_pins___DOT__abus__out__out2)) 
           | (0xc00U & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__pin_control_oe))) 
                         << 0xaU) & (IData)(vlSelf->z80_top_direct_n__DOT__address_pins___DOT__DFFE_apin_latch))));
    vlSelf->z80_top_direct_n__DOT__address_pins___DOT__abus__out__out3 
        = ((0xfcffU & (IData)(vlSelf->z80_top_direct_n__DOT__address_pins___DOT__abus__out__out3)) 
           | (0x300U & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__pin_control_oe))) 
                         << 8U) & (IData)(vlSelf->z80_top_direct_n__DOT__address_pins___DOT__DFFE_apin_latch))));
    vlSelf->z80_top_direct_n__DOT__address_pins___DOT__abus__out__out4 
        = ((0xff3fU & (IData)(vlSelf->z80_top_direct_n__DOT__address_pins___DOT__abus__out__out4)) 
           | (0xc0U & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__pin_control_oe))) 
                        << 6U) & (IData)(vlSelf->z80_top_direct_n__DOT__address_pins___DOT__DFFE_apin_latch))));
    vlSelf->z80_top_direct_n__DOT__address_pins___DOT__abus__out__out5 
        = ((0xffcfU & (IData)(vlSelf->z80_top_direct_n__DOT__address_pins___DOT__abus__out__out5)) 
           | (0x30U & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__pin_control_oe))) 
                        << 4U) & (IData)(vlSelf->z80_top_direct_n__DOT__address_pins___DOT__DFFE_apin_latch))));
    vlSelf->z80_top_direct_n__DOT__address_pins___DOT__abus__out__out6 
        = ((0xfff3U & (IData)(vlSelf->z80_top_direct_n__DOT__address_pins___DOT__abus__out__out6)) 
           | (0xcU & (((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__pin_control_oe))) 
                       << 2U) & (IData)(vlSelf->z80_top_direct_n__DOT__address_pins___DOT__DFFE_apin_latch))));
    vlSelf->z80_top_direct_n__DOT__address_pins___DOT__abus__out__out7 
        = ((0xfffcU & (IData)(vlSelf->z80_top_direct_n__DOT__address_pins___DOT__abus__out__out7)) 
           | (3U & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__pin_control_oe))) 
                    & (IData)(vlSelf->z80_top_direct_n__DOT__address_pins___DOT__DFFE_apin_latch))));
    vlSelf->nIORQ = ((IData)(vlSelf->z80_top_direct_n__DOT__pin_control_oe) 
                     & (~ (((IData)(vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__DFFE_intr_ff3) 
                            | (IData)(vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__wait_iorqinta)) 
                           | (IData)(vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__iorq))));
    vlSelf->z80_top_direct_n__DOT__alu_control___DOT__sel 
        = ((2U & (IData)(vlSelf->z80_top_direct_n__DOT__alu_control___DOT__sel)) 
           | (1U & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                    >> 7U)));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__rsel0 
        = (1U & ((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                  >> 3U) ^ (IData)((0x30U == (0x30U 
                                              & vlSelf->z80_top_direct_n__DOT__pla[3U])))));
    vlSelf->z80_top_direct_n__DOT__execute___DOT__rsel3 
        = (1U & ((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                  >> 6U) ^ (IData)((0x180U == (0x180U 
                                               & vlSelf->z80_top_direct_n__DOT__pla[3U])))));
    vlSelf->z80_top_direct_n__DOT__ctl_repeat_we = 
        ((vlSelf->z80_top_direct_n__DOT__pla[0U] >> 0xcU) 
         & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_repeat_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_repeat_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->A = ((((((((((0xc000U & ((IData)(vlSelf->z80_top_direct_n__DOT__address_pins___DOT__abus__out__out0) 
                                     & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__pin_control_oe))) 
                                        << 0xeU))) 
                         | (0x3000U & ((IData)(vlSelf->z80_top_direct_n__DOT__address_pins___DOT__abus__out__out1) 
                                       & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__pin_control_oe))) 
                                          << 0xcU)))) 
                        | (0xc00U & ((IData)(vlSelf->z80_top_direct_n__DOT__address_pins___DOT__abus__out__out2) 
                                     & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__pin_control_oe))) 
                                        << 0xaU)))) 
                       | (0x300U & ((IData)(vlSelf->z80_top_direct_n__DOT__address_pins___DOT__abus__out__out3) 
                                    & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__pin_control_oe))) 
                                       << 8U)))) | 
                      (0xc0U & ((IData)(vlSelf->z80_top_direct_n__DOT__address_pins___DOT__abus__out__out4) 
                                & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__pin_control_oe))) 
                                   << 6U)))) | (0x30U 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__address_pins___DOT__abus__out__out5) 
                                                   & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__pin_control_oe))) 
                                                      << 4U)))) 
                    | (0xcU & ((IData)(vlSelf->z80_top_direct_n__DOT__address_pins___DOT__abus__out__out6) 
                               & ((- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__pin_control_oe))) 
                                  << 2U)))) | (3U & 
                                               ((IData)(vlSelf->z80_top_direct_n__DOT__address_pins___DOT__abus__out__out7) 
                                                & (- (IData)((IData)(vlSelf->z80_top_direct_n__DOT__pin_control_oe)))))) 
                  & (IData)(vlSelf->z80_top_direct_n__DOT__abus__en13)) 
                 & (IData)(vlSelf->z80_top_direct_n__DOT__abus__en13));
}

VL_INLINE_OPT void Z80___024root___sequent__TOP__21(Z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Z80___024root___sequent__TOP__21\n"); );
    // Body
    if (vlSelf->z80_top_direct_n__DOT__resets___DOT__SYNTHESIZED_WIRE_6) {
        if (vlSelf->z80_top_direct_n__DOT__ctl_al_we) {
            vlSelf->z80_top_direct_n__DOT__address_latch___DOT__Q 
                = vlSelf->z80_top_direct_n__DOT__address_latch___DOT__abusz;
        }
        if (vlSelf->z80_top_direct_n__DOT__sequencer___DOT__ena_T) {
            vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff 
                = ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff) 
                   & (~ (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__ena_M)));
            vlSelf->z80_top_direct_n__DOT__clk_delay___DOT__DFF_inst5 
                = vlSelf->z80_top_direct_n__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_7;
            vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff 
                = ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff) 
                   & (~ (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__ena_M)));
        } else {
            vlSelf->z80_top_direct_n__DOT__clk_delay___DOT__DFF_inst5 
                = vlSelf->z80_top_direct_n__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_7;
        }
        vlSelf->z80_top_direct_n__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_7 
            = (((IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_intr_ALTERA_SYNTHESIZED) 
                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff)) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff));
    } else {
        vlSelf->z80_top_direct_n__DOT__address_latch___DOT__Q = 0U;
        vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff = 0U;
        vlSelf->z80_top_direct_n__DOT__clk_delay___DOT__DFF_inst5 = 0U;
        vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff = 0U;
        vlSelf->z80_top_direct_n__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_7 = 0U;
    }
    vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_intr_ALTERA_SYNTHESIZED 
        = ((~ (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED)) 
           & (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__DFFE_inst44));
    if (vlSelf->z80_top_direct_n__DOT__resets___DOT__SYNTHESIZED_WIRE_6) {
        if (vlSelf->z80_top_direct_n__DOT__sequencer___DOT__ena_M) {
            vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff 
                = vlSelf->z80_top_direct_n__DOT__setM1;
        }
        if (vlSelf->z80_top_direct_n__DOT__sequencer___DOT__ena_T) {
            vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff 
                = vlSelf->z80_top_direct_n__DOT__sequencer___DOT__ena_M;
        }
    } else {
        vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff = 1U;
        vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff = 1U;
    }
    vlSelf->z80_top_direct_n__DOT__ctl_apin_mux2 = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff));
    vlSelf->z80_top_direct_n__DOT__ctl_apin_mux2 = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_apin_mux2) 
         | ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
}

VL_INLINE_OPT void Z80___024root___sequent__TOP__22(Z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Z80___024root___sequent__TOP__22\n"); );
    // Body
    vlSelf->z80_top_direct_n__DOT__resets___DOT__SYNTHESIZED_WIRE_12 
        = (1U & ((~ (IData)(vlSelf->z80_top_direct_n__DOT__resets___DOT__SYNTHESIZED_WIRE_8)) 
                 | ((IData)(vlSelf->z80_top_direct_n__DOT__resets___DOT__x1) 
                    & (~ (IData)(vlSelf->z80_top_direct_n__DOT__resets___DOT__SYNTHESIZED_WIRE_11)))));
    vlSelf->z80_top_direct_n__DOT__resets___DOT__SYNTHESIZED_WIRE_6 
        = (1U & (~ (IData)(vlSelf->z80_top_direct_n__DOT__resets___DOT__SYNTHESIZED_WIRE_12)));
}

VL_INLINE_OPT void Z80___024root___sequent__TOP__23(Z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Z80___024root___sequent__TOP__23\n"); );
    // Body
    if (vlSelf->z80_top_direct_n__DOT__interrupts___DOT__SYNTHESIZED_WIRE_15) {
        if (((IData)(vlSelf->z80_top_direct_n__DOT__ctl_iffx_we) 
             | (IData)(vlSelf->z80_top_direct_n__DOT__ctl_iff1_iff2))) {
            vlSelf->z80_top_direct_n__DOT__interrupts___DOT__iff1 
                = (((IData)(vlSelf->z80_top_direct_n__DOT__ctl_iff1_iff2) 
                    & (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__DFFE_instIFF2)) 
                   | ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_iffx_bit) 
                      & (~ (IData)(vlSelf->z80_top_direct_n__DOT__ctl_iff1_iff2))));
        }
    } else {
        vlSelf->z80_top_direct_n__DOT__interrupts___DOT__iff1 = 0U;
    }
}

VL_INLINE_OPT void Z80___024root___multiclk__TOP__24(Z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Z80___024root___multiclk__TOP__24\n"); );
    // Body
    vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__m1_mreq 
        = (1U & (~ ((IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_intr_ALTERA_SYNTHESIZED) 
                    | (~ ((IData)(vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__DFFE_m1_ff3) 
                          | (IData)(vlSelf->z80_top_direct_n__DOT__memory_ifc___DOT__wait_m_ALTERA_SYNTHESIZED1))))));
    vlSelf->z80_top_direct_n__DOT__sequencer___DOT__ena_T 
        = (1U & (~ ((((IData)(vlSelf->z80_top_direct_n__DOT__clk_delay___DOT__DFF_inst5) 
                      | (IData)(vlSelf->z80_top_direct_n__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_7)) 
                     | (IData)(vlSelf->z80_top_direct_n__DOT__clk_delay___DOT__SYNTHESIZED_WIRE_9)) 
                    | (IData)(vlSelf->z80_top_direct_n__DOT__clk_delay___DOT__hold_clk_busrq_ALTERA_SYNTHESIZED))));
}

VL_INLINE_OPT void Z80___024root___combo__TOP__25(Z80___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Z80__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Z80___024root___combo__TOP__25\n"); );
    // Init
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_pf_sel_pla83M1T1_19;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_pf_sel_pla12M1T1_12;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_pf_sel_pla11M1T1_11;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_pf_sel_pla66npla53M1T1_15;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_pf_sel_nuse_ixiypla53M2T4_14;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_pf_sel_nuse_ixiypla53M4T4_14;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_pf_sel_op3pla68M3T1_18;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_pf_sel_nop3pla68M3T1_20;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_pf_sel_pla82M1T1_16;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_pf_sel_pla76M1T1_2;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_pf_sel_pla78M1T1_8;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_pf_sel_pla79M1T1_8;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_pf_sel_pla80M1T1_8;
    CData/*0:0*/ z80_top_direct_n__DOT__execute___DOT__ctl_pf_sel_pla84M1T1_8;
    // Body
    vlSelf->z80_top_direct_n__DOT__ctl_reg_ex_de_hl 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 2U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_im_we = (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_state_iy_set 
        = (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 3U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))) 
           & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
              >> 8U));
    vlSelf->z80_top_direct_n__DOT__ctl_state_tbl_cb_set 
        = ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
            >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_state_tbl_cb_set 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_state_tbl_cb_set) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__alu_control___DOT__sel 
        = ((1U & (IData)(vlSelf->z80_top_direct_n__DOT__alu_control___DOT__sel)) 
           | ((IData)(((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                        >> 8U) & (~ ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                      >> 0x10U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)))))) 
              << 1U));
    vlSelf->z80_top_direct_n__DOT__ctl_iorw = (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 5U) 
                                                & (~ 
                                                   (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0x1cU))) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_iorw = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_iorw) 
                                               | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0x1bU) 
                                                   & (~ 
                                                      (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 2U))) 
                                                  & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_iorw = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_iorw) 
                                               | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 5U) 
                                                   & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                      >> 0x1cU)) 
                                                  & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_iorw = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_iorw) 
                                               | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0x1bU) 
                                                   & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                      >> 2U)) 
                                                  & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_iorw = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_iorw) 
                                               | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                    >> 0x1bU) 
                                                   & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                      >> 0x15U)) 
                                                  & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_iorw = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_iorw) 
                                               | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                    >> 0x1bU) 
                                                   & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                      >> 0x14U)) 
                                                  & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mWrite = (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 0x1bU)) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_mWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mWrite) 
                                                 | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                     & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                        >> 0x1bU)) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mWrite) 
                                                 | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 8U) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mWrite) 
                                                 | ((IData)(
                                                            (0x40000U 
                                                             == 
                                                             (0x40100U 
                                                              & vlSelf->z80_top_direct_n__DOT__pla[1U]))) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mWrite) 
                                                 | ((IData)(
                                                            (0x2100U 
                                                             == 
                                                             (0x2100U 
                                                              & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mWrite) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                      >> 6U) 
                                                     & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                        >> 0xdU)) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mWrite) 
                                                 | ((IData)(
                                                            (0x40002000U 
                                                             == 
                                                             (0x40002000U 
                                                              & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mWrite) 
                                                 | ((IData)(
                                                            (0x40002000U 
                                                             == 
                                                             (0x40002000U 
                                                              & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mWrite) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                      >> 0x1fU) 
                                                     & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                        >> 1U)) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mWrite) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                      >> 0x1fU) 
                                                     & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                        >> 1U)) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mWrite) 
                                                 | ((IData)(
                                                            (0x810000U 
                                                             == 
                                                             (0x810000U 
                                                              & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mWrite) 
                                                 | ((IData)(
                                                            (0x810000U 
                                                             == 
                                                             (0x810000U 
                                                              & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mWrite) 
                                                 | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0xaU) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mWrite) 
                                                 | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0xaU) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mWrite) 
                                                 | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0xcU) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mWrite) 
                                                 | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                     & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                        >> 0x15U)) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mWrite) 
                                                 | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                     & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                        >> 0x15U)) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mWrite) 
                                                 | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                      & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                         >> 6U)) 
                                                     & (~ 
                                                        (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                         >> 0x17U))) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mWrite) 
                                                 | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                      & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                         >> 6U)) 
                                                     & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                        >> 0x17U)) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mWrite) 
                                                 | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                      & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                         >> 6U)) 
                                                     & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                        >> 0x17U)) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mWrite) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                      >> 0xfU) 
                                                     & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                        >> 6U)) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mWrite) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                      >> 0xfU) 
                                                     & (~ 
                                                        (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                         >> 6U))) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mWrite) 
                                                 | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                      & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                         >> 0xaU)) 
                                                     & (~ 
                                                        (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                         >> 0x17U))) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mWrite) 
                                                 | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                      & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                         >> 0xaU)) 
                                                     & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                        >> 0x17U)) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mWrite) 
                                                 | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                      & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                         >> 0xaU)) 
                                                     & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                        >> 0x17U)) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mWrite) 
                                                 | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                      & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                         >> 9U)) 
                                                     & (~ 
                                                        (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                         >> 0x17U))) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mWrite) 
                                                 | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                      & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                         >> 9U)) 
                                                     & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                        >> 0x17U)) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mWrite) 
                                                 | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                      & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                         >> 9U)) 
                                                     & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                        >> 0x17U)) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mWrite) 
                                                 | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                      >> 0x1bU) 
                                                     & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                        >> 0x15U)) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mWrite) 
                                                 | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0x18U) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mWrite) 
                                                 | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0x18U) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mWrite) 
                                                 | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 0xaU) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mWrite) 
                                                 | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 0xaU) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mWrite) 
                                                 | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 0x18U) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mWrite) 
                                                 | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 0x18U) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                  >> 0x11U) 
                                                 & (~ 
                                                    (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 0x12U))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x1aU)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x1aU)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x1aU)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x1bU)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 8U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 8U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | ((IData)(
                                                           (0x40000U 
                                                            == 
                                                            (0x40100U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[1U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | ((IData)(
                                                           (0x100U 
                                                            == 
                                                            (0x2100U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 6U) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                       >> 0xdU)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 6U) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                       >> 0xdU)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 6U) 
                                                    & (~ 
                                                       (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                        >> 0xdU))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 6U) 
                                                    & (~ 
                                                       (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                        >> 0xdU))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 6U) 
                                                    & (~ 
                                                       (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                        >> 0xdU))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 7U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 7U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | ((IData)(
                                                           (0x40002000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | ((IData)(
                                                           (0x40002000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | ((IData)(
                                                           (0x40000000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | ((IData)(
                                                           (0x40000000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | ((IData)(
                                                           (0x40000000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | ((IData)(
                                                           (0x40000000U 
                                                            == 
                                                            (0x40002000U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 1U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 1U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (~ 
                                                       (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                        >> 1U))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (~ 
                                                       (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                        >> 1U))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (~ 
                                                       (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                        >> 1U))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0x1fU) 
                                                    & (~ 
                                                       (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                        >> 1U))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | ((IData)(
                                                           (0x800000U 
                                                            == 
                                                            (0x810000U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | ((IData)(
                                                           (0x800000U 
                                                            == 
                                                            (0x810000U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0xcU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0xbU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x14U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x14U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x14U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x15U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x15U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x15U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                     & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                        >> 6U)) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0xfU) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                       >> 6U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0xfU) 
                                                    & (~ 
                                                       (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                        >> 6U))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                     & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                        >> 8U)) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                     & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                        >> 0xaU)) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                     & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                        >> 9U)) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 5U) 
                                                    & (~ 
                                                       (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                        >> 0x1cU))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 5U) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                       >> 0x1cU)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                     >> 0x1bU) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                       >> 0x14U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0x1dU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0x1dU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0xbU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0xbU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0xfU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x10U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0x1aU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0xaU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 3U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 3U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0xdU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0xdU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0xeU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0xeU) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 0x18U) 
                                                    & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_intr_ALTERA_SYNTHESIZED) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__im2))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x18U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x11U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x11U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_mRead = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_mRead) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x11U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_no_ints = ((
                                                   vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                   >> 1U) 
                                                  & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_no_ints = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_no_ints) 
                                                  | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                      >> 3U) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_no_ints = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_no_ints) 
                                                  | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                      >> 0xcU) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_no_ints = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_no_ints) 
                                                  | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                      >> 0x13U) 
                                                     & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_state_tbl_we 
        = ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
            >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_state_tbl_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_state_tbl_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_state_tbl_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_state_tbl_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x13U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_state_tbl_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_state_tbl_we) 
           | ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__nextM = (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                              >> 0x11U) 
                                             & (~ (
                                                   vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                   >> 0x12U))) 
                                            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
                                                & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                   >> 0x1aU)) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
                                                & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                   >> 0x1aU)) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
                                                & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                   >> 0x1aU)) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                   >> 0x1aU)) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
                                                & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                   >> 0x1bU)) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
                                                & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                   >> 0x1bU)) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
                                                & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                   >> 0x1bU)) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                   >> 0x1bU)) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                >> 8U) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                >> 8U) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                >> 8U) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((IData)(
                                                       (0x40000U 
                                                        == 
                                                        (0x40100U 
                                                         & vlSelf->z80_top_direct_n__DOT__pla[1U]))) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((IData)(
                                                       (0x40000U 
                                                        == 
                                                        (0x40100U 
                                                         & vlSelf->z80_top_direct_n__DOT__pla[1U]))) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((IData)(
                                                       (0x2100U 
                                                        == 
                                                        (0x2100U 
                                                         & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((IData)(
                                                       (0x100U 
                                                        == 
                                                        (0x2100U 
                                                         & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 6U) 
                                                & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                   >> 0xdU)) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 6U) 
                                                & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                   >> 0xdU)) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 6U) 
                                                & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                   >> 0xdU)) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 6U) 
                                                & (~ 
                                                   (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0xdU))) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 6U) 
                                                & (~ 
                                                   (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0xdU))) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 6U) 
                                                & (~ 
                                                   (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0xdU))) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                >> 7U) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                >> 7U) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((IData)(
                                                       (0x40002000U 
                                                        == 
                                                        (0x40002000U 
                                                         & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((IData)(
                                                       (0x40002000U 
                                                        == 
                                                        (0x40002000U 
                                                         & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((IData)(
                                                       (0x40002000U 
                                                        == 
                                                        (0x40002000U 
                                                         & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((IData)(
                                                       (0x40002000U 
                                                        == 
                                                        (0x40002000U 
                                                         & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((IData)(
                                                       (0x40000000U 
                                                        == 
                                                        (0x40002000U 
                                                         & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((IData)(
                                                       (0x40000000U 
                                                        == 
                                                        (0x40002000U 
                                                         & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((IData)(
                                                       (0x40000000U 
                                                        == 
                                                        (0x40002000U 
                                                         & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((IData)(
                                                       (0x40000000U 
                                                        == 
                                                        (0x40002000U 
                                                         & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                 >> 0x1fU) 
                                                & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                   >> 1U)) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                 >> 0x1fU) 
                                                & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                   >> 1U)) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                 >> 0x1fU) 
                                                & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                   >> 1U)) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                 >> 0x1fU) 
                                                & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                   >> 1U)) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                 >> 0x1fU) 
                                                & (~ 
                                                   (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 1U))) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                 >> 0x1fU) 
                                                & (~ 
                                                   (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 1U))) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                 >> 0x1fU) 
                                                & (~ 
                                                   (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 1U))) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                 >> 0x1fU) 
                                                & (~ 
                                                   (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 1U))) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((IData)(
                                                       (0x810000U 
                                                        == 
                                                        (0x810000U 
                                                         & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((IData)(
                                                       (0x810000U 
                                                        == 
                                                        (0x810000U 
                                                         & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((IData)(
                                                       (0x800000U 
                                                        == 
                                                        (0x810000U 
                                                         & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((IData)(
                                                       (0x800000U 
                                                        == 
                                                        (0x810000U 
                                                         & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                >> 0xaU) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                >> 0xaU) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                >> 0xaU) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                >> 0xaU) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                >> 0xcU) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                >> 0xcU) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                >> 0xcU) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                >> 0xbU) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                >> 0xbU) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                >> 0xbU) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
                                                & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                   >> 0x14U)) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
                                                & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                   >> 0x14U)) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
                                                & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                   >> 0x14U)) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                   >> 0x14U)) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
                                                & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                   >> 0x15U)) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
                                                & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                   >> 0x15U)) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
                                                & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                   >> 0x15U)) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                   >> 0x15U)) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                   >> 0x15U)) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                   >> 0x15U)) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                >> 5U) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                >> 5U) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                 >> 6U) 
                                                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                   >> 4U)) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                 >> 6U) 
                                                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                   >> 4U)) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | (((~ 
                                                 (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                  >> 6U)) 
                                                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                   >> 4U)) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | (((~ 
                                                 (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                  >> 6U)) 
                                                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                   >> 4U)) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                    >> 6U)) 
                                                & (~ 
                                                   (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x17U))) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                    >> 6U)) 
                                                & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                   >> 0x17U)) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                    >> 6U)) 
                                                & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                   >> 0x17U)) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                    >> 6U)) 
                                                & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                   >> 0x17U)) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                 >> 0xfU) 
                                                & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                   >> 6U)) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                 >> 0xfU) 
                                                & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                   >> 6U)) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                 >> 0xfU) 
                                                & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                   >> 6U)) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                 >> 0xfU) 
                                                & (~ 
                                                   (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                    >> 6U))) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                 >> 0xfU) 
                                                & (~ 
                                                   (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                    >> 6U))) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                 >> 0xfU) 
                                                & (~ 
                                                   (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                    >> 6U))) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                    >> 8U)) 
                                                & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                   >> 0x17U)) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                    >> 0xaU)) 
                                                & (~ 
                                                   (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x17U))) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                    >> 0xaU)) 
                                                & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                   >> 0x17U)) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                    >> 0xaU)) 
                                                & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                   >> 0x17U)) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                    >> 0xaU)) 
                                                & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                   >> 0x17U)) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                    >> 9U)) 
                                                & (~ 
                                                   (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x17U))) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                    >> 9U)) 
                                                & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                   >> 0x17U)) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                    >> 9U)) 
                                                & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                   >> 0x17U)) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                    >> 9U)) 
                                                & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                   >> 0x17U)) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 5U) 
                                                & (~ 
                                                   (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0x1cU))) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 5U) 
                                                & (~ 
                                                   (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0x1cU))) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                 >> 0x1bU) 
                                                & (~ 
                                                   (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 2U))) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 5U) 
                                                & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                   >> 0x1cU)) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 5U) 
                                                & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                   >> 0x1cU)) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                 >> 0x1bU) 
                                                & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                   >> 2U)) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                 >> 0x1bU) 
                                                & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                   >> 0x15U)) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                 >> 0x1bU) 
                                                & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                   >> 0x15U)) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                 >> 0x1bU) 
                                                & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                   >> 0x15U)) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                 >> 0x1bU) 
                                                & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                   >> 0x14U)) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                 >> 0x1bU) 
                                                & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                   >> 0x14U)) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                 >> 0x1bU) 
                                                & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                   >> 0x14U)) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                >> 0x1dU) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                >> 0x1dU) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                >> 0xbU) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                >> 0xbU) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                >> 0xfU) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                >> 0xfU) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                >> 0x10U) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                >> 0x10U) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                >> 0x1aU) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                >> 0x1aU) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                >> 0x18U) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                >> 0x18U) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                >> 0x18U) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                >> 0x18U) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                >> 0xaU) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                >> 0xaU) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 0xaU) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))) 
                                               & (~ (IData)(vlSelf->z80_top_direct_n__DOT__flags_cond_true))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                >> 0xaU) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                >> 0xaU) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                >> 3U) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                >> 3U) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                >> 0xdU) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                >> 0xdU) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                >> 0xeU) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                >> 0xeU) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                >> 0x18U) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                >> 0x18U) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                >> 0x18U) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                >> 0x18U) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                >> 0x11U) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                >> 0x11U) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__nextM = ((IData)(vlSelf->z80_top_direct_n__DOT__nextM) 
                                            | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                >> 0x11U) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf2_sel_shift 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf2_sel_shift 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf2_sel_shift) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf2_sel_shift 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf2_sel_shift) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf2_sel_shift 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf2_sel_shift) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf2_sel_shift 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf2_sel_shift) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_bus = 
        ((vlSelf->z80_top_direct_n__DOT__pla[2U] >> 0x13U) 
         & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_bus) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_bus) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_bus) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_bus) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
              >> 1U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                           >> 0x14U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_bus) 
         | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_bus) 
         | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_bus) 
         | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_bus) 
         | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_bus) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
              >> 2U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                           >> 0x15U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_bus) 
         | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_bus) 
         | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_bus) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_bus) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
              >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                        >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_bus) 
         | (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                 >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                            >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_bus) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_bus) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_bus) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x12U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_bus) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_bus) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x1cU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_bus) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_bus) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_bus) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_bus) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0xfU) & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                          >> 6U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_bus) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0xfU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                             >> 6U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_bus) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 8U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_bus) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 8U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_bus) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 8U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_bus) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 0xaU)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_bus) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 0xaU)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_bus) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 9U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_bus) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 9U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_bus) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1bU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 2U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_bus) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                           >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_bus) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_bus) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_bus) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0xfU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_bus) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0x10U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_bus) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_bus) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_bus) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_bus = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_bus) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_oe = (
                                                   (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                    >> 0x13U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_oe = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_oe) 
                                                   | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                       >> 0xcU) 
                                                      & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_oe = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_oe) 
                                                   | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                       >> 0xbU) 
                                                      & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_oe = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_oe) 
                                                   | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                        >> 1U) 
                                                       & (~ 
                                                          (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                           >> 0x14U))) 
                                                      & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_oe = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_oe) 
                                                   | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                      & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_oe = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_oe) 
                                                   | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                       & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                          >> 0x14U)) 
                                                      & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_oe = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_oe) 
                                                   | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                        >> 2U) 
                                                       & (~ 
                                                          (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                           >> 0x15U))) 
                                                      & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_oe = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_oe) 
                                                   | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                       & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                          >> 0x15U)) 
                                                      & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_oe = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_oe) 
                                                   | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                       >> 5U) 
                                                      & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_oe = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_oe) 
                                                   | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                        >> 6U) 
                                                       & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                          >> 4U)) 
                                                      & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_oe = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_oe) 
                                                   | (((~ 
                                                        (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                         >> 6U)) 
                                                       & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                          >> 4U)) 
                                                      & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_oe = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_oe) 
                                                   | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                       >> 0xdU) 
                                                      & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_oe = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_oe) 
                                                   | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                       >> 0x11U) 
                                                      & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_oe = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_oe) 
                                                   | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                       >> 0x12U) 
                                                      & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_oe = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_oe) 
                                                   | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                       >> 0x19U) 
                                                      & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_oe = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_oe) 
                                                   | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                       >> 0x1cU) 
                                                      & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_oe = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_oe) 
                                                   | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                       >> 0x19U) 
                                                      & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_oe = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_oe) 
                                                   | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                        & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                           >> 6U)) 
                                                       & (~ 
                                                          (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                           >> 0x17U))) 
                                                      & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_oe = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_oe) 
                                                   | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                        & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                           >> 6U)) 
                                                       & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                          >> 0x17U)) 
                                                      & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_oe = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_oe) 
                                                   | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                        >> 0xfU) 
                                                       & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                          >> 6U)) 
                                                      & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_oe = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_oe) 
                                                   | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                        >> 0xfU) 
                                                       & (~ 
                                                          (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                           >> 6U))) 
                                                      & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_oe = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_oe) 
                                                   | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                        & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                           >> 8U)) 
                                                       & (~ 
                                                          (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                           >> 0x17U))) 
                                                      & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_oe = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_oe) 
                                                   | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                        & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                           >> 8U)) 
                                                       & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                          >> 0x17U)) 
                                                      & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_oe = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_oe) 
                                                   | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                        >> 0x1bU) 
                                                       & (~ 
                                                          (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                           >> 2U))) 
                                                      & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_oe = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_oe) 
                                                   | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                        >> 0x1bU) 
                                                       & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                          >> 0x15U)) 
                                                      & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_oe = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_oe) 
                                                   | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                        >> 0x1bU) 
                                                       & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                          >> 0x14U)) 
                                                      & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_sw_mask543_en 
        = (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))) 
           & (~ (((IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_intr_ALTERA_SYNTHESIZED) 
                  & (IData)(vlSelf->z80_top_direct_n__DOT__im2)) 
                 | (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED))));
    vlSelf->z80_top_direct_n__DOT__ctl_66_oe = (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                  >> 0x18U) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__interrupts___DOT__in_nmi_ALTERA_SYNTHESIZED));
    vlSelf->z80_top_direct_n__DOT__ctl_shift_en = (
                                                   (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0x19U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_shift_en = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_shift_en) 
                                                   | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                        & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                           >> 6U)) 
                                                       & (~ 
                                                          (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                           >> 0x17U))) 
                                                      & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_shift_en = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_shift_en) 
                                                   | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                        & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                           >> 6U)) 
                                                       & (~ 
                                                          (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                           >> 0x17U))) 
                                                      & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_shift_en = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_shift_en) 
                                                   | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                        & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                           >> 6U)) 
                                                       & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                          >> 0x17U)) 
                                                      & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_shift_en = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_shift_en) 
                                                   | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                        & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                           >> 6U)) 
                                                       & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                          >> 0x17U)) 
                                                      & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_not_pc = 
        ((vlSelf->z80_top_direct_n__DOT__pla[0U] >> 0x1dU) 
         & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_not_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_not_pc) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
              >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__flags_cond_true)));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_not_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_not_pc) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0xfU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_not_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_not_pc) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0x10U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_not_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_not_pc) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 6U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_not_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_not_pc) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x1aU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_not_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_not_pc) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_not_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_not_pc) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_not_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_not_pc) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 3U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_not_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_not_pc) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_not_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_not_pc) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0xeU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_not_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_not_pc) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_reg_not_pc = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_reg_not_pc) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_lq 
        = (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xfU) & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                         >> 6U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_lq 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_lq) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0xfU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                               >> 6U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_lq 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_sel_lq) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0xfU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                               >> 6U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_low 
        = (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xfU) & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                         >> 6U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_low 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_low) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0xfU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                               >> 6U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_low 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_low) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0xfU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                               >> 6U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_zero 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_zero 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_zero) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_zero 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_zero) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x12U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_zero 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_sel_zero) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_ir_we = ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                     >> 6U)) 
                                                 & (~ 
                                                    (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 0x17U))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_ir_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_ir_we) 
                                                | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                     & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                        >> 6U)) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_ir_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_ir_we) 
                                                | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                     & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                        >> 8U)) 
                                                    & (~ 
                                                       (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                        >> 0x17U))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_ir_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_ir_we) 
                                                | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                     & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                        >> 8U)) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_ir_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_ir_we) 
                                                | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                     & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                        >> 0xaU)) 
                                                    & (~ 
                                                       (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                        >> 0x17U))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_ir_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_ir_we) 
                                                | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                     & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                        >> 0xaU)) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_ir_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_ir_we) 
                                                | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                     & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                        >> 9U)) 
                                                    & (~ 
                                                       (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                        >> 0x17U))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_ir_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_ir_we) 
                                                | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                     & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                        >> 9U)) 
                                                    & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x17U)) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_ir_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_ir_we) 
                                                | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x11U) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_ir_we = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_ir_we) 
                                                | ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_apin_mux = ((IData)(
                                                           (0x810000U 
                                                            == 
                                                            (0x810000U 
                                                             & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                   & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_apin_mux = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_apin_mux) 
                                                   | ((IData)(
                                                              (0x810000U 
                                                               == 
                                                               (0x810000U 
                                                                & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                      & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_apin_mux = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_apin_mux) 
                                                   | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                       >> 0xaU) 
                                                      & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_apin_mux = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_apin_mux) 
                                                   | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                       >> 0xaU) 
                                                      & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_apin_mux = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_apin_mux) 
                                                   | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                       >> 0x18U) 
                                                      & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_apin_mux = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_apin_mux) 
                                                   | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                       >> 0x18U) 
                                                      & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_apin_mux = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_apin_mux) 
                                                   | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0xaU) 
                                                      & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_apin_mux = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_apin_mux) 
                                                   | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0xaU) 
                                                      & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_apin_mux = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_apin_mux) 
                                                   | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x18U) 
                                                      & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_apin_mux = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_apin_mux) 
                                                   | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                       >> 0x18U) 
                                                      & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_set 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_set 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_set) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_set 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_set) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_set 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_set) 
           | (((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
               | (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 0xbU)));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_set 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_set) 
           | (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                              >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_set 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_set) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_set 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_set) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_set 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_set) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x12U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_set 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_set) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x12U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_set 
        = (1U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_set) 
                 | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                    >> 0xcU)));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_set 
        = (1U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_set) 
                 | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                    >> 0xeU)));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_set 
        = (1U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_set) 
                 | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                    >> 0xfU)));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we = 
        (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
          & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0x1bU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we) 
         | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x1bU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we) 
         | ((IData)((0x2100U == (0x2100U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
              >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                        >> 0xdU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we) 
         | ((IData)((0x40002000U == (0x40002000U & 
                                     vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we) 
         | ((IData)((0x40002000U == (0x40002000U & 
                                     vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we) 
         | ((IData)((0x810000U == (0x810000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we) 
         | ((IData)((0x810000U == (0x810000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we) 
         | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we) 
         | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0xfU) & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                          >> 6U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0xfU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                             >> 6U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0xfU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                             >> 6U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 0xaU)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 0xaU)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 0xaU)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 9U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 9U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 9U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
              >> 5U) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                        >> 0x1cU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1bU) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                           >> 2U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_db_we) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 0x13U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x13U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 1U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                             >> 0x14U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we) 
           | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
              & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                 & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we) 
           | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we) 
           | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we) 
           | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we) 
           | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we) 
           | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we) 
           | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                          >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                          >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we) 
           | (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                              >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we) 
           | (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                              >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x12U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x12U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x1cU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0xfU) & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                            >> 6U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0xfU) & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                            >> 6U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0xfU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                               >> 6U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0xfU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                               >> 6U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 8U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 8U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 8U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 8U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 0xaU)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                   >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 0xaU)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 9U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 9U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0x1bU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                >> 2U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0x1bU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                >> 2U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                             >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                             >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                             >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                             >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0xfU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x10U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0x1aU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0xeU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0xfU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x10U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x14U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x15U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x16U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_pf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 0x13U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x13U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr) 
           | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr) 
           | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                          >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x1cU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x1cU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0xfU) & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                            >> 6U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0xfU) & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                            >> 6U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0xfU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                               >> 6U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0xfU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                               >> 6U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 8U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 8U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 8U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 8U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 8U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 8U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0x1bU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                >> 2U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0x1bU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                >> 2U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr 
        = (1U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr) 
                 | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                    >> 0x10U)));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr 
        = (1U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr) 
                 | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                    >> 0x14U)));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr 
        = (1U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr) 
                 | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                    >> 0x15U)));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr 
        = (1U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr) 
                 | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                    >> 0x16U)));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr 
        = (1U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_clr) 
                 | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                    >> 0x18U)));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 0x13U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 1U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                             >> 0x14U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 1U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                             >> 0x14U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we) 
           | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
              & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                 & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we) 
           | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
              & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                 & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we) 
           | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we) 
           | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we) 
           | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we) 
           | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we) 
           | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we) 
           | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                          >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                          >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                          >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we) 
           | (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                              >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we) 
           | (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                              >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we) 
           | (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                              >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x12U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x12U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x12U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x1cU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0xfU) & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                            >> 6U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0xfU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                               >> 6U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 8U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 8U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 0xaU)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                   >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 0xaU)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 9U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 9U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0x1bU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                >> 2U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                             >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                             >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                             >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                             >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0xfU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0xfU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x10U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x10U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0x1aU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0x1aU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_cf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 0x13U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x13U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x13U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 1U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                             >> 0x14U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
              & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                 & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 2U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                             >> 0x15U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | (((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
               | (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 0xbU)));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                  >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
                >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                          >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                              >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x12U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x12U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x12U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x1cU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x1cU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
               >> 0x1cU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0xfU) & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                            >> 6U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0xfU) & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                            >> 6U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0xfU) & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                            >> 6U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0xfU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                               >> 6U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0xfU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                               >> 6U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0xfU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                               >> 6U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 8U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 8U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 8U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 8U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 8U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 8U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 8U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 8U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 0xaU)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                   >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 0xaU)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 9U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                   >> 9U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0x1bU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                >> 2U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0x1bU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                >> 2U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                >> 0x1bU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                >> 2U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                             >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                             >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                             >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                >> 0x1bU) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                             >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0xfU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x10U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
               >> 0x1aU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0xdU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                           & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
           | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = (1U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
                 | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                    >> 0xcU)));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = (1U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
                 | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                    >> 0xeU)));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = (1U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
                 | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                    >> 0xfU)));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = (1U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
                 | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                    >> 0x10U)));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = (1U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
                 | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                    >> 0x14U)));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = (1U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
                 | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                    >> 0x15U)));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = (1U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
                 | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                    >> 0x16U)));
    vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we 
        = (1U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_flags_nf_we) 
                 | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                    >> 0x18U)));
    vlSelf->z80_top_direct_n__DOT__ctl_state_alu = 
        (((vlSelf->z80_top_direct_n__DOT__pla[2U] >> 1U) 
          & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x14U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_state_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_state_alu) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
              >> 1U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                           >> 0x14U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_state_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_state_alu) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
              >> 1U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                           >> 0x14U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_state_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_state_alu) 
         | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_state_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_state_alu) 
         | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_state_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_state_alu) 
         | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_state_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_state_alu) 
         | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_state_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_state_alu) 
         | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_state_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_state_alu) 
         | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_state_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_state_alu) 
         | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_state_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_state_alu) 
         | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_state_alu = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_state_alu) 
         | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_zero_16bit 
        = (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
             >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                       >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_zero_16bit 
        = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_zero_16bit) 
           | (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                   >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                              >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                               >> 0x11U) 
                                              & (~ 
                                                 (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                  >> 0x12U))) 
                                             & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                  >> 0x11U) 
                                                 & (~ 
                                                    (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 0x12U))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                  >> 0x11U) 
                                                 & (~ 
                                                    (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 0x12U))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x1aU)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x1aU)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x1aU)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x1aU)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x1aU)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x1aU)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x1aU)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x1aU)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x1aU)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x1bU)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x1bU)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x1bU)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 8U) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 8U) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 8U) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 8U) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 8U) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 8U) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x40000U 
                                                         == 
                                                         (0x40100U 
                                                          & vlSelf->z80_top_direct_n__DOT__pla[1U]))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x40000U 
                                                         == 
                                                         (0x40100U 
                                                          & vlSelf->z80_top_direct_n__DOT__pla[1U]))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x40000U 
                                                         == 
                                                         (0x40100U 
                                                          & vlSelf->z80_top_direct_n__DOT__pla[1U]))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x100U 
                                                         == 
                                                         (0x2100U 
                                                          & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x100U 
                                                         == 
                                                         (0x2100U 
                                                          & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x100U 
                                                         == 
                                                         (0x2100U 
                                                          & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                  >> 6U) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0xdU)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                  >> 6U) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0xdU)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                  >> 6U) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0xdU)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                  >> 6U) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0xdU)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                  >> 6U) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0xdU)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                  >> 6U) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0xdU)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                  >> 6U) 
                                                 & (~ 
                                                    (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0xdU))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                  >> 6U) 
                                                 & (~ 
                                                    (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0xdU))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                  >> 6U) 
                                                 & (~ 
                                                    (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0xdU))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                  >> 6U) 
                                                 & (~ 
                                                    (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0xdU))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                  >> 6U) 
                                                 & (~ 
                                                    (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0xdU))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                  >> 6U) 
                                                 & (~ 
                                                    (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0xdU))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                  >> 6U) 
                                                 & (~ 
                                                    (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0xdU))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                  >> 6U) 
                                                 & (~ 
                                                    (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0xdU))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                  >> 6U) 
                                                 & (~ 
                                                    (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0xdU))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                 >> 7U) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                 >> 7U) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                 >> 7U) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                 >> 7U) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                 >> 7U) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                 >> 7U) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x40002000U 
                                                         == 
                                                         (0x40002000U 
                                                          & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x40002000U 
                                                         == 
                                                         (0x40002000U 
                                                          & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x40002000U 
                                                         == 
                                                         (0x40002000U 
                                                          & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x40002000U 
                                                         == 
                                                         (0x40002000U 
                                                          & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x40002000U 
                                                         == 
                                                         (0x40002000U 
                                                          & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x40002000U 
                                                         == 
                                                         (0x40002000U 
                                                          & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x40000000U 
                                                         == 
                                                         (0x40002000U 
                                                          & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x40000000U 
                                                         == 
                                                         (0x40002000U 
                                                          & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x40000000U 
                                                         == 
                                                         (0x40002000U 
                                                          & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x40000000U 
                                                         == 
                                                         (0x40002000U 
                                                          & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x40000000U 
                                                         == 
                                                         (0x40002000U 
                                                          & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x40000000U 
                                                         == 
                                                         (0x40002000U 
                                                          & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x40000000U 
                                                         == 
                                                         (0x40002000U 
                                                          & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x40000000U 
                                                         == 
                                                         (0x40002000U 
                                                          & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x40000000U 
                                                         == 
                                                         (0x40002000U 
                                                          & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x40000000U 
                                                         == 
                                                         (0x40002000U 
                                                          & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x40000000U 
                                                         == 
                                                         (0x40002000U 
                                                          & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x40000000U 
                                                         == 
                                                         (0x40002000U 
                                                          & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                  >> 0x1fU) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 1U)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                  >> 0x1fU) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 1U)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                  >> 0x1fU) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 1U)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                  >> 0x1fU) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 1U)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                  >> 0x1fU) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 1U)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                  >> 0x1fU) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 1U)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                  >> 0x1fU) 
                                                 & (~ 
                                                    (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 1U))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                  >> 0x1fU) 
                                                 & (~ 
                                                    (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 1U))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                  >> 0x1fU) 
                                                 & (~ 
                                                    (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 1U))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                  >> 0x1fU) 
                                                 & (~ 
                                                    (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 1U))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                  >> 0x1fU) 
                                                 & (~ 
                                                    (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 1U))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                  >> 0x1fU) 
                                                 & (~ 
                                                    (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 1U))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                  >> 0x1fU) 
                                                 & (~ 
                                                    (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 1U))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                  >> 0x1fU) 
                                                 & (~ 
                                                    (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 1U))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                  >> 0x1fU) 
                                                 & (~ 
                                                    (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 1U))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                  >> 0x1fU) 
                                                 & (~ 
                                                    (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 1U))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                  >> 0x1fU) 
                                                 & (~ 
                                                    (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 1U))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                  >> 0x1fU) 
                                                 & (~ 
                                                    (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 1U))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x800000U 
                                                         == 
                                                         (0x810000U 
                                                          & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x800000U 
                                                         == 
                                                         (0x810000U 
                                                          & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x800000U 
                                                         == 
                                                         (0x810000U 
                                                          & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x800000U 
                                                         == 
                                                         (0x810000U 
                                                          & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x800000U 
                                                         == 
                                                         (0x810000U 
                                                          & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((IData)(
                                                        (0x800000U 
                                                         == 
                                                         (0x810000U 
                                                          & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                 >> 0xaU) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                 >> 0xaU) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                 >> 0xaU) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                 >> 0xaU) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                 >> 0xaU) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                 >> 0xaU) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                 >> 0xcU) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                 >> 0xcU) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                 >> 0xcU) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                 >> 0xbU) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                 >> 0xbU) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                 >> 0xbU) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x14U)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x14U)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x14U)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x14U)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x14U)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x14U)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x14U)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x14U)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x14U)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x15U)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x15U)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x15U)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x15U)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x15U)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x15U)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x15U)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x15U)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x15U)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                     >> 6U)) 
                                                 & (~ 
                                                    (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 0x17U))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                     >> 6U)) 
                                                 & (~ 
                                                    (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 0x17U))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                     >> 6U)) 
                                                 & (~ 
                                                    (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 0x17U))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                     >> 6U)) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                     >> 6U)) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                     >> 6U)) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                     >> 6U)) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                     >> 6U)) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                     >> 6U)) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                  >> 0xfU) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                    >> 6U)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                  >> 0xfU) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                    >> 6U)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                  >> 0xfU) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                    >> 6U)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                  >> 0xfU) 
                                                 & (~ 
                                                    (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                     >> 6U))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                  >> 0xfU) 
                                                 & (~ 
                                                    (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                     >> 6U))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                  >> 0xfU) 
                                                 & (~ 
                                                    (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                     >> 6U))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                     >> 8U)) 
                                                 & (~ 
                                                    (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 0x17U))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                     >> 8U)) 
                                                 & (~ 
                                                    (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 0x17U))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                     >> 8U)) 
                                                 & (~ 
                                                    (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 0x17U))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                     >> 8U)) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                     >> 8U)) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                     >> 8U)) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                     >> 8U)) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                     >> 8U)) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                     >> 8U)) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                     >> 0xaU)) 
                                                 & (~ 
                                                    (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 0x17U))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                     >> 0xaU)) 
                                                 & (~ 
                                                    (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 0x17U))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                     >> 0xaU)) 
                                                 & (~ 
                                                    (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 0x17U))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                     >> 0xaU)) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                     >> 0xaU)) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                     >> 0xaU)) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                     >> 0xaU)) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                     >> 0xaU)) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                     >> 0xaU)) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                     >> 9U)) 
                                                 & (~ 
                                                    (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 0x17U))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                     >> 9U)) 
                                                 & (~ 
                                                    (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 0x17U))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                     >> 9U)) 
                                                 & (~ 
                                                    (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 0x17U))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                     >> 9U)) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                     >> 9U)) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                     >> 9U)) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                     >> 9U)) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                     >> 9U)) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                     >> 9U)) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 0x17U)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                  >> 5U) 
                                                 & (~ 
                                                    (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0x1cU))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                  >> 5U) 
                                                 & (~ 
                                                    (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0x1cU))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                  >> 5U) 
                                                 & (~ 
                                                    (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0x1cU))) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                  >> 5U) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0x1cU)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                  >> 5U) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0x1cU)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                  >> 5U) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0x1cU)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                  >> 0x1bU) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0x14U)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                  >> 0x1bU) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0x14U)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                  >> 0x1bU) 
                                                 & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0x14U)) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                 >> 0x1dU) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                 >> 0x1dU) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                 >> 0x1dU) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                 >> 0x1dU) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                 >> 0x1dU) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                 >> 0x1dU) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 0xbU) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 0xbU) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 0xbU) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 0xbU) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 0xbU) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 0xbU) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 0xfU) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 0xfU) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 0xfU) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 0x10U) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 0x10U) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 0x10U) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                 >> 0x1aU) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                 >> 0x1aU) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                 >> 0x1aU) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                 >> 0x18U) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                 >> 0x18U) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                 >> 0x18U) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                 >> 0x18U) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                 >> 0x18U) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                 >> 0x18U) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 0xaU) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 0xaU) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 0xaU) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 0xaU) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 0xaU) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 0xaU) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 3U) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 3U) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 3U) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 3U) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 3U) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 3U) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 0xdU) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 0xdU) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 0xdU) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 0xdU) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 0xdU) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 0xdU) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 0xeU) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 0xeU) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 0xeU) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 0xeU) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 0xeU) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 0xeU) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 0x18U) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 0x18U) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 0x18U) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 0x18U) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 0x18U) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 0x18U) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 0x11U) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 0x11U) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 0x11U) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 0x11U) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 0x11U) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMRead = ((IData)(vlSelf->z80_top_direct_n__DOT__fMRead) 
                                             | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 0x11U) 
                                                & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                   & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fIORead = (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                >> 5U) 
                                               & (~ 
                                                  (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                   >> 0x1cU))) 
                                              & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                 & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__fIORead = ((IData)(vlSelf->z80_top_direct_n__DOT__fIORead) 
                                              | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                   >> 5U) 
                                                  & (~ 
                                                     (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                      >> 0x1cU))) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fIORead = ((IData)(vlSelf->z80_top_direct_n__DOT__fIORead) 
                                              | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                   >> 5U) 
                                                  & (~ 
                                                     (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                      >> 0x1cU))) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fIORead = ((IData)(vlSelf->z80_top_direct_n__DOT__fIORead) 
                                              | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                   >> 5U) 
                                                  & (~ 
                                                     (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                      >> 0x1cU))) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__fIORead = ((IData)(vlSelf->z80_top_direct_n__DOT__fIORead) 
                                              | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                   >> 0x1bU) 
                                                  & (~ 
                                                     (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                      >> 2U))) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fIORead = ((IData)(vlSelf->z80_top_direct_n__DOT__fIORead) 
                                              | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                   >> 0x1bU) 
                                                  & (~ 
                                                     (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                      >> 2U))) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fIORead = ((IData)(vlSelf->z80_top_direct_n__DOT__fIORead) 
                                              | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                   >> 0x1bU) 
                                                  & (~ 
                                                     (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                      >> 2U))) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fIORead = ((IData)(vlSelf->z80_top_direct_n__DOT__fIORead) 
                                              | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                   >> 0x1bU) 
                                                  & (~ 
                                                     (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                      >> 2U))) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__fIORead = ((IData)(vlSelf->z80_top_direct_n__DOT__fIORead) 
                                              | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                   >> 0x1bU) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0x15U)) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fIORead = ((IData)(vlSelf->z80_top_direct_n__DOT__fIORead) 
                                              | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                   >> 0x1bU) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0x15U)) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fIORead = ((IData)(vlSelf->z80_top_direct_n__DOT__fIORead) 
                                              | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                   >> 0x1bU) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0x15U)) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fIORead = ((IData)(vlSelf->z80_top_direct_n__DOT__fIORead) 
                                              | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                   >> 0x1bU) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0x15U)) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    z80_top_direct_n__DOT__execute___DOT__ctl_pf_sel_pla83M1T1_19 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 0x13U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_pf_sel = (2U 
                                                 & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_pf_sel_pla83M1T1_19))));
    z80_top_direct_n__DOT__execute___DOT__ctl_pf_sel_pla12M1T1_12 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_pf_sel = (3U 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_pf_sel) 
                                                    | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_pf_sel_pla12M1T1_12)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_pf_sel_pla11M1T1_11 
        = ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
            >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_pf_sel = (3U 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_pf_sel) 
                                                    | (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_pf_sel_pla11M1T1_11)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_pf_sel_pla66npla53M1T1_15 
        = (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 2U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                          >> 0x15U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_pf_sel = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_pf_sel) 
                                                 | (1U 
                                                    & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_pf_sel_pla66npla53M1T1_15)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_pf_sel_nuse_ixiypla53M2T4_14 
        = (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
            & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_pf_sel = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_pf_sel) 
                                                 | (1U 
                                                    & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_pf_sel_nuse_ixiypla53M2T4_14)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_pf_sel_nuse_ixiypla53M4T4_14 
        = (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
            & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
               >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                             & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_pf_sel = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_pf_sel) 
                                                 | (1U 
                                                    & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_pf_sel_nuse_ixiypla53M4T4_14)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_pf_sel_op3pla68M3T1_18 
        = (((vlSelf->z80_top_direct_n__DOT__pla[3U] 
             >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                       >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_pf_sel = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_pf_sel) 
                                                 | (1U 
                                                    & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_pf_sel_op3pla68M3T1_18)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_pf_sel_nop3pla68M3T1_20 
        = (((~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                           >> 4U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_pf_sel = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_pf_sel) 
                                                 | (1U 
                                                    & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_pf_sel_nop3pla68M3T1_20)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_pf_sel_pla82M1T1_16 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 0x12U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_pf_sel = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_pf_sel) 
                                                 | (1U 
                                                    & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_pf_sel_pla82M1T1_16)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_pf_sel_pla76M1T1_2 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_pf_sel = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_pf_sel) 
                                                 | (1U 
                                                    & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_pf_sel_pla76M1T1_2)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_pf_sel_pla78M1T1_8 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 0xeU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_pf_sel = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_pf_sel) 
                                                 | (1U 
                                                    & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_pf_sel_pla78M1T1_8)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_pf_sel_pla79M1T1_8 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 0xfU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_pf_sel = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_pf_sel) 
                                                 | (1U 
                                                    & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_pf_sel_pla79M1T1_8)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_pf_sel_pla80M1T1_8 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 0x10U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_pf_sel = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_pf_sel) 
                                                 | (1U 
                                                    & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_pf_sel_pla80M1T1_8)))));
    z80_top_direct_n__DOT__execute___DOT__ctl_pf_sel_pla84M1T1_8 
        = ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
            >> 0x14U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_pf_sel = ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_pf_sel) 
                                                 | (1U 
                                                    & (- (IData)((IData)(z80_top_direct_n__DOT__execute___DOT__ctl_pf_sel_pla84M1T1_8)))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                               & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                  >> 0x1bU)) 
                                              & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                 & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 0x1bU)) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 0x1bU)) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 0x1bU)) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 0x1bU)) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 0x1bU)) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((IData)(
                                                         (0x40000U 
                                                          == 
                                                          (0x40100U 
                                                           & vlSelf->z80_top_direct_n__DOT__pla[1U]))) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((IData)(
                                                         (0x40000U 
                                                          == 
                                                          (0x40100U 
                                                           & vlSelf->z80_top_direct_n__DOT__pla[1U]))) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((IData)(
                                                         (0x40000U 
                                                          == 
                                                          (0x40100U 
                                                           & vlSelf->z80_top_direct_n__DOT__pla[1U]))) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((IData)(
                                                         (0x40000U 
                                                          == 
                                                          (0x40100U 
                                                           & vlSelf->z80_top_direct_n__DOT__pla[1U]))) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((IData)(
                                                         (0x40000U 
                                                          == 
                                                          (0x40100U 
                                                           & vlSelf->z80_top_direct_n__DOT__pla[1U]))) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((IData)(
                                                         (0x40000U 
                                                          == 
                                                          (0x40100U 
                                                           & vlSelf->z80_top_direct_n__DOT__pla[1U]))) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((IData)(
                                                         (0x2100U 
                                                          == 
                                                          (0x2100U 
                                                           & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((IData)(
                                                         (0x2100U 
                                                          == 
                                                          (0x2100U 
                                                           & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((IData)(
                                                         (0x2100U 
                                                          == 
                                                          (0x2100U 
                                                           & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                   >> 6U) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0xdU)) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                   >> 6U) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0xdU)) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                   >> 6U) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0xdU)) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((IData)(
                                                         (0x40002000U 
                                                          == 
                                                          (0x40002000U 
                                                           & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((IData)(
                                                         (0x40002000U 
                                                          == 
                                                          (0x40002000U 
                                                           & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((IData)(
                                                         (0x40002000U 
                                                          == 
                                                          (0x40002000U 
                                                           & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((IData)(
                                                         (0x40002000U 
                                                          == 
                                                          (0x40002000U 
                                                           & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((IData)(
                                                         (0x40002000U 
                                                          == 
                                                          (0x40002000U 
                                                           & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((IData)(
                                                         (0x40002000U 
                                                          == 
                                                          (0x40002000U 
                                                           & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                   >> 0x1fU) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 1U)) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                   >> 0x1fU) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 1U)) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                   >> 0x1fU) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 1U)) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                   >> 0x1fU) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 1U)) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                   >> 0x1fU) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 1U)) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                   >> 0x1fU) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 1U)) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((IData)(
                                                         (0x810000U 
                                                          == 
                                                          (0x810000U 
                                                           & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((IData)(
                                                         (0x810000U 
                                                          == 
                                                          (0x810000U 
                                                           & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((IData)(
                                                         (0x810000U 
                                                          == 
                                                          (0x810000U 
                                                           & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((IData)(
                                                         (0x810000U 
                                                          == 
                                                          (0x810000U 
                                                           & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((IData)(
                                                         (0x810000U 
                                                          == 
                                                          (0x810000U 
                                                           & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((IData)(
                                                         (0x810000U 
                                                          == 
                                                          (0x810000U 
                                                           & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                  >> 0xaU) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                  >> 0xaU) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                  >> 0xaU) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                  >> 0xaU) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                  >> 0xaU) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                  >> 0xaU) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                  >> 0xcU) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                  >> 0xcU) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                  >> 0xcU) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 0x15U)) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 0x15U)) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 0x15U)) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 0x15U)) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 0x15U)) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 0x15U)) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                   & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                      >> 6U)) 
                                                  & (~ 
                                                     (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                      >> 0x17U))) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                   & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                      >> 6U)) 
                                                  & (~ 
                                                     (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                      >> 0x17U))) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                   & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                      >> 6U)) 
                                                  & (~ 
                                                     (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                      >> 0x17U))) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                   & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                      >> 6U)) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 0x17U)) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                   & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                      >> 6U)) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 0x17U)) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                   & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                      >> 6U)) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 0x17U)) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                   & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                      >> 6U)) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 0x17U)) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                   & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                      >> 6U)) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 0x17U)) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                   & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                      >> 6U)) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 0x17U)) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                   >> 0xfU) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                     >> 6U)) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                   >> 0xfU) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                     >> 6U)) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                   >> 0xfU) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                     >> 6U)) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                   >> 0xfU) 
                                                  & (~ 
                                                     (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                      >> 6U))) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                   >> 0xfU) 
                                                  & (~ 
                                                     (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                      >> 6U))) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                   >> 0xfU) 
                                                  & (~ 
                                                     (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                                                      >> 6U))) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                   & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                      >> 0xaU)) 
                                                  & (~ 
                                                     (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                      >> 0x17U))) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                   & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                      >> 0xaU)) 
                                                  & (~ 
                                                     (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                      >> 0x17U))) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                   & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                      >> 0xaU)) 
                                                  & (~ 
                                                     (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                      >> 0x17U))) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                   & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                      >> 0xaU)) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 0x17U)) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                   & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                      >> 0xaU)) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 0x17U)) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                   & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                      >> 0xaU)) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 0x17U)) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                   & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                      >> 0xaU)) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 0x17U)) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                   & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                      >> 0xaU)) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 0x17U)) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                   & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                      >> 0xaU)) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 0x17U)) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                   & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                      >> 9U)) 
                                                  & (~ 
                                                     (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                      >> 0x17U))) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                   & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                      >> 9U)) 
                                                  & (~ 
                                                     (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                      >> 0x17U))) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                   & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                      >> 9U)) 
                                                  & (~ 
                                                     (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                      >> 0x17U))) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                   & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                      >> 9U)) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 0x17U)) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                   & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                      >> 9U)) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 0x17U)) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                   & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                      >> 9U)) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 0x17U)) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                   & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                      >> 9U)) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 0x17U)) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                   & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                      >> 9U)) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 0x17U)) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
                                                   & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                      >> 9U)) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                     >> 0x17U)) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                   >> 0x1bU) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0x15U)) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                   >> 0x1bU) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0x15U)) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                   >> 0x1bU) 
                                                  & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                     >> 0x15U)) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                  >> 0x18U) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                  >> 0x18U) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                  >> 0x18U) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                  >> 0x18U) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                  >> 0x18U) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                  >> 0x18U) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                  >> 0xaU) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                  >> 0xaU) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                  >> 0xaU) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                  >> 0xaU) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                  >> 0xaU) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                  >> 0xaU) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                  >> 0x18U) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                  >> 0x18U) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                  >> 0x18U) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                  >> 0x18U) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                  >> 0x18U) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fMWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fMWrite) 
                                              | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                  >> 0x18U) 
                                                 & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                    & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fIOWrite = (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                 >> 5U) 
                                                & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                   >> 0x1cU)) 
                                               & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                  & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__fIOWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fIOWrite) 
                                               | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 5U) 
                                                   & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                      >> 0x1cU)) 
                                                  & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fIOWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fIOWrite) 
                                               | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 5U) 
                                                   & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                      >> 0x1cU)) 
                                                  & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fIOWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fIOWrite) 
                                               | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                    >> 5U) 
                                                   & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                      >> 0x1cU)) 
                                                  & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__fIOWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fIOWrite) 
                                               | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0x1bU) 
                                                   & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                      >> 2U)) 
                                                  & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fIOWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fIOWrite) 
                                               | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0x1bU) 
                                                   & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                      >> 2U)) 
                                                  & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fIOWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fIOWrite) 
                                               | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0x1bU) 
                                                   & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                      >> 2U)) 
                                                  & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fIOWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fIOWrite) 
                                               | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                    >> 0x1bU) 
                                                   & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                                      >> 2U)) 
                                                  & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__fIOWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fIOWrite) 
                                               | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                    >> 0x1bU) 
                                                   & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                      >> 0x14U)) 
                                                  & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__fIOWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fIOWrite) 
                                               | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                    >> 0x1bU) 
                                                   & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                      >> 0x14U)) 
                                                  & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__fIOWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fIOWrite) 
                                               | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                    >> 0x1bU) 
                                                   & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                      >> 0x14U)) 
                                                  & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__fIOWrite = ((IData)(vlSelf->z80_top_direct_n__DOT__fIOWrite) 
                                               | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
                                                    >> 0x1bU) 
                                                   & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                                                      >> 0x14U)) 
                                                  & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V = 
        ((vlSelf->z80_top_direct_n__DOT__pla[2U] >> 0x13U) 
         & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x13U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x1cU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x1cU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0xfU) & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                          >> 6U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0xfU) & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                          >> 6U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0xfU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                             >> 6U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0xfU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                             >> 6U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 0xaU)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 0xaU)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 0xaU)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 0xaU)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 0xaU)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 0xaU)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 0xaU)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 0xaU)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1bU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 2U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1bU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 2U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V = 
        (1U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_V) 
               | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                  >> 0x16U)));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R = 
        ((vlSelf->z80_top_direct_n__DOT__pla[2U] >> 0x13U) 
         & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x13U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x1cU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x1cU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0xfU) & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                          >> 6U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0xfU) & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                          >> 6U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0xfU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                             >> 6U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0xfU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                             >> 6U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 0xaU)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 0xaU)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 0xaU)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 0xaU)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 0xaU)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 0xaU)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 0xaU)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 0xaU)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1bU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 2U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1bU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 2U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                           >> 0x15U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[2U] 
              >> 0x1bU) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                           >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R = 
        (1U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R) 
               | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                  >> 0x16U)));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R = 
        (1U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_R) 
               | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                  >> 0x18U)));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S = 
        ((vlSelf->z80_top_direct_n__DOT__pla[2U] >> 0x13U) 
         & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x13U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x11U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x1cU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[2U] 
             >> 0x1cU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 6U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 6U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0xfU) & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                          >> 6U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0xfU) & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                          >> 6U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0xfU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                             >> 6U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0xfU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                             >> 6U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 8U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 8U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 8U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 8U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 8U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 8U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 0xaU)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 0xaU)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 0xaU)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 0xaU)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                                 >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                                & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 0xaU)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 0xaU)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 0xaU)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 0xaU)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 9U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 9U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 9U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 9U)) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                               >> 0x17U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 9U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 9U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 9U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S) 
         | ((((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
              & (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                 >> 9U)) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                            >> 0x17U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1bU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 2U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1bU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 2U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S = 
        (1U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S) 
               | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                  >> 0x15U)));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S = 
        (1U & ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_core_S) 
               | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
                  >> 0x16U)));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_oe = 
        (((vlSelf->z80_top_direct_n__DOT__pla[0U] >> 0xfU) 
          & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
             >> 6U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                        & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_oe) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0xfU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                             >> 6U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op2_oe) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0xfU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                             >> 6U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_oe = 
        ((IData)((0x20000000U == (0x2c000000U & vlSelf->z80_top_direct_n__DOT__pla[1U]))) 
         & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
            & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0x19U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_oe) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0xfU) & (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                          >> 6U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_oe) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0xfU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[3U] 
                             >> 6U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T3_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_alu_op1_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 0x18U) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        (((vlSelf->z80_top_direct_n__DOT__pla[0U] >> 0x11U) 
          & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x12U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff)));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x1aU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x1aU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x1bU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x1bU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 8U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[1U] 
             >> 8U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((IData)((0x40000U == (0x40100U & vlSelf->z80_top_direct_n__DOT__pla[1U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((IData)((0x40000U == (0x40100U & vlSelf->z80_top_direct_n__DOT__pla[1U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((IData)((0x2100U == (0x2100U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((IData)((0x100U == (0x2100U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
              >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                        >> 0xdU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
              >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                        >> 0xdU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
              >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                        >> 0xdU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
              >> 6U) & (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                        >> 0xdU)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                     & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
              >> 6U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                           >> 0xdU))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
              >> 6U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                           >> 0xdU))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[1U] 
              >> 6U) & (~ (vlSelf->z80_top_direct_n__DOT__pla[0U] 
                           >> 0xdU))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 7U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 7U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((IData)((0x40002000U == (0x40002000U & 
                                     vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((IData)((0x40002000U == (0x40002000U & 
                                     vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((IData)((0x40002000U == (0x40002000U & 
                                     vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((IData)((0x40002000U == (0x40002000U & 
                                     vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((IData)((0x40002000U == (0x40002000U & 
                                     vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((IData)((0x40002000U == (0x40002000U & 
                                     vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((IData)((0x40000000U == (0x40002000U & 
                                     vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1fU) & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                           >> 1U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                      & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | (((vlSelf->z80_top_direct_n__DOT__pla[0U] 
              >> 0x1fU) & (~ (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                              >> 1U))) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                                          & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 5U) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M1_ff) 
                       & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T5_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((IData)((0x810000U == (0x810000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((IData)((0x810000U == (0x810000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((IData)((0x800000U == (0x810000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((IData)((0x800000U == (0x810000U & vlSelf->z80_top_direct_n__DOT__pla[0U]))) 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xaU) & ((IData)(vlSelf->z80_top_direct_n__DOT__M5) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xcU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M3_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | ((vlSelf->z80_top_direct_n__DOT__pla[0U] 
             >> 0xbU) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                         & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T4_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | (vlSelf->z80_top_direct_n__DOT__pla[2U] 
            & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
               & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | (((IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M2_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T2_ff))));
    vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe = 
        ((IData)(vlSelf->z80_top_direct_n__DOT__ctl_bus_inc_oe) 
         | (((~ (IData)(vlSelf->z80_top_direct_n__DOT__use_ixiy)) 
             & (vlSelf->z80_top_direct_n__DOT__pla[1U] 
                >> 0x14U)) & ((IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_M4_ff) 
                              & (IData)(vlSelf->z80_top_direct_n__DOT__sequencer___DOT__DFFE_T1_ff))));
}
