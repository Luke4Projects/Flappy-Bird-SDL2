//
// the main input functions
//

#include <SDL2/SDL.h>
#include "input.h"

void doInput() {
    SDL_Event event;
    while(SDL_PollEvent(&event)) {
        switch(event.type) {
            // Window close event
            case SDL_QUIT:
                exit(0);
                break;
            // Keyboard events
            case SDL_KEYDOWN:
                keyDown();
                break;
        }
    }
}

