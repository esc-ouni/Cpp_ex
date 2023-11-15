/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:26:11 by idouni            #+#    #+#             */
/*   Updated: 2023/11/15 14:48:02 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Form::Form():name("Empty.form"), who_could_sign(1), who_should_execute(150){
    this->signature = false;
};

Form::Form(std::string name, unsigned int signer, unsigned int executer):name(name), who_could_sign(signer), who_should_execute(executer){
    this->signature = false;    
};

Form::Form(Form const &r_inst):name(r_inst.getName()), who_could_sign(r_inst.getWho_could_sign()), who_should_execute(r_inst.getWho_should_execute()){
    this->signature = r_inst.signature;
};

Form &Form::operator=(Form const &r_inst){
    (void)r_inst;
    // CONST CAST
    // this->Form(r_inst.getName(), r_inst.getWho_could_sign(), r_inst.getWho_should_execute());
    return (*this);
};

Form::~Form(){
};

std::string  Form::getName() const{
    return (this->name);
};

bool         Form::getSignature() const{
    return (this->signature);
};

unsigned int Form::getWho_could_sign() const{
    return (this->who_could_sign);
};

unsigned int Form::getWho_should_execute() const{
    return (this->who_should_execute);
};

void Form::beSigned(Bureaucrat &Bureaucrat){
    if (Bureaucrat.getGrade() <= this->getWho_could_sign() && !this->getSignature()){
        this->signature = true;
        return ;   
    }
    else if (this->getSignature())
        throw std::logic_error("Form::FormAlreadySigned");
    else
        throw std::logic_error("Form::GradeTooLowException");
};
