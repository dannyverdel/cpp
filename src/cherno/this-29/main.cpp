//
// Author: Danny Verdel
// Created on 01-08-2021
//

#include <iostream>

class Entity
{
public:
    int x, y;
    Entity(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
};

std::ostream &operator<<(std::ostream &stream, Entity &other)
{
    stream << other.x;
    return stream;
}

int main()
{
    Entity e(5, 5);
    std::cout << e << std::endl;
}