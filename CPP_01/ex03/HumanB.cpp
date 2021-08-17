#include "HumanB.hpp"

HumanB::HumanB()
{

}

HumanB::HumanB(std::string name, Weapon *weapon) :
m_name(name), m_weapon(weapon)
{

}

HumanB::~HumanB()
{

}

void    HumanB::attack(void) const
{
    std::cout << m_name << "attacks with his ";
    std::cout << m_weapon.getType() << std::endl;
}