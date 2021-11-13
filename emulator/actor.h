#ifndef ACTOR_H
#define ACTOR_H

#include <SDL2/SDL.h>

class Actor
{
    public:
        Actor(SDL_Renderer *renderer, int num_layers);
        bool is_changed();
        virtual bool handleEvent(SDL_Event *event);
        virtual bool render(int layer);

    protected:
        SDL_Renderer *renderer;
        bool changed;

    private:
        int num_layers;
};

#endif // ACTOR_H
