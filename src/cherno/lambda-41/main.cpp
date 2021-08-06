//
// Author: Danny Verdel
// Created on 05-08-2021
//

#include <iostream>
#include <vector>
#include <algorithm>

void ForEach(const std::vector<int> &values, void (*func)(int))
{
    for (int value : values)
        func(value);
}

int main()
{
    std::vector<int> values = {1, 2, 3, 4, 5, 6};
    auto lambda = [](int value){ std::cout << "Value: " << value << std::endl; };
    ForEach(values, lambda);
}