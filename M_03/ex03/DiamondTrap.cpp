/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 21:23:49 by idouni            #+#    #+#             */
/*   Updated: 2023/11/06 14:53:02 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(){
};

DiamondTrap::DiamondTrap(std::string name){
};

DiamondTrap::DiamondTrap(DiamondTrap const &r_inst){
};

DiamondTrap::~DiamondTrap(){
};

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &r_inst){
};

void DiamondTrap::whoAmI(){
    std::cout << "My name is " << this->_name << std::endl;
};
