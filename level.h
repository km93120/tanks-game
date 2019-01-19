#ifndef LEVEL_H
#define LEVEL_H

#include <QVector>
#include <QObject>
#include "player.h"
#include "standardenemy.h"


#include "wall.h"

class Level : public QObject
{
      QVector <Wall  * >  walls;
      Player         *    player;
      QVector<Enemy *>    enemies;

public:

    Level(int index);

    QVector<Wall *> getWalls() const;
    Player *getPlayer() const;
    QVector<Enemy *> getEnemies() const;
};

#endif // LEVEL_H
