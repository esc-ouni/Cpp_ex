#ifndef __ZOMBIE_
#define __ZOMBIE_

#include <iostream>

class Zombie
{
    private:
    public:
        std::string name;
        Zombie();
        Zombie(std::string name);
        ~Zombie();
        void announce( void );
        void setName( std::string name );
};

Zombie* zombieHorde(int N, std::string name);

#endif