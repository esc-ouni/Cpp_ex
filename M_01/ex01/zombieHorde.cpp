#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *Zombies = NULL;
    if (N > 0){
        Zombies = new Zombie[N];
        if (Zombies){
            for (int i = 0; i < N; i++){
                Zombies[i].setName(name);
            }
            return (Zombies);
        }
    }
    return (Zombies);
}