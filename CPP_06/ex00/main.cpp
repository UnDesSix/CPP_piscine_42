#include <cstdlib>
#include <string>
#include <iostream>
#include <iomanip>
#include <tgmath.h>

int main(int ac, char **av)
{
    (void)ac;


    char    c = static_cast<char>(strtod(av[1], NULL));
    int     i = static_cast<int>(strtod(av[1], NULL));
    float   f = static_cast<float>(strtod(av[1], NULL));
    double  d = static_cast<double>(strtod(av[1], NULL));

    std::cout << "char: '" << c << "'" << std::endl;
    std::cout << "int: " << i << std::endl;
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "float: " << f << std::endl;
    // std::cout.precision(1);
    // std::cout << std::fixed << std::setprecision(1);
    // std::cout << "double: " << std::fmod(d, 1) << std::endl;
    std::cout << "double: " << d << std::endl;


}