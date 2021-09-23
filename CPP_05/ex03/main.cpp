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
    AForm*      unidentified1 = you.makeForm("Shrubbery Creation", "JoeyStarr");
    AForm*      unidentified2 = you.makeForm("Robotomy Request", "JoeyStarr");
    AForm*      unidentified3 = you.makeForm("Presidential Pardon", "JoeyStarr");

    president.signForm(*unidentified1);
    firstMinister.executeForm(*unidentified1);
    delete unidentified1;
    president.signForm(*unidentified2);
    firstMinister.executeForm(*unidentified2);
    delete unidentified2;
    president.signForm(*unidentified3);
    firstMinister.executeForm(*unidentified3);
    delete unidentified3;
    return 0;
}