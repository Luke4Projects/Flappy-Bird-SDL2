//
// Pair of pipes
//

#ifndef FLAPPY_BIRD_PIPE_H
#define FLAPPY_BIRD_PIPE_H

#include <SDL2/SDL.h>
#include <cstdlib>

class Pipe {
    public:
        float x,y; // positions
        SDL_Rect bottomRect; // bottom pipe shape
        SDL_Rect topRect; // top pipe shape
        Pipe() {
            this->x = 1200;
            this->y = rand() % 720; // make the pipes random
        }
        void updatePos();
        void collideWithPlayer();
};

void createPipe(int x);


#endif //FLAPPY_BIRD_PIPE_H
