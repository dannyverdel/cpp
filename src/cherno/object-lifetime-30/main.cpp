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
};

class ScopedPtr
{
private:
    Entity *m_Ptr;

public:
    ScopedPtr(Entity *ptr)
        : m_Ptr(ptr) {}

    ~ScopedPtr() { delete m_Ptr; }
};

void createArray(int *array)
{
    int i;
    for (i = 0; i < 5; i++)
        *(array + i) = i + 1;
}

int main()
{
    int array[5];
    createArray(array);
    int i;
    for (i = 0; i < 5; i++)
        std::cout << *(array + i) << std::endl;

    {
        ScopedPtr e = new Entity;
    }
}