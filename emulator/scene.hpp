#ifndef SCENE_HPP
#define SCENE_HPP

#include <list>
#include <SDL2/SDL.h>

#include "actor.hpp"
#include "signal.hpp"
#include "bus.hpp"
#include "memory.hpp"

class Scene
{
    public:
        Scene(SDL_Window *window, SDL_Renderer *renderer);

        void    handleEvent(SDL_Event *event);
        void    tick();
        bool    render();
        Memory *memory;

    private:
        SDL_Window        *window;
        SDL_Renderer      *renderer;
        std::list<Actor*>  actors;
        std::list<Signal*> signals;
        std::list<Bus*>    buses;
};

#endif // SCENE_HPP
