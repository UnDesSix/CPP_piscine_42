#ifndef __MUTANTSTACK
# define __MUTANTSTACK

# include <stack>

template< typename T>
class   MutantStack : public std::stack<T> 
{
    public:
        MutantStack() {}
        MutantStack(MutantStack const &src) { *this = src; }
        virtual ~MutantStack() {}

        MutantStack& operator=(MutantStack const &rhs)
        {
            if (this != &rhs)
                static_cast<std::stack<T>>(*this) = static_cast<std::stack<T>>(rhs);
            return *this;
        }
};

#endif