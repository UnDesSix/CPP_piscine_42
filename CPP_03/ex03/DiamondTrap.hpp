#ifndef __DIAMONDTRAP
# define __DIAMONDTRAP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

# include <iostream>
# include <string>

class   DiamondTrap : public ScavTrap, public FragTrap
{
    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(DiamondTrap const &src);
        ~DiamondTrap();

        DiamondTrap&  DiamondTrap::operator=(DiamondTrap const &rhs);
        
        void    whoAmI(void);
        using   ScavTrap::_energyPoints;
    
        private:
        std::string _name;
};

#endif