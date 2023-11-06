/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 21:23:49 by idouni            #+#    #+#             */
/*   Updated: 2023/11/06 16:56:41 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(){
    this->Name = "Without_clap_name";
    this->Hit_Points = FragTrap::Hit_Points;
    this->Energy_Points = ScavTrap::Energy_Points;
    this->Attack_Damage = FragTrap::Attack_Damage;
    std::cout << "DaimondTrap\tDefault constructor called" << std::endl;
};

DiamondTrap::DiamondTrap(std::string Name){
    this->Name = Name;
    this->ClapTrap::Name = Name + "_clap_name";
    this->Hit_Points = FragTrap::Hit_Points;
    this->Energy_Points = ScavTrap::Energy_Points;
    this->Attack_Damage = FragTrap::Attack_Damage;
    std::cout << "DaimondTrap " << this->Name << "\tconstructor called" << std::endl;
};

DiamondTrap::DiamondTrap(DiamondTrap const &r_inst){
    *this = r_inst;
};

DiamondTrap::~DiamondTrap(){
    std::cout << "DaimondTrap " << this->Name << "\tdestructor called" << std::endl;
};

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &r_inst){
    this->Name = r_inst.Name;
    this->Hit_Points = r_inst.Hit_Points;
    this->Energy_Points = r_inst.Energy_Points;
    this->Attack_Damage = r_inst.Attack_Damage;
    return (*this);
};

void DiamondTrap::attack(std::string const &target){
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(){
    std::cout << "My name is " << this->Name << std::endl;
};
