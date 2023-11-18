#include<SDL.h>
#include "drawing.hpp"

#pragma once

class Unit
{
protected:
    SDL_Rect imgOne, imgTwo, imgThree, srcRect, moverRect;
    int frame = 0;


public:
    // add the fly function here as well.
    void draw();
    virtual void fly();
    // may add other overloaded constructors here... 
    Unit(SDL_Rect one, SDL_Rect two, SDL_Rect three, SDL_Rect mover);
};

