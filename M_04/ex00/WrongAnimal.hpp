/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:51:52 by idouni            #+#    #+#             */
/*   Updated: 2023/11/08 19:22:50 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONG_ANIMAL_HPP
#define __WRONG_ANIMAL_HPP

#include <iostream>

class WrongAnimal{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(std::string type);
        WrongAnimal(WrongAnimal const &r_inst);
        WrongAnimal &operator=(WrongAnimal const &r_inst);
        ~WrongAnimal();

        std::string getType() const;
        void makeSound() const;
};

#endif