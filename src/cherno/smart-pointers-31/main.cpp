//
// Author: Danny Verdel
// Created on 01-08-2021
//

#include <iostream>

class Entity
{

public:
    Entity()
    {
        std::cout << "Created entity" << std::endl;
    }
    ~Entity()
    {
        std::cout << "Destroyed entity" << std::endl;
    }
    void Print()
    {
        std::cout << "I am Danny" << std::endl;
    }
};

int main()
{
    {
        // std::unique_ptr<Entity> entity(new Entity());
        std::shared_ptr<Entity> se;
        {
            std::shared_ptr<Entity> se1 = std::make_shared<Entity>();
            se = se1;
        }
    }
}