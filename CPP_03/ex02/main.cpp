#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    FragTrap    fragTrap1;
    FragTrap    fragTrap2("Robocop");
    FragTrap    fragTrap3(fragTrap2);

    fragTrap1.attack("Nobody");
    fragTrap1 = fragTrap3;
    fragTrap1.attack("Enemies");
    fragTrap1.takeDamage(5);
    fragTrap1.beRepaired(5);
    fragTrap1.takeDamage(17);
    fragTrap1.highFivesGuys();


    return 0;
}