#include "ledrow.hpp"

LedRow::LedRow(SDL_Renderer *renderer, SDL_Point pos, const char *labelText,
               const std::string &imageName, Bus *input, int numLeds)
: Actor(renderer, 2), numLeds(numLeds), rects(numLeds),
  input(input), valueSums(numLeds, 0), valueCount(0)
{
    int width, height;
    std::string baseImagePath = "assets/led_"+ imageName + ".png";
    baseImage = IMG_LoadTexture(renderer, baseImagePath.c_str());
    SDL_QueryTexture(baseImage, NULL, NULL, &width, &height);

    for (int i = 0; i < numLeds; i++) {
        rects[i].x = pos.x + (numLeds-1-i)  *(width/2)
                           + (numLeds-1-i)/4*(width/8);
        rects[i].y = pos.y;
        rects[i].w = width;
        rects[i].h = height;
    }

    label = new Label(renderer, { .x=pos.x, .y=pos.y,
                                  .w=width + (numLeds   - 1)*(width/2)
                                           + (numLeds/4 - 1)*(width/8),
                                  .h=height },
                      labelText);

    std::string lightImagePath = "assets/led_"+ imageName + "_light.png";
    lightImage = IMG_LoadTexture(renderer, lightImagePath.c_str());
    SDL_SetTextureBlendMode(lightImage, SDL_BLENDMODE_ADD);
}

void LedRow::tick()
{
    for (int i = 0; i < numLeds; i++) {
        switch (input->get_state(i)) {
        case SignalState::Floating:
        case SignalState::Low:
            break;
        case SignalState::High:
            valueSums[i] += 2;
            break;
        case SignalState::Contending:
            valueSums[i] += 1;
            break;
        }
    }
    valueCount +=2;
    changed = true;
}


bool LedRow::render(int layer)
{
    if (!Actor::render(layer)) return false;
    switch(layer) {
    case 0:
        for (int i = 0; i < numLeds; i++) {
            SDL_RenderCopy(renderer, baseImage,  NULL, &rects[i]);
        }
        label->render();
        break;
    case 1:
        for (int i = 0; i < numLeds; i++) {
            SDL_SetTextureAlphaMod(lightImage, 255*valueSums[i]/valueCount);
            SDL_RenderCopy(renderer, lightImage, NULL, &rects[i]);
            valueSums[i] = 0;
        }
        valueCount = 0;
        break;
    }
    return true;
}
