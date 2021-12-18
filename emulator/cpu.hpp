#ifndef CPU_HPP
#define CPU_HPP

#include "Z80/Z80.h"

#include "actor.hpp"
#include "signal.hpp"

class Cpu : public Actor
{
    public:
        Cpu(Signal *clk, Signal *nReset, Signal *nM1);
        void tick();

    private:
        Z80 *z80;
        Signal *clk;
        Signal *nReset;
        Signal *nM1;
};

#endif // CPU_HPP
