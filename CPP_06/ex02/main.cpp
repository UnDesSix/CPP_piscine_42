#include <iostream>
#include <ctime>
#include <cstdlib>
#include <exception>

#include "base.hpp"

Base* generate(void)
{
    int randomVar;
    Base* randomBase;

    std::srand(std::time(NULL));
    randomVar = std::rand() % 3;
    if (randomVar == 1)
        randomBase = new A();
    else if (randomVar == 2)
        randomBase = new B();
    else
        randomBase = new C();
    return randomBase;
}

void    identify(Base* p)
{
    A   *a;
    B   *b;

    if ((a = dynamic_cast<A*>(p)) != NULL)
        std::cout << "A" << std::endl;
    else if ((b = dynamic_cast<B*>(p)) != NULL)
        std::cout << "B" << std::endl;
    else
        std::cout << "C" << std::endl;
}

void    identify(Base& p)
{
    try
    {
        A   &a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << "A" << std::endl;
        return;
    }
    catch(std::exception &bc) {}
    try
    {
        B   &b = dynamic_cast<B&>(p);
        (void)b;
        std::cout << "B" << std::endl;
        return;
    }
    catch(std::exception &bc) {}
    try
    {
        C   &c = dynamic_cast<C&>(p);
        (void)c;
        std::cout << "C" << std::endl;
        return;
    }
    catch(std::exception &bc) {}
    
}

int main(void)
{
    Base* randomBase;

    randomBase = generate();

    identify(randomBase);
    identify(*randomBase);
    delete randomBase;
    return 0;
}
