#include "Zombie.hpp"
#define SIZE 4500

Zombie* zombieHorde(int N, std::string name);

int main(void)
{
    Zombie* horde;

    horde = zombieHorde(SIZE, "zombal");
    for (int i(0); i < SIZE; i++)
        horde[i].announce();
    delete [] horde;
    return (0);
}