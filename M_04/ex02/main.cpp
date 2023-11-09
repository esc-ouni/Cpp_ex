/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:17:05 by idouni            #+#    #+#             */
/*   Updated: 2023/11/09 17:22:57 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

// void leak(){std::cout<<std::endl;std::system("leaks Abstract | grep \" leaks \" | awk '{ print $3\" \"$4 }'");std::cout << std::endl;}

int main(){
    // std::atexit(leak);
    // AAnimal animal;
    int N = 20;
    AAnimal *array_of_animals[N];
    
    for (int i = 0; i < N; i++){
        if (i < N/2){
            array_of_animals[i] = new Dog();
        }
        else
            array_of_animals[i] = new Cat();
    }


    for (int i = 0; i < N; i++){
        std::cout << array_of_animals[i]->getType() << std::endl;
        array_of_animals[i]->makeSound();
    }

    for (int i = 0; i < N; i++){
        delete array_of_animals[i];
    }
    
    // Dog *dog1 = new Dog();
    // Dog *dog2 = new Dog();

    // *(dog2) = *(dog1);

    // delete dog1;
    // delete dog2;
    
    return 0;
}