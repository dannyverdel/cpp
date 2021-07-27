#include <iostream>
#include "class_two.h"

int main()
{
    Ninja n;
    Monster m;

    // Enemy e; This would return an error

    Enemy *e1;
    e1 = &n;

    e1->type();

    Enemy *e2;
    e2 = &m;

    e2->type();

    e1->setAttackPower(20);
    e2->setAttackPower(80);

    n.attack();
    m.attack();

    int f = 1, i = 2;
    while (++i < 5)
    {
        f *= i;
    }
    std::cout << f;

    return 0;
}