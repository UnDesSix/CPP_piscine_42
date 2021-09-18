#ifndef __WRONGANIMAL
# define __WRONGANIMAL

# include <iostream>
# include <string>

# define C_GREEN "\e[32m"
# define C_RED "\e[31m"
# define C_YELLOW "\e[33m"
# define C_CYAN "\e[34m"
# define C_RESET "\e[0m"

class   WrongAnimal
{
    public:
        WrongAnimal();
        WrongAnimal(WrongAnimal const &copy);
        virtual ~WrongAnimal();
        WrongAnimal& operator=(WrongAnimal const &rhs);
    
        void            makeSound(void) const;
        std::string     getType(void) const;
        void            setType(std::string const &type);

    protected:
        std::string _type;
};

#endif