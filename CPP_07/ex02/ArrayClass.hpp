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
        Array(Array const &src) : _n(src._n), _content(NULL) { *this = src; }
        ~Array() { delete [] _content; }

        Array&  operator=(Array const &rhs)
        {
            if (this != &rhs)
            {
                // std::cout << "_n value:" << rhs._n << std::endl;
                if (this->_content)
                    delete [] this->_content;
                this->_n = rhs._n;
                rhs._n == 0 ? this->_content = NULL : this->_content = new T [this->_n];
                // std::cout << "Content addr:" << this->_content << std::endl;
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