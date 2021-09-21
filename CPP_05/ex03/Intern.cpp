#include "Intern.hpp"

/*
** ---------------- CONSTRUCTORS ----------------
*/
Intern::Intern()
{}

Intern::Intern(Intern const &src)
{
    *this = src;
}

/*
** ---------------- DESTRUCTOR ----------------
*/
Intern::~Intern()
{}

/*
** ---------------- OVERLOADS ----------------
*/
Intern& Intern::operator=(Intern const &rhs)
{
    (void)rhs;
    return *this;
}

/*
** ---------------- MEMBER FUNCTION ----------------
*/
AForm* Intern::makeForm(std::string const &formName, std::string const &formTarget) const
{
    AForm*                  tmp;
    ShrubberyCreationForm*  sh = new ShrubberyCreationForm(formTarget);
    RobotomyRequestForm*    ro = new RobotomyRequestForm(formTarget);
    PresidentialPardonForm* pr = new PresidentialPardonForm(formTarget);
    AForm*                   array[3] = {sh, ro, pr};

    for (int i = 0; i < 3; i++)
    {
        if (array[i]->getName() == formName)
        {
            tmp = array[i];
            std::cout << "Intern creates " << tmp->getName() << std::endl;
            break ;
        }
    }
    for (int i = 0; i < 3; i++)
        if (tmp != array[i])
            delete array[i];
    return tmp;
}