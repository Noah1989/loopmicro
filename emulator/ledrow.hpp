#ifndef LEDROW_HPP
#define LEDROW_HPP

#include <string>
#include <vector>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

#include "actor.hpp"
#include "bus.hpp"
#include "label.hpp"

class LedRow : public Actor
{
    public:
        LedRow(SDL_Renderer *renderer, SDL_Point pos, const char *labelText,
               const std::string &image_name, Bus *input, int numLeds);

        void tick();
        bool render(int layer);

    private:
        int                        numLeds;
        std::vector<SDL_Rect>      rects;
        SDL_Texture               *baseImage;
        SDL_Texture               *lightImage;
        Bus                       *input;
        Label                     *label;
        std::vector<int>           valueSums;
        int                        valueCount;
};

#endif // LEDROW_HPP
