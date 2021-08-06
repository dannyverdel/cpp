//
// Author: Danny Verdel
// Created on 06-08-2021
//

#include <iostream>

#define SIZE 5

int main()
{
    int *array = new int[SIZE * SIZE];
    for (int y = 0; y < SIZE; y++)
    {
        for (int x = 0; x < SIZE; x++)
        {
            array[x + y * SIZE] = 2;
            std::cout << array[x + y * SIZE] << " ";
        }
        std::cout << std::endl;
    }
}