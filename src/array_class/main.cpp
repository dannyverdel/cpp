//
// Author: Danny Verdel
// Created on 04-08-2021
//

#include <iostream>
#include "../string_class/string.h"
#include "array.h"
#include <array>

int main()
{
    dstd::Array<int, 3> data;
    data[0] = 1;
    data[1] = 2;
    data[2] = 3;

    std::cout << data.begin() << std::endl;
    std::cout << *data.begin() << std::endl;
    std::cout << data.end() << std::endl;
    std::cout << *data.end() << std::endl;
}