/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:17:05 by idouni            #+#    #+#             */
/*   Updated: 2023/11/09 14:08:50 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

void leak(){std::cout<<std::endl;std::system("leaks Brain | grep \" leaks \" | awk '{ print $3\" \"$4 }'");std::cout << std::endl;}

int main(){
    std::atexit(leak);    
    // const Animal* dog = new Dog();
    // const Animal* cat = new Cat();
    
    // delete dog;
    // delete cat;


    Dog *dog1 = new Dog();
    Dog *dog2 = new Dog();


    *dog2 = *dog1;

    // delete dog1;
    delete dog2;
    delete dog1;

    // for (int i = 1; i <= 100; i++){
    //     std::cout << dog.getIdea(i) << std::endl;
    // }
    // std::cout <<  "Bye !!" << std::endl;

    return 0;
}