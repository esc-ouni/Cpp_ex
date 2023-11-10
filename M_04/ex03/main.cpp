/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:17:05 by idouni            #+#    #+#             */
/*   Updated: 2023/11/10 17:28:29 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

void leak(){std::cout<<std::endl;std::system("leaks Recap | grep \" leaks \" | awk '{ print $3\" \"$4 }'");std::cout << std::endl;}

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
 std::atexit(leak);
    
    IMateriaSource* src = new MateriaSource();

    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    src->learnMateria( new Pop());
    src->learnMateria( new Pop());
    src->learnMateria( new Pop());
    src->learnMateria( new Pop());
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

    Character mike("mike");

    Character *d = dynamic_cast<Character*>(me);
    mike = *d;
    me->unequip(-10);
    me->unequip(0);
    me->unequip(1);
    me->unequip(2);
    me->unequip(3);
    me->unequip(4);
    delete me;
    mike.use(0, *bob);
    mike.use(1, *bob);
    mike.use(2, *bob);
    mike.use(3, *bob);
    mike.use(4, *bob);

    delete bob;
    delete src;
}
