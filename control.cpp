#include "control.h"
#include <QDebug>
#include <QApplication>
#include <QScreen>





Control::Control(QWidget *parent) : QWidget(parent)
{
    //connect(view,SIGNAL(yaay()),this,SLOT(test()));
    levelIndex = 0;
    clearTimer = new QTimer(this);
    connect(clearTimer,SIGNAL(timeout()),this,SLOT(clearScene()));
    //setFocus();
    //keyboard = new Keyboard();
    displacementGroup = new QActionGroup(this);
    QAction * moveLeft = new QAction("moveLeft",this);
    QAction * moveRight = new QAction("moveRight",this);
    QAction * moveForward = new QAction("moveForward",this);
    QAction * moveBackward = new QAction("moveBackward");

    moveLeft->setShortcut(Qt::Key_Space);
    moveRight->setShortcut(Qt::Key_D);
    moveForward->setShortcut(Qt::Key_Z);
    moveBackward->setShortcut(Qt::Key_S);

    displacementGroup->addAction(moveLeft);
    displacementGroup->addAction(moveRight);
    displacementGroup->addAction(moveForward);
    displacementGroup->addAction(moveBackward);
    displacementGroup->setEnabled(true);
    qDebug () << displacementGroup->actions().count();
    setFocus();

    connect(moveLeft,&QAction::triggered,[this]()
    {
        qDebug() << "yaay";

    });



}

Control::~Control()
{

}

void Control::setParams(Model * model, View * view)
{
    this->model = model;
    this->view = view;

    view->setControl(this);
    view->setConnection();



}

void Control::moveItem(QGraphicsItem * item, QString direction = "" )
{
    QScreen * screen = QGuiApplication::primaryScreen();
    QRect  screenGeometry = screen->geometry();
    int height = screenGeometry.height();
    int width = screenGeometry.width();


    qDebug() << "moveItem func called";
    int x = item->pos().x();
    int y = item->pos().y();

    if(direction != "" )
    {
        if(x > 25)
        {
            if(direction == "left")     { item->setPos(x - 5,y); item->setRotation(270);}
        }

        if(x < width - 25)
        {
            if(direction == "right")    { item->setPos(x + 5,y); item->setRotation(90);}
        }

        if(y  > 25)
        {
            if(direction == "forward")  { item->setPos(x ,y-5); item->setRotation(0);}
        }

        if(y < height - 25)
        {
            if(direction == "backward") { item->setPos(x,y+5); item->setRotation(180);}
        }
    }


}


void Control::setViewLevel()
{


    QVector <Level *> levels = model->getLevels();  //shadowed variable
    view->setLevel(levels.at(levelIndex),levelIndex);
    view->renderLevel();
    levelIndex ++;






}

void Control::clearScene()
{
    view->clearScene();

    clearTimer->stop();
    setViewLevel();


}

void Control::timerStart()
{
        clearTimer->start(100);
}
