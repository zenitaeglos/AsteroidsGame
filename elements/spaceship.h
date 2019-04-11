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
    void setSourceRectangleProperties();
    SDL_Rect* getSourceRectange();

    void setSpaceShip(SDL_Renderer* renderer);
    SDL_Texture* getSpaceShipTexture();
private:
    SDL_Texture* spaceShipTexture;
    SDL_Rect* destinationRectangle;
};

#endif // SPACESHIP_H
