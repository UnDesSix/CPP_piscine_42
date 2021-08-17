#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string name) : m_name(name)
{
}

Zombie::~Zombie()
{
}

void Zombie::announce(void) const
{
    std::cout << "<" << m_name << "> ";
    std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
    m_name = name;
}