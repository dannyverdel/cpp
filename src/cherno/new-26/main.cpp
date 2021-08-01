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
    Entity(const char *name)
        : m_Name(name) {}
    const char *GetName() const { return m_Name; }
};

int main()
{
    const char *username = "dannyverdel";
    Entity *e = new Entity(username);
    std::cout << e->GetName() << std::endl;
    delete e;
}