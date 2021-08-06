//
// Author: Danny Verdel
// Created on 05-08-2021
//

#include <algorithm>
#include <iostream>
#include <vector>

namespace apple
{
    void print(const char *text) { std::cout << text << std::endl; }
} // namespace apple

namespace orange
{
    void print(const char *text)
    {
        std::string temp = text;
        std::reverse(temp.begin(), temp.end());
        std::cout << temp << std::endl;
    }
} // namespace orange

namespace Log
{
    void Write(const char *text)
    {
        std::cout << text;
    }
    void WriteLine(const char *text)
    {
        std::cout << text << std::endl;
    }
}

int main()
{
    using namespace apple;
    print("Hello");
    
    orange::print("Hello");

    return 0;
}