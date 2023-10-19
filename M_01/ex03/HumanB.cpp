/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:17:32 by idouni            #+#    #+#             */
/*   Updated: 2023/10/19 16:44:58 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name){
    this->name = name;
    this->weapon = NULL;
};

HumanB::~HumanB(void){
    std::cout << this->name << "\tDestructor Called" << std::endl;
};

void HumanB::attack(void){
    if (this->weapon)
        std::cout << this->name << "\tattacks with their " << this->weapon->getType() << std::endl;
    else
        std::cout << this->name << "\tdeosn't have a weapon to attack with" << std::endl;
};

void  HumanB::setWeapon(Weapon &weapon){
    this->weapon = &weapon;
};
