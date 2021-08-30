#include "Karen.hpp"

int main(int argc, char const **argv)
{
    int i = 0;
    Karen   karen;
    const std::string   levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    if (argc != 2)
    {
        std::cout << "Wrong number of arguments." << std::endl;
        return 1;
    }
    while (i < 4 && levels[i] != (std::string)argv[1])
        i++;
    switch (i)
    {
        case 0:
            karen.complain("DEBUG");
            break;
        case 1:
            karen.complain("INFO");
            break;
        case 2:
            karen.complain("WARNING");
            break;
        case 3:
            karen.complain("ERROR");
            break;
        default:
            std::cout << "[ Probably complaining about insignifiant problems ]";
            std::cout << std::endl;
            break;
    }
    return 0;
}