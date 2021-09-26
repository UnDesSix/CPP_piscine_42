#include "whatever.hpp"

int main(void)
{
    {   
        int a = 0;
        int b = 42;

        std::cout << "a is: " << a << std::endl;
        std::cout << "b is: " << b << std::endl;
        std::cout << "max is: " << max<int>(a, b) << std::endl;
        std::cout << "min is: " << min<int>(a, b) << std::endl;
        ::swap<int>(a, b);
        std::cout << "a is now: " << a << std::endl;
        std::cout << "b is now: " << b << std::endl;
        std::cout << "max is: " << max<int>(a, b) << std::endl;
        std::cout << "min is: " << min<int>(a, b) << std::endl;
    }
    std::cout << std::endl;
    {   
        float a = 0;
        float b = 42;

        std::cout << "a is: " << a << std::endl;
        std::cout << "b is: " << b << std::endl;
        std::cout << "max is: " << max<float>(a, b) << std::endl;
        std::cout << "min is: " << min<float>(a, b) << std::endl;
        ::swap<float>(a, b);
        std::cout << "a is now: " << a << std::endl;
        std::cout << "b is now: " << b << std::endl;
        std::cout << "max is: " << max<float>(a, b) << std::endl;
        std::cout << "min is: " << min<float>(a, b) << std::endl;
    }
    std::cout << std::endl;
    {   
        char const* a = "Hello";
        char const* b = "Goodbye";

        std::cout << "a is: " << a << std::endl;
        std::cout << "b is: " << b << std::endl;
        ::swap<char const*>(a, b);
        std::cout << "a is now: " << a << std::endl;
        std::cout << "b is now: " << b << std::endl;
    }
    std::cout << std::endl;
    std::cout << std::endl;
    {   
        std::string a = "Hello";
        std::string b = "Goodbye";

        std::cout << "a is: " << a << std::endl;
        std::cout << "b is: " << b << std::endl;
        ::swap<std::string>(a, b);
        std::cout << "a is now: " << a << std::endl;
        std::cout << "b is now: " << b << std::endl;
    }
    std::cout << std::endl;


    return 0;
}