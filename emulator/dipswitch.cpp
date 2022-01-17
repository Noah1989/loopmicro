#include "dipswitch.hpp"

DipSwitch::DipSwitch(SDL_Renderer *renderer, SDL_Point pos,
                     const char *labelText, Bus *output, int numSwitches)
: Actor(renderer, 1), numSwitches(numSwitches), rects(numSwitches + 2),
  value(0), output(output)
{
    leftImage  = IMG_LoadTexture(renderer, "assets/dip_l.png");
    rightImage = IMG_LoadTexture(renderer, "assets/dip_r.png");
    offImage   = IMG_LoadTexture(renderer, "assets/dip_0.png");
    onImage    = IMG_LoadTexture(renderer, "assets/dip_1.png");

    int width, height;
    SDL_QueryTexture(leftImage, NULL, NULL, &width, &height);

    for (int i = 0; i < numSwitches+2; i++) {
        rects[i].x = pos.x + (numSwitches+1-i)*(width);
        rects[i].y = pos.y;
        rects[i].w = width;
        rects[i].h = height;
    }


    label = new Label(renderer, { .x=pos.x, .y=pos.y,
                                  .w=(numSwitches+2)*width,
                                  .h=height },
                      labelText);

    defaultCursor = SDL_GetCursor();
    handCursor = SDL_CreateSystemCursor(SDL_SYSTEM_CURSOR_HAND);
}

bool DipSwitch::handleEvent(SDL_Event *event)
{
    SDL_Point pos;
    switch (event->type) {
    case SDL_MOUSEBUTTONDOWN:
        pos = { .x=event->button.x, .y=event->button.y };
        for (int i = 0; i < numSwitches; i++) {
            if (SDL_PointInRect(&pos, &rects[i+1])) {
                value ^= 1<<i;
                changed = true;
                return true;
            }
        }
        return false;
    case SDL_MOUSEMOTION:
        pos = { .x=event->motion.x, .y=event->motion.y };
        for (int i = 0; i < numSwitches; i++) {
            if (SDL_PointInRect(&pos, &rects[i+1])) {
                if (SDL_GetCursor() != handCursor) {
                    SDL_SetCursor(handCursor);
                }
                return true;
            }
        }
        if (SDL_GetCursor() != defaultCursor) {
            SDL_SetCursor(defaultCursor);
        }
        return false;
    }
    return false;
}

void DipSwitch::tick()
{
    output->drive(this, value);
}

bool DipSwitch::render(int layer)
{
    if (!Actor::render(layer)) return false;
    switch(layer) {
    case 0:
        SDL_RenderCopy(renderer, rightImage,  NULL, &rects[0]);
        for (int i = 0; i < numSwitches; i++) {
            if (value & (1<<i)) {
                SDL_RenderCopy(renderer, onImage,  NULL, &rects[i+1]);
            } else {
                SDL_RenderCopy(renderer, offImage,  NULL, &rects[i+1]);
            }
        }
        SDL_RenderCopy(renderer, leftImage,  NULL, &rects[numSwitches+1]);
        label->render();
        break;
    }
    return true;
}
