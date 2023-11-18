#include "unit.hpp"
// pigeon implementation will go here.


// in project implementation this draw function should only be in superclass
void Unit::draw()
{
    if (frame == 0)
        srcRect = imgTwo;
    else if (frame == 1)
        srcRect = imgThree;
    else
    {
        srcRect = imgOne;
        frame = -1;
    }
    frame += 1;
    SDL_RenderCopy(Drawing::gRenderer, Drawing::assets, &srcRect, &moverRect);
}

Unit::Unit(SDL_Rect one, SDL_Rect two, SDL_Rect three, SDL_Rect mover)
{
    imgOne = one;
    imgTwo = two;
    imgThree = three;
    srcRect = imgOne; 
    moverRect=mover;
}

void Unit::fly()
{
    
}


