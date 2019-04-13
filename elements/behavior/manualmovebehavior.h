#ifndef MANUALMOVEBEHAVIOR_H
#define MANUALMOVEBEHAVIOR_H

#include <iostream>
#include "movebehavior.h"

using namespace std;

class ManualMoveBehavior : public MoveBehavior
{
public:
    ManualMoveBehavior();
    virtual ~ManualMoveBehavior();
    virtual Move getType();
};

#endif // MANUALMOVEBEHAVIOR_H
