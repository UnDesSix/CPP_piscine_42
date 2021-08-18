#include "HumanB.hpp"

HumanB::HumanB(std::string name) :
m_name(name), m_weapon(NULL)
{

}

HumanB::~HumanB()
{

}

void    HumanB::attack(void) const
{
    std::cout << m_name << " attacks with his ";
    std::cout << m_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    m_weapon = &weapon;
}
