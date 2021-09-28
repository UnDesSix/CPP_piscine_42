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
                static_cast< std::stack<T> >(*this) = static_cast< std::stack<T> >(rhs);
            return *this;
        }
    
        typedef T value_type;
        typedef typename std::stack<value_type>::container_type container_type;
        
        typedef typename container_type::iterator               iterator;
        typedef typename container_type::const_iterator         const_iterator;
        typedef typename container_type::reverse_iterator       reverse_iterator;
        typedef typename container_type::const_reverse_iterator const_reverse_iterator;

        iterator                begin() { return (this->c.begin());}
        iterator                end() { return (this->c.end());}
        const_iterator          begin() const { return (this->c.begin());}
        const_iterator          end() const { return (this->c.end());}
        reverse_iterator        rbegin() { return (this->c.rbegin());}
        reverse_iterator        rend() { return (this->c.rend());}
        const_reverse_iterator  rbegin() const { return (this->c.rbegin());}
        const_reverse_iterator  rend() const { return (this->c.rend());}

};

#endif