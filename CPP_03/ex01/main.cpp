#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap    scavTrap1;
    ScavTrap    scavTrap2("Robocop");
    ScavTrap    scavTrap3(scavTrap2);

    scavTrap1.attack("Nobody");
    scavTrap1 = scavTrap3;
    scavTrap1.attack("Enemies");
    scavTrap1.takeDamage(5);
    scavTrap1.beRepaired(5);
    scavTrap1.takeDamage(17);
    scavTrap1.guardGate();


    return 0;
}