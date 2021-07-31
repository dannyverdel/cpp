//
// Author: Danny Verdel
// Created on 31-07-2021
//

#include <iostream>

class Entity
{
private:
    std::string m_Name;
    int m_Score;

public:
    Entity()
        : m_Name("Unknown"), m_Score(0) {}
    Entity(const std::string &name)
        : m_Name(name), m_Score(10) {}
    void PrintPlayer() {
        std::cout << m_Name << ": " << m_Score << std::endl;
    }
};

int main()
{
    Entity e0;
    e0.PrintPlayer();

    Entity e1("Danny");
    e1.PrintPlayer();
}