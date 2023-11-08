/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:17:05 by idouni            #+#    #+#             */
/*   Updated: 2023/11/08 14:58:05 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

// void leak(){std::cout<<std::endl;std::system("leaks Brain | grep \" leaks \" | awk '{ print $3\" \"$4 }'");std::cout << std::endl;}

int main(){
    // std::atexit(leak);
    // const Animal* meta = new Animal();
    // const Animal* dog = new Dog();
    // const Animal* cat = new Cat();
    
    // std::cout << std::endl;
    // std::cout << dog->getType() << " " << std::endl;
    // std::cout << cat->getType() << " " << std::endl 
    //           << std::endl;
              
    // cat->makeSound();
    // dog->makeSound();
    // meta->makeSound();
    // std::cout << std::endl;
            
    // delete meta;
    // delete cat;
    // delete dog;
    
    Brain brain;

    for (int i = 1; i <= 100; i++){
        std::cout << brain.getIdea(i) << std::endl;
    }
    std::cout <<  "Bye !!" << std::endl;

    return 0;
}