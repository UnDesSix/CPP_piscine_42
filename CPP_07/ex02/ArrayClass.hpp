#ifndef __ARRAYCLASS
# define __ARRAYCLASS

# include <iostream>
# include <string>
# include <exception>

template< typename T>
class Array
{
    public:
        Array() : _n(0), _content(NULL) {}
        Array(unsigned int n) : _n(n) { _content = new T [n]; }
        Array(Array const &src) { *this = src; }
        ~Array() { delete [] _content; }

        Array&  operator=(Array const &rhs)
        {
            if (this != &rhs)
            {
                this->_n = rhs._n;
                this->_content = new T [this->_n];
                for (size_t i = 0; i < this->_n; i++)
                    this->_content[i] = rhs._content[i];
            }
            return *this;
        }

        T&       operator[](size_t idx)
        {
            if (idx >= this->_n)
                throw Array::outOfLimitsException();
            return (this->_content[idx]);
        }

        unsigned int    getSize(void) const { return _n; }

        class outOfLimitsException : public std::exception
        {
            public:
                virtual const char*   what() const throw() { return "This element is out of limits"; }
        };

    private:
        unsigned int    _n;
        T*              _content;
};

#endif