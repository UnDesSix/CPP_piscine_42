#include "Dog.hpp"
#include "Brain.hpp"

/*
** ---------------- CONSTRUCTOR ----------------
*/

Dog::Dog() : Animal(), _brain(new Brain())
{
    std::cout << C_GREEN << "\t<"
    << "Dog's default constructor called>" << C_RESET << std::endl;

    _type = "Dog";
}

Dog::Dog(Brain &brain) : Animal(), _brain(new Brain(brain))
{
    std::cout << C_GREEN << "\t<"
    << "Dog's brain constructor called>" << C_RESET << std::endl;

    _type = "Dog";
}

Dog::Dog(Dog const &copy) : Animal(copy), _brain(new Brain(*(copy._brain)))
{

    std::cout << C_GREEN << "\t<"
    << "Dog's copy constructor called>" << C_RESET << std::endl;
}

/*
** ---------------- DESTRUCTOR ----------------
*/

Dog::~Dog()
{
    std::cout << C_RED << "\t<"
    << "Dog's destructor called>" << C_RESET << std::endl;

    delete _brain;
}

/*
** ---------------- OVERLOAD ----------------
*/

Dog& Dog::operator=(Dog const &rhs)
{
    std::cout << C_YELLOW << "\t<"
    << "Animal's assignation operator called>" << C_RESET << std::endl;
    if (this != &rhs)
        _type = rhs._type;
    return *this;
}

/*
** ---------------- METHOD ----------------
*/

void    Dog::makeSound(void) const
{
    std::cout << "*WOOOOF*" << std::endl;
    std::cout << "It looks like a dog!" << std::endl;
}

/*
** ---------------- MEMBER FUCNCTIONS ----------------
*/

void    Dog::setAnIdea(size_t const &location, std::string const &idea)
{
    this->_brain->setAnIdea(location, idea);
}

void    Dog::printIdeas(size_t const &number) const
{
    this->_brain->printIdeas(number);
}