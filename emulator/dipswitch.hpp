#ifndef DIPSWITCH_HPP
#define DIPSWITCH_HPP

#include <vector>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

#include "actor.hpp"
#include "bus.hpp"
#include "label.hpp"

class DipSwitch : public Actor
{
    public:
        DipSwitch(SDL_Renderer *renderer, SDL_Point pos, const char *labelText,
                  Bus *output, int numSwitches);

        bool handleEvent(SDL_Event *event);
        void tick();
        bool render(int layer);

    private:
        int                    numSwitches;
        std::vector<SDL_Rect>  rects;
        unsigned int           value;
        Bus                   *output;
        SDL_Texture           *leftImage;
        SDL_Texture           *offImage;
        SDL_Texture           *onImage;
        SDL_Texture           *rightImage;
        Label                 *label;
        SDL_Cursor            *defaultCursor;
        SDL_Cursor            *handCursor;

};

#endif // DIPSWITCH_HPP
