/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:17:32 by idouni            #+#    #+#             */
/*   Updated: 2023/10/19 16:17:33 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name){
    this->name = name;
};

HumanB::~HumanB(void){
    std::cout << this->name << " Destructor Called" << std::endl;
};

void HumanB::attack(void){
    std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
};

void  HumanB::setWeapon(Weapon &weapon){
    this->weapon = &weapon;
};
