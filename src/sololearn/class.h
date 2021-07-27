#include <iostream>
#include <string>

#ifndef PERSON_H
#define PERSON_H

class person
{
private:
    int day;
    int month;
    int year;

public:
    int age;

public:
    person() {}
    person(int day, int month, int year, int age) : day(day), month(month), year(year), age(age)
    {
    }
    void this_birthday()
    {
        std::cout << "I was born on " << get_birthday() << std::endl;
    }
    std::string get_birthday()
    {
        return std::to_string(day) + "-" + std::to_string(month) + "-" + std::to_string(year);
    }
    person operator+(person &p)
    {
        person res;
        res.age = this->age + p.age;
        return res;
    }
};

#endif