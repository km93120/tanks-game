#ifndef WALL_H
#define WALL_H

#include <QGraphicsPixmapItem>
#include <qmath.h>
#include <QObject>

class Wall : public QGraphicsPixmapItem
{


public:
    Wall(int x, int y,bool shifted);


};

#endif // WALL_H
