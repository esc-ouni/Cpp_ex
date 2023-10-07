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
    std::cout << "DEBUG" << std::endl;
};

void Harl::info(void){
    std::cout << "INFO" << std::endl;
};

void Harl::warning(void){
    std::cout << "WARNING" << std::endl;
};

void Harl::error(void){
    std::cout << "ERROR" << std::endl;
};

void    Harl::complain(std::string level){
    int n = contains_only_nums(level);

    if (n > 4 || n < 1)
        exit_err("Not A Valid Num");
    else
        (this->*p[n - 1])();
};
