//
// The App object
//

#ifndef FLAPPY_BIRD_APP_H
#define FLAPPY_BIRD_APP_H

#include <SDL2/SDL.h>

struct App {
    SDL_Renderer* renderer;
    SDL_Window* window;
};

extern App app; // the 'app' global variable. This contains SDL's renderer and window object

#endif //FLAPPY_BIRD_APP_H
