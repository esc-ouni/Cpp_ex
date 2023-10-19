#include "Zombie.hpp"

Zombie::Zombie(void){
};

Zombie::Zombie(std::string name):name(name){
};

void Zombie::getName(void){
    std::cout << this->name << std::endl;
};

void    Zombie::setName(std::string name){
    this->name = name;
};

Zombie::~Zombie(void){
    std::cout << "~" << this->name << "\tDestroyed" << std::endl;
};

void    Zombie::announce(void){
    std::cout << this->name << "\t: BraiiiiiiinnnzzzZ..." << std::endl;
}