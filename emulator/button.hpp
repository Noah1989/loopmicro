#ifndef BUTTON_H
#define BUTTON_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

#include "actor.hpp"
#include "signal.hpp"

class Button : public Actor
{
    public:
        Button(SDL_Renderer *renderer, SDL_Point pos,
               Signal *output, SignalPull offPull, SignalPull onPull);
        bool handleEvent(SDL_Event *event);
        void tick();
        bool render(int layer);

    private:
        bool pressed;
        SDL_Rect rect;
        SDL_Texture *base_image;
        SDL_Texture *pressed_image;
        SDL_Cursor *default_cursor;
        SDL_Cursor *hand_cursor;
        Signal *output;
        SignalPull offPull;
        SignalPull onPull;
};

#endif // BUTTON_H
