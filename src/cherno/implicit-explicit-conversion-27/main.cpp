//
// Author: Danny Verdel
// Created on 31-07-2021
//

#include <iostream>

class Entity
{
private:
    const char *m_Name;
    int m_Age;

public:
    explicit Entity(const char *&name)
        : m_Name(name), m_Age(-1) {}
    Entity(int age)
        : m_Name("Unknown"), m_Age(age) {}
    void PrintData() const
    {
        std::cout << "I am " << m_Name << " and I am " << m_Age << " years old!" << std::endl;
    }
};

void PrintEntity(const Entity& entity)
{
    entity.PrintData();
}

int main()
{
    const char *username = "Danny";
    // Entity a = username;
    Entity a(username);
    Entity b = 19;

    PrintEntity(Entity(username));
    PrintEntity(19);
}
