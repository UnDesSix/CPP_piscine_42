#ifndef __FIXED
# define __FIXED
# include <iostream>
#include <cmath>

class   Fixed
{
    public:
        Fixed(void);
        Fixed(int const i);
        Fixed(float const f);
        Fixed(Fixed const &copy);
        ~Fixed();

        int     getRawBits(void) const;
        void    setRawBits(int const raw);

        Fixed&  operator=(Fixed const &newValue);
        Fixed   operator+(Fixed const &newValue) const;
        Fixed   operator-(Fixed const &newValue) const;
        Fixed   operator*(Fixed const &newValue) const;
        Fixed   operator/(Fixed const &newValue) const;
        Fixed&  operator++();
        Fixed   operator++(int);
        Fixed&  operator--();
        Fixed   operator--(int);
        
        bool    operator==(Fixed const &newValue) const;
        bool    operator!=(Fixed const &newValue) const;
        bool    operator>(Fixed const &newValue) const;
        bool    operator<(Fixed const &newValue) const;
        bool    operator>=(Fixed const &newValue) const;
        bool    operator<=(Fixed const &newValue) const;

        float   toFloat(void) const;
        int     toInt(void) const;
        
        Fixed&          min(Fixed& a, Fixed& b) const;
        Fixed const&    min(Fixed const &a, Fixed const &b) const;
        Fixed&          max(Fixed& a, Fixed& b) const;
        Fixed const&    max(Fixed const &a, Fixed const &b) const;

    private:
        int                 _pfValue;
        static int const    _factionnalBitsNb;
};

std::ostream&   operator<<(std::ostream &o, Fixed const &src);

#endif