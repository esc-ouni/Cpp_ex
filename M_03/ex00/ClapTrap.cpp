/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 19:06:16 by idouni            #+#    #+#             */
/*   Updated: 2023/11/04 16:40:43 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
    this->Name = "Whitout";
    this->Hit_Points = 10;
    this->Energy_Points = 10;
    this->Attack_Damage = 0;
    std::cout << "ClapTrap " << this->Name << "\tDefault constructor called" << std::endl;
};

ClapTrap::ClapTrap(std::string Name){
    this->Name = Name;
    this->Hit_Points = 10;
    this->Energy_Points = 10;
    this->Attack_Damage = 0;
    std::cout << "ClapTrap " << this->Name << "\tconstructor called" << std::endl;
};

ClapTrap::ClapTrap(ClapTrap const &r_inst){
    *this = r_inst;
};

ClapTrap::~ClapTrap(){
    std::cout << "ClapTrap " << this->Name << "\tdestructor called" << std::endl;
};

ClapTrap &ClapTrap::operator=(ClapTrap const &r_inst){
    this->Name = r_inst.Name + "_copy";
    this->Hit_Points = r_inst.Hit_Points;
    this->Energy_Points = r_inst.Energy_Points;
    this->Attack_Damage = r_inst.Attack_Damage;
    return (*this);
};

void ClapTrap::attack(std::string const &target){
    if (this->Energy_Points > 0 && this->Hit_Points)
        this->Energy_Points -= 1;
    else {
        std::cout << "ClapTrap " << this->Name << "\tdoesn't have requirement to get attack !" << std::endl;
        return ;   
    }
    std::cout << "ClapTrap " << this->Name << "\tattacks " << target << ", causing " << this->Attack_Damage << " points of damage!" << std::endl;
};

void ClapTrap::takeDamage(unsigned int amount){
    if (amount >= this->Hit_Points)
        this->Hit_Points = 0;
    else
        this->Hit_Points -= amount;
    std::cout << "ClapTrap " << this->Name << "\ttakes " << amount << " points of damage !" << std::endl;
};

void ClapTrap::beRepaired(unsigned int amount){
    if (this->Energy_Points > 0 && this->Hit_Points)
        this->Energy_Points -= 1;
    else {
        std::cout << "ClapTrap " << this->Name << "\tdoesn't have requirement to get repaired !" << std::endl;
        return ;   
    }
    this->Hit_Points += amount;
    std::cout << "ClapTrap " << this->Name << "\thas repaired itself !" << std::endl;
};
