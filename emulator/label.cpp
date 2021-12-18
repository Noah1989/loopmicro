#include "label.hpp"

#include <SDL2/SDL_ttf.h>

Label::Label(SDL_Renderer *renderer, SDL_Rect alignToRect, const char *text)
: renderer(renderer)
{
    SDL_Color color = { 0, 0, 0, 255 };
    TTF_Font *font = TTF_OpenFont("assets/Dosis-Regular.ttf", 12);
    SDL_Surface *surface = TTF_RenderText_Blended(font, text, color);
    labelRect.x = alignToRect.x + (alignToRect.w - surface->w)/2;
    labelRect.y = alignToRect.y +  alignToRect.h;
    labelRect.w = surface->w;
    labelRect.h = surface->h;
    labelImage = SDL_CreateTextureFromSurface(renderer, surface);
    SDL_FreeSurface(surface);
    TTF_CloseFont(font);
}

void Label::render()
{
    SDL_RenderCopy(renderer, labelImage, NULL, &labelRect);
}
