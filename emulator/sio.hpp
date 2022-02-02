#ifndef SIO_HPP
#define SIO_HPP

#include <SDL2/SDL.h>
#include <queue>

#include "actor.hpp"
#include "signal.hpp"
#include "bus.hpp"

class Sio : public Actor
{
    public:
        Sio(Signal *nReset, Signal *nM1, Signal *nIorq, Signal *nRd,
            Signal *nInt, Signal *clk, Bus *addr, Bus *data);

        bool handleEvent(SDL_Event *event);
        void tick();

    private:
        Signal *nReset;
        Signal *nM1;
        Signal *nIorq;
        Signal *nRd;
        Signal *nInt;
        Signal *clk;
        Bus    *addr;
        Bus    *data;
        bool    busy;
        int     regsel[2];
        char    rxctl[2];
        char    txctl[2];
        char    brctl[2];
        std::queue<char> rxfifo[2];

        void reset(int channel);
        void receive(int channel, int num, char *bytes);
};

#endif // SIO_HPP
