//
// Author: Danny Verdel
// Created on 02-08-2021
//

#include <iostream>
#include "string.h"

class Medicine
{
private:
    int m_healpower;

public:
    virtual int Heal()
    {
        return m_healpower;
    }
};

class Medkit : public Medicine
{
private:
    static const int m_healpower = 50;

public:
    int Heal()
    {
        return m_healpower;
    }
};

class Player
{
private:
    dstd::String m_username;
    int m_level;
    int m_hp;
    int m_armor;

public:
    Player(dstd::String username)
        : m_username(username), m_level(0), m_hp(100), m_armor(0) {}
    void Status()
    {
        dstd::String armor;
        for(int i = 0; i < m_armor; i++)
            armor += "*";
        std::cout << m_level << " - " << m_username << ": " << m_hp << " " << armor << std::endl;
    }
    void UpgradeArmor(int armor)
    {
        if((m_armor + armor) > 3)
            m_armor = 3;
        else
            m_armor += armor;
    }
    void LevelUp()
    {
        m_level++;
    }
    void Heal(Medicine &medicine)
    {
        m_hp += medicine.Heal();
    }
};

int main()
{
    dstd::String input;
    std::cout << "Enter your username: ";
    std::cin >> input;
    Player player(input);

    player.UpgradeArmor(2);

    player.Status();
    player.LevelUp();
    player.Status();

    player.UpgradeArmor(4);

    Medkit medkit;
    player.Heal(medkit);
    player.Status();
}