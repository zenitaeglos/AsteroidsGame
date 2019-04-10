#include "game.h"

Game::Game(const char *titleGame, int xPosition, int yPosition, int width, int height, int flag) :
    gameWindow(new GameWindow(titleGame, xPosition, yPosition, width, height, flag))
{

}

void Game::execute()
{
    while (gameWindow->running()) {
        gameWindow->renderGame();
        gameWindow->handleEvent();
    }
}
