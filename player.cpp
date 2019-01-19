#include "player.h"

Player::Player(int x, int y)
{
    QPixmap playerPixmap(":/playerTank.jpg");
    //shifted = true ? wallPixmap.transformed(transform) : wallPixmap;
    setPixmap(playerPixmap.scaled(50,50));
    setPos(x,y);

}
