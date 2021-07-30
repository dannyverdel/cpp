#include <iostream>

class Entity
{
public:
    static int x, y;
    static void Print()
    {
        std::cout << "-----" << std::endl;
        std::cout << "x: " << x << std::endl;
        std::cout << "y: " << y << std::endl;
        std::cout << "-----" << std::endl;
    }
};

int Entity::x;
int Entity::y;

int main()
{
    Entity::x = 2;
    Entity::y = 3;

    Entity::x = 5;
    Entity::y = 8;

    Entity::Print();
}