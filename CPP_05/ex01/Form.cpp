#include "Form.hpp"

/*
** ---------------- CONSTRUCTORS ----------------
*/
Form::Form() : _name("default"), _state(UNSIGNED), _signGrade(GRADE_MIN), _execGrade(GRADE_MIN)
{}

Form::Form(std::string const &name, int signGrade, int execGrade) : _name(name), _state(UNSIGNED), _signGrade(signGrade), _execGrade(execGrade)
{
    if (signGrade < GRADE_MAX || execGrade < GRADE_MAX)
        throw Form::GradeTooHighException();
    if (signGrade > GRADE_MIN || execGrade > GRADE_MIN)
        throw Form::GradeTooLowException();
}

Form::Form(Form const &src) : _name(src._name), _state(src._state), _signGrade(src._signGrade), _execGrade(src._execGrade)
{}

/*
** ---------------- DESTRUCTOR ----------------
*/
Form::~Form()
{}

/*
** ---------------- OVERLOADS ----------------
*/
Form&  Form::operator=(Form const &rhs)
{
    if (this != &rhs)
        this->_state = rhs._state;
    return *this;
}

std::ostream&   operator<<(std::ostream &o, Form const &rhs)
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
std::string const   Form::getName(void) const
{
    return this->_name;
}

bool                Form::getState(void) const
{
    return this->_state;
}

int                 Form::getSignGrade(void) const
{
    return this->_signGrade;
}

int                 Form::getExecGrade(void) const
{
    return this->_execGrade;
}

void                Form::setState(bool const &state)
{
    this->_state = state;
}


/*
** ---------------- FUNCTION MEMBER ----------------
*/

void    Form::beSigned(Bureaucrat const &bureaucrat)
{
    if (bureaucrat.getGrade() > this->_signGrade)
        throw Form::GradeTooLowException();
    if (this->_state == UNSIGNED) 
        this->_state = SIGNED;
}

/*
** ---------------- EXCEPTIONS ----------------
*/
const char* Form::GradeTooHighException::what() const throw()
{
    return ("Grade is too high!");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("Grade is too low!");
}