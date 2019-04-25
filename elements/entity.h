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

#include "behavior/movebehavior.h"

using namespace std;

class Entity
{
public:
    enum Element {
        SpaceShip,
        Asteroid,
        Image,
    };
    Entity(Element element, int width = 64, int height = 64);
    virtual ~Entity();

    virtual Element getType() = 0;

    string getName(Element element) const;
    const char* getResource(Element element);
    void setElement(SDL_Renderer* renderer);
    SDL_Texture* getElementTexture();
    SDL_Rect* getSourceRectangle() const;
    void setSourceRectangleProperties(int width = 64, int height = 64);


protected:
    SDL_Surface* imageElement;
    SDL_Rect* sourceRectangle;
    SDL_Texture* elementTexture;

    MoveBehavior* moveBehavior;
};

#endif // ENTITY_H
