#include <iostream>
#include "SDL.h"
#include "game/gamewindow.h"

using namespace std;



int main() {
    GameWindow* gameAsteroids = new GameWindow("Asteroids", 100, 100, 600, 480, 0);


    while (gameAsteroids->running()) {
        gameAsteroids->renderGame();
    }



    return 0;
}
