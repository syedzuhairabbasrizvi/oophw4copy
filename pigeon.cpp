#include "pigeon.hpp"
// pigeon implementation will go here.
#include <iostream>

// in project implementation this draw function should only be in superclass



// fly() is overrided from the superclass
void Pigeon::fly()
{
    moverRect.x += 5;
    if (moverRect.x >= 1000)
        moverRect.x = 0;
}

Pigeon::Pigeon(int x, int y) : Unit({7,88,155,103},{0,237,153,84},{2,361,159,124},{x, y, 50, 50}) {}

