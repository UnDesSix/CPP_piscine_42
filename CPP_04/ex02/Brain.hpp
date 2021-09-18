#ifndef __BRAIN
# define __BRAIN

# include <string>
# include <iostream>

# define C_GREEN "\e[32m"
# define C_RED "\e[31m"
# define C_YELLOW "\e[33m"
# define C_CYAN "\e[34m"
# define C_RESET "\e[0m"

class   Brain
{
    public:
        Brain();
        Brain(Brain const &copy);
        ~Brain();
        Brain& operator=(Brain const &rhs);

        void    setAnIdea(size_t const &location, std::string const &idea);
        void    printIdeas(size_t const &number) const;

    private:
        std::string _ideas[100];
};

#endif