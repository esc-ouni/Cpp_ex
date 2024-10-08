/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:56:26 by idouni            #+#    #+#             */
/*   Updated: 2023/10/25 21:29:34 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.hpp"
#include "PhoneBook.hpp"

void PhoneBook::ADD(){
    std::string input;
    
    input.clear();
    std::system("clear");
    std::cout << "==> Creating A Contact ...\n" << std::endl;
    get_fname:   
    std::cout << "Enter Contact's first_name     : ";
    std::getline(std::cin, input);
    if (std::cin.eof())
        PhoneBook::EXIT();
    if (!check_if_valid(input)){
        input.clear();
        std::cout << "==> NOT A VALID ENTRY!\n" << std::endl;
        goto get_fname;
    }
    Contacts[indexx].set_first_name(input);
    input.clear();

    get_lname:   
    std::cout << "Enter Contact's last_name      : ";
    std::getline(std::cin, input);
    if (std::cin.eof())
        PhoneBook::EXIT();
    if (!check_if_valid(input)){
        input.clear();
        std::cout << "==> NOT A VALID ENTRY!\n" << std::endl;
        goto get_lname;
    }
    Contacts[indexx].set_last_name(input);
    input.clear();
    
    get_nick:  
    std::cout << "Enter Contact's nickname       : ";
    std::getline(std::cin, input);
    if (std::cin.eof())
        PhoneBook::EXIT();
    if (!check_if_valid(input)){
        input.clear();
        std::cout << "==> NOT A VALID ENTRY!\n" << std::endl;
        goto get_nick;
    }
    Contacts[indexx].set_nickname(input);
    input.clear();
    
    
    get_num:
    std::cout << "Enter Contact's phone_number   : ";
    std::getline(std::cin, input);
    if (std::cin.eof())
        PhoneBook::EXIT();
    if (contains_only_nums(input) == -1 ){
        input.clear();
        std::cout << "==> NOT A VALID PHONE NUMBER!\n" << std::endl;
        goto get_num;
    }
    Contacts[indexx].set_phone_number(input);
    input.clear();

    
    get_darks:
    std::cout << "Enter Contact's darkest_secret : ";
    std::getline(std::cin, input);
    if (std::cin.eof())
        PhoneBook::EXIT();
    if (!check_if_valid(input)){
        input.clear();
        std::cout << "==> NOT A VALID ENTRY!\n" << std::endl;
        goto get_darks;
    }
    Contacts[indexx].set_darkest_secret(input);
    input.clear();

    
    if (indexx == 7)
        indexx = 0;
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
    if (num <= 8 && num > 0){
        std::cout << "The Contact " << num << " Full Infos :" << std::endl
        << "- " << Contacts[num - 1].get_first_name() << std::endl
        << "- " << Contacts[num - 1].get_last_name() << std::endl
        << "- " << Contacts[num - 1].get_nickname() << std::endl
        << "- " << Contacts[num - 1].get_phone_number() << std::endl
        << "- " << Contacts[num - 1].get_darkest_secret() << std::endl 
        << std::endl;
    }
    else
        SEARCH();
};

std::string TruncatedString(std::string info){
    if (info.length() > 10){
        info.resize(9);
        info.resize(10, '.');
        return info;
    }
    return info;
};

void    PrintContacts(Contact Contacts[]){
    for (int i = 0; i < 8; i++){
        std::cout
        << "|    " 
        << i + 1 << std::setw(WIDTH-4) << "|" 
        << std::setw(WIDTH) << TruncatedString(Contacts[i].get_first_name()) << "|" 
        << std::setw(WIDTH) << TruncatedString(Contacts[i].get_last_name())  << "|" 
        << std::setw(WIDTH) << TruncatedString(Contacts[i].get_nickname()) << "|" 
        << std::endl;
    }
};

long int contains_only_nums(std::string string){
    if (string.empty())
        return (-1);
    for (size_t i = 0; i < string.length(); i++){
        if (string.c_str()[0] == '+')
            continue ;
        if (!isdigit(string.c_str()[i]) || i == 15)
            return (-1);
    }
    return (std::atol(string.c_str()));
};


bool check_if_valid(std::string input){
    if (input.empty())
        return (false);
    for (size_t i = 0; i < input.length(); i++)
        if (isprint(input.c_str()[i]) && !isspace(input.c_str()[i]))
            return (true);
    return (false);
};
