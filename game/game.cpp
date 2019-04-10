#include "game.h"

Game::Game() :
    gameWindow(new GameWindow("Asteroids", 100, 100, 640, 480, 0))
{

}

void Game::execute()
{
    while (gameWindow->running()) {
        gameWindow->renderGame();

    }
}
