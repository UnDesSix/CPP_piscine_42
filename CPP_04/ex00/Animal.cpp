#include "Animal.hpp"

/*
** ---------------- CONSTRUCTOR ----------------
*/

Animal::Animal() : _type("default")
{
}

Animal::Animal(std::string type) : _type(type)
{
}

Animal::Animal(Animal const &copy) : _type(copy._type)
{
}

/*
** ---------------- DESTRUCTOR ----------------
*/

Animal::~Animal()
{
}

/*
** ---------------- OVERLOAD ----------------
*/

Animal& Animal::operator=(Animal const &rhs)
{
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