#include "spaceship.h"

SpaceShip::SpaceShip() :
    imageSpaceShip(IMG_Load(Entity::getResource(Entity::SpaceShip))),
    sourceRectangle(new SDL_Rect())
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
}

SDL_Rect *SpaceShip::getSourceRectange()
{
    return sourceRectangle;
}

void SpaceShip::setSpaceShip(SDL_Renderer *renderer)
{
    spaceShipTexture = SDL_CreateTextureFromSurface(renderer, imageSpaceShip);
}

SDL_Texture *SpaceShip::getSpaceShipTexture()
{
    return spaceShipTexture;
}
