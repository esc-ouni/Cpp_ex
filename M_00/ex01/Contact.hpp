#ifndef __CONTACT_
# define __CONTACT_

# include <iostream>
# include <iomanip>
# include <string>
# include "PhoneBook.hpp"

class Contact
{
    public:
        std::string  first_name;
        std::string  last_name;
        std::string  nickname;
        std::string  phone_number;
        std::string  darkest_secret;

};

#endif
