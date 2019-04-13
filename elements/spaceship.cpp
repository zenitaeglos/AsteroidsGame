#include "spaceship.h"

SpaceShip::SpaceShip() :
    Entity (Entity::SpaceShip)
{
    setSourceRectangleProperties();

    //now hardcoded the behavior chosen. Future to chose between ships
    //will give th option to choose between different behaviors
    moveBehavior = new ManualMoveBehavior;
}

Entity::Element SpaceShip::getType()
{
    return Element::SpaceShip;
}

