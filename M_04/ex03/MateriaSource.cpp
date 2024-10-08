/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 19:02:48 by idouni            #+#    #+#             */
/*   Updated: 2023/11/11 09:23:03 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
    this->idxx = 0;
    for (int i = 0; i < 4; i++){
        this->Learned[i] = NULL;
    }
};

MateriaSource::MateriaSource(MateriaSource const &r_inst){
    this->idxx = r_inst.idxx;
    for (int i = 0; i < 4; i++){
        if (r_inst.Learned[i])
            this->Learned[i] = r_inst.Learned[i]->clone();
        else
            this->Learned[i] = NULL;
    }
};

MateriaSource &MateriaSource::operator=(MateriaSource const &r_inst){
    this->idxx = r_inst.idxx;
    for (int i = 0; i < 4; i++){
        delete this->Learned[i];
        this->Learned[i] = NULL;
    }
    for (int i = 0; i < 4; i++){
        if (r_inst.Learned[i])
            this->Learned[i] = r_inst.Learned[i]->clone();
        else
            this->Learned[i] = NULL;
    }
    return (*this);
};

MateriaSource::~MateriaSource(){
    for (int i = 0; i < 4; i++){
        if (this->Learned[i]){
            delete this->Learned[i];
            this->Learned[i] = NULL;
        }
    }
};

void MateriaSource::learnMateria(AMateria* m){
    if (this->idxx > 3 && m){
        delete m;
        m = NULL;
        return ;
    }
    else if (m){
        this->Learned[idxx] = m;
        this->idxx++;
    }
};

AMateria* MateriaSource::createMateria(std::string const & type){
    for (int i = 0; this->Learned[i] && (i < 4) ; i++){
        if (!type.compare(this->Learned[i]->getType()))
            return (this->Learned[i]->clone());
    }
    return (0);
};
