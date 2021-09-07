#include "WrongAnimal.hpp"

/*
** ---------------- CONSTRUCTOR ----------------
*/

WrongAnimal::WrongAnimal() : _type("default")
{
    std::cout << C_GREEN << "WrongAnimal's default constructor called>" << C_RESET << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &copy) : _type(copy._type)
{
    std::cout << C_GREEN << "WrongAnimal's copy constructor called>" << C_RESET << std::endl;
}

/*
** ---------------- DESTRUCTOR ----------------
*/

WrongAnimal::~WrongAnimal()
{
    std::cout << C_RED << "WrongAnimal's destructor called>" << C_RESET << std::endl;
}

/*
** ---------------- OVERLOAD ----------------
*/

WrongAnimal& WrongAnimal::operator=(WrongAnimal const &rhs)
{
    std::cout << C_YELLOW << "WrongAnimal's assignation operator called>" << C_RESET << std::endl;
    if (this != &rhs)
        _type = rhs._type;
    return *this;
}

/*
** ---------------- METHOD ----------------
*/

void    WrongAnimal::makeSound(void) const
{
    std::cout << "*UNIDENTIFIED SOUND*" << std::endl;
    std::cout << "It looks like a wrong animal!" << std::endl;
}

/*
** ---------------- MEMBER FUNCTION ----------------
*/

std::string WrongAnimal::getType(void) const
{
    return _type;
}

void WrongAnimal::setType(std::string const &type)
{
    _type = type;
}