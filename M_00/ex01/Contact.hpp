/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:56:22 by idouni            #+#    #+#             */
/*   Updated: 2023/10/22 11:21:34 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONTACT_
# define __CONTACT_

# include <iostream>
# include <iomanip>
# include <string>
# include "PhoneBook.hpp"

class Contact{
        std::string  first_name;
        std::string  last_name;
        std::string  nickname;
        std::string  phone_number;
        std::string  darkest_secret;
    public:
        void         set_first_name(std::string first_name);
        void         set_last_name(std::string last_name);
        void         set_nickname(std::string nickname);
        void         set_phone_number(std::string phone_number);
        void         set_darkest_secret(std::string darkest_secret);
        std::string  get_first_name();
        std::string  get_last_name();
        std::string  get_nickname();
        std::string  get_phone_number();
        std::string  get_darkest_secret();
};

#endif
