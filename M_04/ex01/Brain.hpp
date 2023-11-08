/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:05:49 by idouni            #+#    #+#             */
/*   Updated: 2023/11/08 15:06:15 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN_
#define __BRAIN_

#include <iostream>

class Brain{
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(Brain const &r_inst);
        Brain &operator=(Brain const &r_inst);
        ~Brain();

        std::string getIdea(int index) const;
        void setIdea(int index, std::string idea);
};

#endif