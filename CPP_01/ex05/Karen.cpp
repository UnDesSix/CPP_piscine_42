#include "Karen.hpp"

Karen::Karen()
{

}

Karen::~Karen()
{

}

void    Karen::complain(void) const
{

}

void    Karen::debug(void) const
{
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!";
    std::cout << std::endl;
}

void    Karen::info(void) const
{
    std::cout <<  "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!";
    std::cout << std::endl;
}

void    Karen::warning(void) const
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month.";
    std::cout << std::endl;
}
void    Karen::error(void) const
{
    std::cout << "This is unacceptable, I want to speak to the manager now.";
    std::cout << std::endl;
}