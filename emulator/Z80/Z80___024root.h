// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Z80.h for the primary calling header

#ifndef VERILATED_Z80___024ROOT_H_
#define VERILATED_Z80___024ROOT_H_  // guard

#include "verilated.h"

class Z80__Syms;
VL_MODULE(Z80___024root) {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(reset_n,0,0);
        VL_IN8(clk,0,0);
        VL_IN8(wait_n,0,0);
        VL_IN8(int_n,0,0);
        VL_IN8(nmi_n,0,0);
        VL_IN8(busrq_n,0,0);
        VL_OUT8(m1_n,0,0);
        VL_OUT8(mreq_n,0,0);
        VL_OUT8(iorq_n,0,0);
        VL_OUT8(rd_n,0,0);
        VL_OUT8(wr_n,0,0);
        VL_OUT8(rfsh_n,0,0);
        VL_OUT8(halt_n,0,0);
        VL_OUT8(busak_n,0,0);
        VL_IN8(di,7,0);
        VL_OUT8(dout,7,0);
        CData/*0:0*/ tv80n__DOT__nxt_mreq_n;
        CData/*0:0*/ tv80n__DOT__nxt_iorq_n;
        CData/*0:0*/ tv80n__DOT__nxt_rd_n;
        CData/*0:0*/ tv80n__DOT__nxt_wr_n;
        CData/*0:0*/ tv80n__DOT__no_read;
        CData/*0:0*/ tv80n__DOT__write;
        CData/*7:0*/ tv80n__DOT__di_reg;
        CData/*7:0*/ tv80n__DOT__i_tv80_core__DOT__ACC;
        CData/*7:0*/ tv80n__DOT__i_tv80_core__DOT__F;
        CData/*7:0*/ tv80n__DOT__i_tv80_core__DOT__Ap;
        CData/*7:0*/ tv80n__DOT__i_tv80_core__DOT__Fp;
        CData/*7:0*/ tv80n__DOT__i_tv80_core__DOT__I;
        CData/*7:0*/ tv80n__DOT__i_tv80_core__DOT__R;
        CData/*7:0*/ tv80n__DOT__i_tv80_core__DOT__RegDIH;
        CData/*7:0*/ tv80n__DOT__i_tv80_core__DOT__RegDIL;
        CData/*2:0*/ tv80n__DOT__i_tv80_core__DOT__RegAddrA_r;
        CData/*2:0*/ tv80n__DOT__i_tv80_core__DOT__RegAddrA;
        CData/*2:0*/ tv80n__DOT__i_tv80_core__DOT__RegAddrB_r;
        CData/*2:0*/ tv80n__DOT__i_tv80_core__DOT__RegAddrB;
        CData/*2:0*/ tv80n__DOT__i_tv80_core__DOT__RegAddrC;
        CData/*0:0*/ tv80n__DOT__i_tv80_core__DOT__RegWEH;
        CData/*0:0*/ tv80n__DOT__i_tv80_core__DOT__RegWEL;
        CData/*0:0*/ tv80n__DOT__i_tv80_core__DOT__Alternate;
        CData/*7:0*/ tv80n__DOT__i_tv80_core__DOT__IR;
        CData/*1:0*/ tv80n__DOT__i_tv80_core__DOT__ISet;
        CData/*7:0*/ tv80n__DOT__i_tv80_core__DOT__Save_Mux;
        CData/*6:0*/ tv80n__DOT__i_tv80_core__DOT__tstate;
        CData/*6:0*/ tv80n__DOT__i_tv80_core__DOT__mcycle;
        CData/*0:0*/ tv80n__DOT__i_tv80_core__DOT__last_mcycle;
        CData/*0:0*/ tv80n__DOT__i_tv80_core__DOT__last_tstate;
        CData/*0:0*/ tv80n__DOT__i_tv80_core__DOT__IntE_FF1;
        CData/*0:0*/ tv80n__DOT__i_tv80_core__DOT__IntE_FF2;
        CData/*0:0*/ tv80n__DOT__i_tv80_core__DOT__Halt_FF;
        CData/*0:0*/ tv80n__DOT__i_tv80_core__DOT__BusReq_s;
        CData/*0:0*/ tv80n__DOT__i_tv80_core__DOT__BusAck;
        CData/*0:0*/ tv80n__DOT__i_tv80_core__DOT__NMI_s;
        CData/*0:0*/ tv80n__DOT__i_tv80_core__DOT__INT_s;
        CData/*1:0*/ tv80n__DOT__i_tv80_core__DOT__IStatus;
        CData/*1:0*/ tv80n__DOT__i_tv80_core__DOT__XY_State;
        CData/*2:0*/ tv80n__DOT__i_tv80_core__DOT__Pre_XY_F_M;
        CData/*0:0*/ tv80n__DOT__i_tv80_core__DOT__NextIs_XY_Fetch;
        CData/*0:0*/ tv80n__DOT__i_tv80_core__DOT__XY_Ind;
        CData/*0:0*/ tv80n__DOT__i_tv80_core__DOT__No_BTR;
        CData/*0:0*/ tv80n__DOT__i_tv80_core__DOT__BTR_r;
        CData/*0:0*/ tv80n__DOT__i_tv80_core__DOT__Auto_Wait;
        CData/*0:0*/ tv80n__DOT__i_tv80_core__DOT__Auto_Wait_t1;
        CData/*0:0*/ tv80n__DOT__i_tv80_core__DOT__Auto_Wait_t2;
        CData/*0:0*/ tv80n__DOT__i_tv80_core__DOT__IncDecZ;
    };
    struct {
        CData/*7:0*/ tv80n__DOT__i_tv80_core__DOT__BusB;
        CData/*7:0*/ tv80n__DOT__i_tv80_core__DOT__BusA;
        CData/*7:0*/ tv80n__DOT__i_tv80_core__DOT__ALU_Q;
        CData/*7:0*/ tv80n__DOT__i_tv80_core__DOT__F_Out;
        CData/*4:0*/ tv80n__DOT__i_tv80_core__DOT__Read_To_Reg_r;
        CData/*0:0*/ tv80n__DOT__i_tv80_core__DOT__Arith16_r;
        CData/*0:0*/ tv80n__DOT__i_tv80_core__DOT__Z16_r;
        CData/*3:0*/ tv80n__DOT__i_tv80_core__DOT__ALU_Op_r;
        CData/*0:0*/ tv80n__DOT__i_tv80_core__DOT__Save_ALU_r;
        CData/*0:0*/ tv80n__DOT__i_tv80_core__DOT__PreserveC_r;
        CData/*2:0*/ tv80n__DOT__i_tv80_core__DOT__mcycles;
        CData/*2:0*/ tv80n__DOT__i_tv80_core__DOT__mcycles_d;
        CData/*2:0*/ tv80n__DOT__i_tv80_core__DOT__tstates;
        CData/*0:0*/ tv80n__DOT__i_tv80_core__DOT__IntCycle;
        CData/*0:0*/ tv80n__DOT__i_tv80_core__DOT__NMICycle;
        CData/*0:0*/ tv80n__DOT__i_tv80_core__DOT__Inc_PC;
        CData/*0:0*/ tv80n__DOT__i_tv80_core__DOT__Inc_WZ;
        CData/*3:0*/ tv80n__DOT__i_tv80_core__DOT__IncDec_16;
        CData/*1:0*/ tv80n__DOT__i_tv80_core__DOT__Prefix;
        CData/*0:0*/ tv80n__DOT__i_tv80_core__DOT__Read_To_Acc;
        CData/*0:0*/ tv80n__DOT__i_tv80_core__DOT__Read_To_Reg;
        CData/*3:0*/ tv80n__DOT__i_tv80_core__DOT__Set_BusB_To;
        CData/*3:0*/ tv80n__DOT__i_tv80_core__DOT__Set_BusA_To;
        CData/*3:0*/ tv80n__DOT__i_tv80_core__DOT__ALU_Op;
        CData/*0:0*/ tv80n__DOT__i_tv80_core__DOT__Save_ALU;
        CData/*0:0*/ tv80n__DOT__i_tv80_core__DOT__PreserveC;
        CData/*0:0*/ tv80n__DOT__i_tv80_core__DOT__Arith16;
        CData/*2:0*/ tv80n__DOT__i_tv80_core__DOT__Set_Addr_To;
        CData/*0:0*/ tv80n__DOT__i_tv80_core__DOT__Jump;
        CData/*0:0*/ tv80n__DOT__i_tv80_core__DOT__JumpE;
        CData/*0:0*/ tv80n__DOT__i_tv80_core__DOT__JumpXY;
        CData/*0:0*/ tv80n__DOT__i_tv80_core__DOT__Call;
        CData/*0:0*/ tv80n__DOT__i_tv80_core__DOT__RstP;
        CData/*0:0*/ tv80n__DOT__i_tv80_core__DOT__LDZ;
        CData/*0:0*/ tv80n__DOT__i_tv80_core__DOT__LDW;
        CData/*0:0*/ tv80n__DOT__i_tv80_core__DOT__LDSPHL;
        CData/*0:0*/ tv80n__DOT__i_tv80_core__DOT__iorq_i;
        CData/*2:0*/ tv80n__DOT__i_tv80_core__DOT__Special_LD;
        CData/*0:0*/ tv80n__DOT__i_tv80_core__DOT__ExchangeDH;
        CData/*0:0*/ tv80n__DOT__i_tv80_core__DOT__ExchangeRp;
        CData/*0:0*/ tv80n__DOT__i_tv80_core__DOT__ExchangeAF;
        CData/*0:0*/ tv80n__DOT__i_tv80_core__DOT__ExchangeRS;
        CData/*0:0*/ tv80n__DOT__i_tv80_core__DOT__I_DJNZ;
        CData/*0:0*/ tv80n__DOT__i_tv80_core__DOT__I_CPL;
        CData/*0:0*/ tv80n__DOT__i_tv80_core__DOT__I_CCF;
        CData/*0:0*/ tv80n__DOT__i_tv80_core__DOT__I_SCF;
        CData/*0:0*/ tv80n__DOT__i_tv80_core__DOT__I_RETN;
        CData/*0:0*/ tv80n__DOT__i_tv80_core__DOT__I_BT;
        CData/*0:0*/ tv80n__DOT__i_tv80_core__DOT__I_BC;
        CData/*0:0*/ tv80n__DOT__i_tv80_core__DOT__I_BTR;
        CData/*0:0*/ tv80n__DOT__i_tv80_core__DOT__I_RLD;
        CData/*0:0*/ tv80n__DOT__i_tv80_core__DOT__I_RRD;
        CData/*0:0*/ tv80n__DOT__i_tv80_core__DOT__I_INRC;
        CData/*0:0*/ tv80n__DOT__i_tv80_core__DOT__SetDI;
        CData/*0:0*/ tv80n__DOT__i_tv80_core__DOT__SetEI;
        CData/*1:0*/ tv80n__DOT__i_tv80_core__DOT__IMode;
        CData/*0:0*/ tv80n__DOT__i_tv80_core__DOT__Halt;
        CData/*0:0*/ tv80n__DOT__i_tv80_core__DOT__Oldnmi_n;
        CData/*2:0*/ tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__SSS;
        CData/*0:0*/ tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__OverFlow_v;
        CData/*0:0*/ tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__HalfCarry_v;
        CData/*0:0*/ tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Carry_v;
        CData/*7:0*/ tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__Q_v;
        CData/*7:0*/ tv80n__DOT__i_tv80_core__DOT__i_alu__DOT__BitMask;
    };
    struct {
        CData/*0:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__Vfuncout;
        CData/*7:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__FF;
        CData/*2:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__2__cc;
        CData/*0:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__Vfuncout;
        CData/*7:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__FF;
        CData/*2:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__3__cc;
        CData/*0:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__Vfuncout;
        CData/*7:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__FF;
        CData/*2:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__4__cc;
        CData/*0:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__Vfuncout;
        CData/*7:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__FF;
        CData/*2:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__5__cc;
        CData/*0:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__Vfuncout;
        CData/*7:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__FF;
        CData/*2:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__6__cc;
        CData/*0:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__Vfuncout;
        CData/*7:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__FF;
        CData/*2:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__7__cc;
        CData/*0:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__Vfuncout;
        CData/*7:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__FF;
        CData/*2:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__8__cc;
        CData/*0:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__Vfuncout;
        CData/*7:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__FF;
        CData/*2:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__9__cc;
        CData/*0:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__Vfuncout;
        CData/*7:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__FF;
        CData/*2:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__10__cc;
        CData/*0:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__Vfuncout;
        CData/*7:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__FF;
        CData/*2:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__11__cc;
        CData/*0:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__Vfuncout;
        CData/*7:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__FF;
        CData/*2:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__12__cc;
        CData/*0:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__Vfuncout;
        CData/*7:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__FF;
        CData/*2:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__13__cc;
        CData/*0:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__Vfuncout;
        CData/*7:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__FF;
        CData/*2:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__14__cc;
        CData/*0:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__Vfuncout;
        CData/*7:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__FF;
        CData/*2:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__15__cc;
        CData/*0:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__Vfuncout;
        CData/*7:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__FF;
        CData/*2:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__16__cc;
        CData/*0:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__Vfuncout;
        CData/*7:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__FF;
        CData/*2:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__17__cc;
        CData/*0:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__Vfuncout;
        CData/*7:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__FF;
        CData/*2:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__18__cc;
        CData/*0:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__Vfuncout;
        CData/*7:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__FF;
        CData/*2:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__19__cc;
        CData/*0:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__Vfuncout;
        CData/*7:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__FF;
        CData/*2:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__20__cc;
        CData/*0:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__Vfuncout;
        CData/*7:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__FF;
        CData/*2:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__21__cc;
        CData/*0:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__Vfuncout;
        CData/*7:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__FF;
        CData/*2:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__22__cc;
        CData/*0:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__Vfuncout;
    };
    struct {
        CData/*7:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__FF;
        CData/*2:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__23__cc;
        CData/*0:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__Vfuncout;
        CData/*7:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__FF;
        CData/*2:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__24__cc;
        CData/*0:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__Vfuncout;
        CData/*7:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__FF;
        CData/*2:0*/ __Vfunc_tv80n__DOT__i_tv80_core__DOT__i_mcode__DOT__is_cc_true__25__cc;
        CData/*0:0*/ __Vdly__tv80n__DOT__i_tv80_core__DOT__Alternate;
        CData/*1:0*/ __Vdly__tv80n__DOT__i_tv80_core__DOT__XY_State;
        CData/*7:0*/ __Vdly__tv80n__DOT__i_tv80_core__DOT__ACC;
        CData/*7:0*/ __Vdly__tv80n__DOT__i_tv80_core__DOT__F;
        CData/*0:0*/ __Vdly__tv80n__DOT__i_tv80_core__DOT__BusAck;
        CData/*6:0*/ __Vdly__tv80n__DOT__i_tv80_core__DOT__tstate;
        CData/*6:0*/ __Vdly__tv80n__DOT__i_tv80_core__DOT__mcycle;
        CData/*0:0*/ __Vclklast__TOP__clk;
        CData/*0:0*/ __Vclklast__TOP__reset_n;
        VL_OUT16(A,15,0);
        SData/*15:0*/ tv80n__DOT__i_tv80_core__DOT__SP;
        SData/*15:0*/ tv80n__DOT__i_tv80_core__DOT__PC;
        SData/*15:0*/ tv80n__DOT__i_tv80_core__DOT__RegBusA;
        SData/*15:0*/ tv80n__DOT__i_tv80_core__DOT__RegBusB;
        SData/*15:0*/ tv80n__DOT__i_tv80_core__DOT__RegBusC;
        SData/*15:0*/ tv80n__DOT__i_tv80_core__DOT__TmpAddr;
        SData/*15:0*/ tv80n__DOT__i_tv80_core__DOT__RegBusA_r;
        SData/*15:0*/ tv80n__DOT__i_tv80_core__DOT__ID16;
        SData/*15:0*/ tv80n__DOT__i_tv80_core__DOT__PC16;
        SData/*15:0*/ tv80n__DOT__i_tv80_core__DOT__SP16;
        SData/*15:0*/ tv80n__DOT__i_tv80_core__DOT__SP16_A;
        SData/*15:0*/ tv80n__DOT__i_tv80_core__DOT__SP16_B;
        SData/*15:0*/ __Vdly__tv80n__DOT__i_tv80_core__DOT__PC;
        SData/*15:0*/ __Vdly__tv80n__DOT__i_tv80_core__DOT__SP;
        VlUnpacked<CData/*7:0*/, 8> tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsH;
        VlUnpacked<CData/*7:0*/, 8> tv80n__DOT__i_tv80_core__DOT__i_reg__DOT__RegsL;
    };

    // INTERNAL VARIABLES
    Z80__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Z80___024root(const char* name);
    ~Z80___024root();
    VL_UNCOPYABLE(Z80___024root);

    // INTERNAL METHODS
    void __Vconfigure(Z80__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
