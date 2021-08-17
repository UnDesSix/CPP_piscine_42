#include "HumanA.hpp"

HumanA::HumanA()
{

}

HumanA::HumanA(std::string name, Weapon &weapon) :
m_name(name), m_weapon(weapon)
{

}

HumanA::~HumanA()
{

}

void    HumanA::attack(void) const
{
    std::cout << m_name << "attacks with his ";
    std::cout << m_weapon.getType() << std::endl;
}