#include "manualmovebehavior.h"

ManualMoveBehavior::ManualMoveBehavior()
{

}

MoveBehavior::Move ManualMoveBehavior::getType() const
{
    return Move::Manual;
}
