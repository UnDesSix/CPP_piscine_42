#ifndef __CAT
# define __CAT

# include "Animal.hpp"
# include "Brain.hpp"

# include <iostream>
# include <string>

class   Cat : public AAnimal
{
    public:
        Cat();
        Cat(Brain const &brain);
        Cat(Cat const &copy);
        virtual ~Cat();
        Cat& operator=(Cat const &rhs);

        virtual void    makeSound(void) const;
        void            setAnIdea(size_t const &location, std::string const &idea);
        void            printIdeas(size_t const &number) const;
        void            printAddr(void) const;

    private:
        Brain* _brain;
};

#endif