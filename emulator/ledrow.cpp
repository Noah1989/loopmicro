#include "ledrow.hpp"

LedRow::LedRow(SDL_Renderer *renderer, SDL_Point pos, const char *labelText,
               const std::string &imageName, Bus *input, int numLeds)
: Actor(renderer, 2), numLeds(numLeds), rects(numLeds), lightImages(numLeds),
  input(input), currentValues(numLeds, -1)
{
    int width, height;
    std::string baseImagePath = "assets/led_"+ imageName + ".png";
    baseImage = IMG_LoadTexture(renderer, baseImagePath.c_str());
    SDL_QueryTexture(baseImage, NULL, NULL, &width, &height);

    for (int i = 0; i < numLeds; i++) {
        rects[i].x = pos.x + (numLeds-1-i)*(width/2);
        rects[i].y = pos.y;
        rects[i].w = width;
        rects[i].h = height;
    }

    label = new Label(renderer, { .x=pos.x, .y=pos.y,
                                  .w=width + (numLeds-1)*(width/2),
                                  .h=height },
                      labelText);

    std::string lightImagePath = "assets/led_"+ imageName + "_light.png";
    for (int i = 0; i < numLeds; i++) {
        lightImages[i] = IMG_LoadTexture(renderer, lightImagePath.c_str());
        SDL_SetTextureBlendMode(lightImages[i], SDL_BLENDMODE_ADD);
    }

    for (int i = 0; i < numLeds; i++) {
        set_value(0, i);
    }
}

void LedRow::set_value(float value, int bit)
{
    if (value == currentValues[bit]) return;
    SDL_SetTextureAlphaMod(lightImages[bit], 255*value);
    changed = true;
    currentValues[bit] = value;
}

void LedRow::tick()
{
    for (int i = 0; i < numLeds; i++) {
        switch (input->get_state(i)) {
        case SignalState::Floating:
        case SignalState::Low:
            set_value(0, i);
            break;
        case SignalState::High:
            set_value(1, i);
            break;
        case SignalState::Contending:
            set_value(0.5, i);
            break;
        }
    }
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
            SDL_RenderCopy(renderer, lightImages[i], NULL, &rects[i]);
        }
        break;
    }
    return true;
}
