#include "ScavTrap.hpp"

/*
** ---------------- CONSTRUCTOR ----------------
*/

ScavTrap::ScavTrap() : ClapTrap(), _guardGateModeOn(false)
{
    _hitpoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << C_GREEN << "\t<" << _name 
    << "'s ScavTrap default constructor called>" << C_RESET << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name), _guardGateModeOn(false)
{
    _hitpoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << C_GREEN << "\t<" << _name 
    << "'s ScavTrap string constructor called>" << C_RESET << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src)
{
    std::cout << C_GREEN << "\t<" << _name 
    << "'s ScavTrap copy constructor called>" << C_RESET << std::endl;
}

/*
** ---------------- DESTRUCTOR ----------------
*/

ScavTrap::~ScavTrap()
{
    std::cout << C_RED << "\t<" << _name 
    << "'s ScavTrap destructor called>" << C_RESET << std::endl;
}

/*
** -------------------- OVERLOAD --------------------
*/

ScavTrap&  ScavTrap::operator=(ScavTrap const &rhs)
{
    std::cout << C_YELLOW << "<" << _name 
    << "'s ScavTrap assignation operator called>" << C_RESET << std::endl;
    _name = rhs._name;
    _hitpoints = rhs._hitpoints;
    _energyPoints = rhs._energyPoints;
    _attackDamage = rhs._attackDamage;
    return *this;
}

/*
** ---------------- MEMBER FUCNCTIONS ----------------
*/

void    ScavTrap::guardGate(void)
{
    std::cout << _name << " has enterred in Gate keeper mode." << std::endl;
    _guardGateModeOn = true;
}