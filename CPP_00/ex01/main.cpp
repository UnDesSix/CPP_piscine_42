#include <string>
#include <iostream>
#include "Phonebook.hpp"

int readLine(std::string const& line, Phonebook &phoneBook)
{   
    if (line == "ADD")
        phoneBook.add();
    else if (line == "SEARCH")
        phoneBook.search();
    else if (line == "EXIT")
        return 0;
    else
        std::cout << "Invalid choice, try again.." << std::endl;
    return 1;
}

int main(void)
{
    int ret(1);
    std::string line;
    Phonebook phoneBook;

    while (ret)
    {   
        std::cout << "***************** MENU ********************" << std::endl;
        std::cout << "*   ADD    |     SEARCH     |    EXIT     *" << std::endl;
        std::cout << "*******************************************" << std::endl;
        if (!std::getline(std::cin, line))
            return 0;
        ret = readLine(line, phoneBook);
        std::cout << std::endl;
    }
    return 0;
}     
