/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestAForm.hpp                            :+:      :+:    :+:   */
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

class RobotomyRequestAForm : public AForm{
    private:
    public:
        RobotomyRequestAForm();
        RobotomyRequestAForm(std::string &target);
        RobotomyRequestAForm(RobotomyRequestAForm const &r_inst);
        RobotomyRequestAForm &operator=(RobotomyRequestAForm const &r_inst);
        ~RobotomyRequestAForm();

};


#endif