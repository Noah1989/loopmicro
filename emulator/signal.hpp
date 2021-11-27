#ifndef SIGNAL_H
#define SIGNAL_H

#include <map>

#include "actor.hpp"

enum class SignalState {
    Floating,
    Low,
    High,
    Contending
};

enum class SignalPull : unsigned int {
    None       = 0b0000,
    WeakLow    = 0b0001,
    WeakHigh   = 0b0010,
    Low        = 0b0100,
    High       = 0b1000
};

class Signal
{
    public:
        Signal();
        SignalState get_state();
        void pull(Actor *puller, SignalPull pull);
        void tick();

    private:
        SignalState state;
        std::map<Actor*, SignalPull> pullers;
};

#endif // SIGNAL_H
