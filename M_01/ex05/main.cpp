#include "Harl.hpp"

void exit_err(std::string err_msg){
    std::cerr << "==> Err: " + err_msg << std::endl;
}

int   contains_only_nums(std::string string){
    if (string.empty())
        return (exit_err("Not A Valid Num"), -1);

	std::string msg[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	for (int i = 0; i < 4; i++) {
		if (msg[i] == string) {
			return (i);
        }
	}
    return (-1);
}

int main()
{
    Harl Harl;

    Harl.complain("0");
    Harl.complain("DEBUG");
    Harl.complain("DEBUGg");
    Harl.complain("debug");
    Harl.complain("INFO");
    Harl.complain("INF");
    Harl.complain("6");
    Harl.complain("WARNING1");
    Harl.complain("WARNIN");
    Harl.complain("WARNING");
    Harl.complain("ERROR");

    return (0);
}
