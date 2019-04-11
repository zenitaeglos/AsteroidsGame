#include "asteroid.h"

Asteroid::Asteroid() :
    Entity (Entity::Asteroid)
{

}

Entity::Element Asteroid::getType()
{
    return Entity::Asteroid;
}
