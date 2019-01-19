#include "standardenemy.h"

StandardEnemy::StandardEnemy(int x,int y) : Enemy(x,y)
{
    QPixmap standardEnemyPixmap(":/standardEnemy.jpg");
    //shifted = true ? wallPixmap.transformed(transform) : wallPixmap;
    setPixmap(standardEnemyPixmap.scaled(50,50));
    setPos(x,y);

}
