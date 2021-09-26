#ifndef __ITER
#define __ITER

#include <iostream>
#include <string>

template< typename T>
void    iter(T const *array, size_t const length, void(*f)(T const &elm))
{
    for (size_t i = 0; i < length; i++)
        (*f)(array[i]);
}

template< typename T>
void    printElement(T const &elm)
{
    std::cout << elm << std::endl;
}

#endif