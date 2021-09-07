#ifndef __ANIMAL
# define __ANIMAL

# include <iostream>
# include <string>

class   Animal
{
    public:
        Animal();
        Animal(std::string type);
        Animal(Animal const &copy);
        virtual ~Animal();
        Animal& operator=(Animal const &rhs);
    
        virtual void    makeSound(void) const;
        std::string     getType(void) const;
        void            setType(std::string const &type);

    protected:
        std::string _type;
};

#endif