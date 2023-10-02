#include "Harl.hpp"

void    Harl::debug(void){
    std::cout << "DEBUG" << std::endl;
};

void    Harl::info(void){
    std::cout << "INFO" << std::endl;
};

void    Harl::warning(void){
    std::cout << "WARNING" << std::endl;
};

void    Harl::error(void){
    std::cout << "ERROR" << std::endl;
};

void    Harl::complain(std::string level){
    (void)level;
    this->debug();
    this->info();
    this->warning();
    this->error();
};
