//
// Author: Danny Verdel
// Created on 08-08-2021
//

#include <iostream>
#include <fstream>
#include <optional>

std::optional<std::string> read_file_as_string(const std::string &filepath)
{
    std::ifstream stream(filepath);
    if (!stream)
        return {};

    std::string result;
    stream.close();
    return result;
}

int main()
{
    std::optional<std::string> data = read_file_as_string("text.txt");

    std::string value = data.value_or("No data present");
    std::cout << value << std::endl;

    if(data)
    {
        std::cout << "File read successfully!" << std::endl;
    }
    else 
    {
        std::cout << "File could not be opened!" << std::endl;
    }
}