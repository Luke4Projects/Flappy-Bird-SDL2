cmake_minimum_required(VERSION 3.19)
project(Flappy_Bird)

set(CMAKE_CXX_STANDARD 14)

include_directories(C:/SDL_MING/include)
link_directories(C:/SDL_MING/lib)

add_executable(Flappy_Bird src/main/main.cpp src/main/main.h src/main/init.cpp src/main/app.h src/input/input.h src/input/MainInput.cpp src/render/render.h src/render/render.cpp src/entity/Player.cpp src/entity/Player.h src/input/keyboardInput.cpp src/entity/Pipe.cpp src/entity/Pipe.h)

target_link_libraries(Flappy_Bird SDL2 SDL2main SDL2_image)