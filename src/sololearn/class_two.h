#include <iostream>

class Enemy
{
protected:
    int attackPower;

public:
    virtual void type() = 0;
    void setAttackPower(int a)
    {
        attackPower = a;
    }
};

class Ninja : public Enemy
{
public:
    void attack()
    {
        std::cout << "Ninja! - " << attackPower << std::endl;
    }
    void type()
    {
        std::cout << "Long range type" << std::endl;
    }
};

class Monster : public Enemy
{
public:
    void attack()
    {
        std::cout << "Monster! - " << attackPower << std::endl;
    }
    void type()
    {
        std::cout << "Zombie type" << std::endl;
    }
};