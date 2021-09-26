#include "ArrayClass.hpp"

int main(void)
{
    int             number[5] = {0, 21, 42, 84, 168};
    char const *    wordsChar[5] = {"Zero", "One", "Two", "Three", "Four"};
    std::string     wordsString[5] = {"Zero_s", "One_s", "Two_s", "Three_s", "Four_s"};

    Array< int >            arrayEmpty;
    Array< int >            arrayInt(5);
    Array< char const* >    arrayChar(5);
    Array< std::string >    arrayString(5);


    try
    {
        std::cout << "INT test" << std::endl;
        for (size_t i = 0; i < 5; i++)
        {
            arrayInt[i] = number[i];
            std::cout << arrayInt[i] << std::endl;
        }
        // arrayString[5] = wordsString[0]; // Will generate a exception;
        std::cout << std::endl << "CHAR CONST* test" << std::endl;
        for (size_t i = 0; i < 5; i++)
        {
            arrayChar[i] = wordsChar[i];
            std::cout << arrayChar[i] << std::endl;
        }
        std::cout << std::endl << "STRING test" << std::endl;
        for (size_t i = 0; i < 5; i++)
        {
            arrayString[i] = wordsString[i];
            std::cout << arrayString[i] << std::endl;
        }
    }
    catch(const std::exception& e)
    {
        std::cout << "ERROR - " << e.what() << std::endl;
    
    // int*        a = new int;
    // Array<int>* b = new Array<int>; 

    // std::cout << a << std::endl;
    // std::cout << b << std::endl;
    // delete a;
    // delete b;
    return 0;
}
