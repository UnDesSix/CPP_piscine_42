#ifndef __SCAVTRAPP
# define __SCAVTRAPP

# include "ClapTrap.hpp"

class  ScavTrap : virtual public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const &src);
        ~ScavTrap();

        ScavTrap&  operator=(ScavTrap const &rhs);

        void    guardGate(void);
        void    attack(std::string const &target);
    
    protected:
        bool _guardGateModeOn;
};

#endif