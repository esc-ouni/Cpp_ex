#include "Harl.hpp"

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

void    func(void){
    std::cout << "Hola Morpho Loco!" << std::endl;
}

void    PP(void){
    std::cout << "Hola Morpho Laca!" << std::endl;
}

void    KK(void){
    std::cout << "Hola Morpho bara!" << std::endl;
}

int main()
{

    MyPtr *Fptr = new MyPtr[4];

    Fptr[0] = &func;
    Fptr[1] = &PP;
    Fptr[2] = &KK;
    Fptr[3] = NULL;

    for (int i = 0; i < 5; i++)
    {
        if (Fptr[i])
            Fptr[i]();
        else
            break ;
    }
    return (0);
}
