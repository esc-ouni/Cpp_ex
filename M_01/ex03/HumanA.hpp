#ifndef __HUMAN_A
#define __HUMAN_A

#include "Weapon.hpp"
#include <iostream>

class HumanA
{
    private:
        std::string name;
        Weapon weapon;
    public:
        HumanA(std::string name, Weapon weapon);
        ~HumanA(void);
        void  attack(void);
};

#endif