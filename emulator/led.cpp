#include "led.hpp"

Led::Led(SDL_Renderer *renderer, SDL_Point pos, const char *labelText,
         const std::string& imageName, Signal* input)
: Actor(renderer, 2), input(input), currentValue(-1)
{
    std::string baseImagePath = "assets/led_"+ imageName + ".png";
    baseImage = IMG_LoadTexture(renderer, baseImagePath.c_str());
    rect.x = pos.x;
    rect.y = pos.y;
    SDL_QueryTexture(baseImage, NULL, NULL, &rect.w, &rect.h);

    label = new Label(renderer, &rect, labelText);

    std::string lightImagePath = "assets/led_"+ imageName + "_light.png";
    lightImage = IMG_LoadTexture(renderer, lightImagePath.c_str());
    SDL_SetTextureBlendMode(lightImage, SDL_BLENDMODE_ADD);
    set_value(0);
}

void Led::set_value(float value)
{
    if (value == currentValue) return;
    SDL_SetTextureAlphaMod(lightImage, 255*value);
    changed = true;
    currentValue = value;
}

void Led::tick()
{
    switch (input->get_state()) {
    case SignalState::Floating:
    case SignalState::Low:
        set_value(0);
        break;
    case SignalState::High:
        set_value(1);
        break;
    case SignalState::Contending:
        set_value(0.5);
        break;
    }
}

bool Led::render(int layer)
{
    if (!Actor::render(layer)) return false;
    switch(layer) {
    case 0:
        SDL_RenderCopy(renderer, baseImage,  NULL, &rect);
        label->render();
        break;
    case 1:
        SDL_RenderCopy(renderer, lightImage, NULL, &rect);
        break;
    }
    return true;
}
