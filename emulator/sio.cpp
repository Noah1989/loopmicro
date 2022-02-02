#include "sio.hpp"

extern "C" {
#include "sdl-ps2/sdl-ps2.h"
}

Sio::Sio(Signal *nReset, Signal *nM1, Signal *nIorq, Signal *nRd,
         Signal *nInt, Signal *clk, Bus *addr, Bus *data)
: Actor(NULL, 0), nReset(nReset), nM1(nM1), nIorq(nIorq), nRd(nRd),
                  nInt(nInt), clk(clk), addr(addr), data(data), busy(false),
                  regsel{0,0}, rxctl{0,0}, txctl{0,0}, brctl{0,0}
{
}

void Sio::reset(int channel)
{
    regsel[channel] = 0;
    rxctl[channel] = 0;
    txctl[channel] = 0;
    brctl[channel] = 0;
}

void Sio::receive(int channel, int num, char *bytes)
{
    for (int i = 0; i < num; i++) {
        rxfifo[channel].push(bytes[i]);
    }
}

bool Sio::handleEvent(SDL_Event *event)
{
    char bytes[MAX_PS2_CODE_LEN+1] = {};
    switch (event->type) {
    case SDL_KEYDOWN:
        ps2_encode(event->key.keysym.scancode, true, bytes);
        receive(0, strlen(bytes), bytes);
        break;
    case SDL_KEYUP:
        ps2_encode(event->key.keysym.scancode, false, bytes);
        receive(0, strlen(bytes), bytes);
        break;
    }
    return false;
}

void Sio::tick()
{
    if (nReset->get_state() == SignalState::Low) {
        reset(0);
        reset(1);
        busy = false;
        data->release(this);
        return;
    }

    bool iorq = nIorq->get_state() == SignalState::Low;
    bool m1 = nM1->get_state() == SignalState::Low;
    bool select = (addr->get_value() & 0xf0) == 0x10;

    if (iorq && !m1 && select) {
        if (busy) return;
        busy = true;

        bool rd = nRd->get_state() == SignalState::Low;
        int channel = addr->get_value() & 0x01;

        if (addr->get_value() & 0x02) {
            // command
            if (rd) {
                // read register
                switch(regsel[channel]) {
                case 0:
                    data->drive(this, 0);
                    break;
                case 1:
                    data->drive(this, 0);
                    break;
                case 2:
                    data->drive(this, 0);
                    break;
                }
            } else {
                // write register
                switch(regsel[channel]) {
                case 0:
                    regsel[channel] = data->get_value() & 0x03;
                    if ((data->get_value() & 0b00111000) == 0b00011000) {
                        reset(channel);
                    }
                    break;
                case 1:
                    break;
                case 2:
                    break;
                case 3:
                    rxctl[channel] = data->get_value();
                    break;
                case 4:
                    brctl[channel] = data->get_value();
                    break;
                case 5:
                    txctl[channel] = data->get_value();
                    break;
                case 6:
                    break;
                case 7:
                    break;
                }
            }
        } else {
            // data
            if (rd) {
                // read data
                if (rxfifo[channel].empty()) {
                    data->drive(this, 0);
                } else {
                    data->drive(this, rxfifo[channel].front());
                    rxfifo[channel].pop();
                }
            } else {
                // write data
            }
        }

    } else {
        if (busy) {
            busy = false;
            data->release(this);
        }
    }
}
