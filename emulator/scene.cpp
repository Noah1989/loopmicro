#include "scene.h"
#include "led.h"
#include "button.h"

#include <algorithm>

Scene::Scene(SDL_Window *window, SDL_Renderer *renderer)
: window(window), renderer(renderer)
{
    Led *led1 = new Led(renderer, { .x=50, .y=60 }, "flat_green");
    Led *led2 = new Led(renderer, { .x=66, .y=60 }, "flat_yellow");
    Led *led3 = new Led(renderer, { .x=82, .y=60 }, "flat_red");

    led1->set_value(1);
    led2->set_value(1);
    led3->set_value(1);

    Button *btn1 = new Button(renderer, { .x=50, .y=120});
    Button *btn2 = new Button(renderer, { .x=82, .y=120});

    actors = { led1, led2, led3, btn1, btn2 };
}

void Scene::handleEvent(SDL_Event *event)
{
    for (Actor *actor : actors) {
        if (actor->handleEvent(event)) break;
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
