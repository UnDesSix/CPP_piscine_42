#ifndef __HUMANA
# define __HUMANA
#include "Weapon.hpp"
# include <string>
# include <iostream>

class HumanA
{
    public:
        HumanA(std::string name, Weapon &weapon);
        ~HumanA();
        void attack(void) const;

    private:
        std::string m_name;
        Weapon &m_weapon;

};

#endif