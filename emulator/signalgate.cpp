#include "signalgate.hpp"

SignalGate::SignalGate(Signal *input, Signal *output, Signal *disable)
: Actor(NULL, 0), input(input), output(output), disable(disable)
{
}

void SignalGate::tick()
{
    if (disable->get_state() == SignalState::Low) {
        output->pull(this, input->get_state() == SignalState::High
                     ? SignalPull::High : SignalPull::Low);
    } else {
        output->pull(this, SignalPull::None);
    }
}
