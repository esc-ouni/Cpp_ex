#include "Harl.hpp"


void    func(void){
    std::cout << "Hola Morpho Loco!" << std::endl;
}

void exit_err(std::string err_msg){
    std::cerr << "==> Err: " + err_msg << std::endl;
    std::exit(1);
}

int   contains_only_nums(std::string string){
    if (string.empty())
        exit_err("Not A Valid Number");
    for (size_t i = 0; i < string.length(); i++){
        if (!isdigit(string.c_str()[i]))
            exit_err("Not A Valid Number");
    }
    return (std::atoi(string.c_str()));
}
typedef void (*MyPtr)(void);

int main()
{

    MyPtr Fptr = &func;

    Fptr();
    return (0);
}
