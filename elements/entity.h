#ifndef ENTITY_H
#define ENTITY_H

#include <iostream>

using namespace std;

class Entity
{
public:
    enum Element {
        SpaceShip,
        Asteroid,
    };
    Entity();
    virtual ~Entity();

    virtual Element getType() = 0;

    string getName(Element element) const;
    const char* getResource(Element element);
};

#endif // ENTITY_H
