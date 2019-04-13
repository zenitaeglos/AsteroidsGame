#ifndef AUTOMATICMOVEBEHAVIOR_H
#define AUTOMATICMOVEBEHAVIOR_H

#include <iostream>
#include "movebehavior.h"

using namespace std;



class AutomaticMoveBehavior : public MoveBehavior
{
public:
    AutomaticMoveBehavior();
    virtual ~AutomaticMoveBehavior();

    virtual MoveBehavior::Move getType();
};

#endif // AUTOMATICMOVEBEHAVIOR_H
