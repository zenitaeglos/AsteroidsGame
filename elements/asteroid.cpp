#include "asteroid.h"

Asteroid::Asteroid() :
    Entity (Entity::Asteroid)
{
    sourceRectangle->x = 100;
    sourceRectangle->y = 100;
    sourceRectangle->w = 64;
    sourceRectangle->h = 64;
}

Entity::Element Asteroid::getType()
{
    return Entity::Asteroid;
}
