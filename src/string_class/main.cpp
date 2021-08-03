//
// Author: Danny Verdel
// Created on 02-08-2021
//

#include <iostream>
#include "string.h"

int main()
{
    String name = "Danny";
    const char *name2 = " Danny";
    std::string name3 = " Danny";
    String name4 = " Danny";

    name += name2;
    name += name3;
    name += name4;

    std::cout << name << std::endl;
}