#ifndef __POINT
# define __POINT
# include "Fixed.hpp"

class   Point
{
    public:
        Point();
        Point(float x, float y);
        Point(Point const &src);
        ~Point();
        Point&  operator=(Point const &rhs);
        static Fixed   subX(Point const &a, Point const &b);
        static Fixed   subY(Point const &a, Point const &b);
    
    private:
        Fixed const _x;
        Fixed const _y;
};

#endif