/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:56:26 by idouni            #+#    #+#             */
/*   Updated: 2023/10/20 19:13:46 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

void PhoneBook::ADD(){
    std::system("clear");
    std::cout << "==> Creating A Contact ..." << std::endl;
    std::cout << "Enter Contact's first_name     : ";
    std::getline(std::cin, Contacts[indexx].first_name);
    std::cout << "Enter Contact's last_name      : ";
    std::getline(std::cin, Contacts[indexx].last_name);    
    std::cout << "Enter Contact's nickname       : ";
    std::getline(std::cin, Contacts[indexx].nickname);
    std::cout << "Enter Contact's phone_number   : ";
    std::getline(std::cin, Contacts[indexx].phone_number);
    std::cout << "Enter Contact's darkest_secret : ";
    std::getline(std::cin, Contacts[indexx].darkest_secret);
    if (indexx == 7)
        return ;
    else
        indexx++;
    std::system("clear");
};

void PhoneBook::EXIT(){
    std::system("clear");
    std::exit(0);
};

void PhoneBook::SEARCH(){
    int         num;
    std::string input;

    input.clear();
    std::system("clear");
    std::cout
    << "┏-------------------------------------------┓" << std::endl
    << "|               THE_PHONEBOOK               |" << std::endl
    << "┣----------┳----------┳----------┳----------┫" << std::endl;
    PrintContacts(Contacts);
    std::cout 
    << "┗----------┻----------┻----------┻----------┛" << std::endl
    << "Get Full Info Of The Contact : ";
    std::getline(std::cin, input);
    if (std::cin.eof())
        std::exit(0);


    num = contains_only_nums(input);
    if (num <= 7 && num >= 0)
    {
        std::cout << "The Contact " << num+1 << " Full Infos :" << std::endl
        << "-" << Contacts[num].first_name << std::endl
        << "-" << Contacts[num].last_name << std::endl
        << "-" << Contacts[num].nickname << std::endl
        << "-" << Contacts[num].phone_number << std::endl
        << "-" << Contacts[num].darkest_secret << std::endl;
    }
    else
        SEARCH();
};

std::string TruncatedString(std::string info){
    if (info.length() > 10)
    {
        info.resize(9);
        info.resize(10, '.');
        return info;
    }
    return info;
};

void    PrintContacts(Contact Contacts[]){
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
};

int   contains_only_nums(std::string string){
    if (string.empty())
        return (42);
    for (size_t i = 0; i < string.length(); i++){
        if (string.c_str()[0] == '+')
            continue ;
        if (!isdigit(string.c_str()[i]) || i == 4)
            return (42);
    }
    return (std::atoi(string.c_str()));
};
