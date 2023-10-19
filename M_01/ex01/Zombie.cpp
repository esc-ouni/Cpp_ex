/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:08:25 by idouni            #+#    #+#             */
/*   Updated: 2023/10/19 16:08:58 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void){
};

Zombie::Zombie(std::string name):name(name){
};

void Zombie::getName(void){
    std::cout << this->name << std::endl;
};

void    Zombie::setName(std::string name){
    this->name = name;
};

Zombie::~Zombie(void){
    std::cout << "~" << this->name << "\tDestroyed" << std::endl;
};

void    Zombie::announce(void){
    std::cout << this->name << "\t: BraiiiiiiinnnzzzZ..." << std::endl;
}