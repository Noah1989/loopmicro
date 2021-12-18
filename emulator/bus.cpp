#include "bus.hpp"

Bus::Bus() : value(0), contendingBits(0), floating(true)
{
}

unsigned int Bus::get_value()
{
    return value;
}

SignalState Bus::get_state(int bit)
{
    if (floating) return SignalState::Floating;
    if (contendingBits & (1<<bit)) return SignalState::Contending;
    return (value & (1<<bit)) ? SignalState::High : SignalState::Low;
}

bool Bus::is_contending()
{
    return contendingBits != 0;
}

bool Bus::is_floating()
{
    return floating;
}

void Bus::drive(Actor *driver, unsigned int value)
{
    drivers[driver] = value;
}

void Bus::release(Actor *driver)
{
    drivers.erase(driver);
}

void Bus::tick()
{
    value = 0;
    contendingBits = 0;
    floating = true;

    for (auto const& i : drivers) {
        unsigned int drivenValue = i.second;
        if (floating) {
            value = drivenValue;
            floating = false;
        } else {
            contendingBits |= (value^drivenValue);
            value |= drivenValue;
        }
    }
}
