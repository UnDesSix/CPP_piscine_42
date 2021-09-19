#include "AMateria.hpp"

/*
** ---------------- CONSTRUCTORS ----------------
*/
AMateria::AMateria()
{}

AMateria::AMateria(std::string const &type) : _type(type)
{}

AMateria::AMateria(AMateria const &src) : _type(src._type)
{}

/*
** ---------------- DESTRUCTOR ----------------
*/
AMateria::~AMateria()
{}

/*
** ---------------- OVERLOADS ----------------
*/
AMateria& AMateria::operator=(AMateria const &rhs)
{
    if (this != &rhs)
    {
        this->_type = rhs._type; 
    }
    return *this;
}

/*
** ---------------- ACCESSOR ----------------
*/
std::string const& AMateria::getType(void) const
{
    return this->_type;
}

/*
** ---------------- METHODS ----------------
*/
void    AMateria::use(ICharacter &target)
{
    (void)target;
}