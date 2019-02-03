//File:   CrazyRandomSword.cpp
//Author: Colton <cjb17e@my.fsu.edu>

#include "CrazyRandomSword.h"

CrazyRandomSword::CrazyRandomSword(): Weapon("Crazy random sword", 0)
{
	srand(time(0));
	hitPoints = rand() % 93 + 7;
}

double CrazyRandomSword::hit(double armor) 
{
    srand(time(0));
    
    double damage = hitPoints - armor +
    (rand() % static_cast<int>(armor / 3 - 2) + 2);
    
    if (damage < 0) 
    {
        return 0;
    }
    
    return damage;
}
