#include "asteroid.h"

Asteroid::Asteroid() :
    Entity (Entity::Asteroid)
{
    moveBehavior = new AutomaticMoveBehavior;
}

Entity::Element Asteroid::getType()
{
    return Entity::Asteroid;
}
