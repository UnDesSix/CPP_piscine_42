#ifndef __WRONGCAT
# define __WRONGCAT

# include "WrongAnimal.hpp"

# include <iostream>
# include <string>

class   WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(WrongCat const &copy);
        ~WrongCat();
        WrongCat& operator=(WrongCat const &rhs);

        void    makeSound(void) const;
};

#endif