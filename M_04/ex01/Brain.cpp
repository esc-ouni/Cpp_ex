/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:06:53 by idouni            #+#    #+#             */
/*   Updated: 2023/11/08 14:49:21 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
    for (int i = 1; i <= 100; i++){
        setIdea(i, "Idea");
    }
    std::cout << "Brain Default Constructor Called" << std::endl;
};

Brain::Brain(Brain const &r_inst){
    *this = r_inst;
};

Brain &Brain::operator=(Brain const &r_inst){
    for (int i = 1; i <= 100; i++){
        this->setIdea(i, r_inst.getIdea(i));
    }
    return (*this);
};

Brain::~Brain(){
    std::cout << "Brain Destructor Called" << std::endl;
};

std::string Brain::getIdea(int index) const{
    if (index <= 100 && index > 0)
        return (this->ideas[index - 1]);
    else
        std::cerr << "Err: trying to return idea with index out of range !" << std::endl;
    return ("ambigous idea");
};

void Brain::setIdea(int index, std::string idea){
    if (index <= 100 && index > 0)
        this->ideas[index - 1] = idea;
    else
        std::cerr << "Err: trying to set idea with index out of range !" << std::endl;
};