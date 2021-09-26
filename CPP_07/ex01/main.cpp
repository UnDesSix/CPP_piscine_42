#include "iter.hpp"

int main(void)
{
    int         arrayOfInt[] = {0, 1, 2, 3, 4};
    char const* arrayOfChar[] = {"Zero", "One", "Two", "Three", "Four"};
    std::string arrayOfString[] = {"Zero_s", "One_s", "Two_s", "Three_s", "Four_s"};


    std::cout << "INT Test:" << std::endl;
    iter<int>(arrayOfInt, 5, &printElement);
    std::cout << std::endl;

    std::cout << "CONST CHAR* Test:" << std::endl;
    iter<char const*>(arrayOfChar, 5, &printElement);
    std::cout << std::endl;

    std::cout << "STD::STRING Test:" << std::endl;
    iter<std::string>(arrayOfString, 5, &printElement);
    std::cout << std::endl;
}