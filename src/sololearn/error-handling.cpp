#include <iostream>

int main()
{
    try
    {
        std::cout << "Divide two numbers: " << std::endl;

        float a, b;
        
        std::cout << "Enter the first number: ";
        std::cin >> a;

        std::cout << "Enter the second number: ";
        std::cin >> b;

        if (b == 0)
            throw 1;
        else
            std::cout << a / b << std::endl;
    }
    catch (int e)
    {
        std::cout << "Division by zero" << std::endl;
    }
}