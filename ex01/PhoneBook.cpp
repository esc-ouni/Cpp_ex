#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
    PhoneBook   PhoneBook;
    std::string input;

    while (true)
    {
        std::system("clear");
        std::cout << ""
        std::getline(std::cin, input);
        if (!input.compare("EXIT"))
        {
            std::system("clear");
            PhoneBook.EXIT();
        }
        else if (!input.compare("SEARCH"))
        {
            PhoneBook.SEARCH();
            sleep(2);
        }
        
    }
    PhoneBook.EXIT();
    sleep(2);
    return 0;
}
