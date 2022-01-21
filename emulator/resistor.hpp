#ifndef RESISTOR_HPP
#define RESISTOR_HPP

#include "actor.hpp"
#include "signal.hpp"

class Resistor : public Actor
{
    public:
        Resistor(Signal *signal, SignalPull pull);
};

#endif // RESISTOR_HPP
