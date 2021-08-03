//
// Author: Danny Verdel
// Created on 03-08-2021
//

#include <iostream>

template <typename T>
T add(T x, T y)
{
    return x + y;
}

template <typename T, int N>
class Array
{
private:
    T m_Array[N];

public:
    int get_size() const { return N; }
};

class Log
{
public:
    template <typename T>
    static void Write(T message)
    {
        std::cout << message;
    }
    template <typename T>
    static void WriteLine(T message)
    {
        std::cout << message << std::endl;
    }
};

int main()
{
    std::cout << add(5, 5) << std::endl;

    Array<int, 5> int_array;
    std::cout << int_array.get_size() << std::endl;

    Array<std::string, 2> string_array;
    std::cout << string_array.get_size() << std::endl;

    std::string *new_string_array;
    new_string_array = new std::string[2];

    for(int i = 0; i < 2; i++)
        *(new_string_array + i) = "Danny";

    Log my_logger;
    my_logger.WriteLine("Danny");
}