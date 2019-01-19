#ifndef MODEL_H
#define MODEL_H

#include "level.h"

class Model
{

    QVector <Level * > levels;

public:

    Model();

    QVector <Level *> getLevels() const;
};

#endif // MODEL_H
