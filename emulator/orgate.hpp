#ifndef ORGATE_HPP
#define ORGATE_HPP

#include "actor.hpp"
#include "signal.hpp"

class OrGate : public Actor
{
    public:
        OrGate(Signal *inputA, Signal *inputB, Signal *output);

        void tick();

    private:
        Signal *inputA;
        Signal *inputB;
        Signal *output;
};

#endif // ORGATE_HPP
