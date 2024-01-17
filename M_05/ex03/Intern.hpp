/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 19:33:07 by idouni            #+#    #+#             */
/*   Updated: 2024/01/05 19:33:08 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __INTERN_HPP_
#define __INTERN_HPP_

#include <iostream>


class AForm;

class Intern{
    private:
    public:
        Intern();
        Intern(Intern const &r_inst);
        Intern &operator=(Intern const &r_inst);
        ~Intern();

        AForm *makeAForm(std::string name, std::string target);
};

#endif