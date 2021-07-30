#include "Log.h"

int main()
{
    int i;
    for (i = 0;; i++)
    {
        if (i >= 5)
            break;

        if ((i + 1) % 2 == 0)
            continue;

        Log("Hello World!");
        std::cout << i << std::endl;
    }
}