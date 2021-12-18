#ifndef BUS_HPP
#define BUS_HPP

#include <map>

#include "actor.hpp"
#include "signal.hpp"

class Bus
{
    public:
        Bus();

        unsigned int get_value();
        SignalState  get_state(int bit);
        bool         is_contending();
        bool         is_floating();
        void         drive(Actor *driver, unsigned int value);
        void         release(Actor *driver);
        void         tick();


    private:
        unsigned int                   value;
        unsigned int                   contendingBits;
        bool                           floating;
        std::map<Actor*, unsigned int> drivers;

};

#endif // BUS_HPP
