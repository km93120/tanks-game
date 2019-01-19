#ifndef REINFORCEDWALL_H
#define REINFORCEDWALL_H

#include "wall.h"



class ReinforcedWall : public Wall
{
public:
    ReinforcedWall(int x, int y,bool shifted);
};

#endif // REINFORCEDWALL_H
