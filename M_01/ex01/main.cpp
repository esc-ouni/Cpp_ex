#include "Zombie.hpp"

int main()
{
    Zombie  *Zombies = zombieHorde(10 ,"HREDD");
    
    if (Zombies){    
        for (int i = 0; i < 10; i++){
            Zombies[i].announce();
        }
        delete[] Zombies;
    }
    std::system("leaks Zombie");
}
