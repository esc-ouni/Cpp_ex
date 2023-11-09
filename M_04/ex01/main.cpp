/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:17:05 by idouni            #+#    #+#             */
/*   Updated: 2023/11/09 15:22:20 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

// void leak(){std::cout<<std::endl;std::system("leaks Brain | grep \" leaks \" | awk '{ print $3\" \"$4 }'");std::cout << std::endl;}

int main(){
    // std::atexit(leak);
    int N = 20;
    Animal array_of_animals[N];
    
    for (int i = 0; i < N; i++){
        if (i < N/2)
            array_of_animals[i].
    };



    // Dog *dog1 = new Dog();
    // Dog *dog2 = new Dog();

    // *(dog2) = *(dog1);

    // delete dog1;
    // delete dog2;
    
    return 0;
}