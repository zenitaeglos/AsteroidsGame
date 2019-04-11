#ifndef SPACESHIP_H
#define SPACESHIP_H

#include <iostream>
#include "entity.h"
#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"


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
