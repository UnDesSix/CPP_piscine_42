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
        ~Dog();
        Dog& operator=(Dog const &rhs);

        void    makeSound(void) const;
};

#endif