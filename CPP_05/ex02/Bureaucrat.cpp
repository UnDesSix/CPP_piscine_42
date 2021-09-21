#include "Bureaucrat.hpp"
#include "AForm.hpp"

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
** ---------------- FUNCTION MEMBERS ----------------
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

void    Bureaucrat::signForm(AForm &form) const
{
    try
    {
        form.beSigned(*this);
        std::cout << this->_name << " signs " << form.getName() << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cout << this->_name << " cannot sign " << form.getName() << " because: " << e.what() << std::endl;
        std::cout << "<The grade required to sign is " << form.getSignGrade() << " and the bureaucrat is grade " << this->_grade << ">" << std::endl;
    }
}

void    Bureaucrat::executeForm(AForm &form) const
{
    try
    {
        form.execute(*this);
        std::cout << this->_name << " executes " << form.getName() << std::endl;
    }
    catch(const std::exception &e)
    {
        std::cout << this->_name << " cannot execute " << form.getName() << " because: " << e.what() << std::endl;
        std::cout << "<The grade required to execute is " << form.getExecGrade() << " and the bureaucrat is grade " << this->_grade << ">" << std::endl;
    }
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