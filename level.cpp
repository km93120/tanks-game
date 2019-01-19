#include "level.h"

QVector<Wall *> Level::getWalls() const
{
    return walls;
}

Player *Level::getPlayer() const
{
    return player;
}

QVector<Enemy *> Level::getEnemies() const
{
    return enemies;
}

Level::Level(int index)
{
    switch (index) {
    case 0:
        for(int i = 0;i< 5;i++)
        {
            walls.append(new Wall(100 + i*150,500 ,false));

            enemies.append(new StandardEnemy(600 + 150*i,200));
            enemies.at(i)->setRotation(180);

        }
        player = new Player(900,1000);
        break;
    case 1:
        for(int i = 4; i < 9;i++)
        {
            walls.append(new Wall(700+i*50,1000,false));

        }
        player = new Player(300,400);
    case 2:

    default:
        break;
    }

}
