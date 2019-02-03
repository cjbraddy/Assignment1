//File:   CrazyRandomSword.h
//Author: Colton <cjb17e@my.fsu.edu>


#include <string>
#include "Weapon.h"
#include <cstdlib>
#include <cmath>
#include <ctime>

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

/*
 * Defines the behavior of a Crazy random sword (hitpoint = 7-100, ignores 
 random amount of armor points from 2 to 1/3
 */
class CrazyRandomSword : public Weapon 
{
public:

    //Calls Weapon(name, hitpoints) constructor with values Crazy random sword
    //and a random number between 7 and 100
    CrazyRandomSword();

    virtual ~CrazyRandomSword() {};

    virtual double hit(double armor);

};

#endif /* CRAZYRANDOMSWORD_H */

