/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 21:23:49 by idouni            #+#    #+#             */
/*   Updated: 2023/10/27 16:00:32 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name){
};

DiamondTrap::DiamondTrap(DiamondTrap const &r_inst){
};

DiamondTrap::~DiamondTrap(){
};

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &r_inst){
};

DiamondTrap::whoAmI(){
    std::cout << "My name is " << this->_name << std::endl;
};
