#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
    PhoneBook   PhoneBk;
    std::string input;

    std::system("clear");
    std::cout << "Welcome To The PhoneBook" << std::endl;
    while (true)
    {
        std::cout << "Enter A Command : " ;
        std::getline(std::cin, input);
        if (!input.compare("EXIT"))
            PhoneBk.EXIT();
        else if (!input.compare("ADD"))
            PhoneBk.ADD();
        else if (!input.compare("SEARCH"))
            PhoneBk.SEARCH();
        else if (!input.size())
            input.clear();
            // continue ;
        else if (!input.empty())
        {
            std::system("clear");
            std::cout << "=Not_A_Valid_Command=" << std::endl;
        }
        else
            std::system("clear");
    }
    PhoneBk.EXIT();
    sleep(2);
    return 0;
}
