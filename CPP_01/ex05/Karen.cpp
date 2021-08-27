#include "Karen.hpp"

Karen::Karen()
{

}

Karen::~Karen()
{

}

void    Karen::complain(const std::string level) const
{
    const std::string   levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    const fcn_t         functions[4] = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};

    for(int i = 0; i < 4; i++)
    {
         if (level == levels[i])
        {
            (this->*(functions[i]))();
            return ;
        }
    }
    std::cout << "Unable to find level." << std::endl;
}

void    Karen::debug(void) const
{
    std::cout << "[DEBUG] Here's a debug message";
    std::cout << std::endl;
}

void    Karen::info(void) const
{
    std::cout <<  "[INFO] Here's an info message";
    std::cout << std::endl;
}

void    Karen::warning(void) const
{
    std::cout << "[WARNING] Here's a warning message";
    std::cout << std::endl;
}
void    Karen::error(void) const
{
    std::cout << "[ERROR] Here's a error message";
    std::cout << std::endl;
}