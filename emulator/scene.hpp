#ifndef SCENE_H
#define SCENE_H

#include <list>
#include <SDL2/SDL.h>

#include "actor.hpp"
#include "signal.hpp"

class Scene
{
    public:
        Scene(SDL_Window *window, SDL_Renderer *renderer);

        void handleEvent(SDL_Event *event);
        void tick();
        bool render();

    private:
        SDL_Window        *window;
        SDL_Renderer      *renderer;
        std::list<Actor*>  actors;
        std::list<Signal*> signals;
};

#endif // SCENE_H
