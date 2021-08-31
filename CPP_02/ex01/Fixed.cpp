#include "Fixed.hpp"

int const Fixed::_factionnalBitsNb = 8;

Fixed::Fixed() : _pfValue(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const i) : _pfValue(i << _factionnalBitsNb)
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const f) : _pfValue(roundf(f * (1 << _factionnalBitsNb)))
{
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_pfValue;
}

void Fixed::setRawBits(int const raw)
{
    this->_pfValue = raw;
}

Fixed& Fixed::operator=(Fixed const &copy)
{
    std::cout << "Assignation operator called" << std::endl;
    this->_pfValue = copy._pfValue;
    return *this;
}

int   Fixed::toInt(void) const
{
    return (_pfValue >> _factionnalBitsNb);
}

float   Fixed::toFloat(void) const
{
    return (float)_pfValue / (1 << _factionnalBitsNb);
}

std::ostream&   operator<<(std::ostream &o, Fixed const &src)
{
    o << src.toFloat();
    return o;
}