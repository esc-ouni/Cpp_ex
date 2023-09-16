#ifndef __PHONE_BOOK_
# define __PHONE_BOOK_

# include <iostream>
# include <string>
# include "Contact.hpp"
int index = 0;

class PhoneBook
{
    private:
        Contact Contacts[8];
    public:
        ADD()
        {
            if (index == 7)
            {
                Contacts[7]
            }
        };
        SEARCH()
        {
        };
        EXIT()
        {
            std::system("clear");
            std::exit (0);
        };
};

#endif
