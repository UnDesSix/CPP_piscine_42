#ifndef __AMATERIA
# define __AMATERIA

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class   ICharacter;

class   AMateria
{
    protected:
        std::string _type;
        AMateria&  operator=(AMateria const &rhs);
    
    public:
        AMateria();
        AMateria(std::string const &type);
        AMateria(AMateria const &src);
        virtual ~AMateria();

        std::string const&  getType(void) const; // Returns the materia type
        virtual AMateria*   clone(void) const = 0;
        virtual void        use(ICharacter &target);
};

#endif