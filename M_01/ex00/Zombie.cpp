/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:43:34 by idouni            #+#    #+#             */
/*   Updated: 2023/10/19 14:28:21 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name){
    // if (name.c_str() != NULL)
    //     this->name = name;
    // else
    (void)name;
        this->name = "hello";
}; 

Zombie::~Zombie(){
    // if (!this->name.empty())
    //     std::cout << "~" << this->name << "\tDestroyed" << std::endl;
    // else
        std::cout << "~Instance\tDestroyed" << std::endl;
};

void    Zombie::announce( void ){
    // if (!this->name.empty())
    //     std::cout << this->name << "\t: BraiiiiiiinnnzzzZ..." << std::endl;
    // else
        std::cout << "\t: BraiiiiiiinnnzzzZ..." << std::endl;
}
