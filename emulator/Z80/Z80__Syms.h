// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_Z80__SYMS_H_
#define VERILATED_Z80__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Z80.h"

// INCLUDE MODULE CLASSES
#include "Z80___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class Z80__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Z80* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Z80___024root                  TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_z80_top_direct_n;

    // CONSTRUCTORS
    Z80__Syms(VerilatedContext* contextp, const char* namep, Z80* modelp);
    ~Z80__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
