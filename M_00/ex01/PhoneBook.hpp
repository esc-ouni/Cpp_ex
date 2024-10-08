/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:56:29 by idouni            #+#    #+#             */
/*   Updated: 2023/10/22 19:01:56 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PHONE_BOOK_
# define __PHONE_BOOK_

# define WIDTH 10
# include <iostream>
# include <string>
# include "Contact.hpp"

static int indexx = 0;

class PhoneBook{
        Contact Contacts[8];
    public:
        void ADD();
        void SEARCH();
        void EXIT();
};

long int    contains_only_nums(std::string string);
std::string TruncatedString(std::string info);
void        PrintContacts(Contact Contacts[]);
bool        check_if_valid(std::string input);

#endif
