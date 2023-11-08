/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:51:52 by idouni            #+#    #+#             */
/*   Updated: 2023/11/08 19:22:50 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_HPP
#define __CAT_HPP

#include "Animal.hpp"
#include <iostream>

class Cat : public Animal{
    public:
        Cat();
        Cat(std::string type);
        Cat(Cat const &r_inst);
        Cat &operator=(Cat const &r_inst);
        ~Cat();

        void makeSound() const;
};

#endif