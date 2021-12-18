#ifndef LABEL_HPP
#define LABEL_HPP

#include <SDL2/SDL.h>

class Label
{
    public:
        Label(SDL_Renderer *renderer, SDL_Rect alignToRect, const char *text);

        void render();

    private:
        SDL_Renderer *renderer;
        SDL_Rect      labelRect;
        SDL_Texture  *labelImage;
};

#endif // LABEL_HPP
