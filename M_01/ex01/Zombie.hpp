/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 16:08:29 by idouni            #+#    #+#             */
/*   Updated: 2023/10/19 16:08:30 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_
#define __ZOMBIE_

#include <iostream>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie(void);
        Zombie(std::string name);
        ~Zombie(void);
        void announce(void);
        void getName(void);
        void setName(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif