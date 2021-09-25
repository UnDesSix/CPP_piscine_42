#include <stdint.h>
#include <iostream>
#include "struct.hpp"


uintptr_t serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw);
}

int main(void)
{
    Data*       tmp_data = new Data();
    uintptr_t   tmp_value = 0;

    std::cout << "tmp_data addr: " << tmp_data << std::endl;
    std::cout << "tmp_value addr: " << tmp_value << std::endl;

    tmp_value = serialize(tmp_data);

    std::cout << "tmp_data addr: " << tmp_data << std::endl;
    std::cout << "tmp_value addr: " << tmp_value << std::endl;

    tmp_data = deserialize(tmp_value);

    std::cout << "tmp_data addr: " << tmp_data << std::endl;
    std::cout << "tmp_value addr: " << tmp_value << std::endl;
    delete tmp_data;
}