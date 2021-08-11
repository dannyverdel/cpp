//
// Author: Danny Verdel
// Created on 07-08-2021
//

#include <iostream>

struct Entity
{
    int x, y;
    Entity(int x, int y)
        : x(x), y(y) {}
    int *get_position()
    {
        return &x;
    }
};

int main()
{
    int a = 50;
    double value = *(double *)&a;
    std::cout << value << std::endl;

    Entity e(5, 8);
    int *position = (int *)&e;
    std::cout << position[0] << ", " << position[1] << std::endl;
}