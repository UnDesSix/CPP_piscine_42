#ifndef __SPAN
# define __SPAN

# include <iostream>
# include <exception>
# include <vector>
# include <cstdlib>
# include <algorithm>
# include <cstdlib>
# include <ctime>

class   Span
{
    public:
        Span(unsigned int n = 0);
        Span(std::vector<int>::iterator start, std::vector<int>::iterator end);
        Span(Span const &src);
        ~Span();

        Span&  operator=(Span const &rhs);

        void        addNumber(int const &value);
        int         shortestSpan(void);
        int         longestSpan(void);

        class   capacityMaxReachedException : public std::exception
        {
            public: 
                virtual const char*   what() const throw();
        };
        class   noSpanToFindEmptyException : public std::exception
        {
            public:
                virtual const char*   what() const throw();
        };
        class   noSpanToFindOneException : public std::exception
        {
            public:
                virtual const char*   what() const throw();
        };
    private:
        unsigned int      _n;
        std::vector<int>  _tab;
};

#endif