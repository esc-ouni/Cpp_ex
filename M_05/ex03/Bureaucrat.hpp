/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:53:55 by idouni            #+#    #+#             */
/*   Updated: 2024/01/14 09:46:02 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BUREAUCRAT_HPP_
#define __BUREAUCRAT_HPP_

#include <iostream>
#include <fstream>

class AForm;

class HighGradeException : public std::exception {
    public:
        const char *what() const _NOEXCEPT{
            return "Grade Too High!";
        }
};

class LowGradeException : public std::exception {
    public:
        const char *what() const _NOEXCEPT{
            return "Grade Too Low!";
        }
};

class Bureaucrat{
    private:
        const std::string _name;
        int               _grade;

    public:
        Bureaucrat();
        Bureaucrat(std::string const name, int grade);
        Bureaucrat(Bureaucrat const &r_inst);
        Bureaucrat &operator=(Bureaucrat const &r_inst);
        ~Bureaucrat();

        void                     incrementGrade();
        void                     decrementGrade();
        std::string              getName() const;
        int                      getGrade() const;

        class HighGradeException GradeTooHighException;
        class LowGradeException  GradeTooLowException;

        void                     signForm(AForm &AForm);
        void                     executeForm(AForm const & form);
};

std::ostream &operator<<(std::ostream &cout, Bureaucrat const &r_inst);

#endif