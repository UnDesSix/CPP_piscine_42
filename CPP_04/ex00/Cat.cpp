#include "Cat.hpp"

/*
** ---------------- CONSTRUCTOR ----------------
*/

Cat::Cat() : Animal()
{
    _type = "Cat";
    std::cout << C_GREEN << "\t<"
    << "Cat's default constructor called>" << C_RESET << std::endl;
}

Cat::Cat(Cat const &copy) : Animal(copy)
{
    std::cout << C_GREEN << "\t<"
    << "Cat's copy constructor called>" << C_RESET << std::endl;
}

/*
** ---------------- DESTRUCTOR ----------------
*/

Cat::~Cat()
{
    std::cout << C_RED << "\t<"
    << "Cat's destructor called>" << C_RESET << std::endl;
}

/*
** ---------------- OVERLOAD ----------------
*/

Cat& Cat::operator=(Cat const &rhs)
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

void    Cat::makeSound(void) const
{
    std::cout << "*MEEEOOOWWW*" << std::endl;
    std::cout << "It looks like an cat!" << std::endl;
}
