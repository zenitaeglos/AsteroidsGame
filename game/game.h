#ifndef GAME_H
#define GAME_H
/*
Main game class to create the whole game, adding window, renderer asteroids, spaceships
*/

#include <iostream>
#include "gamewindow.h"


class Game
{
public:
    Game(const char* titleGame, int xPosition, int yPosition, int width, int height, int flag);

    void execute();


private:
    GameWindow* gameWindow;

};

#endif // GAME_H
