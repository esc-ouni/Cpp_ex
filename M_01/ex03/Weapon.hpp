#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>

class Weapon
{
    private:
        std::string type;
    public:
        Weapon(/* args */);
        ~Weapon();
        std::string getType(void);
        void        setType(std::string type);
};

Weapon::Weapon(/* args */)
{
}

Weapon::~Weapon()
{
}

#endif