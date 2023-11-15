/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:53:58 by idouni            #+#    #+#             */
/*   Updated: 2023/11/15 14:48:12 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat():name("Wout"){
    this->grade = 150;
};

Bureaucrat::Bureaucrat(std::string const name, unsigned int grade):name(name){
    if (grade < 1 || grade > 150){
        if (grade < 1)
            throw (std::logic_error("Bureaucrat::GradeTooHighException"));
            // HERE THE HIGH EXCEPTION
        else
            throw ("Bureaucrat::GradeTooLowException");
            // HERE THE LOW EXCEPTION
    }
    else
        this->grade = grade;
};

Bureaucrat::Bureaucrat(Bureaucrat const &r_inst):name(r_inst.name), grade(r_inst.grade){
};
        
Bureaucrat &Bureaucrat::operator=(Bureaucrat const &r_inst){
    //this->name = "Const cast";
    this->grade = r_inst.grade;
    return (*this);
};

Bureaucrat::~Bureaucrat(){
};

void Bureaucrat::incrementGrade(){
    if (this->grade < 1 || --(this->grade) < 1)
        throw (std::logic_error("Bureaucrat::GradeTooHighException"));
        // HERE THE HIGH EXCEPTION;
    return;
};

void Bureaucrat::decrementGrade(){
    if (this->grade > 150 || ++(this->grade) > 150)
        throw (std::logic_error("Bureaucrat::GradeTooLowException"));
        // HERE THE LOW EXCEPTION;
    return;
};

std::string Bureaucrat::getName() const{
    return(this->name);
};

unsigned int Bureaucrat::getGrade() const{
    return(this->grade);
};

std::ostream &operator<<(std::ostream &cout, Bureaucrat const &r_inst){
    cout << r_inst.getName() << ", bureaucrat grade " << r_inst.getGrade() << std::endl;
    return (cout);
};

void Bureaucrat::signForm(Form &Form){
    try{
        Form.beSigned(*this);
        std::cout << this->getName() << " signed " << Form.getName() << std::endl;
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    if (Form.getSignature())
        std::cout << this->getName() << "couldn't sign " << Form.getName() <<" because it's already signed !" << std::endl;
    else
        std::cout << this->getName() << "couldn't sign " << Form.getName() <<" because he's not eligible to signe it !" << std::endl;
};
