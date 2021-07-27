#include <iostream>
#include <fstream>

int main()
{
    std::ofstream myFile;
    myFile.open("files.txt");

    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;

    myFile << "I am " << age << " years old!" << std::endl;

    myFile.close();

    std::string line;
    std::ifstream file("files.txt");
    while (getline(file, line))
    {
        std::cout << line << std::endl;
    }

    file.close();

    return 0;
}