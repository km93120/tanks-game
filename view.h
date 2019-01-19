#ifndef VIEW_H
#define VIEW_H

#include <QGraphicsView>
#include <QGraphicsScene>
#include <QPushButton>
#include "control.h"

class Control;

class View : public QGraphicsView
{
    Q_OBJECT




protected:
    void keyPressEvent(QKeyEvent * event);

    QGraphicsScene   *      scene;
    QPushButton      *      button1;
    Control          *      control;
    Level            *      level;

    int                     index;

public:



    View();
   ~View();
    void setControl(Control *);
    void setConnection();

    void renderLevel();

    QPushButton *getButton1() const;

    Level *getLevel() const;
    void setLevel(Level * level,int index );

    QGraphicsScene *getScene() const;

signals:

    void yaay();

public slots:

    void clearScene();













};

#endif // VIEW_H
