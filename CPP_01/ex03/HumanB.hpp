#ifndef __HUMANB
# define __HUMANB
#include "Weapon.hpp"
# include <string>
# include <iostream>

class HumanB
{
    public:
        HumanB(std::string name);
        ~HumanB();
        void attack(void) const;
        void setWeapon(Weapon &weapon);

    private:
        std::string m_name;
        Weapon *m_weapon;

};

#endif