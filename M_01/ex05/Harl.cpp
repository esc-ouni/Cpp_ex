#include "Harl.hpp"

Harl::Harl(void)
{
    this->p[0] = &Harl::debug;
    this->p[1] = &Harl::info;
    this->p[2] = &Harl::warning;
    this->p[3] = &Harl::error;
    this->p[4] = NULL;
};

Harl::~Harl(void){
};

void Harl::debug(void){
    std::cout << "DEBUG MSG" << std::endl;
};

void Harl::info(void){
    std::cout << "INFO MSG" << std::endl;
};

void Harl::warning(void){
    std::cout << "WARNING MSG" << std::endl;
};

void Harl::error(void){
    std::cout << "ERROR MSG" << std::endl;
};

void    Harl::complain(std::string level){
    int n = contains_only_nums(level);

    if (n < 4 && n >= 0)
        (this->*p[n])();
};
