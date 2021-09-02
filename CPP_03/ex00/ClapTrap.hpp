#ifndef __CLAPTRAP
# define __CLAPTRAP

# include <iostream>
# include <string>

# define C_GREEN "\e[32m"
# define C_RED "\e[31m"
# define C_YELLOW "\e[33m"
# define C_RESET "\e[0m"

class   ClapTrap
{
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const &src);
        ~ClapTrap();

        ClapTrap&  operator=(ClapTrap const &rhs);

        void    attack(std::string const &target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);

    private:
        std::string _name;
        int         _hitpoints;
        int         _energyPoints;
        int         _attackDamage; 
};

#endif