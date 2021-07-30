#include <iostream>

#define LOG(x) std::cout << x << std::endl;

class Player
{
public:
    int x;
    int y;
    int speed;
    void Move(int xa, int ya)
    {
        x += xa * speed;
        y += ya * speed;
    }
};

int main()
{
    Player player;
    player.x = 5;
    player.y = 5;
    player.speed = 2;

    LOG(player.x);
    LOG(player.y);

    player.Move(4, 4);

    LOG(player.x);
    LOG(player.y);
}
