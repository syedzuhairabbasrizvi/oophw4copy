#include<SDL.h>
#include "drawing.hpp"
#include "unit.hpp"

#pragma once

class Pigeon : public Unit{

    

public:
    // add the fly function here as well.
    void fly();
    Pigeon(int, int); 
    // may add other overloaded constructors here... 
};
