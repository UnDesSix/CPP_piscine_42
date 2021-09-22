#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    Intern      you;
    Bureaucrat  president("Emmanuel Macron", 1);
    Bureaucrat  firstMinister("Edouard Philippe", 5);
    AForm*      unidentified = you.makeForm("Presidential Pardon", "JoeyStarr");

    president.signForm(*unidentified);
    firstMinister.executeForm(*unidentified);
    delete unidentified;
    return 0;
}