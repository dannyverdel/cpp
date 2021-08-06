//
// Author: Danny Verdel
// Created on 04-08-2021
//

#include <iostream>
#include <vector>

void PrintValue(int a)
{
    std::cout << a << std::endl;
}

void ForEach(const std::vector<int> &values, void (*pv)(int))
{
    for (int value : values)
        pv(value);
}

int main()
{
    typedef void (*pv)(int);
    pv func = PrintValue;
    func(5);

    std::vector<int> values = {1, 2, 3, 4, 5, 6};
    ForEach(values, [](int value) { std::cout << value << std::endl; });
}