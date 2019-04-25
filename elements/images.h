#ifndef IMAGES_H
#define IMAGES_H

#include <iostream>
#include "entity.h"
#ifdef __APPLE__
    #include "SDL.h"
    #include "SDL_image.h"
#elif __linux__
    #include "SDL2/SDL.h"
    #include "SDL2/SDL_image.h"
#endif

using namespace std;

class Images: public Entity
{
public:
    Images(int width, int height);

    virtual Element getType();

private:
    SDL_Rect* destinationRectangle;
};

#endif // IMAGES_H
