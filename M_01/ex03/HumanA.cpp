/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:17:23 by idouni            #+#    #+#             */
/*   Updated: 2023/10/19 16:45:07 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon){
    this->weapon = &weapon;
    this->name = name;
}

HumanA::~HumanA(void){
    std::cout << this->name << "\tDestructor Called" << std::endl;
};

void HumanA::attack(void){
    std::cout << this->name << "\tattacks with their " << this->weapon->getType() << std::endl;
}