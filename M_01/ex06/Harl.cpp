/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:39:03 by idouni            #+#    #+#             */
/*   Updated: 2023/10/20 17:42:51 by idouni           ###   ########.fr       */
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

    switch (n)
    {
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

void __init(int argc, char *argv[]){
    std::string holder;

    if (argc == 2){
        holder = argv[1];
        if (holder.empty())
            exit_err("Parse part");
        holder.clear();
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
        exit_err("Not A Valid Argument");
    else if (!string.compare(0, 6, "DEBUG")){
        return (DEBUG);
    }
    else if (!string.compare(0, 5, "INFO")){
        return (INFO);
    }
    else if (!string.compare(0, 8, "WARNING")){
        return (WARNING);
    }
    else if (!string.compare(0, 6, "ERROR")){
        return (ERROR);
    }
    else {
        return (42);
    }
    return (42);
}