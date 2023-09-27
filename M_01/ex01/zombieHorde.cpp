#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    if (N > 0 && N <= INT_MAX){
        Zombie *Zombies = new Zombie[N];
        if (Zombies){
            for (int i = 0; i < N; i++){
                Zombies[i].setName(name);
            }
            return (Zombies);
        }
    }
    return (NULL);
}