//
// Main render file
//

#include "render.h"
#include "../main/app.h"
#include "../entity/Player.h"
#include "../main/main.h"

void prepareRender() { // all drawing code goes in here
    // Fill the background blue
    SDL_SetRenderDrawColor(app.renderer, 90, 130, 255, 255);
    SDL_RenderClear(app.renderer);

    // Draw the player
    SDL_RenderCopy(app.renderer, player.img, NULL, &player.rect);

    // Draw the pipes
    SDL_SetRenderDrawColor(app.renderer, 0, 255, 0, 255); // set the color to green
    for(auto & pipe : pipes) {
        SDL_RenderFillRect(app.renderer, &pipe.bottomRect); // draw the bottom pipe
        SDL_RenderFillRect(app.renderer, &pipe.topRect); // draw the top pipe
    }

}

void render() {
    SDL_RenderPresent(app.renderer);
}

