/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:37:46 by idouni            #+#    #+#             */
/*   Updated: 2023/10/20 17:37:47 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
    this->p[0] = &Harl::debug;
    this->p[1] = &Harl::info;
    this->p[2] = &Harl::warning;
    this->p[3] = &Harl::error;
    this->p[4] = NULL;
};

Harl::~Harl(void){
};

void Harl::debug(void){
    std::cout << "DEBUG\t'DEBUG MSG'" << std::endl;
};

void Harl::info(void){
    std::cout << "INFO\t'INFO MSG'" << std::endl;
};

void Harl::warning(void){
    std::cout << "WARNING\t'WARNING MSG'" << std::endl;
};

void Harl::error(void){
    std::cout << "ERROR\t'ERROR MSG'" << std::endl;
};

void    Harl::complain(std::string level){
    int n = _check_level(level);

    if (n < 4 && n >= 0)
        (this->*p[n])();
};
