//
// Author: Danny Verdel
// Created on 03-08-2021
//

#include <iostream>

static void assign(std::string &name, int &age)
{
    name = "Danny";
    age = 18;
}

static void other_assign(std::string *name, int *age)
{
    *name = "Danny";
    *age = 18;
}

int main()
{
    std::string name;
    int age;

    assign(name, age);
    other_assign(&name, &age);

    std::cout << name << std::endl;
    std::cout << age << std::endl;
}