#include <iostream>
#include "HUMania.hpp"

void HUMania::drawObjects()
{
    // call draw functions of all the objects here
    for (Unit* unit: objects)
    {
        unit->draw();
        unit->fly();
    }
    
}


// creates new objects 
void HUMania::createObject(int x, int y)
{
    std::cout << "Mouse clicked at: " << x << " -- " << y << std::endl;
    Unit* p1 = creator.getObject(x,y);
    objects.push_back(p1);
}
