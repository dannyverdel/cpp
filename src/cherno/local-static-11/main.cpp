//
// Author: Danny Verdel
// Created on 30-07-2021
//

#include <iostream>

void Function()
{
    static int i = 0;
    i++;
    std::cout << i << std::endl;
}

int main()
{
    Function();
    Function();
    Function();
    Function();
    Function();
}