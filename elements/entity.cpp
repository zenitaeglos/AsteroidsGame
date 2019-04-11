#include "entity.h"

Entity::Entity(Element element) :
    imageElement(IMG_Load(getResource(element))),
    sourceRectangle(new SDL_Rect())
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

const char *Entity::getResource(Entity::Element element)
{
    switch (element) {
        case SpaceShip:
            return "assets/space-shuttle.png";
        case Asteroid:
            return "assets/asteroid.png";
    }
}
