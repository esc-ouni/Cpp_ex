#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon){
    this->weapon = &weapon;
    this->name = name;
}

HumanA::~HumanA(void){
    std::cout << this->name << " Destructor Called" << std::endl;
};

void HumanA::attack(void){
    std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}