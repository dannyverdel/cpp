//
// Author: Danny Verdel
// Created on 31-07-2021
//

#include <iostream>

class Entity
{
private:
    int *m_X;
    int *m_Y;
    mutable int var;

public:
    int *GetX() const
    {
        var = 2;
        m_X = 2;
        return m_X;
    };
    const int *const GetXAgain() const
    {
        *m_X = 2;
        return m_X;
    }
};

void PrintEntity(const Entity& e)
{
    std::cout << e.GetX() << std::endl;
}

int main()
{
    const int MAX_AGE = 90;

    const int *a = new int;
    *a = 2;
    a = (int *)&MAX_AGE;
    a = nullptr;

    int *const b = new int;
    *b = 2;
    b = (int *)&MAX_AGE;
    b = nullptr;

    const int *const c = new int;
    *c = 2;
    c = (int *)&MAX_AGE;
    c = nullptr;

    std::cout << *a << std::endl;
    std::cout << *b << std::endl;
}