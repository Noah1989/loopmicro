#include "signal.hpp"

Signal::Signal() : state(SignalState::Floating)
{
}

SignalState Signal::get_state()
{
    return state;
}

void Signal::pull(Actor *puller, SignalPull pull)
{
    pullers[puller] = pull;
}

void Signal::tick()
{
    state = SignalState::Floating;

    unsigned int weakMask = static_cast<unsigned int>(SignalPull::WeakLow) |
                            static_cast<unsigned int>(SignalPull::WeakHigh);
    unsigned int strongMask = static_cast<unsigned int>(SignalPull::Low) |
                              static_cast<unsigned int>(SignalPull::High);

    unsigned int combinedPull = 0;
    for (auto const& i : pullers) {
        SignalPull pull = i.second;
        combinedPull |= static_cast<unsigned int>(pull);
    }

    switch (static_cast<SignalPull>(combinedPull & strongMask)) {
    case SignalPull::None:
        switch (static_cast<SignalPull>(combinedPull & weakMask)) {
        case SignalPull::None:
            state = SignalState::Floating;
            break;
        case SignalPull::WeakLow:
            state = SignalState::Low;
            break;
        case SignalPull::WeakHigh:
            state = SignalState::High;
            break;
        default:
            state = SignalState::Contending;
            break;
        }
        break;
    case SignalPull::Low:
        state = SignalState::Low;
        break;
    case SignalPull::High:
        state = SignalState::High;
        break;
    default:
        state = SignalState::Contending;
        break;
    }
}
