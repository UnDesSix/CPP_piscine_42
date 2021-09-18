#ifndef __CAT
# define __CAT

# include "Animal.hpp"
# include "Brain.hpp"

# include <iostream>
# include <string>

class   Cat : public Animal
{
    public:
        Cat();
        Cat(Cat const &copy);
        virtual ~Cat();
        Cat& operator=(Cat const &rhs);

        virtual void    makeSound(void) const;

    private:
        Brain* _brain;
};

#endif