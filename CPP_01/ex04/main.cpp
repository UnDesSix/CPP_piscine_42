#include <iostream>
#include <string>
#include <fstream>

void   ft_replace(std::ifstream &input, std::ofstream &output, std::string &search, std::string &replace)
{
    std::string buffer;
    std::size_t found;
    std::size_t len;

    len = search.length();
    while (getline(input, buffer))
    {
        found = buffer.find(search);
        if (found == std::string::npos)
            output << buffer;
        else
        {
            while (found != std::string::npos)
            {
                if (found == 0)
                {
                    output << replace;
                    buffer = buffer.substr(found + len, std::string::npos);
                }
                else
                {
                    output << buffer.substr(0, found);
                    buffer = buffer.substr(found, std::string::npos);
                }
                found = buffer.find(search);
            }
            output << buffer;
        }
        output << std::endl;
    }
}

int main(int ac, char **av)
// int main(void)
{
    std::string     file;
    std::string     search;
    std::string     replace;
    std::ifstream   input;
    std::ofstream   output;

    if (ac != 4)
    {
        std::cerr << "Nomber of argument is incorrect." << std::endl;
        return 1; 
    }
    file = av[1];
    search  = av[2];
    replace = av[3];
    if (search.length() == 0 || replace.length() == 0)
    {
        std::cerr << "Strings must not be empty." << std::endl;
        return 1;
    }
    input.open(file.c_str());
    if (input.good() == false)
    {
        std::cerr << "Error occurs while opening input file." << std::endl;
        return 1;
    }
    output.open((file + ".replace").c_str());
    if (output.good() == false)
    {
        std::cerr << "Error occurs while creating output file." << std::endl;
        input.close();
        return 1;
    }
    ft_replace(input, output, search, replace);
    input.close();
    output.close();
}