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

int main()
{
    Harl Harl;

    Harl.complain("2");

    return (0);
}
