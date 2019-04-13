#include "automaticmovebehavior.h"

AutomaticMoveBehavior::AutomaticMoveBehavior()
{

}

AutomaticMoveBehavior::~AutomaticMoveBehavior()
{

}

MoveBehavior::Move AutomaticMoveBehavior::getType()
{
    return Move::Automatic;
}
