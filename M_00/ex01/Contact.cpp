/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:56:22 by idouni            #+#    #+#             */
/*   Updated: 2023/10/22 11:21:48 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.hpp"
#include "PhoneBook.hpp"

void         Contact::set_first_name(std::string first_name){
    this->first_name.clear();
    this->first_name = first_name;
};

void         Contact::set_last_name(std::string last_name){
    this->last_name.clear();
    this->last_name = last_name;
};

void         Contact::set_nickname(std::string nickname){
    this->nickname.clear();
    this->nickname = nickname;
};

void         Contact::set_phone_number(std::string phone_number){
    this->phone_number.clear();
    this->phone_number = phone_number;
};

void         Contact::set_darkest_secret(std::string darkest_secret){
    this->darkest_secret.clear();
    this->darkest_secret = darkest_secret;
};

std::string  Contact::get_first_name(){
    return (this->first_name);
};

std::string  Contact::get_last_name(){
    return (this->last_name);
};

std::string  Contact::get_nickname(){
    return (this->nickname);
};

std::string  Contact::get_phone_number(){
    return (this->phone_number);
};

std::string  Contact::get_darkest_secret(){
    return (this->darkest_secret);
};

