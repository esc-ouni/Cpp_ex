#include <iostream>
#include <string>

int devide(int var, int var2)
{
    if (var2 == 0)
    {
        throw "Nope !!!";
    }
    else
        return (var/var2);
}

int main(int argc, char const *argv[])
{
    int var;
    int var2;
    while (1)
    {
        std::cin >> var;
        std::cin >> var2;
        try
        {
            devide(var, var2);
        }
        catch (const char* message)
        {
            std::cerr << "Exception caught: " << message << std::endl << std::endl;
            continue ;
        }
        std::cout << var << " Devided by " << var2 << " is " << devide(var, var2) << std::endl << std::endl;
    }
    return 0;
}