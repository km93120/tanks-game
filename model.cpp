#include "model.h"


QVector<Level *> Model::getLevels() const
{
    return levels;
}

Model::Model()
{
    levels.append(new Level(0));
    levels.append(new Level(1));
}
