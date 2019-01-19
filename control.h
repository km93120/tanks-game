#ifndef CONTROL_H
#define  CONTROL_H
#include "model.h"
#include "view.h"
#include "keyboard.h"

#include <QObject>
#include <QTimer>
#include <QKeyEvent>
#include <QActionGroup>


class View;

class Control : public QWidget
 {
    Q_OBJECT

protected:


    Model       *   model;
    View        *   view;
    QTimer          *   clearTimer;
    int             lifeCount;
    //Keyboard    *   keyboard;
    QActionGroup   * displacementGroup ;


public:

    int levelIndex;
    
    explicit Control(QWidget *parent = 0);
    ~Control();

    void setParams(Model * , View * );
    void moveItem(QGraphicsItem * item, QString direction);






public slots:
    


    void setViewLevel();
    void clearScene()  ;
    void timerStart()  ;


};

#endif // CONTROL_H
