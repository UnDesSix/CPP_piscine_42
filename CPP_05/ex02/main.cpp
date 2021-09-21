#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    Bureaucrat              Matt("Matt", 1);
    Bureaucrat              Paul("Paul", 1);
    ShrubberyCreationForm   firstForm("target");
    RobotomyRequestForm     secondForm("target");

    Paul.signForm(secondForm);
    Matt.executeForm(secondForm);
    return 0;
}