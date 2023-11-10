/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:55:05 by idouni            #+#    #+#             */
/*   Updated: 2023/11/10 15:47:27 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter(){
};

ICharacter::ICharacter(ICharacter const &r_inst){
    (void)r_inst;
};

ICharacter &ICharacter::operator=(ICharacter const &r_inst){
    (void)r_inst;
    return (*this);
};

ICharacter::~ICharacter(){
};
