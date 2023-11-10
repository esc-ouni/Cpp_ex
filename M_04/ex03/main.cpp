/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:17:05 by idouni            #+#    #+#             */
/*   Updated: 2023/11/10 16:45:43 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

// void leak(){std::cout<<std::endl;std::system("leaks Recap | grep \" leaks \" | awk '{ print $3\" \"$4 }'");std::cout << std::endl;}
//  std::atexit(leak);

class Pop: public AMateria{
    public:
        Pop(){
            this->type = "pop";
        };
        ~Pop(){
        };
        AMateria* clone() const{
            return (new Pop());
        };
        void use(ICharacter& target){
            std::cout << "Hoe Hoe " << target.getName() << std::endl;
        };
};


int main(){
    
    IMateriaSource* src = new MateriaSource();

    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    src->learnMateria( new Pop());
    
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("pop");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    
    me->use(0, *bob);
    me->use(1, *bob);
    me->use(2, *bob);
    me->use(3, *bob);
    me->use(4, *bob);

    delete bob;
    delete me;
    delete src;
    
    return 0;
}