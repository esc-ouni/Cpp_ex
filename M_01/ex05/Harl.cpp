#include "Harl.hpp"

Harl::~Harl(void){
};

void    Harl::complain(std::string level){
    int n = contains_only_nums(level);

    if (n > 4 || n < 1)
        exit_err("Not A Valid Num");
    // else
    //     this->Func[n - 1];
};
