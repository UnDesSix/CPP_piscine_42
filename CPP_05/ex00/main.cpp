#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat charly("Charly", 0);
        Bureaucrat james("James", 151);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    Bureaucrat matt("Matt", 150);
    Bureaucrat tom("Tom", 5);
    Bureaucrat ines("Ines", 5);

    std::cout << matt << std::endl;
    std::cout << tom << std::endl;
    try
    {
        while (tom.getGrade() > GRADE_MAX || matt.getGrade() > GRADE_MAX)
        {
            tom.getPromotion();
            matt.getPromotion();
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << matt << std::endl;
    std::cout << tom << std::endl;
    try
    {
        tom.getPromotion();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << matt << std::endl;
    std::cout << tom << std::endl;
    try
    {
        for (size_t i = 0; i < 4; i++)
            matt.getDemotion();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << ines << std::endl;
    std::cout << matt << std::endl;
    return 0;
}