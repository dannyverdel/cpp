#include <iostream>

class person
{
public:
    person(int age)
    {
        _age = age;
    }

private:
    int _age;

public:
    void say_hi()
    {
        std::cout << "Helloooo, I am " << _age << " years old" << std::endl;
    }
    void setAge(int age)
    {
        _age = age;
    }
};

int main()
{
    person me(17);
    me.say_hi();
    me.setAge(18);
    me.say_hi();
    return 0;
}