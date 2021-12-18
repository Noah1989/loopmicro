#include "switch.hpp"

#include <SDL2/SDL_image.h>

Switch::Switch(SDL_Renderer *renderer, SDL_Point pos, const char *labelText,
               Signal *output, SignalPull offPull, SignalPull onPull)
: Actor(renderer, 1), state(false),
  output(output), offPull(offPull), onPull(onPull)
{
    baseImage = IMG_LoadTexture(renderer, "assets/switch.png");
    rect.x = pos.x;
    rect.y = pos.y;
    SDL_QueryTexture(baseImage, NULL, NULL, &rect.w, &rect.h);
    onImage = IMG_LoadTexture(renderer, "assets/switch_on.png");

    label = new Label(renderer, rect, labelText);

    defaultCursor = SDL_GetCursor();
    handCursor = SDL_CreateSystemCursor(SDL_SYSTEM_CURSOR_HAND);
}


bool Switch::handleEvent(SDL_Event *event)
{
    SDL_Point pos;
    switch (event->type) {
    case SDL_MOUSEBUTTONDOWN:
        pos = { .x=event->button.x, .y=event->button.y };
        if (SDL_PointInRect(&pos, &rect)) {
            state = !state;
            changed = true;
            return true;
        }
        return false;
    case SDL_MOUSEMOTION:
        pos = { .x=event->motion.x, .y=event->motion.y };
        if (SDL_PointInRect(&pos, &rect)) {
            if (SDL_GetCursor() != handCursor) {
                SDL_SetCursor(handCursor);
            }
            return true;
        } else {
            if (SDL_GetCursor() != defaultCursor) {
                SDL_SetCursor(defaultCursor);
            }
            return false;
        }
    }
    return false;
}

void Switch::tick()
{
    if (state) {
        output->pull(this, onPull);
    } else {
        output->pull(this, offPull);
    }
}

bool Switch::render(int layer)
{
    if (!Actor::render(layer)) return false;
    switch (layer) {
    case 0:
        if (state) {
            SDL_RenderCopy(renderer, onImage,  NULL, &rect);
        } else {
            SDL_RenderCopy(renderer, baseImage,  NULL, &rect);
        }
        label->render();
        break;
    }
    return true;
}
