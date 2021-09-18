#ifndef __ANIMAL
# define __ANIMAL

# include <iostream>
# include <string>

# define C_GREEN "\e[32m"
# define C_RED "\e[31m"
# define C_YELLOW "\e[33m"
# define C_CYAN "\e[34m"
# define C_RESET "\e[0m"

class   Animal
{
    public:
        Animal();
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