#include "actor.hpp"

Actor::Actor(SDL_Renderer *renderer, int numLayers)
: renderer(renderer), changed(true), numLayers(numLayers)
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
    if (layer >= numLayers) {
        changed = false;
        return false;
    }
    return true;
}
