#include "actor.hpp"

Actor::Actor(SDL_Renderer *renderer, int num_layers)
: renderer(renderer), num_layers(num_layers), changed(true)
{
}

bool Actor::handleEvent(SDL_Event *event)
{
    return false;
}

void Actor::tick()
{
}

bool Actor::is_changed()
{
    return changed;
}

bool Actor::render(int layer)
{
    if (layer == num_layers) {
        changed = false;
        return false;
    }
    return true;
}
