/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:53:55 by idouni            #+#    #+#             */
/*   Updated: 2023/11/12 15:29:06 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BUREAUCRAT_HPP_
#define __BUREAUCRAT_HPP_

#include <iostream>

class Bureaucrat{
    private:
        const std::string name;
        unsigned int      grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string const name, unsigned int grade);
        Bureaucrat(Bureaucrat const &r_inst);
        Bureaucrat &operator=(Bureaucrat const &r_inst);
        ~Bureaucrat();

        void         incrementGrade();
        void         decrementGrade();
        std::string  getName() const;
        unsigned int getGrade() const;
};

std::ostream &operator<<(std::ostream &cout, Bureaucrat const &r_inst){
    cout << r_inst.getName() << ", bureaucrat grade " << r_inst.getGrade() << std::endl;
    return (cout);
};

Bureaucrat::Bureaucrat():name("Wout"){
    this->grade = 150;
};

Bureaucrat::Bureaucrat(std::string const name, unsigned int grade):name(name){
    if (grade < 1 || grade > 150){
        // if (grade < 1)
            // HERE THE HIGH EXCEPTION
        // else
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
};

Bureaucrat::~Bureaucrat(){
};

void Bureaucrat::incrementGrade(){
    if (--(this->grade) < 1)
        // HERE THE HIGH EXCEPTION;
    return;
};

void Bureaucrat::decrementGrade(){
    if (++(this->grade) > 150)
        // HERE THE LOW EXCEPTION;
    return;
};

std::string Bureaucrat::getName() const{
    return(this->name);
};

unsigned int Bureaucrat::getGrade() const{
    return(this->grade);
};

#endif