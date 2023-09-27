#include "Zombie.hpp"

Zombie::Zombie(){};

Zombie::Zombie(std::string name):name(name){};

Zombie::~Zombie(){
    std::cout << "~" << this->name << "\tDestroyed" << std::endl;
};

void    Zombie::setName( std::string name ){
    this->name = name;
};

void    Zombie::announce( void ){
    std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}
