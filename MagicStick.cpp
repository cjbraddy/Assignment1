//File:   MagicStick.cpp
//Author: Colton <cjb17e@my.fsu.edu>

#include "MagicStick.h"
#include <cstdlib>

double MagicStick::hit(double armor) 
{
    double damage;
    int random = rand() % 100 + 1;
    
    if (random < 51)
        damage = hitPoints;
    else
        damage = hitPoints - armor;
    
    if (damage < 0) 
    {
        return 0;
    }
    return damage;
}
