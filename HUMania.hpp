#include<SDL.h>
#include "pigeon.hpp"
#include "bee.hpp"
#include "butterfly.hpp"
#include "objectcreator.hpp"
#include<vector>
#include<list>
#include <iostream>

using namespace std;

class HUMania{

    //Right now we're creating one pigeon, just for practice. for details follow the guidlines 
    ObjectCreator creator;
    list<Unit*> objects;

    //Create your list here
    public:

    
    void drawObjects(); 
    void createObject(int, int);
    
    // create destructor which deletes all dynamic objects
    ~HUMania()
    {
        for (Unit* unit: objects)
            {
                delete unit;
                unit = nullptr;
            }
        std::cout << "deleting doned";
    }
};