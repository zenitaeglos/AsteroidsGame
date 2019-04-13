#include "automaticmovebehavior.h"

AutomaticMoveBehavior::AutomaticMoveBehavior()
{

}

MoveBehavior::Move AutomaticMoveBehavior::getType() const
{
    return Move::Automatic;
}
