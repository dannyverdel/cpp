#include <iostream>

int main()
{
    std::cout << "Hello World!" << std::endl;

    int a, b, temp;

    std::cout << "Enter a number: ";
    std::cin >> a;

    std::cout << "Enter a number: ";
    std::cin >> b;

    std::cout << "A is now " << a << std::endl;
    std::cout << "B is now " << b << std::endl;

    temp = a;
    a = b;
    b = temp;

    std::cout << "A is now " << a << std::endl;
    std::cout << "B is now " << b << std::endl;

    a = 3;
    b = 2;
    b = a++;
    std::cout << ++b << std::endl;

    /*
    You are making a program for a bus service. 
    A bus can transport 50 passengers at once. 
    Given the number of passengers waiting in the bus station as input, you need to calculate and output how many empty seats the last bus will have.

    Sample Input:
    126

    Sample Output: 
    24
    */

    int passengers, waiting;

    std::cout << "How many passengers are waiting: ";
    std::cin >> passengers;

    waiting = 50 - (passengers % 50);

    if (waiting != 50)
        std::cout << waiting << std::endl;
    else
        std::cout << 0 << std::endl;

    return 0;
}