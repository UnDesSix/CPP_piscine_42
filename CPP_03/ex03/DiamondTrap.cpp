#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"

/*
** ---------------- CONSTRUCTOR ----------------
*/

DiamondTrap::DiamondTrap() :
ClapTrap(), ScavTrap(), FragTrap(), _name(ClapTrap::_name)
{
    ClapTrap::_name += "_clap_name";
    _energyPoints = 50;
    std::cout << C_CYAN << "<" << _name 
    << "'s DiamondTrap default constructor called>" << C_RESET << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) :
ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name)
{
    _energyPoints = 50;
    std::cout << C_CYAN << "<" << _name 
    << "'s DiamondTrap string constructor called>" << C_RESET << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src) :
ClapTrap(src), ScavTrap(src), FragTrap(src), _name(src._name)
{
    std::cout << C_CYAN << "<" << _name 
    << "'s DiamondTrap copy constructor called>" << C_RESET << std::endl;
}

/*
** ---------------- DESTRUCTOR ----------------
*/

DiamondTrap::~DiamondTrap()
{
    std::cout << C_CYAN << "<" << _name 
    << "'s DiamondTrap destructor called>" << C_RESET << std::endl;
}

/*
** ---------------- OVERLOAD ----------------
*/
DiamondTrap&  DiamondTrap::operator=(DiamondTrap const &rhs)
{
    std::cout << C_YELLOW << "<" << _name 
    << "'s DiamondTrap assignation operator called>" << C_RESET << std::endl;
    if (this != &rhs)
    {
        _name = rhs._name;
        _energyPoints = rhs._energyPoints;
        _hitpoints = rhs._hitpoints;
        _attackDamage = rhs._attackDamage;
        _guardGateModeOn = rhs._guardGateModeOn;
    }
    return *this;
}

/*
** ---------------- MEMBER FUCNCTIONS ----------------
*/

void    DiamondTrap::whoAmI(void)
{
    std::cout << "My DiamondTrap name is : " << _name << std::endl;
    std::cout << "My ClapTrap name is    : " << ClapTrap::_name << std::endl;
}