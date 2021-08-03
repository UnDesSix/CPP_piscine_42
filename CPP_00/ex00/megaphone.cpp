#include <string>
#include <iostream>
#include <cstring>


std::string upperString(char *argv)
{
    int i(0);
    std::string tmpString;

    while (argv[i] != '\0')
        tmpString += std::toupper(argv[i++]);
    return tmpString;
}

int main(int argc, char **argv)
{
    int i(1);
    std::string finalString;

    if (argc < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    while (i < argc)
        finalString += upperString(argv[i++]);
    std::cout << finalString << std::endl;
    return 0;
}