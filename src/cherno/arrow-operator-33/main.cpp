//
// Author: Danny Verdel
// Created on 01-08-2021
//

#include <iostream>

class Entity
{
private:
    int x;

public:
    void Print() const { std::cout << "Hello!" << std::endl; }
    void SetInt(int value) { x = value; }
    friend std::ostream &operator<<(std::ostream &stream, Entity &entity);
};

class Scopedptr
{
private:
    Entity *m_Obj;

public:
    Scopedptr(Entity *e)
        : m_Obj(e) {}
    ~Scopedptr() { delete m_Obj; }
    Entity *operator->() { return m_Obj; }
};

std::ostream &operator<<(std::ostream &stream, Entity &entity)
{
    stream << entity.x;
    return stream;
};

int main()
{
    Entity *ptr;
    ptr->Print();
    ptr->SetInt(5);

    Entity *new_ptr = ptr;
    new_ptr->SetInt(10);

    std::cout << *ptr << std::endl;
    std::cout << *new_ptr << std::endl;

    Scopedptr entity = new Entity();
    entity->Print();
}