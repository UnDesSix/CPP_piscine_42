#ifndef __CURE
# define __CURE

# include <iostream>
# include <string>
# include "ICharacter.hpp"

class   Cure : public AMateria
{
    private:
        Cure&  operator=(Cure const &rhs);
    
    public:
        Cure();
        Cure(Cure const &src);
        virtual ~Cure();

        virtual AMateria*   clone(void) const;
        virtual void        use(ICharacter &target);
};

#endif