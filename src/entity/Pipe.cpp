//
// Pair of pipes
//

#include "Pipe.h"

#include "../main/main.h"
#include "Player.h"

void Pipe::updatePos() {
    // Make the pipe move
    this->x-=(float)(0.5*deltaTime);

    // Set the rectangle X to the correct position
    this->bottomRect.x = (int)this->x;
    this->topRect.x = (int)this->x;

    // Set the size of the rectangle
    this->bottomRect.w = 50;
    this->topRect.w = 50;

    // Set the height of the bottom rectangle
    this->bottomRect.h = 720;

    // Set the Y of the bottom rectangle
    this->bottomRect.y = (int)this->y;

    // Set the Y of the top rect and the height of the top rect
    this->topRect.y = 0;
    this->topRect.h = this->bottomRect.y-100;

    // Make the pipe go on infinitely
    if(this->x+50 < 0) {
        this->x = 1280;
        this->y = rand() % 720;
    }

}

void Pipe::collideWithPlayer() {

    // X axis collision (for both pipes)
    if(this->x + 50 > player.x && this->x < player.x + 30) {


        // Y axis collision for *top* pipe
        if(this->bottomRect.y-100 > player.y && 0 < player.y + 30) {
            player.reset(); // reset the game
        }

        // Y axis collision for *bottom* pipe
        if(this->bottomRect.y + this->bottomRect.h > player.y && this->bottomRect.y < player.y + 30) {
            player.reset(); // reset the game
        }

    }

};

void createPipe(int x) {
    Pipe pipe;
    pipe.x = x;
    pipes.push_back(pipe);
}