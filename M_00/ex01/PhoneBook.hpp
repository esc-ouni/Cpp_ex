/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:56:29 by idouni            #+#    #+#             */
/*   Updated: 2023/10/20 19:05:34 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PHONE_BOOK_
# define __PHONE_BOOK_

# define WIDTH 10
# include <iostream>
# include <string>
# include "Contact.hpp"

int indexx = 0;

std::string TruncatedString(std::string info)
{
    if (info.length() > 10)
    {
        info.resize(9);
        info.resize(10, '.');
        return info;
    }
    return info;
}


void    PrintContacts(Contact Contacts[])
{
    for (int i = 0; i < 8; i++)
    {
        std::cout
        << "|" 
        << i + 1 << std::setw(WIDTH) << "|" 
        << std::setw(WIDTH) << TruncatedString(Contacts[i].first_name) << "|" 
        << std::setw(WIDTH) << TruncatedString(Contacts[i].last_name)  << "|" 
        << std::setw(WIDTH) << TruncatedString(Contacts[i].nickname) << "|" 
        << std::endl;
    }
}

class PhoneBook
{
        Contact Contacts[8];
    public:
        void ADD();
        void SEARCH();
        void EXIT();
};

int   contains_only_nums(std::string string);

#endif
