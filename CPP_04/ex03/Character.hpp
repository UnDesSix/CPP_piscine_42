#ifndef __CHARACTER
# define __CHARACTER

# include <iostream>
# include <string>
# include "ICharacter.hpp"

# define INV_SIZE 4

class   Character : public ICharacter
{
    public:
        Character();
        Character(std::string const &name);
        Character(Character const &copy);
        virtual ~Character();
        Character&  operator=(Character const &rhs);

        virtual std::string const&  getName(void) const;
        virtual void                equip(AMateria* m);
        virtual void                unequip(int idx);
        virtual void                use(int idx, ICharacter& target);

    private:
        std::string const   _name;
        AMateria**          _inventory;
};

#endif