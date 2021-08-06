//
// Author: Danny Verdel
// Created on 06-08-2021
//

#include <iostream>
#include <chrono>
#include <thread>

struct Timer
{
    std::chrono::time_point<std::chrono::steady_clock> start, end;
    std::chrono::duration<float> duration;

    Timer()
    {
        start = std::chrono::high_resolution_clock::now();
    }
    ~Timer()
    {
        end = std::chrono::high_resolution_clock::now();
        duration = end - start;
        float ms = duration.count() * 1000.0f;
        std::cout << ms << "ms" << std::endl;
    }
};

void Function()
{
    Timer timer;
    for (int i = 0; i < 100; i++)
    {
        std::cout << "Hello\n";
    }
}

int main()
{
    std::chrono::time_point<std::chrono::steady_clock> start, end;
    std::chrono::duration<float> duration;

    start = std::chrono::high_resolution_clock::now();
    std::this_thread::sleep_for(std::chrono::seconds(5));
    end = std::chrono::high_resolution_clock::now();
    duration = end - start;
    std::cout << duration.count() << std::endl;

    Function();
}