#ifndef __FRAGTRAP
# define __FRAGTRAP

# include "ClapTrap.hpp"

class  FragTrap : public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(FragTrap const &src);
        ~FragTrap();

        FragTrap&  operator=(FragTrap const &rhs);
        
        void    highFivesGuys(void);
        void    attack(std::string const &target);
};

#endif