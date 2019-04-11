#include "entity.h"

Entity::Entity()
{

}

Entity::~Entity()
{

}

string Entity::getName(Element element) const
{
    switch (element) {
        case SpaceShip:
            return "SpaceShip";
        case Asteroid:
            return "Asteroid";
    }
}
