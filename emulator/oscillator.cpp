#include "oscillator.hpp"

Oscillator::Oscillator(Signal *enable, Signal *output)
: Actor(NULL, 0), enable(enable), output(output), state(false)
{
}

void Oscillator::tick()
{
    if (enable->get_state() == SignalState::High) {
        output->pull(this, state ? SignalPull::High : SignalPull::Low);
        state = !state;
    } else {
        output->pull(this, SignalPull::None);
    }
}
