#ifndef BUSGATE_HPP
#define BUSGATE_HPP

#include "actor.hpp"
#include "signal.hpp"
#include "bus.hpp"

class BusGate : public Actor
{
    public:
        BusGate(Bus *input, Bus *output, Signal *disable);

        void tick();

    private:
        Bus    *input;
        Bus    *output;
        Signal *disable;
};

#endif // BUSGATE_HPP
