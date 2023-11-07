/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:51:52 by idouni            #+#    #+#             */
/*   Updated: 2023/11/07 12:24:16 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_HPP
#define __ANIMAL_HPP

#include <iostream>

class Animal{
    protected:
        std::string type;
    public:
    Animal();
    Animal(std::string const &type);
    Animal(std::string &r_inst);
    Animal &operator=(Animal const &r_inst);
    ~Animal();

    getType();
    setType();
    void makeSound();
};

#endif