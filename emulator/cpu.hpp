#ifndef CPU_HPP
#define CPU_HPP

#include "Z80/Z80.h"

#include "actor.hpp"
#include "signal.hpp"
#include "bus.hpp"

class Cpu : public Actor
{
    public:
        Cpu(Signal *clk, Signal *nReset, Signal *nM1, Bus *addr, Bus *data);
        void tick();

    private:
        Z80    *z80;
        Signal *clk;
        Signal *nReset;
        Signal *nM1;
        Bus    *addr;
        Bus    *data;
};

#endif // CPU_HPP
