/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:39:03 by idouni            #+#    #+#             */
/*   Updated: 2023/10/31 14:34:21 by idouni           ###   ########.fr       */
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
    std::cout << "[ DEBUG ]" << std::endl
    << "..." << std::endl;
};

void Harl::info(void){
    std::cout << "[ INFO ]" << std::endl
    << "..." << std::endl;
};

void Harl::warning(void){
    std::cout << "[ WARNING ]" << std::endl
    << "..." << std::endl;
};

void Harl::error(void){
    std::cout << "[ ERROR ]" << std::endl
    << "..." << std::endl;
};

void Harl::confusion(void){
    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl
    << "..." << std::endl;
};

void    Harl::complain(std::string level){
    int n = filter(level);

    switch (n){
        case (DEBUG):
            Harl::debug();
            break;
        case (INFO):
            Harl::info();
            break;
        case (WARNING):
            Harl::warning();
            break;
        case (ERROR):
            Harl::error();
            break;
        default:
            Harl::confusion();
            break;
    }
};

void __init(int argc){
    if (argc == 2){
        return ;
        }
    exit_err("Parse part");
}

void exit_err(std::string err_msg){
    std::cerr << "==> Err: " + err_msg << std::endl;
    std::exit(1);
}

int   filter(std::string string){
    if (string.empty())
        return (42);
        
	std::string msg[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	for (int i = 0; i < 4; i++){
		if (msg[i] == string){
			return (i);
        }
	}
    return (42);
}