/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:55:05 by idouni            #+#    #+#             */
/*   Updated: 2023/11/10 19:13:39 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

void Character::Dropped(AMateria* m){
    if (this->drx < 512 && this->drx >= 0){
        this->Drops[this->drx] = m;
        this->drx++;
    }
    else {
        std::cerr << "==> Waste Of Materials !!!" << std::endl;
        this->~Character();
        std::exit(0);
    }
};

Character::Character(){
    this->name = "Wout";
    idxx = 0;
    drx = 0;
    for (int i = 0; i < 4; i++){
        this->inventory[i] = NULL;
    }
    for (int i = 0; i < 512; i++){
        this->Drops[i] = NULL;
    }
};

Character::Character(std::string name){
    this->name = name;
    idxx = 0;
    drx = 0;
    for (int i = 0; i < 4; i++){
        this->inventory[i] = NULL;
    }
    for (int i = 0; i < 512; i++){
        this->Drops[i] = NULL;
    }
};

Character::Character(Character const &r_inst){
    this->name = r_inst.name;
    this->idxx = r_inst.idxx;;
    this->drx = 0;
    for (int i = 0; i < 4; i++){
        if (r_inst.inventory[i])
            this->inventory[i] = r_inst.inventory[i]->clone();
        else
            this->inventory[i] = NULL;
    }
};

Character &Character::operator=(Character const &r_inst){
    this->name = r_inst.name;
    this->idxx = r_inst.idxx;
    this->drx = 0;;
    for (int i = 0; i < 4; i++){
        delete this->inventory[i];
        this->inventory[i] = NULL;
    }
    for (int i = 0; i < 4; i++){
        if (r_inst.inventory[i])
            this->inventory[i] = r_inst.inventory[i]->clone();
        else
            this->inventory[i] = NULL;
    }
    return (*this);
};

Character::~Character(){
    for (int i = 0; i < 4; i++){
        if ( this->inventory[i]){
            delete this->inventory[i];
            this->inventory[i] = NULL;
        }
    }
    for (int i = 0; Drops[i] && (i < 512); i++){
        if ( this->Drops[i]){
            delete this->Drops[i];
            this->Drops[i] = NULL;
        }
    }
};

std::string const &Character::getName() const{
    return (this->name);
};

void Character::equip(AMateria* m){
    if (this->idxx == 4)
        return ;
    this->inventory[this->idxx] = m;
    this->idxx++;
};

void Character::unequip(int idx){
    if (idx < 0 || idx > 3)
        return ;
    // this->Drops[this->drx] = this->inventory[idx];
    this->Dropped(this->inventory[idx]);
    this->inventory[idx] = NULL;
    if (!idx)
        return ;
    this->idxx--;
};

void Character::use(int idx, ICharacter& target){
    if (idx < 0 || idx > 3){
        std::cerr << "Err: invalid slot index !" << std::endl;
        return ;
    }
    if (this->inventory[idx]){
        this->inventory[idx]->use(target);
    }
    else
        std::cout << "Empty Inventory slot !" << std::endl;
};