/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:53:58 by idouni            #+#    #+#             */
/*   Updated: 2024/01/14 09:45:51 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat():_name("Wout"){
    this->_grade = 150;
};

Bureaucrat::Bureaucrat(std::string const name, int grade):_name(name){
    if (grade < 1) {
        throw Bureaucrat::GradeTooHighException;
    } else if (grade > 150) {
        throw Bureaucrat::GradeTooLowException;
    }
    else
        this->_grade = grade;
};

Bureaucrat::Bureaucrat(Bureaucrat const &r_inst):_name(r_inst._name), _grade(r_inst._grade){
};
        
Bureaucrat::~Bureaucrat(){
};

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &r_inst){
    this->_grade = r_inst._grade;
    const_cast<std::string&>(this->_name) = r_inst._name;
    return (*this);
};

void Bureaucrat::incrementGrade(){
    if ((this->_grade - 1) < 1)
        throw Bureaucrat::GradeTooHighException;
    --(this->_grade);
    return;
};

void Bureaucrat::decrementGrade(){
    if ((this->_grade + 1) > 150)
        throw Bureaucrat::GradeTooLowException;
    ++(this->_grade);
    return;
};

std::string Bureaucrat::getName() const{
    return(this->_name);
};

int Bureaucrat::getGrade() const{
    return(this->_grade);
};

std::ostream &operator<<(std::ostream &cout, Bureaucrat const &r_inst){
    cout << r_inst.getName() << ", bureaucrat grade " << r_inst.getGrade() << std::endl;
    return (cout);
};

void  Bureaucrat::signForm(Form &Form){
    try {
        Form.beSigned((*this));
        std::cout << this->getName() << " signed " << Form.getName() << std::endl;
    }
    catch (std::exception &e){
        std::cout << this->getName() << " couldn't sign " << Form.getName() << " because " << e.what() << std::endl;
    } 
};
