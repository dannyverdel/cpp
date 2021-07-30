#include <iostream>

class Log
{
public:
    static const int LogLevelError = 0;
    static const int LogLevelWarning = 1;
    static const int LogLevelInfo = 2;

private:
    int m_logLevel;

public:
    Log()
    {
        m_logLevel = LogLevelInfo;
    }
    void SetLevel(int level)
    {
        m_logLevel = level;
    }
    void Error(const char *message)
    {
        if (m_logLevel >= LogLevelError)
            std::cout << "[ERROR]: " << message << std::endl;
    }
    void Warn(const char *message)
    {
        if (m_logLevel >= LogLevelWarning)
            std::cout << "[WARN]: " << message << std::endl;
    }
    void Info(const char *message)
    {
        if (m_logLevel >= LogLevelInfo)
            std::cout << "[INFO]: " << message << std::endl;
    }
};

int main()
{
    Log log;
    log.SetLevel(log.LogLevelError);
    log.Error("Hello!");
    log.Warn("Hello!");
    log.Info("Hello!");
}