#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{
}

Point::Point(float const x, float const y) : _x(x), _y(y)
{
}

Point::Point(Point const &src)
{
    *this = src;
}

Point::~Point()
{
}

Point& Point::operator=(Point const &rhs)
{
    (void)rhs;
    return *this;
}


Fixed   Point::subX(Point const &a, Point const &b)
{
    return a._x - b._x;
}

Fixed   Point::subY(Point const &a, Point const &b)
{
    return a._y - b._y;
}
