//
// Author: Danny Verdel
// Created on 31-07-2021
//

#include <iostream>

class Log
{
public:
    static void Write(const std::string &message)
    {
        std::cout << message;
    }
    static void WriteLine(const std::string &message)
    {
        std::cout << message << std::endl;
    }
};

class Entity
{
public:
    const char *my_string;
    Entity(const char *message)
    {
        my_string = new char[strlen(message) + 1];
        my_string = message;
        Log::WriteLine("Allocated memory for string and assigned a a value to it!");
    }
    void Print()
    {
        int i;
        for (i = 0; i < strlen(my_string); i++)
            std::cout << *(my_string + i);

        std::cout << std::endl;
    };
    ~Entity()
    {
        delete[] my_string;
        Log::WriteLine("Deleted memory for string!");
    }
};

int main()
{
    Log::WriteLine("");

    char *username;
    username = new char[25];

    std::cout << "Enter your username: ";
    std::cin >> username;

    std::cout << std::endl;

    Entity e(username);
    e.Print();

    std::string name;
    name = e.my_string;

    std::cout << ((name.find("Sick") != std::string::npos) ? "Username contains Sick" : "Username does not contain Sick") << std::endl;
}