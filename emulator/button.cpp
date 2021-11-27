#include "button.hpp"

Button::Button(SDL_Renderer *renderer, SDL_Point pos,
               Signal *output, SignalPull offPull, SignalPull onPull)
: Actor(renderer, 1), pressed(false),
  output(output), offPull(offPull), onPull(onPull)
{
    base_image = IMG_LoadTexture(renderer, "assets/button.png");
    rect.x = pos.x; rect.y = pos.y;
    SDL_QueryTexture(base_image, NULL, NULL, &rect.w, &rect.h);
    pressed_image = IMG_LoadTexture(renderer, "assets/button_pressed.png");

    default_cursor = SDL_GetCursor();
    hand_cursor = SDL_CreateSystemCursor(SDL_SYSTEM_CURSOR_HAND);
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
            if (SDL_GetCursor() != hand_cursor) {
                SDL_SetCursor(hand_cursor);
            }
            return true;
        } else {
            if (SDL_GetCursor() != default_cursor) {
                SDL_SetCursor(default_cursor);
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
    Actor::render(layer);
    switch (layer) {
    case 0:
        if (pressed) {
            SDL_RenderCopy(renderer, pressed_image,  NULL, &rect);
        } else {
            SDL_RenderCopy(renderer, base_image,  NULL, &rect);
        }
        return true;
    }
    return false;
}
