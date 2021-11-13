#ifndef SCENE_H
#define SCENE_H

#include <SDL2/SDL.h>
#include <list>

#include <actor.h>

class Scene
{
    public:
        Scene(SDL_Window *window, SDL_Renderer *renderer);
        void handleEvent(SDL_Event *event);
        bool render();

    private:
        SDL_Window *window;
        SDL_Renderer *renderer;
        std::list<Actor*> actors;
};

#endif // SCENE_H
