//
// Author: Danny Verdel
// Created on 30-07-2021
//

#include <iostream>

class Entity
{
public:
    float X, Y;
    Entity() {}
    Entity(float x, float y)
    {
        X = x;
        Y = y;
    }
    void Print()
    {
        std::cout << "x: " << X << std::endl;
        std::cout << "y: " << Y << std::endl;
    }
};

class Log
{
private:
    Log() {}

public:
    static void Write(const char *message)
    {
        std::cout << message << std::endl;
    }
};

int main()
{
    Entity e(1, 2);
    e.Print();
    Log::Write("Hello");
}