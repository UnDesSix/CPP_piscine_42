#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void    randomChump(std::string name);

int main(void)
{
    Zombie* newZ;

    newZ = newZombie("heapZombie");
    newZ->announce();
    randomChump("stackZombie");
    delete(newZ);
    return (0);
}