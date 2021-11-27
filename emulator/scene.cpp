#include <algorithm>

#include "scene.hpp"
#include "led.hpp"
#include "button.hpp"

Scene::Scene(SDL_Window *window, SDL_Renderer *renderer)
: window(window), renderer(renderer)
{
    Signal *signal1 = new Signal();
    Signal *signal2 = new Signal();
    Signal *signal3 = new Signal();

    Led *led1 = new Led(renderer, { .x=50, .y=60 }, "flat_green",  signal1);
    Led *led2 = new Led(renderer, { .x=66, .y=60 }, "flat_yellow", signal2);
    Led *led3 = new Led(renderer, { .x=82, .y=60 }, "flat_red",    signal3);

    Button *btn1 = new Button(renderer, { .x=50, .y=120},
                              signal1, SignalPull::None, SignalPull::High);
    Button *btn2 = new Button(renderer, { .x=82, .y=120},
                              signal2, SignalPull::WeakHigh, SignalPull::Low);

    actors = { led1, led2, led3, btn1, btn2 };
    signals = { signal1, signal2 };
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
