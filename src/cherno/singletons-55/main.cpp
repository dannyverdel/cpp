//
// Author: Danny Verdel
// Created on 11-08-2021
//

#include <iostream>

class Random
{
public:
    Random(const Random &) = delete;

    static Random &Get()
    {
        static Random s_Instance;
        return s_Instance;
    }
    static float Float() { return Get().IFloat(); }

private:
    Random() {}
    float m_RandomGenerator = 0.5f;
    float IFloat() { return m_RandomGenerator; }
};

class Log
{
public:
    Log(const Log &) = delete;
    static Log &Get()
    {
        static Log s_Instance;
        return s_Instance;
    };
    static void WriteLine(const char *message)
    {
        std::cout << message << std::endl;
    }
    static void Write(const char *message)
    {
        std::cout << message;
    }

private:
    Log() {}
};

int main()
{
    float number = Random::Float();
    std::cout << number << std::endl;
    Log::WriteLine("Hello there");
    Log::Write("No endline");
    Log::WriteLine(", but now there is");
}