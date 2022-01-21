#include "resistor.hpp"

Resistor::Resistor(Signal *signal, SignalPull pull) : Actor(NULL, 0)
{
    signal->pull(this, pull);
}
