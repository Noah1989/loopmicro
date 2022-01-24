// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Z80.h"
#include "Z80__Syms.h"

//============================================================
// Constructors

Z80::Z80(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Z80__Syms(_vcontextp__, _vcname__, this)}
    , reset_n{vlSymsp->TOP.reset_n}
    , clk{vlSymsp->TOP.clk}
    , wait_n{vlSymsp->TOP.wait_n}
    , int_n{vlSymsp->TOP.int_n}
    , nmi_n{vlSymsp->TOP.nmi_n}
    , busrq_n{vlSymsp->TOP.busrq_n}
    , m1_n{vlSymsp->TOP.m1_n}
    , mreq_n{vlSymsp->TOP.mreq_n}
    , iorq_n{vlSymsp->TOP.iorq_n}
    , rd_n{vlSymsp->TOP.rd_n}
    , wr_n{vlSymsp->TOP.wr_n}
    , rfsh_n{vlSymsp->TOP.rfsh_n}
    , halt_n{vlSymsp->TOP.halt_n}
    , busak_n{vlSymsp->TOP.busak_n}
    , di{vlSymsp->TOP.di}
    , dout{vlSymsp->TOP.dout}
    , A{vlSymsp->TOP.A}
    , rootp{&(vlSymsp->TOP)}
{
}

Z80::Z80(const char* _vcname__)
    : Z80(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Z80::~Z80() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Z80___024root___eval_initial(Z80___024root* vlSelf);
void Z80___024root___eval_settle(Z80___024root* vlSelf);
void Z80___024root___eval(Z80___024root* vlSelf);
#ifdef VL_DEBUG
void Z80___024root___eval_debug_assertions(Z80___024root* vlSelf);
#endif  // VL_DEBUG
void Z80___024root___final(Z80___024root* vlSelf);

static void _eval_initial_loop(Z80__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Z80___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Z80___024root___eval_settle(&(vlSymsp->TOP));
        Z80___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Z80::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Z80::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Z80___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Z80___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Z80::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Z80::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Z80::final() {
    Z80___024root___final(&(vlSymsp->TOP));
}
