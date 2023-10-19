/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:17:45 by idouni            #+#    #+#             */
/*   Updated: 2023/10/19 16:17:46 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string    Weapon::getType(void){
    return (this->type);
};

void        Weapon::setType(std::string type){
    this->type = type;
};

Weapon::Weapon(void){
};

Weapon::Weapon(std::string type){
    this->type = type;
};

Weapon::~Weapon(void){
    std::cout << this->type << " Destructor Called" << std::endl;
};