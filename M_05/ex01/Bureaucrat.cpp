/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:53:58 by idouni            #+#    #+#             */
/*   Updated: 2023/12/20 15:17:24 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat():_name("Wout"){
    this->_grade = 150;
};

Bureaucrat::Bureaucrat(std::string const _name, unsigned int _grade):_name(_name){
    if (_grade < 1 || _grade > 150){
        if (_grade < 1)
            throw (std::logic_error("Bureaucrat::GradeTooHighException"));
            // HERE THE HIGH EXCEPTION
        else
            throw (std::logic_error("Bureaucrat::GradeTooLowException"));
            // HERE THE LOW EXCEPTION
    }
    else
        this->_grade = _grade;
};

Bureaucrat::Bureaucrat(Bureaucrat const &r_inst):_name(r_inst._name), _grade(r_inst._grade){
};
        
Bureaucrat &Bureaucrat::operator=(Bureaucrat const &r_inst){
    //this->_name = "Const cast";
    this->_grade = r_inst._grade;
    return (*this);
};

Bureaucrat::~Bureaucrat(){
};

void Bureaucrat::incrementGrade(){
    if (this->_grade < 1 || --(this->_grade) < 1)
        throw (std::logic_error("Bureaucrat::GradeTooHighException"));
        // HERE THE HIGH EXCEPTION;
    return;
};

void Bureaucrat::decrementGrade(){
    if (this->_grade > 150 || ++(this->_grade) > 150)
        throw (std::logic_error("Bureaucrat::GradeTooLowException"));
        // HERE THE LOW EXCEPTION;
    return;
};

std::string Bureaucrat::getName() const{
    return(this->_name);
};

unsigned int Bureaucrat::getGrade() const{
    return(this->_grade);
};

std::ostream &operator<<(std::ostream &cout, Bureaucrat const &r_inst){
    cout << r_inst.getName() << ", bureaucrat _grade " << r_inst.getGrade() << std::endl;
    return (cout);
};

void Bureaucrat::signForm(Form &Form){
    bool n = Form.getSignature();
    try{
        Form.beSigned(*this);
        std::cout << this->getName() << " signed " << Form.getName() << std::endl << std::endl;
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    if (n && this->getGrade() <= Form.getWho_could_sign())
        std::cout << this->getName() << " couldn't sign " << Form.getName() <<" because it's already signed !" << std::endl << std::endl;
    else 
        std::cout << this->getName() << " couldn't sign " << Form.getName() <<" because he's not eligible to signe it !" << std::endl << std::endl;
    }
};
