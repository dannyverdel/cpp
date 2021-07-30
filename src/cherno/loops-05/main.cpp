#include "Log.h"

int main()
{
    InitLog();

    std::cout << std::endl;

    int i;
    for(i = 0; i < 5; i++)
    {
        Log("Hello World!");
    }

    std::cout << std::endl;

    while (i >= 0)
    {
        Log("Hello World!");
        i--;
    }

    int x, y;
    for(x = 0; x < 10; x++)
    {
        for(y = 0; y < x; y++)
        {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }

    for(x = 9; x > 0; x--)
    {
        for(y = x - 1; y > 0; y--)
        {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
}