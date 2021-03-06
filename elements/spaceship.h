#ifndef SPACESHIP_H
#define SPACESHIP_H

#include <iostream>
#include "entity.h"
#ifdef __APPLE__
    #include "SDL.h"
    #include "SDL_image.h"
#elif __linux__
    #include "SDL2/SDL.h"
    #include "SDL2/SDL_image.h"
#endif
#include "behavior/manualmovebehavior.h"
#include "behavior/movebehavior.h"

using namespace std;

class SpaceShip : public Entity
{
public:
    SpaceShip();

    virtual Element getType();


private:
    SDL_Rect* destinationRectangle;
};

#endif // SPACESHIP_H
