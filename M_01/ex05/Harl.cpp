#include "Harl.hpp"

Harl::Harl(void){

    // void (*Func[4])() = {&kk, &pp};
    this->F


    // this->fptr = new void *[4];
    // this->fptr[1] = (this->info());
    // this->fptr[2] = (this->warning());
    // this->fptr[3] = (this->error());
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
        // fptr(n);
};
