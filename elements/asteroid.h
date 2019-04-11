#ifndef ASTEROID_H
#define ASTEROID_H

#include <iostream>
#include "entity.h"

class Asteroid : public Entity
{
public:
    Asteroid();

    virtual Element getType();


private:

};

#endif // ASTEROID_H
