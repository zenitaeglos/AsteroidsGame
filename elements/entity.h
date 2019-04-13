#ifndef ENTITY_H
#define ENTITY_H

#include <iostream>

#ifdef __APPLE__
    #include "SDL.h"
    #include "SDL_image.h"
#elif __linux__
    #include "SDL2/SDL.h"
    #include "SDL2/SDL_image.h"
#endif

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
    void setElement(SDL_Renderer* renderer);
    SDL_Texture* getElementTexture();
    SDL_Rect* getSourceRectangle() const;
    void setSourceRectangleProperties();


protected:
    SDL_Surface* imageElement;
    SDL_Rect* sourceRectangle;
    SDL_Texture* elementTexture;
};

#endif // ENTITY_H
