#include "struct.hpp"

/*
** ---------------- CONSTRUCTORS ----------------
*/
Data::Data() : _value(0)
{}

Data::Data(Data const &copy) : _value(copy._value)
{}

/*
** ---------------- DESTRUCTOR ----------------
*/
Data::~Data()
{}

/*
** ---------------- OVERLOADS ----------------
*/
Data&   Data::operator=(Data const &rhs)
{
    if (this != &rhs)
        this->_value = rhs._value;
    return *this;
}

/*
** ---------------- ACCESSOR ----------------
*/
void    Data::setValue(int value)
{
    this->_value = value;
}

int     Data::getValue(void) const
{
    return this->_value;
}