#ifndef __EASYFIND
# define __EASYFIND

# include <vector>
# include <list>
# include <deque>
# include <iostream>
# include <algorithm>

template< typename T>
typename T::iterator easyfind(T &container, int const &value)
{
    return std::find(container.begin(), container.end(), value);
}

#endif