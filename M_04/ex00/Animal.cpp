/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:55:26 by idouni            #+#    #+#             */
/*   Updated: 2023/11/07 12:08:56 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
    this->type = "";
    std::cout << "Animal Default Constructor Called" << std::endl;
};

Animal::Animal(std::string &type){
    this->type = type;
    std::cout << "Animal Constructor Called" << std::endl;
};

Animal &Animal::operator=(Animal const &r_inst){
    this->type = r_inst.type;
    std::cout << "Animal copy assignement Constructor Called" << std::endl;
};

Animal::Animal(Animal const &r_inst){
    *this = r_inst;        
    std::cout << "Animal copy Constructor Called" << std::endl;
};

Animal::~Animal(){
    std::cout << "Animal Destructor Called" << std::endl;
};
