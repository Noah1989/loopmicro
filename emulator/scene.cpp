#include "scene.hpp"

#include <algorithm>

#include "resistor.hpp"
#include "led.hpp"
#include "ledrow.hpp"
#include "button.hpp"
#include "switch.hpp"
#include "dipswitch.hpp"
#include "signalgate.hpp"
#include "busgate.hpp"
#include "orgate.hpp"
#include "cpu.hpp"
#include "memory.hpp"
#include "lcd.hpp"
#include "oscillator.hpp"
#include "sio.hpp"

Scene::Scene(SDL_Window *window, SDL_Renderer *renderer)
: window(window), renderer(renderer)
{
    Signal *clk    = new Signal();
    Signal *nReset = new Signal();
    Signal *nM1    = new Signal();
    Signal *nMreq  = new Signal();
    Signal *nIorq  = new Signal();
    Signal *nRd    = new Signal();
    Signal *nWr    = new Signal();
    Signal *nRfsh  = new Signal();
    Signal *nHalt  = new Signal();
    Signal *nWait  = new Signal();
    Signal *nInt   = new Signal();
    Signal *nNmi   = new Signal();
    Signal *nBusrq = new Signal();
    Signal *nBusak = new Signal();

    Bus *addr = new Bus();
    Bus *data = new Bus();

    Signal *nRdFp    = new Signal();
    Signal *nWrFp    = new Signal();
    Signal *nMreqFp  = new Signal();
    Signal *nIorqFp  = new Signal();
    Signal *nBusakWr = new Signal();
    Signal *oscEn    = new Signal();

    Bus *addrFp = new Bus();
    Bus *dataFp = new Bus();
    Bus *wrEn   = new Bus();

    Led *led1  = new Led(renderer, { .x= 50, .y=60 },   "CLK", "flat_red",
                         clk);
    Led *led2  = new Led(renderer, { .x= 80, .y=60 }, "RESET", "flat_red",
                         nReset, /*inverted=*/true);
    Led *led3  = new Led(renderer, { .x=110, .y=60 },    "M1",  "flat_red",
                         nM1,    /*inverted=*/true);
    Led *led4  = new Led(renderer, { .x=140, .y=60 },  "MREQ",  "flat_red",
                         nMreq,  /*inverted=*/true);
    Led *led5  = new Led(renderer, { .x=170, .y=60 },  "IORQ",  "flat_red",
                         nIorq,  /*inverted=*/true);
    Led *led6  = new Led(renderer, { .x=200, .y=60 },    "RD",  "flat_red",
                         nRd,    /*inverted=*/true);
    Led *led7  = new Led(renderer, { .x=230, .y=60 },    "WR",  "flat_red",
                         nWr,    /*inverted=*/true);
    Led *led8  = new Led(renderer, { .x=260, .y=60 },  "RFSH",  "flat_red",
                         nRfsh,  /*inverted=*/true);
    Led *led9  = new Led(renderer, { .x=290, .y=60 },  "HALT",  "flat_red",
                         nHalt,  /*inverted=*/true);
    Led *led10 = new Led(renderer, { .x=320, .y=60 },  "WAIT",  "flat_red",
                         nWait,  /*inverted=*/true);
    Led *led11 = new Led(renderer, { .x=350, .y=60 },   "INT",  "flat_red",
                         nInt,   /*inverted=*/true);
    Led *led12 = new Led(renderer, { .x=380, .y=60 },   "NMI",  "flat_red",
                         nNmi,   /*inverted=*/true);
    Led *led13 = new Led(renderer, { .x=410, .y=60 }, "BUSRQ",  "flat_red",
                         nBusrq, /*inverted=*/true);
    Led *led14 = new Led(renderer, { .x=155, .y=120 }, "BUSAK",  "flat_red",
                         nBusak, /*inverted=*/true);

    LedRow *addrLeds = new LedRow(renderer, { .x=450, .y=60 },
                                  "ADDRESS BUS", "flat_green", addr, 16);

    LedRow *dataLeds = new LedRow(renderer, { .x=720, .y=60 },
                                  "DATA BUS", "flat_yellow", data, 8);

    Button *btn1 = new Button(renderer, { .x=50, .y=120 }, "CLK",
                              clk, SignalPull::WeakLow, SignalPull::WeakHigh);
    Switch *btn2 = new Switch(renderer, { .x=610, .y=120 }, "RD",
                              nRdFp, SignalPull::High, SignalPull::Low);
    Switch *btn3 = new Switch(renderer, { .x=640, .y=120 }, "WR",
                              nWrFp, SignalPull::High, SignalPull::Low);

    Switch *sw1 = new Switch(renderer, { .x=85, .y=120 }, "RESET",
                             nReset, SignalPull::High, SignalPull::Low);
    Switch *sw2 = new Switch(renderer, { .x=120, .y=120 }, "BUSRQ",
                             nBusrq, SignalPull::High, SignalPull::Low);
    Button *sw3 = new Button(renderer, { .x=550, .y=120 }, "MREQ",
                             nMreqFp, SignalPull::High, SignalPull::Low);
    Button *sw4 = new Button(renderer, { .x=580, .y=120 }, "IORQ",
                             nIorqFp, SignalPull::High, SignalPull::Low);
    Switch *sw5 = new Switch(renderer, { .x=820, .y=120 }, "OSC",
                             oscEn, SignalPull::Low, SignalPull::High);

    DipSwitch *dipAddr = new DipSwitch(renderer, { .x= 200, .y = 120 },
                                       "ADDRESS INPUT", addrFp, 16);
    DipSwitch *dipData = new DipSwitch(renderer, { .x= 420, .y = 120 },
                                       "DATA INPUT", dataFp, 8);
    DipSwitch *dipWrEn = new DipSwitch(renderer, { .x= 680, .y = 120 },
                                       "WRITE ENABLE", wrEn, 8);

    Resistor *pullup1 = new Resistor(nMreq, SignalPull::WeakHigh);
    Resistor *pullup2 = new Resistor(nIorq, SignalPull::WeakHigh);
    Resistor *pullup3 = new Resistor(nRd,   SignalPull::WeakHigh);
    Resistor *pullup4 = new Resistor(nWr,   SignalPull::WeakHigh);
    Resistor *pullup5 = new Resistor(nWait, SignalPull::WeakHigh);
    Resistor *pullup6 = new Resistor(nInt,  SignalPull::WeakHigh);
    Resistor *pullup7 = new Resistor(nNmi,  SignalPull::WeakHigh);

    SignalGate *nMreqGate = new SignalGate(nMreqFp, nMreq, nBusak);
    SignalGate *nIorqGate = new SignalGate(nIorqFp, nIorq, nBusak);
    SignalGate *nRdGate   = new SignalGate(nRdFp,   nRd,   nBusak);
    SignalGate *nWrGate   = new SignalGate(nWrFp,   nWr,   nBusakWr);

    OrGate *nBusakWrLogic = new OrGate(nBusak, nWrFp, nBusakWr);

    BusGate *addrGate = new BusGate(addrFp, addr, nBusak);
    BusGate *dataGate = new BusGate(dataFp, data, nBusakWr);

    Cpu *cpu = new Cpu(clk,   nReset, nM1,   nMreq, nIorq, nRd,    nWr,
                       nRfsh, nHalt,  nWait, nInt,  nNmi,  nBusrq, nBusak,
                       addr,  data);

    memory = new Memory(addr, data, nMreq, nRd, nWr, wrEn, 65536, 12);

    Lcd *lcd = new Lcd(renderer, { .x=50, .y=180 },
                       nIorq, nRd, nWr, addr, data);

    Oscillator *osc = new Oscillator(oscEn, clk);

    Sio *sio = new Sio(nReset, nM1, nIorq, nRd, nInt, clk, addr, data);

    actors = { led1, led2, led3, led4, led5, led6, led7, led8, led9, led10,
               led11, led12, led13, led14, addrLeds, dataLeds,
               btn1, btn2, btn3, sw1, sw2, sw3, sw4, sw5,
               dipAddr, dipData, dipWrEn,
               nMreqGate, nIorqGate, nRdGate, nWrGate, nBusakWrLogic,
               addrGate, dataGate,
               pullup1, pullup2, pullup3, pullup4, pullup5, pullup6, pullup7,
               cpu, memory, lcd, osc, sio };
    signals = { clk,     nReset,  nM1,
                nMreq,   nIorq,   nRd,   nWr,
                nRfsh,   nHalt,   nWait, nInt,
                nNmi,    nBusrq,  nBusak,
                nMreqFp, nIorqFp, nRdFp, nWrFp, nBusakWr, oscEn };
    buses = { addr, data, addrFp, dataFp, wrEn };
}

void Scene::handleEvent(SDL_Event *event)
{
    for (Actor *actor : actors) {
        if (actor->handleEvent(event)) break;
    }
}

void Scene::tick()
{
    for (Actor *actor : actors) {
        actor->tick();
    }
    for (Signal *signal: signals) {
        signal->tick();
    }
    for (Bus *bus: buses) {
        bus->tick();
    }
}

bool Scene::render()
{
    if (std::none_of(actors.begin(), actors.end(),
                     [](Actor *a) { return a->is_changed(); })) {
        return false;
    }

    // gray background
    SDL_SetRenderDrawColor(renderer, 192, 192, 192, 255);
    SDL_RenderClear(renderer);

    int layer = 0;
    bool layer_exists = true;
    while (layer_exists) {
        layer_exists = false;
        for (Actor *actor : actors) {
            layer_exists |= actor->render(layer);
        }
        layer++;
    }

    return true;
}
