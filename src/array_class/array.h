//
// Author: Danny Verdel
// Created on 04-08-2021
//

#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>

namespace dstd
{
    template <typename T, int N>
    class Array
    {
    private:
        T m_array[N];

    public:
        int size()
        {
            return N;
        };
        T &operator[](int i)
        {
            if (i >= size())
                return m_array[0];
            return m_array[i];
        }
        const char *begin()
        {
            return m_array;
        }

        const char *end()
        {
            return &m_array[size() - 1];
        }

        void print()
        {
            for (int i = 0; i < size(); i++)
                std::cout << m_array[i] << std::endl;
        }

        template <typename Datatype, int Size>
        void swap(Array<Datatype, Size> &ref)
        {
            Datatype temp[N];

            for (int i = 0; i < ref.size(); i++)
                temp[i] = ref[i];

            for (int i = 0; i < ref.size(); i++)
                ref[i] = m_array[i];

            for (int i = 0; i < size(); i++)
                m_array[i] = temp[i];
        }

        template <typename Datatype, int Size>
        friend std::ostream &operator<<(std::ostream &stream, Array<Datatype, Size> &array);
    };

    template <typename T, int N>
    std::ostream &operator<<(std::ostream &stream, Array<T, N> &array)
    {
        stream << array.m_array;
        return stream;
    }
}

#endif