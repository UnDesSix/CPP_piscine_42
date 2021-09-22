#include "RobotomyRequestForm.hpp"

/*
** ---------------- CONSTRUCTORS ----------------
*/
RobotomyRequestForm::RobotomyRequestForm() : AForm()
{}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : AForm("RobotomyRequestForm", SIGN_GRADE_RO, EXEC_GRADE_RO, target)
{}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : AForm(src)
{}

/*
** ---------------- DESTRUCTOR ----------------
*/
RobotomyRequestForm::~RobotomyRequestForm()
{}

/*
** ---------------- OVERLOADS ----------------
*/
RobotomyRequestForm&  RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
    if (this != &rhs)
        this->AForm::operator=(rhs);
    return *this;
}

/*
** ---------------- METHOD ----------------
*/
void        RobotomyRequestForm::execute(Bureaucrat const &bureaucrat) const
{
    int randomVar;

    std::srand(std::time(NULL));
    randomVar = std::rand() % 2;

    try
    {
        this->checkForm(bureaucrat, EXEC_GRADE_RO);
    }
    catch(const std::exception& e)
    {
        throw ;
        return ;
    }
    std::cout << C_CYAN;
    std::cout << "*DRILL NOISE*" << std::endl;
    if (randomVar == 0)
        std::cout << this->getTarget() << " has been robotomized successfully." << std::endl;
    else
        std::cout << "It's a failure..." << std::endl;
    std::cout << C_GREEN;
}