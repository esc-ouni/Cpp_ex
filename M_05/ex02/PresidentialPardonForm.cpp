/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:41:26 by idouni            #+#    #+#             */
/*   Updated: 2023/12/21 14:41:29 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm():AForm("Wout", 25, 5){
    std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
};

PresidentialPardonForm::PresidentialPardonForm(std::string &target):AForm(target, 25, 5){
    std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
};

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &r_inst){
};

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm &r_inst){
};

PresidentialPardonForm::~PresidentialPardonForm(){
};
