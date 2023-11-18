#include "objectcreator.hpp"

Unit* ObjectCreator::getObject(int x, int y)
{
    Unit* ret = new Pigeon(x,y);
    return ret;
}