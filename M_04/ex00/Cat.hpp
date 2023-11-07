/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:51:52 by idouni            #+#    #+#             */
/*   Updated: 2023/11/07 12:34:27 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_HPP
#define __CAT_HPP

#include <iostream>

class Cat{
    protected:
        std::string type;
    public:
    Cat();
    Cat(std::string &type);
    Cat(Cat const &r_inst);
    Cat &operator=(Cat const &r_inst);
    ~Cat();

    void makeSound();
    std::string getType();

};

#endif