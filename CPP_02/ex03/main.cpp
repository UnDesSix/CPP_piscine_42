#include "Point.hpp"
#include <iostream>

bool    bsp(Point const &a, Point const &b, Point const &c, Point const &point);

int main(void)
{
    Point const a(0, 0);
    Point const b(20, 0);
    Point const c(10, 30);
    Point const in(10, 15);
    Point const out(30, 30);

    if (bsp(a, b,c, in) == true)
        std::cout << "The point is inside the triangle." << std::endl;
    else
        std::cout << "The point is outside the triangle." << std::endl;
    if (bsp(a, b,c, out) == true)
        std::cout << "The point is inside the triangle." << std::endl;
    else
        std::cout << "The point is outside the triangle." << std::endl;
    return 0;
}