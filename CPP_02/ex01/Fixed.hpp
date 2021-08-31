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
        Fixed&  operator=(Fixed const & newValue);
        float   toFloat(void) const;
        int     toInt(void) const;

    private:
        int                 _pfValue;
        static int const    _factionnalBitsNb;
};

std::ostream&   operator<<(std::ostream &o, Fixed const &src);

#endif