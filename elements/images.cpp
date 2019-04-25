#include "images.h"

Images::Images(int width, int height) :
    Entity (getType(), width, height)
{

}

Entity::Element Images::getType()
{
    return Image;
}
