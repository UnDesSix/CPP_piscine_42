#include <iostream>
#include <string>

int main()
{
    std::string str("HI THIS IS BRAIN");
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "String address (Classic method):   " << &str << std::endl;
    std::cout << "String address (Pointer method):   " << stringPTR << std::endl;
    std::cout << "String address (Reference method): " << &stringREF << std::endl;

    std::cout << "String content (Classic method):   " << str << std::endl;
    std::cout << "String content (Pointer method):   " << *stringPTR << std::endl;
    std::cout << "String content (Reference method): " << stringREF << std::endl;
    return 0;
}