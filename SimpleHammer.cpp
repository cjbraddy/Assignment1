//File:   SimpleHammer.cpp
//Author: Colton <cjb17e@my.fsu.edu>

#include "SimpleHammer.h"

double SimpleHammer::hit(double armor) 
{
    double damage;
    
    if (armor < 30)
        damage = hitPoints;
    else
        damage = hitPoints - armor;
    
    if (damage < 0) 
    {
        return 0;
    }
    return damage;
}
