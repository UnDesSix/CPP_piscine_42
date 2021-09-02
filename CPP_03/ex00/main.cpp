#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap    clapTrap1;
    ClapTrap    clapTrap2("Robocop");
    ClapTrap    clapTrap3(clapTrap2);

    clapTrap1.attack("Nobody");
    clapTrap1 = clapTrap3;
    clapTrap1.attack("Enemies");
    clapTrap1.takeDamage(5);
    clapTrap1.beRepaired(5);
    clapTrap1.takeDamage(17);


    return 0;
}