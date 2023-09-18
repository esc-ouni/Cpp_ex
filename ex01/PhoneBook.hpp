#ifndef __PHONE_BOOK_
# define __PHONE_BOOK_
# define WIDTH 11
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
            std::cout << "Enter Contact's first_name :";
            std::getline(std::cin, Contacts[indexx].first_name);
            std::cout << "Enter Contact's last_name  :";
            std::getline(std::cin, Contacts[indexx].last_name);    
            std::cout << "Enter Contact's nickname   :";
            std::getline(std::cin, Contacts[indexx].nickname);
            if (indexx == 7)
                return ;
            else
                indexx++;
        };
        void SEARCH()
        {
            std::cout << "┏-------------------------------------------┓" << std::endl;
            std::cout << "┣----------┳----------┳----------┳----------┫" << std::endl;
            std::cout << "|" << std::setw(WIDTH) << "|" << std::setw(WIDTH) << "|" << std::setw(WIDTH) << "|" << std::setw(WIDTH) << "|" << std::endl;
            std::cout << "┗----------┻----------┻----------┻----------┛" << std::endl;
        };
        void EXIT()
        {
            std::system("clear");
            std::exit(0);
        };
};

#endif
