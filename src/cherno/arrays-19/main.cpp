//
// Author: Danny Verdel
// Created on 31-07-2021
//

#include <iostream>

class Entity
{
private:
    int *arr;
    int size;

public:
    Entity(int arr_size)
    {
        size = arr_size;
        arr = new int[size];
        int i;
        for (i = 0; i < size; i++)
            *(arr + i) = i + 1;

        std::cout << "Allocated memory for array and filled it with values." << std::endl;
    }
    ~Entity()
    {
        delete[] arr;
        std::cout << "Deleted memory for array." << std::endl;
    }
    void Print()
    {
        int i;
        for (i = 0; i < size; i++)
            std::cout << *(arr + i) << std::endl;
    }
};

int main()
{
    int arr_size;
    std::cout << "To what number do you want to count: ";
    std::cin >> arr_size;
    std::cout << std::endl;

    Entity e(arr_size);
    e.Print();
}