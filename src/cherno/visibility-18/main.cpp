//
// Author: Danny Verdel
// Created on 31-07-2021
//

#include <iostream>

// Structs default visibility is public
// Class default visibility is private

class Entity
{
private:
    int X;

protected:
    int Y;

public:
    Entity()
    {
        X = 0;
        Y = 0;
    };
};

class Player : public Entity
{
public:
    Player()
    {
        X = 2;
        Y = 2;
    }
};

int main()
{
    Entity e;
    e.X = 2;
    e.Y = 2;
}