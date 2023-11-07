/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:51:52 by idouni            #+#    #+#             */
/*   Updated: 2023/11/07 15:26:37 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_HPP
#define __DOG_HPP

#include "Animal.hpp"
#include <iostream>

class Dog : public Animal{
    public:
        Dog();
        Dog(std::string &type);
        Dog(Dog const &r_inst);
        Dog &operator=(Dog const &r_inst);
        ~Dog();

        void makeSound();
};

#endif