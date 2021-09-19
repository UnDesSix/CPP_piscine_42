#ifndef __ICE
# define __ICE

# include <iostream>
# include <string>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class   Ice : public AMateria
{
    private:
        Ice&  operator=(Ice const &rhs);
    
    public:
        Ice();
        Ice(Ice const &src);
        virtual ~Ice();

        virtual AMateria*   clone(void) const;
        virtual void        use(ICharacter &target);
};

#endif