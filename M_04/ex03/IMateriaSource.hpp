/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 19:02:44 by idouni            #+#    #+#             */
/*   Updated: 2023/11/09 19:07:36 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __IMATERIASOURCE_HPP_
#define __IMATERIASOURCE_HPP_

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

class IMateriaSource{
    public:
        virtual ~IMateriaSource() = 0;
        virtual void learnMateria(AMateria*) = 0;
        virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif