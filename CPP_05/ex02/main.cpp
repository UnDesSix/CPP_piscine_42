#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    Bureaucrat              Matt("Matt", 45);
    ShrubberyCreationForm   firstForm("target");
    RobotomyRequestForm     secondForm("target");

    Matt.signForm(firstForm);
    Matt.executeForm(firstForm);
    return 0;
}