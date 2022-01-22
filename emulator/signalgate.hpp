#ifndef SIGNALGATE_HPP
#define SIGNALGATE_HPP

#include "actor.hpp"
#include "signal.hpp"

class SignalGate : public Actor
{
    public:
        SignalGate(Signal *input, Signal *output, Signal *disable);

        void tick();

    private:
        Signal *input;
        Signal *output;
        Signal *disable;
};

#endif // SIGNALGATE_HPP
