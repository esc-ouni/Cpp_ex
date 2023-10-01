#include "Weapon.hpp"

const std::string    Weapon::getType(void){
    return (this->type);
};

void        Weapon::setType(std::string type){
    this->type = type;
};

Weapon::Weapon(void){
};

Weapon::Weapon(std::string type){
    this->type = type;
};

Weapon::~Weapon(void){
    std::cout << this->type << " Destructor Called" << std::endl;
};