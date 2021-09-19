#include "Brain.hpp"

/*
** ---------------- CONSTRUCTOR ----------------
*/
Brain::Brain()
{
    std::cout << C_CYAN << "\t<" << "Brain's default constructor called>" << C_RESET << std::endl;
}

Brain::Brain(Brain const &copy)
{
    std::cout << C_CYAN << "\t<" << "Brain's copy constructor called>" << C_RESET << std::endl;
    *this = copy;
}

/*
** ---------------- DESTRUCTOR ----------------
*/
Brain::~Brain()
{
    std::cout << C_CYAN << "\t<" << "Brain's destructor called>" << C_RESET << std::endl;
}

/*
** ---------------- OVERLOAD ----------------
*/
Brain&  Brain::operator=(Brain const &rhs)
{
    std::cout << C_YELLOW << "\t<" << "Brain's assignation operator called>" << C_RESET << std::endl;
    if (this != &rhs)
    {
        for (int i = 0; i < 100; i++)
         this->_ideas[i] = rhs._ideas[i];
    }
    return *this;
}

/*
** ---------------- MEMBER FUNCTION ----------------
*/
void    Brain::setAnIdea(size_t const &location, std::string const &idea)
{
    if (location >= 0 && location <= 99)
    {
        this->_ideas[location] = idea;
        std::cout << "The idea \"" << idea << "\" has been registered in the brain at location " << location << std::endl;
    }
    else
        std::cout << "Error : location must be contained between 0 and 99." << std::endl;
}

void    Brain::printIdeas(size_t const &number) const
{
    for (size_t i = 0; i < number; i++)
        std::cout << this->_ideas[i] << std::endl;
}