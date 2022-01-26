#include "lcd.hpp"

Lcd::Lcd(SDL_Renderer *renderer, SDL_Point pos,
         Signal *nIorq, Signal *nRd, Signal *nWr, Bus *addr, Bus *data)
: Actor(renderer, 1), nIorq(nIorq), nRd(nRd), nWr(nWr),
  addr(addr), data(data), busy(false)
{
    lcd = vrEmuLcdNew(20, 4, vrEmuLcdCharacterRom::EmuLcdRomA02);
    vrEmuLcdNumPixels(lcd, &width, &height);
    rect = { .x=pos.x, .y=pos.y, .w=9+width*4, .h=9+height*4 };

}

void Lcd::tick()
{
    bool rd = nRd->get_state() == SignalState::Low;
    bool wr = nWr->get_state() == SignalState::Low;
    if (nIorq->get_state() == SignalState::Low
        && (addr->get_value() & 0xf0) == 0x00
        && (rd || wr)) {
        if (busy) return;
        busy = true;
        if (wr) {
            if (addr->get_value() & 0x01) {
                vrEmuLcdWriteByte(lcd, data->get_value());
            } else {
                vrEmuLcdSendCommand(lcd, data->get_value());
            }
        } else {
            if (addr->get_value() & 0x01) {
                data->drive(this, vrEmuLcdReadByte(lcd));
            } else {
                data->drive(this, vrEmuLcdReadAddress(lcd));
            }
        }
        changed = true;
    } else {
        if (busy) {
            busy = false;
            data->release(this);
        }
    }
}

bool Lcd::render(int layer)
{
    if (!Actor::render(layer)) return false;
    switch(layer) {
    case 0:
        vrEmuLcdUpdatePixels(lcd);
        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
        SDL_RenderFillRect(renderer, &rect);
        SDL_SetRenderDrawColor(renderer, 224, 192, 0, 255);
        SDL_Rect pixel = { .w=3, .h=3 };
        for (int y = 0; y < height; y++) {
            for (int x = 0; x < width; x++) {
                if (vrEmuLcdPixelState(lcd, x, y) == 1) {
                    pixel.x = 5 + rect.x + x*4;
                    pixel.y = 5 + rect.y + y*4;
                    SDL_RenderFillRect(renderer, &pixel);
                }
            }
        }
        break;
    }
    return true;
}
