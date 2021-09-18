#include "Animal.hpp"

/*
** ---------------- CONSTRUCTOR ----------------
*/

AAnimal::AAnimal() : _type("default")
{
    std::cout << C_GREEN << "AAnimal's default constructor called>" << C_RESET << std::endl;
}

AAnimal::AAnimal(AAnimal const &copy) : _type(copy._type)
{
    std::cout << C_GREEN << "AAnimal's copy constructor called>" << C_RESET << std::endl;
}

/*
** ---------------- DESTRUCTOR ----------------
*/

AAnimal::~AAnimal()
{
    std::cout << C_RED << "AAnimal's destructor called>" << C_RESET << std::endl;
}

/*
** ---------------- OVERLOAD ----------------
*/

AAnimal& AAnimal::operator=(AAnimal const &rhs)
{
    std::cout << C_YELLOW << "AAnimal's assignation operator called>" << C_RESET << std::endl;
    if (this != &rhs)
        _type = rhs._type;
    return *this;
}

/*
** ---------------- METHOD ----------------
*/

void    AAnimal::makeSound(void) const
{
    std::cout << "*UNIDENTIFIED SOUND*" << std::endl;
    std::cout << "It looks like an animal!" << std::endl;
}

/*
** ---------------- MEMBER FUNCTION ----------------
*/

std::string AAnimal::getType(void) const
{
    return _type;
}

void AAnimal::setType(std::string const &type)
{
    _type = type;
}