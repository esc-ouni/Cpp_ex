#include "Harl.hpp"

void exit_err(std::string err_msg){
    std::cerr << "==> Err: " + err_msg << std::endl;
    std::exit(1);
}

int main()
{
    Harl Harl;

    Harl.complain("1+");
    return (0);
}
