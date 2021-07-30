#include "Log.h"

void Increment(int& value)
{
    value++;
}

int main()
{
    int a;
    a = 5;
    int& ref = a;

    ref = 5;

    Increment(a);

    Log(a);
}
