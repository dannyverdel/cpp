//
// Author: Danny Verdel
// Created on 31-07-2021
//

#include <iostream>

class Entity
{
private:
    const char *m_Name;

public:
    Entity()
        : m_Name("Unknown") {}
    Entity(const char *&name)
        : m_Name(name) {}
    const char *GetName() const { return m_Name; }
};

void PrintName(Entity& e)
{
    std::cout << e.GetName() << std::endl;
}

int main()
{
    const char *name = "dannyverdel";
    Entity *e = new Entity(name);
    PrintName(*e);
    delete e;
}