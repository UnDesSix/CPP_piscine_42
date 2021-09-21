#include "Bureaucrat.hpp"

/*
** ---------------- CONSTRUCTORS ----------------
*/
Bureaucrat::Bureaucrat() : _name("default"), _grade(GRADE_MIN)
{}

Bureaucrat::Bureaucrat(std::string const &name, int grade) :_name(name), _grade(grade)
{
    if (grade < GRADE_MAX)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > GRADE_MIN)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : _name(src._name), _grade(src._grade)
{}

/*
** ---------------- DESTRUCTOR ----------------
*/
Bureaucrat::~Bureaucrat()
{}

/*
** ---------------- OVERLOADS ----------------
*/
Bureaucrat&     Bureaucrat::operator=(Bureaucrat const &rhs)
{
    if (this != &rhs)
        this->_grade = rhs._grade;
    return *this;
}

std::ostream&  operator<<(std::ostream &o, Bureaucrat const &rhs)
{
    o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
    return o;
}

/*
** ---------------- ACCESSOR ----------------
*/
int                 Bureaucrat::getGrade(void) const
{
    return this->_grade;
}

std::string const   Bureaucrat::getName(void) const
{
    return this->_name;
}

/*
** ---------------- FUCNTION MEMBERS ----------------
*/
void    Bureaucrat::getPromotion(void)
{
    if (this->_grade - 1 < GRADE_MAX)
        throw Bureaucrat::GradeTooHighException();
    this->_grade--;
}
void    Bureaucrat::getDemotion(void)
{
    if (this->_grade + 1 > GRADE_MIN)
        throw Bureaucrat::GradeTooLowException();
    this->_grade++;
}

/*
** ---------------- EXCEPTIONS ----------------
*/
const char*   Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade is too low!");
}

const char*   Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade is too high!");
}