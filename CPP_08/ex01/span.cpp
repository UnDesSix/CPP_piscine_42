#include "span.hpp"

/*
** ---------------- CONSTRUCTOR ----------------
*/
Span::Span(unsigned int n) : _n(n), _tab(0)
{}

Span::Span(std::vector<int>::iterator start, std::vector<int>::iterator end) : _tab(std::vector<int>(start, end))
{
    _n = _tab.size();
}

Span::Span(Span const &src) : _n(src._n), _tab(src._tab)
{}

/*
** ---------------- DESTRUCTOR ----------------
*/
Span::~Span()
{}

/*
** -------------------- OVERLOAD --------------------
*/
Span&  Span::operator=(Span const &rhs)
{
    if (this != &rhs)
    {
        this->_n = rhs._n;
        this->_tab = rhs._tab;
    }
    return *this;
}

/*
** ---------------- MEMBER FUCNCTIONS ----------------
*/
void   Span::addNumber(int const &value)
{
    if (this->_tab.size() < this->_n)
        this->_tab.push_back(value);
    else
        throw capacityMaxReachedException();
}

int  Span::shortestSpan(void)
{
    std::vector<int>::iterator    itA = this->_tab.begin();
    std::vector<int>::iterator    itB;
    std::vector<int>::iterator    ite = this->_tab.end();
    int                           Span = this->longestSpan();
    int                           tmpSpan;

    if (_n == 0)
        noSpanToFindEmptyException();
    else if (_n == 1)
        noSpanToFindOneException();
    std::sort(itA, ite);
    itB = itA + 1;
    while (itB != ite)
    {
        tmpSpan = *itB - *itA;
        if (tmpSpan < Span)
            Span = tmpSpan;
        itA++;
        itB++;
    }
    return Span;
}

int  Span::longestSpan(void)
{
    std::vector<int>::iterator    itA = this->_tab.begin();
    std::vector<int>::iterator    ite = this->_tab.end();

    if (this->_tab.empty() == true)
        noSpanToFindEmptyException();
    else if (this->_tab.size() == 1)
        noSpanToFindOneException();
    return (*std::max_element(itA, ite) - *std::min_element(itA, ite));
}

/*
** ---------------- EXCEPTION ----------------
*/
const char* Span::capacityMaxReachedException::what() const throw()
{
    return ("ERROR - Capacity max is reached");
}

const char* Span::noSpanToFindEmptyException::what() const throw()
{
    return ("ERROR - No span to find, empty container");
}

const char* Span::noSpanToFindOneException::what() const throw()
{
    return ("ERROR - No span to find, only one element in the container");
}