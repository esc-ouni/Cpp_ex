#include "Harl.hpp"

Harl::Harl(void){
    Func[0] = &Harl::debug;
    Func[1] = &Harl::info;
    Func[2] = &Harl::warning;
    Func[3] = &Harl::error;
};

Harl::~Harl(void){
};

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
    int n = contains_only_nums(level);

    if (n > 4 || n < 1)
        exit_err("Not A Valid Num");
    // else
    //     this->Func[n - 1];
};
