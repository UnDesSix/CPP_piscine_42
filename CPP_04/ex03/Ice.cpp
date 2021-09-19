#include "Ice.hpp"

/*
** ---------------- CONSTRUCTORS ----------------
*/
Ice::Ice()
{
    _type = "ice";
}

Ice::Ice(Ice const &copy)
{
    _type = copy._type;
}

/*
** ---------------- DESTRUCTOR ----------------
*/
Ice::~Ice()
{}

/*
** ---------------- OVERLOADS ----------------
*/
Ice& Ice::operator=(Ice const &rhs)
{
    if (this != &rhs)
    {
        this->_type = rhs._type;
    }
    return *this;
}

/*
** ---------------- METHODS ----------------
*/
AMateria*   Ice::clone(void) const
{
    return new Ice();
}

void        Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}