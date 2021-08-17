#ifndef __WEAPON
# define __WEAPON
# include <string>

class   Weapon
{
    public:
        Weapon();
        Weapon(std::string type);
        ~Weapon();
        void setType(std::string type);
        std::string getType(void) const;

    private:
        std::string m_type;
};

#endif