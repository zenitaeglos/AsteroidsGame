#include "asteroid.h"

Asteroid::Asteroid() :
    Entity (Entity::Asteroid)
{
    setSourceRectangleProperties();
}

Entity::Element Asteroid::getType()
{
    return Entity::Asteroid;
}
