/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 19:02:44 by idouni            #+#    #+#             */
/*   Updated: 2023/11/10 14:35:36 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MATERIASOURCE_HPP_
#define __MATERIASOURCE_HPP_

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include <iostream>

class MateriaSource: public IMateriaSource{
    
    public:
        MateriaSource();
        MateriaSource(MateriaSource const &r_inst);
        MateriaSource &operator=(MateriaSource const &r_inst);
        ~MateriaSource();

        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};

MateriaSource::MateriaSource(){
};

MateriaSource::MateriaSource(MateriaSource const &r_inst){
    (void)r_inst;
};

MateriaSource &MateriaSource::operator=(MateriaSource const &r_inst){
    (void)r_inst;
    return (*this);
};

MateriaSource::~MateriaSource(){
};

void MateriaSource::learnMateria(AMateria*){
};

AMateria* MateriaSource::createMateria(std::string const & type){
};

#endif