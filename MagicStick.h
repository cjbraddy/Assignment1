//File:   MagicStick.h
//Author: Colton <cjb17e@my.fsu.edu>


#include <string>
#include "Weapon.h"

#ifndef MAGICSTICK_H
#define MAGICSTICK_H

/*
 * Defines the behavior of a magic stick (hitpoint = 1, ignores all armor, 
   50% of the time)
 */
class MagicStick : public Weapon 
{
public:

    //Calls Weapon(name, hitpoints) constructor with values Magic stick and 1.0
    MagicStick() : Weapon("Magic stick", 1.0) {}

    virtual ~MagicStick() {};

    virtual double hit(double armor);

};

#endif /* MAGICSTICK_H */

