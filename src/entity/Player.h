//
// Created by admin on 7/9/2021.
//

#ifndef FLAPPY_BIRD_PLAYER_H
#define FLAPPY_BIRD_PLAYER_H

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include "../main/app.h"

class Player {
    public:
        float x,y,ySpeed;
        SDL_Rect rect;
        SDL_Texture* img; // the texture for the player (bird.png)
        Player() {
            x = 50;
            y = 360;
        }
        void updatePos();
        void reset();
};

extern Player player;

#endif //FLAPPY_BIRD_PLAYER_H
