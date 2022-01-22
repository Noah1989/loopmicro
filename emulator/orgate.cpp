#include "orgate.hpp"

OrGate::OrGate(Signal *inputA, Signal *inputB, Signal *output)
: Actor(NULL, 0), inputA(inputA), inputB(inputB), output(output)
{
}

void OrGate::tick()
{
    if (inputA->get_state() == SignalState::High ||
        inputB->get_state() == SignalState::High) {
        output->pull(this, SignalPull::High);
    } else {
        output->pull(this, SignalPull::Low);
    }
}
