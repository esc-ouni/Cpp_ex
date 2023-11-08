/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 11:51:52 by idouni            #+#    #+#             */
/*   Updated: 2023/11/08 19:22:50 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONG_CAT_HPP
#define __WRONG_CAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat : public WrongAnimal{
    public:
        WrongCat();
        WrongCat(std::string type);
        WrongCat(WrongCat const &r_inst);
        WrongCat &operator=(WrongCat const &r_inst);
        ~WrongCat();

        void makeSound() const;
};

#endif