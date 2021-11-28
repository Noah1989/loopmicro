#ifndef LED_H
#define LED_H

#include <string>
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

#include "actor.hpp"
#include "signal.hpp"
#include "label.hpp"

class Led : public Actor
{
    public:
        Led(SDL_Renderer *renderer, SDL_Point pos, const char *labelText,
            const std::string& image_name, Signal *input);

        void tick();
        bool render(int layer);

    private:
        SDL_Rect     rect;
        SDL_Texture *baseImage;
        SDL_Texture *lightImage;
        Signal      *input;
        Label       *label;
        float        currentValue;

        void set_value(float value);
};

#endif // LED_H
