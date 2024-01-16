/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:26:11 by idouni            #+#    #+#             */
/*   Updated: 2023/11/16 12:31:13 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Form::Form():_name("Empty.form"), _who_could_sign(1), _who_should_execute(150){
    this->_signature = false;
};

Form::Form(std::string _name, int signer, int executer):_name(_name), _who_could_sign(signer), _who_should_execute(executer){
    if (signer < 1 || executer < 1){
        throw Form::GradeTooHighException;
    } else if (signer > 150 || executer > 150){
        throw Form::GradeTooLowException;
    }
    this->_signature = false;
};

Form::Form(Form const &r_inst):_name(r_inst.getName()), _who_could_sign(r_inst.getWho_could_sign()), _who_should_execute(r_inst.getWho_should_execute()){
    this->_signature = r_inst._signature;
};

Form &Form::operator=(Form const &r_inst){
    const_cast<std::string&>(this->_name) = r_inst.getName();
    this->_signature = r_inst.getSignature();
    const_cast<int &>(this->_who_could_sign) = r_inst.getWho_could_sign();
    const_cast<int &>(this->_who_should_execute) = r_inst.getWho_should_execute();
    return (*this);
};

Form::~Form(){
};

std::string  Form::getName() const{
    return (this->_name);
};

bool         Form::getSignature() const{
    return (this->_signature);
};

int Form::getWho_could_sign() const{
    return (this->_who_could_sign);
};

int Form::getWho_should_execute() const{
    return (this->_who_should_execute);
};

void Form::beSigned(Bureaucrat &Bureaucrat){
    if ((Bureaucrat.getGrade() <= this->getWho_could_sign()) && !this->getSignature()){
        this->_signature = true;
    }
    else if (!this->getSignature())
        throw Form::GradeTooLowException;
};

std::ostream &operator<<(std::ostream &cout, Form &Form){
    cout << std::endl << "==> Form's info:" << std::endl
         << "Form's _name        : " << Form.getName() << std::endl
         << "Form signed         : " << std::boolalpha << Form.getSignature() << std::endl
         << "Should executed by  : " << Form.getWho_should_execute() << std::endl
         << "Who Could sign it   : " << Form.getWho_could_sign()  << std::endl << std::endl;
    return (cout);
};
