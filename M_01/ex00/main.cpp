#include "Zombie.hpp"

int main()
{
    Zombie *ptr;
    Zombie Zombie("HOLLS");

    Zombie.announce();
    ptr = newZombie("QWE");
    delete ptr;
}
