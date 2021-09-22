#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

/*
**  Run this command into your terminal to test properly:
**      touch private_shrubbery && chmod 000 private_shrubbery
*/

int main()
{
    std::cout << "----TEST1----OK" << std::endl;
    {
        std::cout << C_GREEN;
        try
        {
            Bureaucrat              matt("Matt", 1);
            Bureaucrat              ines("Ines", 1);
            ShrubberyCreationForm   firstForm("target");
            RobotomyRequestForm     secondForm("target");
            PresidentialPardonForm  thirdForm("target");

            std::cout << C_GREEN;
            ines.signForm(firstForm);
            matt.executeForm(firstForm);
            std::cout << std::endl;
            ines.signForm(secondForm);
            matt.executeForm(secondForm);
            std::cout << std::endl;
            ines.signForm(thirdForm);
            matt.executeForm(thirdForm);
        }
        catch(const std::exception& e)
        {
            std::cout << C_RED;
            std::cout << e.what() << std::endl;
        }
        std::cout << C_RESET;
    }
    std::cout << std::endl << "----TEST2----Error constructor type 1" << std::endl;
    {
        std::cout << C_GREEN;
        try
        {
            Bureaucrat              matt("Matt",1000);
            Bureaucrat              ines(NULL, 1);
            Bureaucrat              max("Max", -10);
            ShrubberyCreationForm   firstForm("target");
            RobotomyRequestForm     secondForm("target");

            max.signForm(firstForm);
            ines.signForm(secondForm);
            matt.executeForm(secondForm);  
        }
        catch(const std::exception& e)
        {
            std::cout << C_RED;
            std::cout << e.what() << std::endl;
        }
        std::cout << C_RESET;
    }
    std::cout << std::endl << "----TEST3----Error constructor type 2" << std::endl;
    {
        std::cout << C_GREEN;
        try
        {
            Bureaucrat              ines(NULL, 1);
            Bureaucrat              matt("Matt",1000);
            Bureaucrat              max("Max", -10);
            ShrubberyCreationForm   firstForm("target");
            RobotomyRequestForm     secondForm("target");

            max.signForm(firstForm);
            ines.signForm(secondForm);
            matt.executeForm(secondForm);  
        }
        catch(const std::exception& e)
        {
            std::cout << C_RED;
            std::cout << e.what() << std::endl;
        }
        std::cout << C_RESET;
    }
    std::cout << std::endl << "----TEST4----Error constructor type 3" << std::endl;
    {
        std::cout << C_GREEN;
        try
        {
            Bureaucrat              max("Max", -10);
            Bureaucrat              matt("Matt",1000);
            Bureaucrat              ines(NULL, 1);
            ShrubberyCreationForm   firstForm("target");
            RobotomyRequestForm     secondForm("target");

            max.signForm(firstForm);
            ines.signForm(secondForm);
            matt.executeForm(secondForm);  
        }
        catch(const std::exception& e)
        {
            std::cout << C_RED;
            std::cout << e.what() << std::endl;
        }
        std::cout << C_RESET;
    }
    std::cout << std::endl << "----TEST5----Error sign and execution" << std::endl;
    {
        std::cout << C_GREEN;
        try
        {
            Bureaucrat              max("Max", 1);
            Bureaucrat              matt("Matt", 137);
            Bureaucrat              ines(Bureaucrat("ines", 150)); // Just checking if copy constructor works properly
            ShrubberyCreationForm   firstForm("private");
            RobotomyRequestForm     secondForm("target");
            PresidentialPardonForm  thirdForm("target");

            ines = Bureaucrat("Someone", 149); // Just checking if assignations works properly
            std::cout << C_RESET;
            std::cout << ines << std::endl;
            std::cout << C_GREEN;
            max.signForm(thirdForm);
            matt.executeForm(thirdForm);
            std::cout << std::endl;
            ines.signForm(secondForm);
            matt.executeForm(secondForm);
            std::cout << std::endl;
            max.signForm(firstForm);
            matt.executeForm(firstForm);
        }
        catch(const std::exception& e)
        {
            std::cout << C_RED;
            std::cout << e.what() << std::endl;
        }
        std::cout << C_RESET;
    }
    return 0;
}