#include "Log.h"

int main()
{
    int var = 8;
    int *ptr = &var;

    std::cout << "The address of ptr is " << ptr << std::endl;
    std::cout << "The value of ptr is " << *ptr << std::endl;
    std::cout << "The value of var is " << var << std::endl;

    *ptr = 10;

    std::cout << "The address of ptr is " << ptr << std::endl;
    std::cout << "The value of ptr is " << *ptr << std::endl;
    std::cout << "The value of var is " << var << std::endl;

    char *buffer = new char[8];
    memset(buffer, 0, 8);

    char **p = &buffer; // pointer to pointer

    delete[] buffer;
}
