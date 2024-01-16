/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:26:11 by idouni            #+#    #+#             */
/*   Updated: 2023/11/16 12:31:13 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

AForm::AForm():_name("Empty.form"), who_could_sign(1), who_should_execute(150){
    this->signature = false;
};

AForm::AForm(std::string _name, unsigned int signer, unsigned int executer):_name(_name), who_could_sign(signer), who_should_execute(executer){
    this->signature = false;    
};

AForm::AForm(AForm const &r_inst):_name(r_inst.getName()), who_could_sign(r_inst.getWho_could_sign()), who_should_execute(r_inst.getWho_should_execute()){
    this->signature = r_inst.signature;
};

AForm &AForm::operator=(AForm const &r_inst){
    const_cast<std::string&>(this->_name) = r_inst.getName();
    this->signature = r_inst.getSignature();
    const_cast<unsigned int &>(this->who_could_sign) = r_inst.getWho_could_sign();
    const_cast<unsigned int &>(this->who_should_execute) = r_inst.getWho_should_execute();
    return (*this);
};

AForm::~AForm(){
};

std::string  AForm::getName() const{
    return (this->_name);
};

bool         AForm::getSignature() const{
    return (this->signature);
};

unsigned int AForm::getWho_could_sign() const{
    return (this->who_could_sign);
};

unsigned int AForm::getWho_should_execute() const{
    return (this->who_should_execute);
};

void AForm::beSigned(Bureaucrat &Bureaucrat){
    if (Bureaucrat.getGrade() <= this->getWho_could_sign() && !this->getSignature()){
        this->signature = true;
        return ;   
    }
    else if (Bureaucrat.getGrade() > this->getWho_could_sign())
        throw std::logic_error("AForm::GradeTooLowException");
    else if(this->getSignature())
        throw std::logic_error("AForm::FormAlreadySigned");
    else
        throw std::logic_error("AForm::....");
};

std::ostream &operator<<(std::ostream &cout, AForm &AForm){
    cout << std::endl << "==> AForm info:" << std::endl
         << "AForm's _name        : " << AForm.getName() << std::endl
         << "AForm signed        : " << std::boolalpha << AForm.getSignature() << std::endl
         << "Should executed by : " << AForm.getWho_should_execute() << std::endl
         << "Who Could sign it  : " << AForm.getWho_could_sign()  << std::endl << std::endl;
    return (cout);
};
