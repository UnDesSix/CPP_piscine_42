#include "Zombie.hpp"

Zombie::Zombie() : m_name("Unnamed")
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