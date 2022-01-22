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
    z80->CLK    = clk   ->get_state() == SignalState::High;
    z80->nRESET = nReset->get_state() == SignalState::High;
    z80->nWAIT  = nWait ->get_state() == SignalState::High;
    z80->nINT   = nInt  ->get_state() == SignalState::High;
    z80->nNMI   = nNmi  ->get_state() == SignalState::High;
    z80->nBUSRQ = nBusrq->get_state() == SignalState::High;

    z80->eval();

    //workaround for https://github.com/gdevic/A-Z80/issues/2
    bool z80_real_nM1 = z80->nM1 || !z80->nBUSACK;

    nM1   ->pull(this, z80_real_nM1 ? SignalPull::High : SignalPull::Low);
    nRfsh ->pull(this, z80->nRFSH   ? SignalPull::High : SignalPull::Low);
    nHalt ->pull(this, z80->nHALT   ? SignalPull::High : SignalPull::Low);
    nBusak->pull(this, z80->nBUSACK ? SignalPull::High : SignalPull::Low);

    if (z80->rootp->z80_top_direct_n__DOT__pin_control_oe) {
        nMreq->pull (this, z80->nMREQ ? SignalPull::High : SignalPull::Low);
        nIorq->pull (this, z80->nIORQ ? SignalPull::High : SignalPull::Low);
        nRd  ->pull (this, z80->nRD   ? SignalPull::High : SignalPull::Low);
        nWr  ->pull (this, z80->nWR   ? SignalPull::High : SignalPull::Low);
        addr ->drive(this, z80->A);
    } else {
        nMreq->pull   (this, SignalPull::None);
        nIorq->pull   (this, SignalPull::None);
        nRd  ->pull   (this, SignalPull::None);
        nWr  ->pull   (this, SignalPull::None);
        addr ->release(this);
    }

    if (z80->rootp->z80_top_direct_n__DOT__bus_db_pin_oe) {
        data->drive(this, z80->D);
    } else {
        data->release(this);
        z80->D = data->get_value();
    }
}
