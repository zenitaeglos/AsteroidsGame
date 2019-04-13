#include "manualmovebehavior.h"

ManualMoveBehavior::ManualMoveBehavior()
{

}

ManualMoveBehavior::~ManualMoveBehavior()
{

}

MoveBehavior::Move ManualMoveBehavior::getType()
{
    return Move::Manual;
}
