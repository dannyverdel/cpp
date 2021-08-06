//
// Author: Danny Verdel
// Created on 04-08-2021
//

#include <iostream>
#include <array>



void PrintArray(const std::array<int, 5> &data)
{
    for (int i = 0; i < 5; i++)
        std::cout << "element " << i << ": " << data[i] << std::endl;
}

int main()
{
    std::array<int, 5> data;
    for (int i = 0; i < 5; i++)
        data[i] = i + 1;

    std::cout << "Base: " << data.begin() << std::endl;
    std::cout << "Size: " << data.size() << std::endl;

    PrintArray(data);
}