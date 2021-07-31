//
// Author: Danny Verdel
// Created on 31-07-2021
//

#include <iostream>

class Entity
{
private:
    mutable std::string m_Name;
    mutable int m_DebugCount;

public:
    void SetName(const char *name) const { m_Name = name; }
    const std::string &GetName() const
    {
        if(m_DebugCount == 0)
            m_DebugCount++;
        else
            m_DebugCount = 0;
        return m_Name;
    }
};

int main()
{
    const Entity e;
    e.SetName("Danny");
    std::cout << e.GetName() << std::endl;
}