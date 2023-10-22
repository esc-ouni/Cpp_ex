/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:56:26 by idouni            #+#    #+#             */
/*   Updated: 2023/10/22 17:59:41 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.hpp"
#include "PhoneBook.hpp"

int main(){
    PhoneBook   PhoneBk;
    std::string input;

    std::system("clear");
    std::cout << "==> Welcome To The PhoneBook" << std::endl;
    while (true){
        input.clear();
        std::cout << "Enter A Command : " ;
        std::getline(std::cin, input);
        if (std::cin.eof())
            break ;
        if (!input.compare("EXIT"))
            PhoneBk.EXIT();
        else if (!input.compare("ADD"))
            PhoneBk.ADD();
        else if (!input.compare("SEARCH"))
            PhoneBk.SEARCH();
        else if (!input.empty()){
            std::system("clear");
            std::cout << "==> NOT A VALID COMMAND!" << std::endl;
        }
    }
    PhoneBk.EXIT();
    
    return 0;
}
