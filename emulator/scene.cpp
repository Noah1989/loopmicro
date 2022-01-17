#include "scene.hpp"

#include <algorithm>

#include "led.hpp"
#include "button.hpp"
#include "switch.hpp"
#include "dipswitch.hpp"
#include "cpu.hpp"
#include "ledrow.hpp"

Scene::Scene(SDL_Window *window, SDL_Renderer *renderer)
: window(window), renderer(renderer)
{
    Signal *clk    = new Signal();
    Signal *nReset = new Signal();
    Signal *nM1    = new Signal();

    Bus *addr = new Bus();
    Bus *data = new Bus();

    Bus *addrFP = new Bus();
    Bus *dataFP = new Bus();

    Led *led1 = new Led(renderer, { .x=50, .y=60 }, "CLK", "flat_red",
                        clk);
    Led *led2 = new Led(renderer, { .x=74, .y=60 }, "RES", "flat_red",
                        nReset, /*inverted=*/true);
    Led *led3 = new Led(renderer, { .x=98, .y=60 }, "M1",  "flat_red",
                        nM1,    /*inverted=*/true);

    LedRow *addrLeds = new LedRow(renderer, { .x=150, .y=60 },
                                  "ADDRESS BUS", "flat_green", addr, 16);

    Button *btn1 = new Button(renderer, { .x=50, .y=120 }, "CLK",
                              clk, SignalPull::Low, SignalPull::High);
    Switch *sw1 = new Switch(renderer, { .x=82, .y=120 }, "RES",
                             nReset, SignalPull::High, SignalPull::Low);

    DipSwitch *dipAddr = new DipSwitch(renderer, { .x= 150, .y = 120 },
                                       "ADDRESS INPUT", addrFP, 16);

    Cpu *cpu = new Cpu(clk, nReset, nM1, addr, data);

    actors = { led1, led2, led3, btn1, sw1, cpu, addrLeds, dipAddr };
    signals = { clk, nReset, nM1 };
    buses = { addr, data, addrFP, dataFP };
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
