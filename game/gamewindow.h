#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <iostream>
#include "SDL2/SDL.h"
#include "../elements/spaceship.h"

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

};

#endif // GAMEWINDOW_H
