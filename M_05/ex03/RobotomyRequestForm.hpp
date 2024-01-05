/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 12:00:43 by idouni            #+#    #+#             */
/*   Updated: 2023/12/20 18:47:17 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ROBOTMYREQUEST_HPP_
#define __ROBOTMYREQUEST_HPP_

#include "AForm.hpp"

class RobotomyRequestForm : public AForm{
    private:
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string &target);
        RobotomyRequestForm(RobotomyRequestForm const &r_inst);
        RobotomyRequestForm &operator=(RobotomyRequestForm const &r_inst);
        ~RobotomyRequestForm();

};


#endif