//
// Author: Danny Verdel
// Created on 30-07-2021
//

#include <iostream>

class Entity
{
public:
    float X;
    float Y;

    void Move(float xa, float ya)
    {
        X += xa;
        Y += ya;
    }
};

class Player : public Entity
{
public:
    const char *name;
    void PrintName()
    {
        std::cout << name << std::endl;
    }
};

int main()
{
    char *name;
    name = new char[32];
    std::cout << "Enter your username: ";
    std::cin >> name;

    Player player;
    player.name = new char[strlen(name) + 1];
    player.name = name;
    player.PrintName();
}