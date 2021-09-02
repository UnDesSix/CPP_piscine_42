#ifndef __SCAVTRAPP
# define __SCAVTRAPP

# include "ClapTrap.hpp"

class  ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const &src);
        ~ScavTrap();

        ScavTrap&  operator=(ScavTrap const &rhs);

        void    guardGate(void);
    
    private:
        bool _guardGateModeOn;
};

#endif