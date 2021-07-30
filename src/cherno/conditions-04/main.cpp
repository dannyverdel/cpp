#include "Log.h"

int main()
{
    int x;
    x = 5;
    bool result = x == 5;
    if (result)
    {
        InitLog();
        Log("Hello World");
    }
    else
    {
        Log("An error has occured");
    }
}