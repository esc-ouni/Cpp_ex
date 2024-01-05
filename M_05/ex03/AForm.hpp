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
#include <iostream>
#include <fstream>

class AForm{
    private:
        const std::string   name;
        bool                signature;
        const unsigned int  who_could_sign;
        const unsigned int  who_should_execute;
        
    public:
        AForm();
        AForm(std::string name, unsigned int signer, unsigned int executer);
        AForm(AForm const &r_inst);
        AForm &operator=(AForm const &r_inst);
        ~AForm();
        
        std::string  getName() const;
        bool         getSignature() const;
        unsigned int getWho_could_sign() const;
        unsigned int getWho_should_execute() const;
    
        
        void beSigned(Bureaucrat &Bureaucrat);
};

std::ostream &operator<<(std::ostream &cout, AForm &AForm);

#endif