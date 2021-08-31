#include "Fixed.hpp"

int const Fixed::_factionnalBitsNb = 8;

Fixed::Fixed() : _pointValue(0)
{
    std::cout << "Default constructor called" << std::endl;
}


Fixed::Fixed(Fixed const &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed::~Fixed()
{
    std::cout << "Desctructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_pointValue;
}

void Fixed::setRawBits(int const raw)
{
    this->_pointValue = raw;
}

Fixed& Fixed::operator=(Fixed const &copy)
{
    std::cout << "Assignation operator called" << std::endl;
    this->_pointValue = copy.getRawBits();
    return *this;
}