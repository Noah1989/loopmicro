#include "led.h"

Led::Led(SDL_Renderer *renderer, SDL_Point pos, const std::string& image_name)
: Actor(renderer, 2)
{
    std::string base_image_path = "assets/led_"+ image_name + ".png";
    base_image = IMG_LoadTexture(renderer, base_image_path.c_str());
    rect.x = pos.x; rect.y = pos.y;
    SDL_QueryTexture(base_image, NULL, NULL, &rect.w, &rect.h);

    std::string light_image_path = "assets/led_"+ image_name + "_light.png";
    light_image = IMG_LoadTexture(renderer, light_image_path.c_str());
    SDL_SetTextureBlendMode(light_image, SDL_BLENDMODE_ADD);
    set_value(0);
}

void Led::set_value(float value)
{
    SDL_SetTextureAlphaMod(light_image, 255*value);
    changed = true;
}

bool Led::render(int layer)
{
    Actor::render(layer);
    switch(layer) {
    case 0:
        SDL_RenderCopy(renderer, base_image,  NULL, &rect);
        return true;
    case 1:
        SDL_RenderCopy(renderer, light_image, NULL, &rect);
        return true;
    }
    return false;
}
