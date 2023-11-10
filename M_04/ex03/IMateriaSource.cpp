/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 19:02:48 by idouni            #+#    #+#             */
/*   Updated: 2023/11/10 15:47:11 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource(){
};

IMateriaSource::IMateriaSource(IMateriaSource const &r_inst){
    (void)r_inst;
};

IMateriaSource &IMateriaSource::operator=(IMateriaSource const &r_inst){
    (void)r_inst;
    return (*this);
};

IMateriaSource::~IMateriaSource(){
};
