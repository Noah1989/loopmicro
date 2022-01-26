#ifndef LCD_HPP
#define LCD_HPP

#include <SDL2/SDL.h>

#include "LCD/vrEmuLcd.h"

#include "actor.hpp"
#include "signal.hpp"
#include "bus.hpp"

class Lcd : public Actor
{
    public:
        Lcd(SDL_Renderer *renderer, SDL_Point pos,
            Signal *nIorq, Signal *nRd, Signal *nWr, Bus *addr, Bus *data);

        void tick();
        bool render(int layer);

    private:
        VrEmuLcd *lcd;
        int       width;
        int       height;
        SDL_Rect  rect;
        Signal   *nIorq;
        Signal   *nRd;
        Signal   *nWr;
        Bus      *addr;
        Bus      *data;
        bool      busy;
};

#endif // LCD_HPP
