#include "Zombie.hpp"
#include <sstream>

std::string itoa(int i)
{
    std::ostringstream temp;

    temp << i;
    return temp.str();
}

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *horde = new Zombie[N];
    int i(0);

    while (i < N)
    {
        horde[i].setName(name + "_" + itoa(i));
        i++;
    }
    return horde;
}