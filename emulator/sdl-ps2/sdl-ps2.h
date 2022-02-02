#ifndef SDL_PS2_H
#define SDL_PS2_H

#include <stdbool.h>
#include <stdint.h>

#define MAX_PS2_CODE_LEN 8

int ps2_encode(int sdl_scancode, bool make, char *out);

#endif  // SDL_PS2_H
