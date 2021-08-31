#include "Fixed.hpp"

int main(void)
{
    Fixed a;
    Fixed b(3);
    Fixed const c(42.42f);
    Fixed const d(10);

    a = Fixed(0);

    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;

    if (a > b)
        std::cout << "a is greater than b " << std::endl;
    else
        std::cout << "a is not greater than b " << std::endl;
    if (a < b)
        std::cout << "a is smaller than b " << std::endl;
    else
        std::cout << "a is not smaller than b " << std::endl;
    if (a == b)
        std::cout << "a is equal to b " << std::endl;
    else
        std::cout << "a is not equal to b " << std::endl;
    if (a != b)
        std::cout << "a is different from b " << std::endl;
    else
        std::cout << "a is not different from b " << std::endl;
    if (a >= b)
        std::cout << "a is equal or greater than b " << std::endl;
    else
        std::cout << "a is smaller than b " << std::endl;
    if (a <= b)
        std::cout << "a is equal or smaller than b " << std::endl;
    else
        std::cout << "a is greater than b " << std::endl;
    
    std::cout << "a + b = " << a + b << std::endl;
    std::cout << "a - b = " << a - b << std::endl;
    std::cout << "a * b = " << a * b << std::endl;
    std::cout << "a / b = " << a / b << std::endl;
    std::cout << "a : " << a << std::endl;
    std::cout << "++a : " << ++a << std::endl;
    std::cout << "a++ : " << a++ << std::endl;
    std::cout << "a : " << a << std::endl;
    std::cout << "--a : " << --a << std::endl;
    std::cout << "a-- : " << a-- << std::endl;
    std::cout << "a : " << a << std::endl;
    std::cout << "--a : " << --a << std::endl;
    std::cout << "++a : " << ++a << std::endl;
    std::cout << "b : " << b << std::endl;

    std::cout << "min(a,b) is " << a.min(a, b) << std::endl;
    std::cout << "min(c,d) is " << c.min(c, d) << std::endl;

    std::cout << "min(a,b) is " << a.max(a, b) << std::endl;
    std::cout << "min(c,d) is " << c.max(a, d) << std::endl;

    return 0;
}