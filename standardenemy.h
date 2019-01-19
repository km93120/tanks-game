#ifndef STANDARDENEMY_H
#define STANDARDENEMY_H

#include <QGraphicsItem>
#include <QObject>

#include "enemy.h"



class StandardEnemy : public Enemy
{

protected:
    int x;
    int y;

public:


    StandardEnemy(int,int);
};

#endif // STANDARDENEMY_H
