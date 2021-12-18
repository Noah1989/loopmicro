#include "cpu.hpp"

Cpu::Cpu(Signal *clk, Signal *nReset, Signal *nM1)
: Actor(NULL, 0), clk(clk), nReset(nReset), nM1(nM1)
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
}
