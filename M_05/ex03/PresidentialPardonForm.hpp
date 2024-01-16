/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonAForm.hpp                         :+:      :+:    :+:   */
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

class PresidentialPardonAForm : public AForm{
    private:
    public:
        PresidentialPardonAForm();
        PresidentialPardonAForm(std::string &target);
        PresidentialPardonAForm(PresidentialPardonAForm &r_inst);
        PresidentialPardonAForm &operator=(PresidentialPardonAForm &r_inst);
        ~PresidentialPardonAForm();

};


#endif