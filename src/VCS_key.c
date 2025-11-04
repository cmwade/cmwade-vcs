#include "VCS_key.h"
#include "SDL3/SDL.h"

const bool* VCS_key_states() {
  return SDL_GetKeyboardState(NULL);
}

int VCS_is_key_pressed(int scancode) {
  return VCS_key_states()[scancode];
}
