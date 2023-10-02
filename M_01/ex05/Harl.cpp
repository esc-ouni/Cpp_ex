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
    int n;

    n = contains_only_nums(level);
    std::cout << n << std::endl;
    if (n > 4 || n < 1)
        exit_err("Not A Valid Num");
    this->debug();
    this->info();
    this->warning();
    this->error();
};
