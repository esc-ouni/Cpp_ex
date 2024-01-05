/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 11:55:18 by idouni            #+#    #+#             */
/*   Updated: 2023/12/20 17:22:07 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SHRUBBERY_HPP__
#define __SHRUBBERY_HPP__

#include "AForm.hpp"

class ShrubberyCreationForm: public AForm {
    private:
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string &target);
        ShrubberyCreationForm(ShrubberyCreationForm const &r_inst);
        ShrubberyCreationForm   &operator=(ShrubberyCreationForm const &r_inst);
        ~ShrubberyCreationForm();
};


#endif