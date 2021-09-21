#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    Bureaucrat              Matt("Matt", 137);
    Bureaucrat              Paul("Paul", 45);
    ShrubberyCreationForm   firstForm("target");
    RobotomyRequestForm     secondForm("target");

    Paul.signForm(firstForm);
    Matt.executeForm(firstForm);
    return 0;
}