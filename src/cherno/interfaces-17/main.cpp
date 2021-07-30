//
// Author: Danny Verdel
// Created on 30-07-2021
//

#include <iostream>

class Printable
{
public:
    virtual std::string GetClassName() = 0;
};

class Entity : public Printable
{
public:
    virtual std::string GetName() { return "Entity"; }
    std::string GetClassName() { return "Entity"; }
};

class Player : public Entity
{
private:
    std::string m_Name;

public:
    Player(const std::string &name) : m_Name(name) {}
    std::string GetName() { return m_Name; }
    std::string GetClassName() { return "Player"; }
};

void PrintName(Entity *e)
{
    std::cout << e->GetName() << std::endl;
}

class A : public Printable
{
public:
    std::string GetClassName() { return "A"; }
};

void Print(Printable *obj)
{
    std::cout << obj->GetClassName() << std::endl;
}

int main()
{
    Entity *e = new Entity();
    PrintName(e);

    Player *p = new Player("MrSick007");
    PrintName(p);

    A *a = new A();

    Print(e);
    Print(p);
    Print(a);
}