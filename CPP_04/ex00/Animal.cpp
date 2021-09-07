#include "Animal.hpp"

/*
** ---------------- CONSTRUCTOR ----------------
*/

Animal::Animal() : _type("default")
{
    std::cout << C_GREEN << "Animal's default constructor called>" << C_RESET << std::endl;
}

Animal::Animal(Animal const &copy) : _type(copy._type)
{
    std::cout << C_GREEN << "Animal's copy constructor called>" << C_RESET << std::endl;
}

/*
** ---------------- DESTRUCTOR ----------------
*/

Animal::~Animal()
{
    std::cout << C_RED << "Animal's destructor called>" << C_RESET << std::endl;
}

/*
** ---------------- OVERLOAD ----------------
*/

Animal& Animal::operator=(Animal const &rhs)
{
    std::cout << C_YELLOW << "Animal's assignation operator called>" << C_RESET << std::endl;
    if (this != &rhs)
        _type = rhs._type;
    return *this;
}

/*
** ---------------- METHOD ----------------
*/

void    Animal::makeSound(void) const
{
    std::cout << "*UNIDENTIFIED SOUND*" << std::endl;
    std::cout << "It looks like an animal!" << std::endl;
}

/*
** ---------------- MEMBER FUNCTION ----------------
*/

std::string Animal::getType(void) const
{
    return _type;
}

void Animal::setType(std::string const &type)
{
    _type = type;
}