//
// Author: Danny Verdel
// Created on 04-08-2021
//

#include <iostream>
#include <vector>

auto GetName()
{
    return "Danny";
}

int main()
{
    auto string = GetName();
    std::cout << string << std::endl;
}