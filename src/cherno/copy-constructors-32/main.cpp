//
// Author: Danny Verdel
// Created on 01-08-2021
//

#include <iostream>

class String
{
private:
    char *m_Buffer;
    unsigned int m_Size;

public:
    String(const char *string)
    {
        m_Size = strlen(string) + 1;
        m_Buffer = new char[m_Size];
        memcpy(m_Buffer, string, m_Size);
    }
    ~String()
    {
        delete m_Buffer;
    }
    void SetName(const char *string)
    {
        m_Size = strlen(string) + 1;
        m_Buffer = new char[m_Size];
        memcpy(m_Buffer, string, m_Size);
    }
    friend std::ostream &operator<<(std::ostream &stream, const String &string);
};

std::ostream &operator<<(std::ostream &stream, const String &string)
{
    stream << string.m_Buffer;
    return stream;
}

struct Vector2
{
    float x, y;
    Vector2() {}
    Vector2(float x, float y)
        : x(x), y(y) {}
    void Print()
    {
        std::cout << "x: " << x << std::endl;
        std::cout << "y: " << y << std::endl;
    }
};

void Increment(int &integer)
{
    integer++;
}

int main()
{
    int a = 2;
    int b = a;
    b = 3; // Copy of primitive data types, a remains untouched
    Increment(b);
    std::cout << b << std::endl;

    Vector2 c(2.5f, 2.5f);
    Vector2 d = c;
    d.x = 5; // Object copy, a remains untouched

    std::cout << std::endl
              << "c: " << std::endl;
    c.Print();

    std::cout << std::endl
              << "d: " << std::endl;
    d.Print();

    Vector2 *e = new Vector2(5.5f, 5.5f);
    Vector2 *f = e;
    f->x = 5.0f; // Overrides both objects

    std::cout << std::endl
              << "e: " << std::endl; 
    e->Print();

    std::cout << std::endl
              << "f: " << std::endl;
    f->Print();

    String *insta = new String("dannyverdel");
    String *gamertag = new String("MrSick007");
    std::cout << *insta << std::endl;
    std::cout << *gamertag << std::endl;

    std::cout << std::endl;

    insta = gamertag;
    insta->SetName("LuckyDanny");
    std::cout << *insta << " - " << *gamertag << std::endl;
}