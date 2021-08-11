//
// Author: Danny Verdel
// Created on 10-08-2021
//

#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <algorithm>
#include <fstream>
#include <cmath>

namespace dstd
{
    namespace profiler
    {
        static std::ofstream s_stream;
        static std::string s_Filepath;
        static std::chrono::time_point<std::chrono::steady_clock> s_Start, s_End;
        static std::chrono::duration<float> s_Duration;
        static int s_functionCount = 0;

        void write_header()
        {
            s_stream << "{\n\t\"otherData\": {},\n\t\"traceEvents\": [\n";
            s_stream.flush();
        }
        void write_footer()
        {
            s_stream << "\n\t]\n}";
        }
        void start(const char *filepath)
        {
            s_Filepath = filepath;
            s_Start = std::chrono::high_resolution_clock::now();
            s_stream.open(s_Filepath);
            write_header();
        }
        void stop()
        {
            s_End = std::chrono::high_resolution_clock::now();
            s_Duration = s_End - s_Start;
            write_footer();
            s_stream.close();
        }

        class function_profiler
        {
        private:
            const char *m_functionname;
            std::chrono::time_point<std::chrono::steady_clock> m_Start, m_End;
            std::chrono::duration<float> m_Duration;

        public:
            function_profiler(const char *functionname)
                : m_functionname(functionname)
            {
                m_Start = std::chrono::high_resolution_clock::now();
            }
            ~function_profiler()
            {
                m_End = std::chrono::high_resolution_clock::now();
                m_Duration = m_End - m_Start;
                long long ts = std::chrono::time_point_cast<std::chrono::milliseconds>(s_Start).time_since_epoch().count();

                if (s_functionCount > 0)
                    s_stream << ",\n\t\t{\n";
                else
                    s_stream << "\t\t{\n";

                s_stream << "\t\t\t\"cat\": \"function\",\n";
                s_stream << "\t\t\t\"dur\": " << m_Duration.count() << ",\n";
                s_stream << "\t\t\t\"name\": \"" << m_functionname << "\",\n";
                s_stream << "\t\t\t\"ph\": \"X\",\n";
                s_stream << "\t\t\t\"pid\": 0,\n";
                s_stream << "\t\t\t\"tid\": 0,\n";
                s_stream << "\t\t\t\"ts\": " << ts << "\n";
                s_stream << "\t\t}";

                s_functionCount++;
            }
        };
    }
}

void while_loop()
{
    dstd::profiler::function_profiler profiler("while_loop");
    int i = 0;
    while (i < 100000)
    {
        std::cout << "Hello there..." << std::endl;
        i++;
    }
}

void sleep()
{
    dstd::profiler::function_profiler profiler("sleep");
    std::this_thread::sleep_for(std::chrono::seconds(1));
}

int main()
{
    dstd::profiler::start("profile.json");
    while_loop();
    sleep();
    dstd::profiler::stop();
}