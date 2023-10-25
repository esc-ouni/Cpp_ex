/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:43:18 by idouni            #+#    #+#             */
/*   Updated: 2023/10/25 21:05:10 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string Name): ClapTrap(Name){
    this->Name = Name;
    this->Hit_Points = 100;
    this->Energy_Points = 50;
    this->Attack_Damage = 20;
    std::cout << "ScavTrap " << this->Name << "\tconstructor called (in ScavTrap way)" << std::endl;
};

ScavTrap::ScavTrap(ScavTrap const &r_inst): ClapTrap(r_inst){
    *this = r_inst;
};

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap " << this->Name << "\tdestructor called (in ScavTrap way)" << std::endl;
};

ScavTrap &ScavTrap::operator=(ScavTrap const &r_inst){
    this->Name = r_inst.Name + "_copy";
    this->Hit_Points = r_inst.Hit_Points;
    this->Energy_Points = r_inst.Energy_Points;
    this->Attack_Damage = r_inst.Attack_Damage;
    return (*this);
};

void ScavTrap::attack(std::string const &target){
    if (this->Energy_Points > 0 && this->Hit_Points)
        this->Energy_Points -= 1;
    else {
        std::cout << "ScavTrap " << this->Name << "\tdoesn't have requirement to get attack (in ScavTrap way)!" << std::endl;
        return ;   
    }
    std::cout << "ScavTrap " << this->Name << "\tattacks " << target << ", causing " << this->Attack_Damage << " points of damage (in ScavTrap way)!" << std::endl;
};

void ScavTrap::guardGate(){
    std::cout << "ScavTrap " << this->Name << "\tis now in Gate keeper mode" << std::endl;
};
