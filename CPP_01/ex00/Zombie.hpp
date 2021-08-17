#ifndef __ZOMBIE
# define __ZOMBIE
# include <string>
# include <iostream>

class Zombie
{
    public:
        Zombie();
        Zombie(std::string name);
        ~Zombie();
        void announce(void) const;
    
    private:
        std::string m_name;
};

#endif