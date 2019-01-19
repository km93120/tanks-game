#include "wall.h"


#include <QDebug>





Wall::Wall(int x, int y, bool shifted)
{
    QPixmap wallPixmap(":/mur.jpg");
    QTransform transform;
    transform.rotate(90);
    //shifted = true ? wallPixmap.transformed(transform) : wallPixmap;
    setPixmap(wallPixmap.scaled(150,50));
    shifted == true ? setRotation(90) : setRotation(360);
    setPos(x,y);




}
