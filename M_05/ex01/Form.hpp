/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
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

class Form{
    private:
        const std::string  _name;
        bool               _signature;
        const int          _who_could_sign;
        const int          _who_should_execute;
        
    public:
        Form();
        Form(std::string _name, int signer, int executer);
        Form(Form const &r_inst);
        Form &operator=(Form const &r_inst);
        ~Form();
        
        std::string               getName() const;
        bool                      getSignature() const;
        int                       getWho_could_sign() const;
        int                       getWho_should_execute() const;
        
        class HighGradeException  GradeTooHighException;
        class LowGradeException   GradeTooLowException;
        class AlreadySigned       AlreadySignedException;
        

        void                      beSigned(Bureaucrat &Bureaucrat);
};

std::ostream &operator<<(std::ostream &cout, Form &Form);

#endif