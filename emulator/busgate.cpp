#include "busgate.hpp"

BusGate::BusGate(Bus *input, Bus *output, Signal *disable)
: Actor(NULL, 0), input(input), output(output), disable(disable)
{
}

void BusGate::tick()
{
    if (disable->get_state() == SignalState::Low) {
        output->drive(this, input->get_value());
    } else {
        output->release(this);
    }
}
