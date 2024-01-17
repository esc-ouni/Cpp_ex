/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 11:26:07 by idouni            #+#    #+#             */
/*   Updated: 2023/11/16 12:20:16 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FORM_HPP_
#define __FORM_HPP_

#include "Bureaucrat.hpp"

class AlreadySigned: public std::exception{
    public:
        const char *what() const _NOEXCEPT{
            return "Form Already Signed !";
        }
}; 

class FormNotSigned: public std::exception{
    public:
        const char * what() const _NOEXCEPT{
            return "Form Not Signed !";
        }
};


class AForm{
    private:
        const std::string  _name;
        bool               _signature;
        const int          _who_could_sign;
        const int          _who_should_execute;
        
    public:
        AForm();
        AForm(std::string _name, int signer, int executer);
        AForm(AForm const &r_inst);
        AForm &operator=(AForm const &r_inst);
        virtual ~AForm() = 0;
        
        std::string               getName() const;
        bool                      getSignature() const;
        int                       getWho_could_sign() const;
        int                       getWho_should_execute() const;

        void                      setName(std::string name);
        void                      setSignature(bool signature);
        void                      setWho_could_sign(int signer);
        void                      setWho_should_execute(int executer);
        
        class HighGradeException  GradeTooHighException;
        class LowGradeException   GradeTooLowException;
        class AlreadySigned       AlreadySignedException;
        class FormNotSigned       NotSignedException;

        void                      beSigned(Bureaucrat &Bureaucrat);
        void                      execute(Bureaucrat const & executor) const;
};

std::ostream &operator<<(std::ostream &cout, AForm &AForm);
#endif