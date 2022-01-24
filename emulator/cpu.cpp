#include "cpu.hpp"

#include "Z80/Z80___024root.h"

Cpu::Cpu(Signal *clk,   Signal *nReset, Signal *nM1,
         Signal *nMreq, Signal *nIorq,  Signal *nRd,    Signal *nWr,
         Signal *nRfsh, Signal *nHalt,  Signal *nWait,
         Signal *nInt,  Signal *nNmi,   Signal *nBusrq, Signal *nBusak,
         Bus    *addr,  Bus    *data
) : Actor(NULL, 0),
    clk  (clk),   nReset(nReset), nM1   (nM1),
    nMreq(nMreq), nIorq (nIorq),  nRd   (nRd),    nWr   (nWr),
    nRfsh(nRfsh), nHalt (nHalt),  nWait (nWait),
    nInt (nInt),  nNmi(nNmi),     nBusrq(nBusrq), nBusak(nBusak),
    addr (addr),  data(data)
{
    z80 = new Z80;
}

void Cpu::tick()
{
    z80->contextp()->timeInc(1);

    z80->reset_n = nReset->get_state() == SignalState::High;
    z80->wait_n  = nWait ->get_state() == SignalState::High;
    z80->int_n   = nInt  ->get_state() == SignalState::High;
    z80->nmi_n   = nNmi  ->get_state() == SignalState::High;
    z80->busrq_n = nBusrq->get_state() == SignalState::High;

    if (!z80->rd_n) {
        z80->di = data->get_value();
    }

    z80->clk = clk->get_state() == SignalState::High;

    z80->eval();

    nM1   ->pull(this, z80->m1_n    ? SignalPull::High : SignalPull::Low);
    nRfsh ->pull(this, z80->rfsh_n  ? SignalPull::High : SignalPull::Low);
    nHalt ->pull(this, z80->halt_n  ? SignalPull::High : SignalPull::Low);
    nBusak->pull(this, z80->busak_n ? SignalPull::High : SignalPull::Low);

    if (z80->rootp->busak_n) {
        nMreq->pull (this, z80->mreq_n ? SignalPull::High : SignalPull::Low);
        nIorq->pull (this, z80->iorq_n ? SignalPull::High : SignalPull::Low);
        nRd  ->pull (this, z80->rd_n   ? SignalPull::High : SignalPull::Low);
        nWr  ->pull (this, z80->wr_n   ? SignalPull::High : SignalPull::Low);
        addr ->drive(this, z80->A);
    } else {
        nMreq->pull   (this, SignalPull::None);
        nIorq->pull   (this, SignalPull::None);
        nRd  ->pull   (this, SignalPull::None);
        nWr  ->pull   (this, SignalPull::None);
        addr ->release(this);
    }

    if (!z80->rootp->wr_n) {
        data->drive(this, z80->rootp->dout);
    } else {
        data->release(this);
    }

}
