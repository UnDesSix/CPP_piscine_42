#ifndef __ANIMAL
# define __ANIMAL

# include <iostream>
# include <string>

# define C_GREEN "\e[32m"
# define C_RED "\e[31m"
# define C_YELLOW "\e[33m"
# define C_CYAN "\e[34m"
# define C_RESET "\e[0m"

class   AAnimal
{
    public:
        AAnimal();
        AAnimal(AAnimal const &copy);
        virtual ~AAnimal();
        AAnimal& operator=(AAnimal const &rhs);
    
        virtual void    makeSound(void) const = 0;
        std::string     getType(void) const;
        void            setType(std::string const &type);

    protected:
        std::string _type;
};

#endif