/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:55:08 by idouni            #+#    #+#             */
/*   Updated: 2023/11/10 12:35:37 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CHARACTER_HPP_
#define __CHARACTER_HPP_

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

class Character: public ICharacter{
    private:
        int         idxx;
        std::string name;
        AMateria    *inventory[4];
        
    public:
        Character();
        Character(std::string name);
        Character(Character const &r_inst);
        Character &operator=(Character const &r_inst);
        
        ~Character();
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

Character::Character(){
    this->name = "Wout";
    idxx = 0;
    for (int i = 0; i < 4; i++){
        this->inventory[i] = NULL;
    }
};

Character::Character(std::string name){
    this->name = name;
    idxx = 0;
    for (int i = 0; i < 4; i++){
        this->inventory[i] = NULL;
    }
};

Character::Character(Character const &r_inst){
    this->inventory 
};

Character &Character::operator=(Character const &r_inst){
};

Character::~Character(){
    for (int i = 0; i < 4; i++){
        if ( this->inventory[i]){
            delete this->inventory[i];
            this->inventory[i] = NULL;
        }
    }
    // delete[] this->inventory;
    // this->inventory = NULL;
};

std::string const &Character::getName() const{
    return (this->name);
};

void Character::equip(AMateria* m){
    if (this->idxx == 4)
        return ;
    this->inventory[this->idxx] = m; //TO CHECK
    this->idxx++;
};

void Character::unequip(int idx){
    if (idx < 0 || idx > 3)
        return ;
    this->inventory[idx] = NULL;
    if (!idx)
        return ;
    this->idxx--;
};

void Character::use(int idx, ICharacter& target){
};


#endif