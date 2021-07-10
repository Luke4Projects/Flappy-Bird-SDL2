//
// This is all of the declares for the 'main' package / directory
//

#ifndef FLAPPY_BIRD_MAIN_H
#define FLAPPY_BIRD_MAIN_H

#include <iostream>
#include <vector>
#include "../entity/Pipe.h"

void initSDL();

extern double deltaTime;

extern std::vector<Pipe> pipes;

#endif //FLAPPY_BIRD_MAIN_H
