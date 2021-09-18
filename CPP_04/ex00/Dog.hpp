#ifndef __DOG
# define __DOG

# include "Animal.hpp"

# include <iostream>
# include <string>

class   Dog : public Animal
{
    public:
        Dog();
        Dog(Dog const &copy);
        virtual ~Dog();
        Dog& operator=(Dog const &rhs);

        virtual void    makeSound(void) const;
};

#endif