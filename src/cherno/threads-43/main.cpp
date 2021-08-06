//
// Author: Danny Verdel
// Created on 06-08-2021
//

#include <iostream>
#include <thread>

static bool s_finished = false;

void do_work()
{
    std::cout << "Started thread " << std::this_thread::get_id() << std::endl;
    int i = 0;
    while (!s_finished)
    {
        i++;
        std::cout << i << ": Working..." << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}

int main()
{
    std::thread worker(do_work);
    std::cin.get();
    s_finished = true;
    worker.join();
    std::cout << "Finished" << std::endl;

    std::cout << "Started thread " << std::this_thread::get_id() << std::endl;
}