#include "spaceship.h"

SpaceShip::SpaceShip() :
    Entity (Entity::SpaceShip)
{
    setSourceRectangleProperties();
}

Entity::Element SpaceShip::getType()
{
    return Element::SpaceShip;
}

void SpaceShip::setSourceRectangleProperties()
{
    sourceRectangle->w = 64;
    sourceRectangle->h = 64;
    //set position todo
}

SDL_Rect *SpaceShip::getSourceRectange()
{
    return sourceRectangle;
}

void SpaceShip::setSpaceShip(SDL_Renderer *renderer)
{
    spaceShipTexture = SDL_CreateTextureFromSurface(renderer, imageElement);
}

SDL_Texture *SpaceShip::getSpaceShipTexture()
{
    return spaceShipTexture;
}
