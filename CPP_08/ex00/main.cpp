#include "easyfind.hpp"


#define CONTAINER_SIZE 10
// #define CONTAINER_TYPE vector
// #define CONTAINER_TYPE deque
#define CONTAINER_TYPE list


int main(void)
{
    std::CONTAINER_TYPE< int >  myTab;

    for (size_t i(0); i < CONTAINER_SIZE; i++)
        myTab.push_back(i);
    for (size_t i(0); i < CONTAINER_SIZE * 2; i++)
    {
        if (easyfind< std::CONTAINER_TYPE< int > >(myTab, i) == myTab.end())
            std::cout << "Could not find occurence of the value (" << i << ") in the container."<< std::endl;
        else
            std::cout << "Occurence of the value (" << i << ") found in the container."<< std::endl;
    }
    return 0;
}