//File:   SimpleHammer.h
//Author: Colton <cjb17e@my.fsu.edu>


#include <string>
#include "Weapon.h"

#ifndef SIMPLEHAMMER_H
#define SIMPLEHAMMER_H

/*
 * Defines the behavior of a simple hammer (hitpoint = 25, ignores armor points
 if armor is less than 30)
 */
class SimpleHammer : public Weapon 
{
public:

    //Calls Weapon(name, hitpoints) constructor with values Simple hammer and 25.0
    SimpleHammer() : Weapon("Simple hammer", 25.0) {}

    virtual ~SimpleHammer() {};

    virtual double hit(double armor);

};

#endif /* SIMPLEHAMMER_H */

