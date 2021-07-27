#include <iostream>

template <class T>
T sum(T x, T y)
{
    return x + y;
}

template <class T>
class MyClass
{
public:
    MyClass(T x)
    {
        std::cout << x << " -  not a char" << std::endl;
    }
};

template <>
class MyClass<char>
{
public:
    MyClass(char x)
    {
        std::cout << x << " is a char!" << std::endl;
    }
};

int main()
{
    int x, y;
    x = 15;
    y = 15;

    std::cout << sum(x, y) << std::endl;

    double a, b;
    a = 15.5;
    b = 14.5;

    std::cout << sum(a, b) << std::endl;

    MyClass<int> ob1(42);
    MyClass<double> ob2(5.47);
    MyClass<char> ob3('s');

    return 0;
}