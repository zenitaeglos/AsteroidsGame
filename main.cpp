#include <iostream>
#include "SDL.h"
#include "game/game.h"

using namespace std;



int main() {
    Game* game = new Game();
    game->execute();
    return 0;
}
