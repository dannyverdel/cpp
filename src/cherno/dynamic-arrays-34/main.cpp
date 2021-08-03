//
// Author: Danny Verdel
// Created on 02-08-2021
//

#include <iostream>
#include <vector>

struct Vertex
{
    float x, y, z;
    Vertex(int x, int y, int z)
        : x(x), y(y), z(z) {}
};

std::ostream &operator<<(std::ostream &stream, const Vertex &vertex)
{
    stream << vertex.x << ", " << vertex.y << ", " << vertex.z;
    return stream;
}

int main()
{
    std::vector<Vertex> vertices;
    vertices.push_back(Vertex(1, 2, 3));
    vertices.push_back(Vertex(4, 5, 6));
    vertices.reserve(2);

    for (int i = 0; i < vertices.size(); i++)
        std::cout << vertices[i] << std::endl;

    vertices.erase(vertices.begin());

    std::cout << std::endl;

    for (int i = 0; i < vertices.size(); i++)
        std::cout << vertices[i] << std::endl;
}