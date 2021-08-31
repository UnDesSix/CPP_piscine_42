#include "Point.hpp"
#include <iostream>

Fixed   sign(Point const &a, Point const &b, Point const &c)
{
    return Point::subX(a, c) * Point::subY(b, c) - Point::subX(b, c) * Point::subY(a, c);
}

bool    bsp(Point const &a, Point const &b, Point const &c, Point const &point)
{
    Fixed   d1, d2, d3;
    bool    has_neg, has_pos;

    d1 = sign(point, a, b);
    d2 = sign(point, b, c);
    d3 = sign(point, c, a);
    // std::cout << "d1 : " << d1 << std::endl;
    // std::cout << "d2 : " << d2 << std::endl;
    // std::cout << "d3 : " << d3 << std::endl;
    has_neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
    has_pos = (d1 > 0) || (d2 > 0) || (d3 > 0);
    return !(has_neg && has_pos);
}