//
// Author: Danny Verdel
// Created on 30-07-2021
//

#include <iostream>

class Entity
{
public:
    virtual std::string GetName() { return "Entity"; } // This works
   // std::string GetName() { return "Entity"; } // This will generate the same output when using the PrintName() function
};

class Player : public Entity
{
private:
    std::string m_Name;

public:
    Player(const std::string &name) : m_Name(name) {}
    std::string GetName() { return m_Name; }
};

void PrintName(Entity *e)
{
    std::cout << e->GetName() << std::endl;
}

int main()
{
    Entity *e = new Entity();
    std::cout << e->GetName() << std::endl;

    Player *p = new Player("Danny");
    std::cout << p->GetName() << std::endl;

    PrintName(e);
    PrintName(p);
}