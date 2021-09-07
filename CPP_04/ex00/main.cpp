#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#include <iostream>
#include <string>

int main (void)
{
    Animal  *meta = new Animal();
    Animal  *i = new Cat();
    Animal  *j = new Dog();
    WrongAnimal  *wrongMeta = new WrongAnimal();
    WrongAnimal  *wrongI = new WrongCat();

    std::cout << i->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << wrongI->getType() << " " << std::endl;
    std::cout << wrongMeta->getType() << " " << std::endl;

    meta->makeSound();
    i->makeSound();
    j->makeSound();
    wrongI->makeSound();
    wrongMeta->makeSound();

    delete meta;
    delete i;
    delete j;
    delete wrongI;
    delete wrongMeta;

    return 0;
}