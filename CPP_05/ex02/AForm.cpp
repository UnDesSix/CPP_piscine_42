#include "AForm.hpp"

/*
** ---------------- CONSTRUCTORS ----------------
*/
AForm::AForm() : _name("default"), _state(UNSIGNED), _signGrade(GRADE_MIN), _execGrade(GRADE_MIN), _target("default")
{}

AForm::AForm(std::string const &name, int signGrade, int execGrade, std::string const &target) : _name(name), _state(UNSIGNED), _signGrade(signGrade), _execGrade(execGrade),  _target(target)
{
    if (signGrade < GRADE_MAX || execGrade < GRADE_MAX)
        throw AForm::GradeTooHighException();
    if (signGrade > GRADE_MIN || execGrade > GRADE_MIN)
        throw AForm::GradeTooLowException();
}

AForm::AForm(AForm const &src) : _name(src._name), _state(src._state), _signGrade(src._signGrade), _execGrade(src._execGrade), _target(src._target)
{}

/*
** ---------------- DESTRUCTOR ----------------
*/
AForm::~AForm()
{}

/*
** ---------------- OVERLOADS ----------------
*/
AForm&  AForm::operator=(AForm const &rhs)
{
    if (this != &rhs)
        this->_state = rhs._state;
    return *this;
}

std::ostream&   operator<<(std::ostream &o, AForm const &rhs)
{
    o << "Form informations" << std::endl;
    o << "\t- Name: " << rhs.getName() << std::endl;
    if (rhs.getState() == SIGNED)
         o << "\t- State: Signed" << std::endl;
    else
         o << "\t- State: Unsigned" << std::endl;
    o << "\t- Grade required to sign: " << rhs.getSignGrade() << std::endl;
    o << "\t- Grade required to exec: " << rhs.getExecGrade() << std::endl;
    return o;
}

/*
** ---------------- ACCESSOR ----------------
*/
std::string const   AForm::getName(void) const
{
    return this->_name;
}

bool                AForm::getState(void) const
{
    return this->_state;
}

int                 AForm::getSignGrade(void) const
{
    return this->_signGrade;
}

int                 AForm::getExecGrade(void) const
{
    return this->_execGrade;
}

std::string const   AForm::getTarget(void) const
{
    return this->_target;
}

void                AForm::setState(bool const &state)
{
    this->_state = state;
}


/*
** ---------------- FUNCTION MEMBER ----------------
*/

void    AForm::beSigned(Bureaucrat const &bureaucrat)
{
    if (bureaucrat.getGrade() > this->_signGrade)
        throw AForm::GradeTooLowException();
    if (this->_state == UNSIGNED) 
        this->_state = SIGNED;
}

void    AForm::checkForm(Bureaucrat const &bureaucrat, int const &gradeRequired) const
{
    if (this->getState() == UNSIGNED)
        throw AForm::FormNotSignedException();
    if (bureaucrat.getGrade() > gradeRequired)
        throw AForm::GradeTooLowException();
}

/*
** ---------------- EXCEPTIONS ----------------
*/
const char* AForm::GradeTooHighException::what() const throw()
{
    return ("Grade is too high!");
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return ("Grade is too low!");
}

const char* AForm::FormNotSignedException::what() const throw()
{
    return ("Form is not signed, it cannot be executed!");
}

const char* AForm::CouldNotOpenException::what() const throw()
{
    return ("Error occurs while creating output file.");
}