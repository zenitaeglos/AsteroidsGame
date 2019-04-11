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
