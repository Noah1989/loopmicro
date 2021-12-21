#include "cpu.hpp"

#include "Z80/Z80___024root.h"

Cpu::Cpu(Signal *clk, Signal *nReset, Signal *nM1, Bus *addr, Bus *data)
: Actor(NULL, 0), clk(clk), nReset(nReset), nM1(nM1), addr(addr), data(data)
{
    z80 = new Z80;
}

void Cpu::tick()
{
    z80->CLK    = clk   ->get_state() == SignalState::High;
    z80->nRESET = nReset->get_state() == SignalState::High;
    z80->nWAIT  = 1;
    z80->nINT   = 1;
    z80->nNMI   = 1;
    z80->nBUSRQ = 1;

    z80->eval();

    nM1->pull(this, z80->nM1 ? SignalPull::High : SignalPull::Low);

    if (z80->rootp->z80_top_direct_n__DOT__pin_control_oe) {
        addr->drive(this, z80->A);
    } else {
        addr->release(this);
    }

    if (z80->rootp->z80_top_direct_n__DOT__bus_db_pin_oe) {
        data->drive(this, z80->D);
    } else {
        data->release(this);
    }
}
