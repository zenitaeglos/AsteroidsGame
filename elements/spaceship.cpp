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

