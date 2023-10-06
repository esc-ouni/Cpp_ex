#include <iostream>
#include <string>

class Harl
{
private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
    void (Harl::*p[5])(void); // Array of function pointers
public:
    Harl(void);
    ~Harl(void);
    void complain(std::string level);
};

Harl::~Harl(void){
};

Harl::Harl(void)
{
    this->p[0] = &Harl::debug;
    this->p[1] = &Harl::info;
    this->p[2] = &Harl::warning;
    this->p[3] = &Harl::error;
    this->p[4] = nullptr;
}

void Harl::debug(void)
{
    std::cout << "Debug" << std::endl;
}

void Harl::info(void)
{
    std::cout << "Info" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "Warning" << std::endl;
}

void Harl::error(void)
{
    std::cout << "Error" << std::endl;
}

void Harl::complain(std::string level)
{
    if (level == "debug")
        (this->*p[0])();
    else if (level == "info")
        (this->*p[1])();
    else if (level == "warning")
        (this->*p[2])();
    else if (level == "error")
        (this->*p[3])();
    else
        std::cout << "Invalid level" << std::endl;
}

int main()
{
    Harl harl;
    harl.complain("debug");
    harl.complain("info");
    harl.complain("warning");
    harl.complain("error");

    return 0;
}
