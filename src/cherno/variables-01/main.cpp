#include <iostream>

int main()
{
    int a; // Can hold a range of -2.1B - 2.1B
    unsigned int b; // Can hold a bigger range

    char c = 65; // Returns 'A' when printed

    std::cout << "Data types: " << std::endl;
    std::cout << "Char: " << sizeof(char) << " bytes" << std::endl;
    std::cout << "Int: " << sizeof(int) << " bytes" << std::endl;
    std::cout << "Float: " << sizeof(float) << " bytes" << std::endl;
    std::cout << "Double: " << sizeof(double) << " bytes" << std::endl;
    std::cout << "Long: " << sizeof(long) << " bytes" << std::endl;
    std::cout << "Bool: " << sizeof(bool) << " bytes" << std::endl;
}