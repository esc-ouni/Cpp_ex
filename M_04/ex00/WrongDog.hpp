/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:51:52 by idouni            #+#    #+#             */
/*   Updated: 2023/11/09 13:48:27 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONG_DOG_HPP
#define __WRONG_DOG_HPP

#include "WrongAnimal.hpp"
#include <iostream>

class WrongDog : public WrongAnimal{
    public:
        WrongDog();
        WrongDog(WrongDog const &r_inst);
        WrongDog &operator=(WrongDog const &r_inst);
        ~WrongDog();

        void makeSound() const;
};

#endif