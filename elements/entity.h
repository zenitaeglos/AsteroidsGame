#ifndef ENTITY_H
#define ENTITY_H

#include <iostream>

using namespace std;

class Entity
{
public:
    Entity();
    virtual ~Entity();

    virtual string getType() = 0;
};

#endif // ENTITY_H
