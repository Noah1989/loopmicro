#ifndef ACTOR_H
#define ACTOR_H

#include <SDL2/SDL.h>

class Actor
{
    public:
        Actor(SDL_Renderer *renderer, int numLayers);

        virtual bool handleEvent(SDL_Event *event);
        virtual void tick();
                bool is_changed();
        virtual bool render(int layer);

    protected:
        SDL_Renderer *renderer;
        bool          changed;

    private:
        int numLayers;
};

#endif // ACTOR_H
