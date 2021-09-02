#include "ClapTrap.hpp"

/*
** ---------------- CONSTRUCTOR ----------------
*/

ClapTrap::ClapTrap() :
_name("Undefined"), _hitpoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << C_GREEN << "<" << _name 
    << "'s ClapTrap default constructor called>" << C_RESET << std::endl;
}

ClapTrap::ClapTrap(std::string name) :
_name(name), _hitpoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << C_GREEN << "<" << _name 
    << "'s ClapTrap string constructor called>" << C_RESET << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src) :
_name(src._name), _hitpoints(src._hitpoints), _energyPoints(src._energyPoints), _attackDamage(src._attackDamage)
{
    std::cout << C_GREEN << "<" << _name 
    << "'s ClapTrap copy constructor called>" << C_RESET << std::endl;
}

/*
** ---------------- DESTRUCTOR ----------------
*/

ClapTrap::~ClapTrap()
{
    std::cout << C_RED << "<" << _name 
    << "'s ClapTrap destructor called>" << C_RESET << std::endl;
}

/*
** -------------------- OVERLOAD --------------------
*/

ClapTrap&  ClapTrap::operator=(ClapTrap const &rhs)
{
    std::cout << C_YELLOW << "<" << _name 
    << "'s ClapTrap assignation operator called>" << C_RESET << std::endl;
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

void    ClapTrap::attack(std::string const &target)
{
    std::cout << "ClapTrap " << _name << " attacks " << target;
    std::cout << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << _name << " has taken " << amount << " points of damage!";
    std::cout << std::endl;
    _energyPoints -= amount;
    if (_energyPoints < 0)
    {
        std::cout << _name << " is dead.";
        std::cout << std::endl;
        _energyPoints = 0;        
    }
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << _name << " has been repaired of " << amount << " energy points!";
    std::cout << std::endl;
    _energyPoints += amount;
    if (_energyPoints > 100)
        _energyPoints = 100;
}