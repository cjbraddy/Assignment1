//File:   CrazyRandomSword.cpp
//Author: Colton <cjb17e@my.fsu.edu>

#include "CrazyRandomSword.h"
#include <cstdlib>

double CrazyRandomSword::hit(double armor) 
{
    double damage = hitPoints + 
    (rand() % static_cast<int>(armor / 3 - 2) + 2) - armor;
    
    if (damage < 0) 
    {
        return 0;
    }
    return damage;
}
