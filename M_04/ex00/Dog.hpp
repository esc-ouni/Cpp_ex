/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:51:52 by idouni            #+#    #+#             */
/*   Updated: 2023/11/07 12:34:23 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_HPP
#define __DOG_HPP

#include <iostream>

class Dog{
    protected:
        std::string type;
    public:
    Dog();
    Dog(std::string &type);
    Dog(Dog const &r_inst);
    Dog &operator=(Dog const &r_inst);
    ~Dog();

    void makeSound();
    std::string getType();

};


#endif