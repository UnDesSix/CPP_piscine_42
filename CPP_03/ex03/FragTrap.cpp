#include "FragTrap.hpp"

/*
** ---------------- CONSTRUCTOR ----------------
*/

FragTrap::FragTrap() : ClapTrap()
{
    _hitpoints = 100;
    _energyPoints = 110;
    _attackDamage = 30;
    std::cout << C_GREEN << "\t<" << _name 
    << "'s FragTrap default constructor called>" << C_RESET << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    _hitpoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << C_GREEN << "\t<" << _name 
    << "'s FragTrap string constructor called>" << C_RESET << std::endl;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src)
{
    std::cout << C_GREEN << "\t<" << _name 
    << "'s FragTrap copy constructor called>" << C_RESET << std::endl;
}

/*
** ---------------- DESTRUCTOR ----------------
*/

FragTrap::~FragTrap()
{
    std::cout << C_RED << "\t<" << _name 
    << "'s FragTrap destructor called>" << C_RESET << std::endl;
}

/*
** -------------------- OVERLOAD --------------------
*/

FragTrap&  FragTrap::operator=(FragTrap const &rhs)
{
    std::cout << C_YELLOW << "<" << _name 
    << "'s FragTrap assignation operator called>" << C_RESET << std::endl;
    if (this != &rhs)
    {
        _name = rhs._name;
        _hitpoints = rhs._hitpoints;
        _energyPoints = rhs._energyPoints;
        _attackDamage = rhs._attackDamage;
    }
    return *this;
}

/*
** ---------------- MEMBER FUCNCTIONS ----------------
*/

void    FragTrap::highFivesGuys(void)
{
    std::cout << _name << " deperately asked for a high five.." << std::endl;
}

void    FragTrap::attack(std::string const &target)
{
    std::cout << "FragTrap " << _name << " attacks " << target;
    std::cout << std::endl;
}