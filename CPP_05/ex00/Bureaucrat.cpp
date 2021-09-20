#include "Bureaucrat.hpp"

/*
** ---------------- CONSTRUCTORS ----------------
*/
Bureaucrat::Bureaucrat() : _name("default"), _grade(150)
{}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{}

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


/*
** ---------------- ACCESSOR ----------------
*/


/*
** ---------------- METHODS ----------------
*/
