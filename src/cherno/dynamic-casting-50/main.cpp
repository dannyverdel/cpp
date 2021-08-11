//
// Author: Danny Verdel
// Created on 07-08-2021
//

#include <iostream>

class Entity
{
public:
    virtual void print_name() {}
};

class Player : public Entity
{
};

class Enemy : public Entity
{
};

int main()
{
    Player *player = new Player();
    Entity *actually_player = player;
    Entity *actually_enemy = new Enemy();

    Player *player_one = dynamic_cast<Player *>(actually_player);
    Player *player_two = dynamic_cast<Player *>(actually_enemy);

    if (player_two)
        std::cout << "player_two is null because we tried to cast an enemy to player" << std::endl;
}