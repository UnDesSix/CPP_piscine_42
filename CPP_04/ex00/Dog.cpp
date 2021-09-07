#include "Dog.hpp"

/*
** ---------------- CONSTRUCTOR ----------------
*/

Dog::Dog() : Animal()
{
    _type = "Dog";
    std::cout << C_GREEN << "\t<"
    << "Dog's default constructor called>" << C_RESET << std::endl;
}

Dog::Dog(Dog const &copy) : Animal(copy)
{
    std::cout << C_GREEN << "\t<"
    << "Dog's copy constructor called>" << C_RESET << std::endl;
}

/*
** ---------------- DESTRUCTOR ----------------
*/

Dog::~Dog()
{
    std::cout << C_RED << "\t<"
    << "Dog's destructor called>" << C_RESET << std::endl;
}

/*
** ---------------- OVERLOAD ----------------
*/

Dog& Dog::operator=(Dog const &rhs)
{
    std::cout << C_YELLOW << "\t<"
    << "Animal's assignation operator called>" << C_RESET << std::endl;
    if (this != &rhs)
        _type = rhs._type;
    return *this;
}

/*
** ---------------- METHOD ----------------
*/

void    Dog::makeSound(void) const
{
    std::cout << "*WOOOOF*" << std::endl;
    std::cout << "It looks like a dog!" << std::endl;
}