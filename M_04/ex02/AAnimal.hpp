/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:51:52 by idouni            #+#    #+#             */
/*   Updated: 2023/11/09 17:15:34 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_HPP
#define __ANIMAL_HPP

#include <iostream>

class AAnimal{
    protected:
        std::string type;
    public:
        AAnimal();
        AAnimal(AAnimal const &r_inst);
        AAnimal &operator=(AAnimal const &r_inst);
        virtual ~AAnimal();

        std::string getType() const;
        virtual void makeSound() const = 0;
};

#endif