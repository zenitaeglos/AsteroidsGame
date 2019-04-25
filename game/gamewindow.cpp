#include "gamewindow.h"

GameWindow::GameWindow(const char *title, int xPosition, int yPosition, int width, int height, int flags) :
    titleGame(title), xPositionGame(xPosition), yPositionGame(yPosition),
    widthGame(width), heightGame(height), flagGame(flags), isRunning(true),
    spaceShip(new SpaceShip()),
    asteroid(new Asteroid()),
    backgroundImage(new Images(widthGame, heightGame))
{
    if(SDL_Init(SDL_INIT_EVERYTHING) == 0) {
        windowGame = SDL_CreateWindow(titleGame, xPositionGame, yPositionGame,
                                      widthGame, heightGame, 0);

        rendererGame = SDL_CreateRenderer(windowGame, -1, 0);

        if (rendererGame)
            SDL_SetRenderDrawColor(rendererGame, 255, 255, 255, 255);
    }
    else
        isRunning = false;

    spaceShip->setElement(rendererGame);
    asteroid->setElement(rendererGame);
    backgroundImage->setElement(rendererGame);
}

bool GameWindow::running() const
{
    return isRunning;
}

void GameWindow::renderGame()
{
    SDL_RenderClear(rendererGame);
    SDL_RenderCopy(rendererGame, backgroundImage->getElementTexture(), NULL, backgroundImage->getSourceRectangle());
    SDL_RenderCopy(rendererGame, spaceShip->getElementTexture(), NULL, spaceShip->getSourceRectangle());
    SDL_RenderCopy(rendererGame, asteroid->getElementTexture(), NULL, asteroid->getSourceRectangle());
    SDL_RenderPresent(rendererGame);
}

void GameWindow::handleEvent()
{
    SDL_Event event;
    SDL_PollEvent(&event);
    switch (event.type) {
        case SDL_QUIT:
            isRunning = false;
            break;
        default:
            break;
    }
}
