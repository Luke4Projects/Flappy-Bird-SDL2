#include "main.h"
#include "../input/input.h"
#include "../render/render.h"
#include "../entity/Player.h"
#include <ctime>

int WinMain(int argv, char* argc[]) { // I don't know why but MingW64 made me use WinMain() instead of main()

    // Generate a random seed (for the random pipes)
    srand(time(NULL));

    // Initialize SDL
    initSDL();

    // Variables for getting delta time
    Uint64 DELTA_NOW = SDL_GetPerformanceCounter();
    Uint64 DELTA_LAST = 0;

    // Create the pipes
    createPipe(1280);
    createPipe(1880);

    // Load the player's texture
    player.img = IMG_LoadTexture(app.renderer, "../data/bird.png");

    // Game loop
    while(true) {

        // Get delta time
        DELTA_LAST = DELTA_NOW;
        DELTA_NOW = SDL_GetPerformanceCounter();
        deltaTime = (double)((DELTA_NOW - DELTA_LAST)*1000 / (double)SDL_GetPerformanceFrequency() );

        // Update the player
        player.updatePos();

        // Update the pipes
        for(auto & pipe : pipes) {
            pipe.updatePos();
            pipe.collideWithPlayer();
        }

        // User input
        doInput();

        // Render
        prepareRender(); // all drawing code goes in here
        render();
    }

    return 0;
}
