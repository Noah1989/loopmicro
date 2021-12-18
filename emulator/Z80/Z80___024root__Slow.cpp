// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Z80.h for the primary calling header

#include "verilated.h"

#include "Z80__Syms.h"
#include "Z80___024root.h"

void Z80___024root___ctor_var_reset(Z80___024root* vlSelf);

Z80___024root::Z80___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Z80___024root___ctor_var_reset(this);
}

void Z80___024root::__Vconfigure(Z80__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Z80___024root::~Z80___024root() {
}
