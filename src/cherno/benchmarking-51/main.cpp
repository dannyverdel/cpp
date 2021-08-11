//
// Author: Danny Verdel
// Created on 07-08-2021
//

#include <iostream>
#include <array>
#include <chrono>

class Timer
{
private:
    std::chrono::time_point<std::chrono::steady_clock> start, end;
    std::chrono::duration<float> duration;

public:
    Timer()
    {
        start = std::chrono::high_resolution_clock::now();
    }
    ~Timer()
    {
        end = std::chrono::high_resolution_clock::now();
        duration = end - start;
        std::cout << std::endl
                  << duration.count() * 1000 << "ms" << std::endl;
        std::cout << duration.count() << "s" << std::endl;
    }
};

int main()
{

    struct Vector2
    {
        float x, y;
    };

    {
        std::array<std::shared_ptr<Vector2>, 1000> sharedPtrs;
        Timer timer;
        for (int i = 0; i < sharedPtrs.size(); i++)
            sharedPtrs[i] = std::make_shared<Vector2>();
    }

    {
        std::array<std::shared_ptr<Vector2>, 1000> sharedPtrs;
        Timer timer;
        for (int i = 0; i < sharedPtrs.size(); i++)
            sharedPtrs[i] = std::shared_ptr<Vector2>(new Vector2());
    }
}