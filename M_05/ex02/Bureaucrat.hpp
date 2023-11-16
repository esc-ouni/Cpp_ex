/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:53:55 by idouni            #+#    #+#             */
/*   Updated: 2023/11/15 14:44:39 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BUREAUCRAT_HPP_
#define __BUREAUCRAT_HPP_

// #include "Form.hpp"
#include <iostream>

class Form;
class Bureaucrat;

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

        void signForm(Form &Form);
};


std::ostream &operator<<(std::ostream &cout, Bureaucrat const &r_inst);

#endif