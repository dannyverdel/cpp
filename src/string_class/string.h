//
// Author: Danny Verdel
// Created on 03-08-2021
//

#ifndef STRING_H
#define STRING_H

#include <iostream>

/* List of all methods

- tolower() : convert entire string to lowercase
- tolower(int index) : convert char at index to lowercase
- toupper() : convert entire string to uppercase
- toupper(int index) : convert char at index to uppercase
- size() : return the length of the string in int
- to_int() : convert string to int
- to_float() : convert string to float
- to_double() : convert string to double
- find_first(char tofind) : find the index of the first occurance
- find_last(char tofind) : find the index of the last occurance

- append(String &append) : append to the string
- append(std::string &append) : append to the string
- append(const char *append) : append tot the string

- operator[](int i) : print char at index

- operator+=(String &concat) : concat another String object
- operator+=(std::string &concat) : concat an std::string
- operator+=(const char *concat) : concat an const char *

- operator==(String &compare) : compare another String object
- operator==(std::string &compare) : compare an std::string
- operator==(const char *compare) : compare an const char *

- operator!=(String &compare) : compare another String object
- operator!=(std::string &compare) : compare an std::string
- operator!=(const char *compare) : concat an const char *

- friend std::ostream &operator<<(std::ostream &stream, String &ref) : print String object
- friend std::istream &operator>>(std::istream &stream, String &ref) : take input into the String object

*/

namespace dstd
{
    class String
    {
    private:
        std::string m_MyString;

    public:
        String() {}

        String(std::string my_string)
            : m_MyString(my_string) {}

        String(const char *my_string)
            : m_MyString(my_string) {}

        void tolower()
        {
            for (int i = 0; i < m_MyString.length(); i++)
                if ((int)m_MyString[i] <= 'Z' && (int)m_MyString[i] >= 'A')
                    m_MyString[i] += 32;
        }

        void tolower(int index)
        {
            if ((int)m_MyString[index] <= 'Z' && (int)m_MyString[index] >= 'A')
                m_MyString[index] += 32;
        }

        void toupper()
        {
            for (int i = 0; i < m_MyString.length(); i++)
                if ((int)m_MyString[i] <= 'z' && (int)m_MyString[i] >= 'a')
                    m_MyString[i] -= 32;
        }

        void toupper(int index)
        {
            if ((int)m_MyString[index] <= 'z' && (int)m_MyString[index] >= 'a')
                m_MyString[index] -= 32;
        }

        int size()
        {
            int i = 0;
            while (m_MyString[i] != '\0')
                i++;
            return i;
        }

        int to_int()
        {
            return atoi(m_MyString.c_str());
        }

        float to_float()
        {
            return atof(m_MyString.c_str());
        }

        double to_double()
        {
            return std::stod(m_MyString);
        }

        int find_first(char tofind)
        {
            for (int i = 0; i < size(); i++)
                if (m_MyString[i] == tofind)
                    return i;

            return -1;
        }

        int find_last(char tofind)
        {
            for (int i = size() - 1; i >= 0; i--)
                if (m_MyString[i] == tofind)
                    return i;

            return -1;
        }

        void append(String &append)
        {
            m_MyString += append.m_MyString;
        }
        void append(std::string &append)
        {
            m_MyString += append;
        }
        void append(const char *append)
        {
            m_MyString += append;
        }

        char &operator[](int i)
        {
            if (i >= size())
                return m_MyString[0];
            return m_MyString[i];
        }

        void operator+=(String &concat)
        {
            m_MyString += concat.m_MyString;
        }
        void operator+=(std::string &concat)
        {
            m_MyString += concat;
        }
        void operator+=(const char *concat)
        {
            m_MyString += concat;
        }

        bool operator==(String &compare)
        {
            return m_MyString == compare.m_MyString;
        }
        bool operator==(std::string &compare)
        {
            return m_MyString == compare;
        }
        bool operator==(const char *compare)
        {
            return m_MyString == compare;
        }

        bool operator!=(String &compare)
        {
            return m_MyString != compare.m_MyString;
        }
        bool operator!=(std::string &compare)
        {
            return m_MyString != compare;
        }
        bool operator!=(const char *compare)
        {
            return m_MyString != compare;
        }
        
        friend std::ostream &operator<<(std::ostream &stream, String &ref);
        friend std::istream &operator>>(std::istream &stream, String &ref);
    };

    std::ostream &operator<<(std::ostream &stream, String &ref)
    {
        stream << ref.m_MyString;
        return stream;
    }
    std::istream &operator>>(std::istream &stream, String &ref)
    {
        stream >> ref.m_MyString;
        return stream;
    }
}

#endif