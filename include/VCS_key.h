#pragma once

#include "SDL3/SDL.h"
#include "SDL3/SDL_scancode.h"

/**
 * Returns an array of bools indexed by scancode, where array[scancode] == true means that key is pressed. The scancodes used are identical to those used by SDL3; reference <a href=https://wiki.libsdl.org/SDL3/SDL_Scancode>The SDL3 page on scancodes</a> for the keys. VCS includes SDL3, so the SDL_Scancode enum is also available.
 * \return An array of bools indexed by scancodes
 */
const bool* VCS_key_states();

/**
 * Query whether a specific key is pressed, using its scancode. The scancodes used are identical to those used by SDL3; reference <a href=https://wiki.libsdl.org/SDL3/SDL_Scancode>The SDL3 page on scancodes</a> for the keys. VCS includes SDL3, so the SDL_Scancode enum is also available.
 * \param[in] scancode The scancode of the key to check
 * \return
 * Returns whether the specified key is pressed as a bool.
 */
int VCS_is_key_pressed(int scancode);
