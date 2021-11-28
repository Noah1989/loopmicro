#include <iostream>

#include <SDL2/SDL_image.h>

#include "button.hpp"

Button::Button(SDL_Renderer *renderer, SDL_Point pos, const char *labelText,
               Signal *output, SignalPull offPull, SignalPull onPull)
: Actor(renderer, 1), pressed(false),
  output(output), offPull(offPull), onPull(onPull)
{
    baseImage = IMG_LoadTexture(renderer, "assets/button.png");
    rect.x = pos.x;
    rect.y = pos.y;
    SDL_QueryTexture(baseImage, NULL, NULL, &rect.w, &rect.h);
    pressedImage = IMG_LoadTexture(renderer, "assets/button_pressed.png");

    label = new Label(renderer, &rect, labelText);

    defaultCursor = SDL_GetCursor();
    handCursor = SDL_CreateSystemCursor(SDL_SYSTEM_CURSOR_HAND);
}

bool Button::handleEvent(SDL_Event *event)
{
    SDL_Point pos;
    switch (event->type) {
    case SDL_MOUSEBUTTONDOWN:
        pos = { .x=event->button.x, .y=event->button.y };
        if (SDL_PointInRect(&pos, &rect)) {
            pressed = true;
            changed = true;
            return true;
        }
        return false;
    case SDL_MOUSEBUTTONUP:
        if (pressed) {
            pressed = false;
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

void Button::tick()
{
    if (pressed) {
        output->pull(this, onPull);
    } else {
        output->pull(this, offPull);
    }
}

bool Button::render(int layer)
{
    if (!Actor::render(layer)) return false;
    switch (layer) {
    case 0:
        if (pressed) {
            SDL_RenderCopy(renderer, pressedImage,  NULL, &rect);
        } else {
            SDL_RenderCopy(renderer, baseImage,  NULL, &rect);
        }
        label->render();
        break;
    }
    return true;
}
