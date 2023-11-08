/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:55:26 by idouni            #+#    #+#             */
/*   Updated: 2023/11/08 19:22:50 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(){
    this->type = "WrongCat";
    std::cout << "WrongCat Default Constructor Called" << std::endl;
};

WrongCat::WrongCat(std::string type){
    this->type = type;
    std::cout << "WrongCat Constructor Called" << std::endl;
};

WrongCat::WrongCat(WrongCat const &r_inst){
    *this = r_inst;        
    std::cout << "WrongCat copy Constructor Called" << std::endl;
};

WrongCat &WrongCat::operator=(WrongCat const &r_inst){
    this->type = r_inst.type;
    std::cout << "WrongCat copy assignement Constructor Called" << std::endl;
    return (*this);
};

WrongCat::~WrongCat(){
    std::cout << "WrongCat Destructor Called" << std::endl;
};

void WrongCat::makeSound() const{
    std::cout << "WrongCat Sound" << std::endl;
};
