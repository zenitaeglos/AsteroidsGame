#ifndef ENTITY_H
#define ENTITY_H

#include <iostream>
#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"


using namespace std;

class Entity
{
public:
    enum Element {
        SpaceShip,
        Asteroid,
    };
    Entity(Element element);
    virtual ~Entity();

    virtual Element getType() = 0;

    string getName(Element element) const;
    const char* getResource(Element element);


protected:
    SDL_Surface* imageElement;
    SDL_Rect* sourceRectangle;
};

#endif // ENTITY_H
