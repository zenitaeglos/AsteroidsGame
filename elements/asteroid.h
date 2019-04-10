#ifndef ASTEROID_H
#define ASTEROID_H

#include <iostream>
#include "entity.h"

class Asteroid : public Entity
{
public:
    Asteroid();

    virtual string getType();
};

#endif // ASTEROID_H
