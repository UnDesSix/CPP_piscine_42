#include <cstdlib>
#include <string>
#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>
#include <cerrno>

/*
**  DISPLAYING FUNCTIONS: 
*/
void    display_char(double &tmp_d, std::string &tmp_exceptions)
{
    std::cout << "char: ";
    if (!tmp_exceptions.empty())
        std::cout << "impossible" << std::endl;
    else if (tmp_d < std::numeric_limits<char>::min() || tmp_d > std::numeric_limits<char>::max())
        std::cout << "impossible" << std::endl;
    else if (tmp_d < 32 || tmp_d > 126)
        std::cout << "Non displayable" << std::endl;
    else
        std::cout << "'" <<  static_cast<char>(tmp_d) << "'" << std::endl;
}

void    display_int(double &tmp_d, std::string &tmp_exceptions)
{
    std::cout << "int: ";
    if (!tmp_exceptions.empty())
        std::cout << "impossible" << std::endl;
    else if (tmp_d < std::numeric_limits<int>::min() || tmp_d > std::numeric_limits<int>::max())
        std::cout << "impossible" << std::endl;
    else
        std::cout <<  static_cast<int>(tmp_d) << std::endl;
}

void    display_float(double &tmp_d, std::string &tmp_exceptions)
{
    double intpart = 0;

    std::cout << "float: ";
    if (!tmp_exceptions.empty())
    {
        if (tmp_exceptions == "nanf" || tmp_exceptions == "nan")
            std::cout << "nanf" << std::endl;
        else if (tmp_exceptions == "-inf" || tmp_exceptions == "-inff")
            std::cout << "-inff" << std::endl;
        else
            std::cout << "inff" << std::endl;
    }
    else if (tmp_d < -std::numeric_limits<float>::max() || tmp_d > std::numeric_limits<float>::max())
        std::cout << "impossible" << std::endl;
    else
    {
        std::cout << static_cast<float>(tmp_d);
        if (modf(tmp_d, &intpart) == 0)
            std::cout << ".0f" << std::endl;
        else
            std::cout << "f" << std::endl;
    }
}

void    display_double(double &tmp_d, std::string &tmp_exceptions)
{
    double intpart = 0;

    std::cout << "double: ";
    if (!tmp_exceptions.empty())
    {
        if (tmp_exceptions == "nanf" || tmp_exceptions == "nan")
            std::cout << "nan" << std::endl;
        else if (tmp_exceptions == "-inf" || tmp_exceptions == "-inff")
            std::cout << "-inf" << std::endl;
        else
            std::cout << "inf" << std::endl;
    }
    else
    {
        std::cout << tmp_d;
        if (modf(tmp_d, &intpart) == 0)
            std::cout << ".0" << std::endl;
        else
            std::cout << std::endl;
    }
}

/*
**  CHECKING FUNCTIONS:
**  argument_isvalid checks if the argument str is a valid value. string_isexception 
**  checks for the exeption and sets tmp_exeptions in order to use it while displaying.
*/
bool    string_isexception(char const *str, std::string &tmp_exceptions)
{
    std::string exceptions[8] = {"nan","inf", "+inf", "-inf", "nanf","inff", "+inff", "-inff"};

    for(size_t i = 0; i < 8; i++)
    {
        if (std::string(str) == exceptions[i])
        {
            tmp_exceptions = exceptions[i];
            return true;
        }
    }
    return false;
}

bool    argument_isvalid(char const*  str, double &tmp, std::string &tmp_exceptions)
{
    char*       end = NULL;

    if (str[0] && !str[1])
    {
        tmp = static_cast<double>(str[0]);
        return true;
    }
    if (string_isexception(str, tmp_exceptions))
        return true;
    tmp = strtod(str, &end);
    if (errno == ERANGE)
    {
        std::cout << "Error 2 - All values are out of range" << std::endl;
        return false;        
    }
    if (str == end)
    {
        std::cout << "Error 3 - String must be a decimal value" << std::endl;
        return false;
    }
    if (end[0] == '\0') // End is empty, nothing to check
        return true; 
    if (end[0] != '\0' && end[0] == 'f' && end[1] == '\0') // Check if there is a 'f' alone in end (float syntax)
        return true;
    std::cout << "Error 3 - String must be a decimal value" << std::endl;
    return false;

}

/*
**  MAIN:
*/
int main(int ac, char const **av)
{
    double      tmp_d;
    std::string tmp_exceptions;

    if (ac != 2)
    {
        std::cout << "Error 1 - This program takes one and only one argument" << std::endl;
        return 1;
    }
    if (!argument_isvalid(av[1], tmp_d, tmp_exceptions))
        return 1;
    display_char(tmp_d, tmp_exceptions);
    display_int(tmp_d, tmp_exceptions);
    display_float(tmp_d, tmp_exceptions);
    display_double(tmp_d, tmp_exceptions);
}