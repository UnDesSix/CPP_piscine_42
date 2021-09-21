#include "PresidentialPardonForm.hpp"

/*
** ---------------- CONSTRUCTORS ----------------
*/
PresidentialPardonForm::PresidentialPardonForm() : AForm()
{}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : AForm("PresidentialPardonForm", SIGN_GRADE_PR, EXEC_GRADE_PR, target)
{}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : AForm(src)
{}

/*
** ---------------- DESTRUCTOR ----------------
*/
PresidentialPardonForm::~PresidentialPardonForm()
{}

/*
** ---------------- OVERLOADS ----------------
*/
PresidentialPardonForm&  PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
    if (this != &rhs)
        this->AForm::operator=(rhs);
    return *this;
}

/*
** ---------------- METHOD ----------------
*/
void        PresidentialPardonForm::execute(Bureaucrat const &bureaucrat) const
{
    try
    {
        this->checkForm(bureaucrat, EXEC_GRADE_PR);
    }
    catch(const std::exception& e)
    {
        throw ;
        return ;
    }
    std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}