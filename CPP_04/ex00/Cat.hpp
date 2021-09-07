#ifndef __CAT
# define __CAT

# include "Animal.hpp"

# include <iostream>
# include <string>

class   Cat : public Animal
{
    public:
        Cat();
        Cat(Cat const &copy);
        ~Cat();
        Cat& operator=(Cat const &rhs);

        void    makeSound(void) const;
};

#endif