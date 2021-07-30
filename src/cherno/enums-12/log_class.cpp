//
// Author: Danny Verdel
// Created on 30-07-2021
//

#include <iostream>

class Log
{
public:
    enum Level 
    {
        ErrorLevel = 0,
        WarningLevel,
        InfoLevel
    };

private:
    Level m_logLevel;

public:
    Log()
    {
        m_logLevel = InfoLevel;
    }
    void SetLevel(Level level)
    {
        m_logLevel = level;
    }
    void Error(const char *message)
    {
        if (m_logLevel >= ErrorLevel)
            std::cout << "[ERROR]: " << message << std::endl;
    }
    void Warn(const char *message)
    {
        if (m_logLevel >= WarningLevel)
            std::cout << "[WARN]: " << message << std::endl;
    }
    void Info(const char *message)
    {
        if (m_logLevel >= InfoLevel)
            std::cout << "[INFO]: " << message << std::endl;
    }
};

int main()
{
    Log log;
    log.SetLevel(Log::WarningLevel);
    log.Error("Hello!");
    log.Warn("Hello!");
    log.Info("Hello!");
}