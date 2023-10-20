/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:56:22 by idouni            #+#    #+#             */
/*   Updated: 2023/10/20 17:56:23 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
