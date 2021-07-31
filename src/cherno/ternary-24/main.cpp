//
// Author: Danny Verdel
// Created on 31-07-2021
//

#include <iostream>

static int s_Level = 1;
static int s_Speed = 2;

int main()
{
    std::string rank = s_Level > 10 ? "Master" : "Beginner";
    std::cout << "Level: " << rank << std::endl;

    s_Speed = s_Level > 5 ? 10 : 5;
    std::cout << "Speed: " << s_Speed << std::endl;
}