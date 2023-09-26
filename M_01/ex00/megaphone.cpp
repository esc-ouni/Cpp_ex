#include <iostream>
#include <string>

std::string Upper(char const *l_wor)
{
    std::string u_wor;

    u_wor.clear();
    for (int i = 0; l_wor[i]; i++)
        u_wor += std::toupper(l_wor[i]);
    return (u_wor);    
}

int main(int argc, char const *argv[])
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for (int i = 1; argv[i]; i++)
            std::cout << Upper(argv[i]);
        std::cout << std::endl;
    }    
    return 0;
}
