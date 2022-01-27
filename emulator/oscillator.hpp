#ifndef OSCILLATOR_HPP
#define OSCILLATOR_HPP

#include "actor.hpp"
#include "signal.hpp"

class Oscillator : public Actor
{
    public:
        Oscillator(Signal *enable, Signal *output);

        void tick();

    private:
        Signal *enable;
        Signal *output;
        bool    state;
};

#endif // OSCILLATOR_HPP
