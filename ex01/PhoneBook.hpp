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
    private:
        // Contact Contacts[8];
    public:
        void ADD()
        {
            // Contacts[indexx]
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
            // std::cout << "|" << std::setw(WIDTH) << "|" << std::setw(WIDTH) << "|" << std::setw(WIDTH) << "|" << std::setw(WIDTH) << "|" << std::endl;
            std::cout << "┗----------┻----------┻----------┻----------┛" << std::endl;
        };
        void EXIT()
        {
            std::system("clear");
            std::exit (0);
        };
};

#endif
