#ifndef __FIXED
# define __FIXED
# include <iostream>

class   Fixed
{
    public:
        Fixed(void);
        Fixed(Fixed const &copy);
        ~Fixed();
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        Fixed& operator=(Fixed const & newValue);

    private:
        int                 _pointValue;
        static int const    _factionnalBitsNb;
};

#endif