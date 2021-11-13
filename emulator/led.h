#ifndef LED_H
#define LED_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <string>

#include <actor.h>

class Led : public Actor
{
    public:
        Led(SDL_Renderer *renderer, SDL_Point pos,
            const std::string& image_name);
        void set_value(float value);
        bool render(int layer);

    private:
        SDL_Rect rect;
        SDL_Texture *base_image;
        SDL_Texture *light_image;
};

#endif // LED_H
