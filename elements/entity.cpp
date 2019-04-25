#include "entity.h"

Entity::Entity(Element element, int width, int height) :
    imageElement(IMG_Load(getResource(element))),
    sourceRectangle(new SDL_Rect())
{
    sourceRectangle->w = width;
    sourceRectangle->h = height;
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
        case Image:
            return "Image";
    }
}

const char *Entity::getResource(Entity::Element element)
{
    switch (element) {
        case SpaceShip:
            return "assets/space-shuttle.png";
        case Asteroid:
            return "assets/asteroid.png";
        case Image:
            return "assets/Space-PNG-Pic.png";

    }
}

void Entity::setElement(SDL_Renderer *renderer)
{
    elementTexture = SDL_CreateTextureFromSurface(renderer, imageElement);
}

SDL_Texture* Entity::getElementTexture()
{
    return elementTexture;
}

SDL_Rect *Entity::getSourceRectangle() const
{
    return sourceRectangle;
}
