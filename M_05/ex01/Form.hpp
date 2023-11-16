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
#include <iostream>

class Form{
    private:
        const std::string   name;
        bool                signature;
        const unsigned int  who_could_sign;
        const unsigned int  who_should_execute;
        
    public:
        Form();
        Form(std::string name, unsigned int signer, unsigned int executer);
        Form(Form const &r_inst);
        Form &operator=(Form const &r_inst);
        ~Form();
        
        std::string  getName() const;
        bool         getSignature() const;
        unsigned int getWho_could_sign() const;
        unsigned int getWho_should_execute() const;
    
        
        void beSigned(Bureaucrat &Bureaucrat);
};

std::ostream &operator<<(std::ostream &cout, Form &Form);

#endif