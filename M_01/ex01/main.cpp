#include "Zombie.hpp"

int main()
{
    Zombie  *Zombies = zombieHorde(10 ,"HREDD");
    
    for (int i = 0; i < 10; i++)
    {
        Zombies->announce();
        std::cout << Zombies[i].name << std::endl << std::endl;
    }
    
}
