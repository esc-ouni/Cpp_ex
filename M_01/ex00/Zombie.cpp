#include "Zombie.hpp"

Zombie::Zombie(std::string name):name(name){}; 

Zombie::~Zombie(){
    std::cout << "~" << this->name << "\tDestroyed" << std::endl;
};

void    Zombie::announce( void ){
    std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}
