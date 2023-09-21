#ifndef __PHONE_BOOK_
# define __PHONE_BOOK_
# define WIDTH 10
# include <iostream>
# include <string>
# include <unistd.h>
# include "Contact.hpp"

int indexx = 0;

void    PrintContacts(Contact Contacts[])
{
    for (int i = 0; i < 8; i++)
    {
        std::cout
        << "|" 
        << i + 1 << std::setw(WIDTH) << "|" 
        << std::setw(WIDTH) << Contacts[i].first_name << "|" 
        << std::setw(WIDTH) << Contacts[i].last_name  << "|" 
        << std::setw(WIDTH) << Contacts[i].nickname << "|" 
        << std::endl
        << "|          |          |          |          |"
        << std::endl;
    }
}

class PhoneBook
{
        Contact Contacts[8];
    public:
        void ADD()
        {
            std::system("clear");
            std::cout << "Creating A Contact ..." << std::endl;
            std::cout << "Enter Contact's first_name     : ";
            std::getline(std::cin, Contacts[indexx].first_name);
            std::cout << "Enter Contact's last_name      : ";
            std::getline(std::cin, Contacts[indexx].last_name);    
            std::cout << "Enter Contact's nickname       : ";
            std::getline(std::cin, Contacts[indexx].nickname);
            std::cout << "Enter Contact's phone_number   : ";
            std::getline(std::cin, Contacts[indexx].phone_number);
            std::cout << "Enter Contact's darkest_secret : ";
            std::getline(std::cin, Contacts[indexx].darkest_secret);
            if (indexx == 7)
                return ;
            else
                indexx++;
            std::system("clear");
        };
        void SEARCH()
        {
            if (Contacts[0].first_name.length() > 10)
            {
                Contacts[0].first_name.resize(9);
                Contacts[0].first_name.resize(10, '.');
            }
            std::int64_t num;
            std::string input;
            std::system("clear");
            std::cout
            << "┏-------------------------------------------┓" << std::endl
            << "|               THE_PHONEBOOK               |" << std::endl
            << "┣----------┳----------┳----------┳----------┫" << std::endl;
            PrintContacts(Contacts);
            std::cout 
            << "┗----------┻----------┻----------┻----------┛" << std::endl
            << "Get Full Info Of The Contact : ";
            std::getline(std::cin, input);
            if (std::cin.eof())
                std::exit(0);
            num = std::stoi(input) - 1;
            if (num <= 7 && num >= 0)
            {
                std::cout << "The Contact " << num << " Full Infos :" << std::endl
                << "_" << Contacts[num].first_name << std::endl
                << "_" << Contacts[num].last_name << std::endl
                << "_" << Contacts[num].nickname << std::endl
                << "_" << Contacts[num].phone_number << std::endl
                << "_" << Contacts[num].darkest_secret << std::endl;
            }
            else
            {
                // std::cout << "=Re_Enter_A_Valid_Contact_Index==" << std::endl;
                SEARCH();
            }
        };
        void EXIT()
        {
            std::system("clear");
            std::exit(0);
        };
};

#endif
