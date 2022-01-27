#include "led.hpp"

Led::Led(SDL_Renderer *renderer, SDL_Point pos, const char *labelText,
         const std::string &imageName, Signal* input, bool inverted)
: Actor(renderer, 2), input(input), inverted(inverted),
  valueSum(0), valueCount(0)
{
    std::string baseImagePath = "assets/led_"+ imageName + ".png";
    baseImage = IMG_LoadTexture(renderer, baseImagePath.c_str());
    rect.x = pos.x;
    rect.y = pos.y;
    SDL_QueryTexture(baseImage, NULL, NULL, &rect.w, &rect.h);

    label = new Label(renderer, rect, labelText);

    std::string lightImagePath = "assets/led_"+ imageName + "_light.png";
    lightImage = IMG_LoadTexture(renderer, lightImagePath.c_str());
    SDL_SetTextureBlendMode(lightImage, SDL_BLENDMODE_ADD);
}


void Led::tick()
{
    switch (input->get_state()) {
    case SignalState::Floating:
    case SignalState::Low:
        if (inverted) {
            valueSum += 2;
        }
        break;
    case SignalState::High:
        if (!inverted) {
            valueSum += 2;
        }
        break;
    case SignalState::Contending:
        valueSum += 1;
        break;
    }
    valueCount += 2;
    changed = true;
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
        SDL_SetTextureAlphaMod(lightImage, 255*valueSum/valueCount);
        SDL_RenderCopy(renderer, lightImage, NULL, &rect);
        valueSum = 0;
        valueCount = 0;
        break;
    }
    return true;
}
