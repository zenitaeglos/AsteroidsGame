#ifndef SPACESHIP_H
#define SPACESHIP_H

#include <iostream>
#include "entity.h"

using namespace std;

class SpaceShip : public Entity
{
public:
    SpaceShip();

    virtual string getType();
};

#endif // SPACESHIP_H
