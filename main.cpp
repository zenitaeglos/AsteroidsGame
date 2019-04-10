#include <iostream>
#include "SDL.h"
#include "game/game.h"

using namespace std;



int main() {
    Game* game = new Game("Asteroids", 100, 100, 640, 480, 0);
    game->execute();
    return 0;
}
