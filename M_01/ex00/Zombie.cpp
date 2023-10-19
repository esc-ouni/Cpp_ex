/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:43:34 by idouni            #+#    #+#             */
/*   Updated: 2023/10/19 14:54:14 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name):name(name){}; 

Zombie::~Zombie(){
    std::cout << "~" << this->name << "\tDestroyed" << std::endl;
};

void    Zombie::announce( void ){
    std::cout << this->name << "\t: BraiiiiiiinnnzzzZ..." << std::endl;
}
