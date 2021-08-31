#include "Fixed.hpp"

int const Fixed::_factionnalBitsNb = 8;

/*
** -------------------- CONSTRUCTOR --------------------
*/

Fixed::Fixed() : _pfValue(0)
{
    // std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const i) : _pfValue(i << _factionnalBitsNb)
{
    // std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const f) : _pfValue(roundf(f * (1 << _factionnalBitsNb)))
{
    // std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &rhs)
{
    // std::cout << "Copy constructor called" << std::endl;
    *this = rhs;
}

/*
** -------------------- DESTRUCTOR --------------------
*/

Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
}

/*
** -------------------- ACCESSOR --------------------
*/

int Fixed::getRawBits(void) const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return this->_pfValue;
}

void Fixed::setRawBits(int const raw)
{
    this->_pfValue = raw;
}

/*
** -------------------- OVERLOAD --------------------
*/

Fixed&  Fixed::operator=(Fixed const &rhs)
{
    // std::cout << "Assignation operator called" << std::endl;
    this->_pfValue = rhs._pfValue;
    return *this;
}

bool    Fixed::operator>(Fixed const &rhs) const
{
    // std::cout << "Comparaison operator '>' called" << std::endl;
    return _pfValue > rhs._pfValue;
}

bool    Fixed::operator<(Fixed const &rhs) const
{
    // std::cout << "Comparaison operator '<' called" << std::endl;
    return _pfValue < rhs._pfValue;
}

bool    Fixed::operator==(Fixed const &rhs) const
{
    // std::cout << "Comparaison operator '==' called" << std::endl;
    return _pfValue == rhs._pfValue;
}

bool    Fixed::operator!=(Fixed const &rhs) const
{
    // std::cout << "Comparaison operator '!=' called" << std::endl;
    return _pfValue != rhs._pfValue;
}

bool    Fixed::operator>=(Fixed const &rhs) const
{
    // std::cout << "Comparaison operator '>=' called" << std::endl;
    return (_pfValue >= rhs._pfValue);
}

bool    Fixed::operator<=(Fixed const &rhs) const
{
    // std::cout << "Comparaison operator '<=' called" << std::endl;
    return (_pfValue <= rhs._pfValue);
}

Fixed   Fixed::operator+(Fixed const &rhs) const
{
    return Fixed(this->toFloat() + rhs.toFloat()); 
}

Fixed   Fixed::operator-(Fixed const &rhs) const
{
    return Fixed(this->toFloat() - rhs.toFloat()); 
}

Fixed   Fixed::operator*(Fixed const &rhs) const
{
    return Fixed(this->toFloat() * rhs.toFloat()); 
}

Fixed   Fixed::operator/(Fixed const &rhs) const
{
    if (rhs.toFloat() == 0)
        std::cout << "(WARNING : you are didiving by 0)";
    return Fixed(this->toFloat() / rhs.toFloat()); 
}

Fixed&  Fixed::operator++()
{
    _pfValue += 1;
    return *this; 
}

Fixed   Fixed::operator++(int)
{
    Fixed   tmp(*this);

    _pfValue += 1;
    return tmp; 
}

Fixed&  Fixed::operator--()
{
    _pfValue -= 1;
    return *this; 
}

Fixed   Fixed::operator--(int)
{
    Fixed   tmp(*this);

    _pfValue -= 1;
    return tmp; 
}

std::ostream&   operator<<(std::ostream &o, Fixed const &src)
{
    o << src.toFloat();
    return o;
}

/*
** -------------------- METHODS --------------------
*/

int     Fixed::toInt(void) const
{
    return (_pfValue >> _factionnalBitsNb);
}

float   Fixed::toFloat(void) const
{
    return (float)_pfValue / (1 << _factionnalBitsNb);
}

Fixed&  Fixed::min(Fixed& a, Fixed& b)
{
    if (a <= b)
        return a;
    return b;
}

Fixed const&  Fixed::min(Fixed const &a, Fixed const &b)
{
    if (a <= b)
        return a;
    return b;
}


Fixed&  Fixed::max(Fixed& a, Fixed& b)
{
    if (a >= b)
        return a;
    return b;
}

Fixed const&  Fixed::max(Fixed const &a, Fixed const &b)
{
    if (a >= b)
        return a;
    return b;
}