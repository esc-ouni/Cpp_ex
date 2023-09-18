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
//         Contact(std::string first_name,
//         std::string last_name,
//         std::string nickname,
//         std::string phone_number,
//         std::string darkest_secret)
//         {
//             this->first_name = first_name;
//             this->last_name = last_name;
//             this->nickname = nickname;
//             this->phone_number = phone_number;
//             this->darkest_secret = darkest_secret;
        // }
}

#endif
