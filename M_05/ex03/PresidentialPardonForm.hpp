/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 12:03:26 by idouni            #+#    #+#             */
/*   Updated: 2023/12/20 18:49:36 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PRESIDENTIALPARDON_HPP__
#define __PRESIDENTIALPARDON_HPP__

#include "AForm.hpp"

class PresidentialPardonForm : public AForm{
    private:
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string &target);
        PresidentialPardonForm(PresidentialPardonForm &r_inst);
        PresidentialPardonForm &operator=(PresidentialPardonForm &r_inst);
        ~PresidentialPardonForm();

};


#endif