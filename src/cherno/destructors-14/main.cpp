//
// Author: Danny Verdel
// Created on 30-07-2021
//

#include <iostream>

class Entity
{
public:
    float X, Y;
    Entity()
    {
        std::cout << "Constructed Entity!" << std::endl;
        X = 0.0f;
        Y = 0.0f;
    }
    ~Entity()
    {
        std::cout << "Destroyed Entity!" << std::endl;
    }
    void Print()
    {
        std::cout << "X: " << X << std::endl;
        std::cout << "Y: " << Y << std::endl;
    }
};

int main()
{
    Entity e;
    e.Print();
}