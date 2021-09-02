#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap    diamondTrap1("REAL");
    DiamondTrap    diamondTrap2(diamondTrap1);

    diamondTrap2.whoAmI();
    return 0;
}