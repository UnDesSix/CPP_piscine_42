#include "WrongCat.hpp"

/*
** ---------------- CONSTRUCTOR ----------------
*/

WrongCat::WrongCat() : WrongAnimal()
{
    _type = "WrongCat";
    std::cout << C_GREEN << "\t<"
    << "WrongCat's default constructor called>" << C_RESET << std::endl;
}

WrongCat::WrongCat(WrongCat const &copy) : WrongAnimal(copy)
{
    std::cout << C_GREEN << "\t<"
    << "WrongCat's copy constructor called>" << C_RESET << std::endl;
}

/*
** ---------------- DESTRUCTOR ----------------
*/

WrongCat::~WrongCat()
{
    std::cout << C_RED << "\t<"
    << "WrongCat's destructor called>" << C_RESET << std::endl;
}

/*
** ---------------- OVERLOAD ----------------
*/

WrongCat& WrongCat::operator=(WrongCat const &rhs)
{
    std::cout << C_YELLOW << "\t<"
    << "WrongAnimal's assignation operator called>" << C_RESET << std::endl;
    if (this != &rhs)
        _type = rhs._type;
    return *this;
}

/*
** ---------------- METHOD ----------------
*/

void    WrongCat::makeSound(void) const
{
    std::cout << "*MEEEOOOWWW*" << std::endl;
    std::cout << "It looks like a wrong cat!" << std::endl;
}
