#include "main.h"

#include "app.h"
#include "../entity/Player.h"

#include <SDL2/SDL_image.h>

App app;
double deltaTime;
Player player;
std::vector<Pipe> pipes;

void initSDL() {

    // window and renderer options
    int windowFlags,rendererFlags;
    windowFlags = 0;
    rendererFlags = SDL_RENDERER_ACCELERATED;

    // init sdl
    if(SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cout<<"init failed. Error: "<<SDL_GetError()<<std::endl;
        exit(1);
    }

    // Create window
    app.window = SDL_CreateWindow("Flappy Bird", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 1280, 720, windowFlags);
    if(!app.window) {
        std::cout<<"window failed. Error: "<<SDL_GetError()<<std::endl;
        exit(1);
    }

    // Create renderer
    app.renderer = SDL_CreateRenderer(app.window, -1, rendererFlags);
    if(!app.renderer) {
        std::cout<<"renderer failed. Error: "<<SDL_GetError()<<std::endl;
        exit(1);
    }

}