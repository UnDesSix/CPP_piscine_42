#include "Cat.hpp"

/*
** ---------------- CONSTRUCTOR ----------------
*/

Cat::Cat() : Animal(), _brain(new Brain())
{
    std::cout << C_GREEN << "\t<"
    << "Cat's default constructor called>" << C_RESET << std::endl;

    _type = "Cat";
}

Cat::Cat(Brain const &brain) : Animal(), _brain(new Brain(brain))
{
    std::cout << C_GREEN << "\t<"
    << "Cat's brain constructor called>" << C_RESET << std::endl;

    _type = "Cat";
}

Cat::Cat(Cat const &copy) : Animal(copy), _brain(new Brain(*(copy._brain)))
{
    std::cout << C_GREEN << "\t<"
    << "Cat's copy constructor called>" << C_RESET << std::endl;
}

/*
** ---------------- DESTRUCTOR ----------------
*/

Cat::~Cat()
{
    std::cout << C_RED << "\t<"
    << "Cat's destructor called>" << C_RESET << std::endl;
    
    delete _brain;
}

/*
** ---------------- OVERLOAD ----------------
*/

Cat& Cat::operator=(Cat const &rhs)
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

void    Cat::makeSound(void) const
{
    std::cout << "*MEEEOOOWWW*" << std::endl;
    std::cout << "It looks like an cat!" << std::endl;
}

/*
** ---------------- MEMBER FUCNCTIONS ----------------
*/

void    Cat::setAnIdea(size_t const &location, std::string const &idea)
{
    this->_brain->setAnIdea(location, idea);
}

void    Cat::printIdeas(size_t const &number) const
{
    this->_brain->printIdeas(number);
}

void    Cat::printAddr(void) const
{
    std::cout << "Brain Addr : " << &this->_brain << std::endl;
}