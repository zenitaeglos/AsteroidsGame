#ifndef ASTEROID_H
#define ASTEROID_H

#include <iostream>
#include "entity.h"
#ifdef __APPLE__
    #include "SDL.h"
    #include "SDL_image.h"
#elif __linux__
    #include "SDL2/SDL.h"
    #include "SDL2/SDL_image.h"
#endif

class Asteroid : public Entity
{
public:
    Asteroid();

    virtual Element getType();


private:

};

#endif // ASTEROID_H
