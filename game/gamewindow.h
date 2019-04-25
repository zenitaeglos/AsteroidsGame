#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <iostream>
#ifdef __APPLE__
    #include "SDL.h"
    #include "SDL_image.h"
#elif __linux__
    #include "SDL2/SDL.h"
    #include "SDL2/SDL_image.h"
#endif
#include "../elements/spaceship.h"
#include "../elements/asteroid.h"
#include "../elements/images.h"

using namespace std;


class GameWindow
{
public:
    GameWindow(const char* title, int xPosition, int yPosition, int width, int height, int flags);

    bool running() const;

    void renderGame();
    void handleEvent();

private:
    const char* titleGame;
    int xPositionGame;
    int yPositionGame;
    int widthGame;
    int heightGame;
    int flagGame;

    bool isRunning;

    SDL_Window* windowGame;
    SDL_Renderer* rendererGame;

    SpaceShip* spaceShip;
    Asteroid* asteroid;
    Images* backgroundImage;

};

#endif // GAMEWINDOW_H
