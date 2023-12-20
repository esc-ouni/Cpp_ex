/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 12:02:21 by idouni            #+#    #+#             */
/*   Updated: 2023/12/20 18:53:04 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():AForm("Wout", 25, 5){
};

PresidentialPardonForm::PresidentialPardonForm(std::string &target):AForm(target, 25, 5){
};

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &r_inst){
};

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm &r_inst){
};

PresidentialPardonForm::~PresidentialPardonForm(){
};
