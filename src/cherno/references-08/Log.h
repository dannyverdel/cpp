#ifndef _LOG_H
#define _LOG_H

#include <iostream>

void InitLog()
{
    std::cout << "Initializign log" << std::endl;
}

void Log(const char *message)
{
    std::cout << message << std::endl;
}

void Log(const int message)
{
    std::cout << message << std::endl;
}

#endif