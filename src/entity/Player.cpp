//
// Created by admin on 7/9/2021.
//

#include "Player.h"

#include "../main/main.h"

void Player::updatePos() {
    // Make the player affected by gravity
    this->y += (float)(this->ySpeed*deltaTime);
    this->ySpeed += (float)(0.002*deltaTime);

    // Update the rectangle
    this->rect.x = (int)this->x;
    this->rect.y = (int)this->y;
    this->rect.w = 30;
    this->rect.h = 30;

    // Reset the game if the player goes off the screen
    if(this->y+30 >= 720) {
        this->reset();
    }
    if(this->y <= 0) {
        this->reset();
    }

}

void Player::reset() {
    // Rest the player positions
    this->y = 360;
    this->x = 50;
    this->ySpeed = 0;

    // Rest the pipes
    pipes.clear();
    // Create the pipes
    createPipe(1280);
    createPipe(1880);
}