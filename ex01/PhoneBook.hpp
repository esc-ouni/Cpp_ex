#ifndef __PHONE_BOOK_
# define __PHONE_BOOK_
# define WIDTH 10
# include <iostream>
# include <string>
# include <unistd.h>
# include "Contact.hpp"

int indexx = 0;

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
            std::int64_t num;
            std::string input;
            std::system("clear");
            std::cout << "┏-------------------------------------------┓" << std::endl;
            std::cout << "|               THE_PHONEBOOK               |" << std::endl;
            std::cout << "┣----------┳----------┳----------┳----------┫" << std::endl;
            std::cout
            << "|" 
            << 1 << std::setw(WIDTH) << "|" 
            << 3 << std::setw(WIDTH) << "|"
            << 5 << std::setw(WIDTH) << "|"
            << 7 << std::setw(WIDTH) << "|"
            << std::endl
            << "|" 
            << std::setw(WIDTH) << Contacts[0].first_name << "|" 
            << std::setw(WIDTH) << Contacts[2].first_name << "|"
            << std::setw(WIDTH) << Contacts[4].first_name << "|"
            << std::setw(WIDTH) << Contacts[6].first_name << "|" 
            << std::endl
            << "|" 
            << std::setw(WIDTH) << Contacts[0].last_name  << "|" 
            << std::setw(WIDTH) << Contacts[2].last_name  << "|"
            << std::setw(WIDTH) << Contacts[4].last_name  << "|"
            << std::setw(WIDTH) << Contacts[6].last_name  << "|" 
            << std::endl
            << "|" 
            << std::setw(WIDTH) << Contacts[0].nickname << "|" 
            << std::setw(WIDTH) << Contacts[2].nickname << "|"
            << std::setw(WIDTH) << Contacts[4].nickname << "|"
            << std::setw(WIDTH) << Contacts[6].nickname << "|" 
            << std::endl
            << "|          |          |          |          |"
            << std::endl
            << "|" 
            << 2 << std::setw(WIDTH) << "|" 
            << 4 << std::setw(WIDTH) << "|"
            << 6 << std::setw(WIDTH) << "|"
            << 8 << std::setw(WIDTH) << "|" 
            << std::endl
            << "|" 
            << std::setw(WIDTH) << Contacts[1].first_name << "|" 
            << std::setw(WIDTH) << Contacts[3].first_name << "|"
            << std::setw(WIDTH) << Contacts[5].first_name << "|"
            << std::setw(WIDTH) << Contacts[7].first_name << "|" 
            << std::endl
            << "|" 
            << std::setw(WIDTH) << Contacts[1].last_name  << "|" 
            << std::setw(WIDTH) << Contacts[3].last_name  << "|"
            << std::setw(WIDTH) << Contacts[5].last_name  << "|"
            << std::setw(WIDTH) << Contacts[7].last_name  << "|" 
            << std::endl
            << "|" 
            << std::setw(WIDTH) << Contacts[1].nickname << "|" 
            << std::setw(WIDTH) << Contacts[3].nickname << "|"
            << std::setw(WIDTH) << Contacts[5].nickname << "|"
            << std::setw(WIDTH) << Contacts[7].nickname << "|" 
            << std::endl
            << "┗----------┻----------┻----------┻----------┛" << std::endl
            << "Get Full Info Of The Contact : ";
            std::getline(std::cin, input);
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
