/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: idouni <idouni@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:17:05 by idouni            #+#    #+#             */
/*   Updated: 2023/11/07 18:39:57 by idouni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongDog.hpp"
#include "WrongCat.hpp"

int main(){
    const Animal* meta = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();
    std::cout << dog->getType() << " " << std::endl;
    std::cout << cat->getType() << " " << std::endl 
              << std::endl;
    cat->makeSound();
    dog->makeSound();
    meta->makeSound();

    std::cout << std::endl << std::endl;

    const WrongAnimal* wrongmeta = new WrongAnimal();
    const WrongAnimal* wrongdog = new WrongDog();
    const WrongAnimal* wrongcat = new WrongCat();
    std::cout << wrongdog->getType() << " " << std::endl;
    std::cout << wrongcat->getType() << " " << std::endl
              << std::endl;
    wrongcat->makeSound();
    wrongdog->makeSound();
    wrongmeta->makeSound();
    return 0;
}