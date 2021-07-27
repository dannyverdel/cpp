#include <iostream>
#include "class.h"

int main()
{
    person me(25, 7, 2002, 18);
    person you(25, 7, 2002, 18);
    me.this_birthday();

    person res = me + you;
    std::cout << "We have a combined age of " << res.age << std::endl;

    return 0;
}