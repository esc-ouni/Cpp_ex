#include "Harl.hpp"

void exit_err(std::string err_msg){
    std::cerr << "==> Err: " + err_msg << std::endl;
    // std::exit(1);
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

    // Harl.complain("0");
    // Harl.complain("1");
    // Harl.complain("2");
    // Harl.complain("3");
    // Harl.complain("4");
    // Harl.complain("5");
    // Harl.complain("6");
    // Harl.complain("868");
    // Harl.complain("2+");
    // Harl.complain("+2");
    Harl.complain("-1");

    return (0);
}
