//
// Author: Danny Verdel
// Created on 30-07-2021
//

#include <iostream>

enum Example : char
{
    A = 5,
    B,
    C
};

int main()
{
    Example value = B;

    if(value == 6)
    {
        return 1;
    }

    std::cout << "Hello World!" << std::endl;
}