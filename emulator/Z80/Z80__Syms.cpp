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
    // Setup scopes
    __Vscope_z80_top_direct_n.configure(this, name(), "z80_top_direct_n", "z80_top_direct_n", 0, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
        __Vscope_z80_top_direct_n.varInsert(__Vfinal,"bus_db_pin_oe", &(TOP.z80_top_direct_n__DOT__bus_db_pin_oe), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RD,0);
        __Vscope_z80_top_direct_n.varInsert(__Vfinal,"pin_control_oe", &(TOP.z80_top_direct_n__DOT__pin_control_oe), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RD,0);
    }
}
