#ifndef SWITCH_HPP
#define SWITCH_HPP

#include <SDL2/SDL.h>

#include "actor.hpp"
#include "signal.hpp"
#include "label.hpp"

class Switch : public Actor
{
    public:
        Switch(SDL_Renderer *renderer, SDL_Point pos, const char *label_text,
               Signal *output, SignalPull offPull, SignalPull onPull);

        bool handleEvent(SDL_Event *event);
        void tick();
        bool render(int layer);

    private:
        bool         state;
        SDL_Rect     rect;
        SDL_Texture *baseImage;
        SDL_Texture *onImage;
        Label       *label;
        SDL_Cursor  *defaultCursor;
        SDL_Cursor  *handCursor;
        Signal      *output;
        SignalPull   offPull;
        SignalPull   onPull;
};

#endif // SWITCH_HPP
