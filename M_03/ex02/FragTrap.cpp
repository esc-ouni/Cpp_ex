/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 20:27:16 by idouni            #+#    #+#             */
/*   Updated: 2023/11/06 14:55:33 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(){
    this->Name = "Whitout";
    this->Hit_Points = 100;
    this->Energy_Points = 100;
    this->Attack_Damage = 30;
    std::cout << "FragTrap " << this->Name << "\tDefault constructor called" << std::endl;
};

FragTrap::FragTrap(std::string Name){
    this->Name = Name;
    this->Hit_Points = 100;
    this->Energy_Points = 100;
    this->Attack_Damage = 30;
    std::cout << "FragTrap " << this->Name << "\tConstructor called" << std::endl;
};

FragTrap::FragTrap(FragTrap const &r_inst){
    *this = r_inst;
};

FragTrap::~FragTrap(){
    std::cout << "FragTrap " << this->Name << "\tdestructor called" << std::endl;
};

FragTrap &FragTrap::operator=(FragTrap const &r_inst){
    this->Name = r_inst.Name;
    this->Hit_Points = r_inst.Hit_Points;
    this->Energy_Points = r_inst.Energy_Points;
    this->Attack_Damage = r_inst.Attack_Damage;
    return (*this);
};

void FragTrap::attack(std::string const &target){
    if (this->Energy_Points > 0 && this->Hit_Points)
        this->Energy_Points -= 1;
    else {
        std::cout << "FragTrap " << this->Name << "\tdoesn't have requirement to get attack!" << std::endl;
        return ;   
    }
    std::cout << "FragTrap " << this->Name << "\tattacks " << target << ", causing " << this->Attack_Damage << " points of damage!" << std::endl;
};

void FragTrap::guardGate(){
    std::cout << "FragTrap " << this->Name << "\tis now in Gate keeper mode" << std::endl;
};

void FragTrap::highFivesGuys(void){
    std::cout << "FragTrap " << this->Name << "\tis requesting a positive high five" << std::endl;
};