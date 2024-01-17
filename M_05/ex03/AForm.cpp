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

AForm::AForm(std::string _name, int signer, int executer):_name(_name), _who_could_sign(signer), _who_should_execute(executer){
    if (signer < 1 || executer < 1){
        throw AForm::GradeTooHighException;
    } else if (signer > 150 || executer > 150){
        throw AForm::GradeTooLowException;
    }
    this->_signature = false;
};

AForm::AForm():_name("Empty.form"), _who_could_sign(1), _who_should_execute(150){
    this->_signature = false;
};

AForm::AForm(AForm const &r_inst):_name(r_inst.getName()), _who_could_sign(r_inst.getWho_could_sign()), _who_should_execute(r_inst.getWho_should_execute()){
    this->_signature = r_inst._signature;
};

AForm &AForm::operator=(AForm const &r_inst){
    const_cast<std::string&>(this->_name) = r_inst.getName();
    this->_signature = r_inst.getSignature();
    const_cast<int &>(this->_who_could_sign) = r_inst.getWho_could_sign();
    const_cast<int &>(this->_who_should_execute) = r_inst.getWho_should_execute();
    return (*this);
};

AForm::~AForm(){
};

std::string  AForm::getName() const{
    return (this->_name);
};

bool         AForm::getSignature() const{
    return (this->_signature);
};

int AForm::getWho_could_sign() const{
    return (this->_who_could_sign);
};

int AForm::getWho_should_execute() const{
    return (this->_who_should_execute);
};


void  AForm::setName(std::string name){
    const_cast<std::string&>(this->_name) = name;
};

void  AForm::setSignature(bool signature){
   this->_signature = signature;
};

void  AForm::setWho_could_sign(int signer){
    const_cast<int &>(this->_who_could_sign) = signer;
};

void  AForm::setWho_should_execute(int executer){
    const_cast<int &>(this->_who_should_execute) = executer;
};

void AForm::beSigned(Bureaucrat &Bureaucrat){
    if (this->getSignature())
        throw AForm::AlreadySignedException;
    if ((Bureaucrat.getGrade() <= this->getWho_could_sign()) && !this->getSignature()){
        this->_signature = true;
    }
    else
        throw AForm::GradeTooLowException;
};

std::ostream &operator<<(std::ostream &cout, AForm &AForm){
    cout << std::endl << "==> AForm's info:" << std::endl
         << "AForm's _name        : " << AForm.getName() << std::endl
         << "AForm signed         : " << std::boolalpha << AForm.getSignature() << std::endl
         << "Should executed by  : " << AForm.getWho_should_execute() << std::endl
         << "Who Could sign it   : " << AForm.getWho_could_sign()  << std::endl << std::endl;
    return (cout);
};

void AForm::execute(Bureaucrat const & executor) const{
    if (!this->getSignature())
        throw AForm::NotSignedException;
    else if (!(executor.getGrade() <= this->getWho_should_execute())){
        throw AForm::GradeTooLowException;
    }
    else
        return ;
};
