#include "Cure.hpp"

/*
** ---------------- CONSTRUCTORS ----------------
*/
Cure::Cure()
{
    _type = "cure";
}

Cure::Cure(Cure const &copy)
{
    _type = copy._type;
}

/*
** ---------------- DESTRUCTOR ----------------
*/
Cure::~Cure()
{}

/*
** ---------------- OVERLOADS ----------------
*/
Cure& Cure::operator=(Cure const &rhs)
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
AMateria*   Cure::clone(void) const
{
    return new Cure();
}

void        Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}