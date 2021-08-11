//
// Author: Danny Verdel
// Created on 07-08-2021
//

#include <iostream>

class Base
{
public:
    Base() { std::cout << "Base Constructed" << std::endl; }
    virtual ~Base() { std::cout << "Base Destructor" << std::endl; }
};

class Derived : public Base
{
public:
    Derived() { m_array = new int[5]; std::cout << "Derived Constructed" << std::endl; }
    ~Derived() { delete[] m_array; std::cout << "Derived Destructor" << std::endl; }
private:
int *m_array;
};

int main()
{
    Base *base = new Base();
    delete base;
    std::cout << "------------------------" << std::endl;
    Derived *derived = new Derived();
    delete derived;
    std::cout << "------------------------" << std::endl;
    Base *poly = new Derived();
    delete poly;
}