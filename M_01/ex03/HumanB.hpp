#ifndef __HUMAN_B
#define __HUMAN_B

#include "Weapon.hpp"
#include <iostream>

class HumanB
{
    private:
        std::string name;
        Weapon weapon;
    public:
        HumanB(std::string name);
        ~HumanB(void);
        void  setWeapon(Weapon weapon);
        void  attack(void);
};
#endif