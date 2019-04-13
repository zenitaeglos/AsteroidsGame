#include "asteroid.h"

Asteroid::Asteroid() :
    Entity (Entity::Asteroid)
{
    setSourceRectangleProperties();
    moveBehavior = new AutomaticMoveBehavior;
}

Entity::Element Asteroid::getType()
{
    return Entity::Asteroid;
}
