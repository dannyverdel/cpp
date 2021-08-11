//
// Author: Danny Verdel
// Created on 07-08-2021
//

#include <iostream>
#include <string>
#include <tuple>

std::tuple<std::string, int> create_person()
{
    return {"Danny", 19};
}

int main()
{
    auto[name, age] = create_person();
    std::cout << name << ": " << age << std::endl;
}