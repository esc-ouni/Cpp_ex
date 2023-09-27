#include "Zombie.hpp"

void f(){system("leaks Newton");}

int main()
{
    Zombie *ptr;
    Zombie Zombie("HOLLS");

    Zombie.announce();
    ptr = newZombie("QWE");
    delete ptr;
    // std::atexit(f);
}
