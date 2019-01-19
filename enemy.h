#ifndef ENEMY_H
#define ENEMY_H
#include <QGraphicsPixmapItem>

class Enemy : public QGraphicsPixmapItem
{

protected:

    int x;
    int y;


public:
    Enemy(int,int);
};

#endif // ENEMY_H
