#ifndef __DOG
# define __DOG

# include "Animal.hpp"
# include "Brain.hpp"


# include <iostream>
# include <string>

class   Dog : public AAnimal
{
    public:
        Dog();
        Dog(Brain &brain);
        Dog(Dog const &copy);
        virtual ~Dog();
        Dog& operator=(Dog const &rhs);

        virtual void    makeSound(void) const;
        void            setAnIdea(size_t const &location, std::string const &idea);
        void            printIdeas(size_t const &number) const;
        void            printAddr(void) const;


    private:
        Brain* _brain;
};

#endif