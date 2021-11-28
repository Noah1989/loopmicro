#ifndef BUTTON_H
#define BUTTON_H

#include <SDL2/SDL.h>

#include "actor.hpp"
#include "signal.hpp"
#include "label.hpp"

class Button : public Actor
{
    public:
        Button(SDL_Renderer *renderer, SDL_Point pos, const char *label_text,
               Signal *output, SignalPull offPull, SignalPull onPull);

        bool handleEvent(SDL_Event *event);
        void tick();
        bool render(int layer);

    private:
        bool         pressed;
        SDL_Rect     rect;
        SDL_Texture *baseImage;
        SDL_Texture *pressedImage;
        Label       *label;
        SDL_Cursor  *defaultCursor;
        SDL_Cursor  *handCursor;
        Signal      *output;
        SignalPull   offPull;
        SignalPull   onPull;
};

#endif // BUTTON_H
