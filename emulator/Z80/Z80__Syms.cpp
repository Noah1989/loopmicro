// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Z80__Syms.h"
#include "Z80.h"
#include "Z80___024root.h"

// FUNCTIONS
Z80__Syms::~Z80__Syms()
{
}

Z80__Syms::Z80__Syms(VerilatedContext* contextp, const char* namep,Z80* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP(namep)
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-6);
    _vm_contextp__->timeprecision(-7);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(this, true);
}
