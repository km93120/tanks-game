#include "view.h"
#include <QDebug>
#include <QApplication>
#include <QScreen>
#include <QTimer>

QPushButton *View::getButton1() const
{
    return button1;
}

Level *View::getLevel() const
{
    return level;
}

void View::setLevel(Level *level,int index)
{
    qDebug() << "a";
    this->level = level;
    this->index = index;
    qDebug() << "b";
    qDebug() << "c";



}

void View::clearScene()
{
    scene->clear();
    qDebug() << "ryoHazuki func called";
}

QGraphicsScene *View::getScene() const
{
    return scene;
}

void View::keyPressEvent(QKeyEvent *event)
{

    if(event->key() == Qt::Key_Z) control->moveItem(level->getPlayer(),"forward");
    if(event->key() == Qt::Key_Q) control->moveItem(level->getPlayer(),"left");
    if(event->key() == Qt::Key_S) control->moveItem(level->getPlayer(),"backward");
    if(event->key() == Qt::Key_D) control->moveItem(level->getPlayer(),"right");



}

View::View()
{
    QScreen * screen = QGuiApplication::primaryScreen();
    QRect  screenGeometry = screen->geometry();
    int height = screenGeometry.height();
    int width = screenGeometry.width();


    setBackgroundBrush(QBrush(QImage(":/backgroundView.jpg")));
    scene = new QGraphicsScene();
    setScene(scene);

    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    scene->setSceneRect(0,0,width,height);
    button1 = new QPushButton("test");
    button1->setGeometry(1800,10,90,90);
    scene->addWidget(button1);
    setFixedSize(width,height);

   /* QAction * action = new QAction("test");
    action->setShortcut(Qt::Key_A);
    connect(action,&QAction::triggered,[this]()
    {
        qDebug() << "yaay";
    });*/

    setFocus();

    /*connect(button1,&QPushButton::clicked,[this]()
        {
            emit yaay();
            qDebug() << "pp";
        });*/




}


View::~View()
{


}

void View::setControl(Control * control)
{
    this->control = control;
}

void View::setConnection()
{
    connect(button1,SIGNAL(clicked(bool)),control,SLOT(timerStart()));
    connect(button1,&QPushButton::clicked,[this]()
        {
            button1->hide();
            qDebug() << "pp";
        });


}

void View::renderLevel()
{
    //button1= new QPushButton(QString::number(levelIndex));
    qDebug() << "a";
    QVector <Enemy *> enemies = level->getEnemies();
    QVector <Wall *> walls = level->getWalls();
    qDebug() << "b";
    Player * player = level->getPlayer();
    qDebug() << "c";
    for(int i = 0; i < enemies.count() ; i++ )
    {
        scene->addItem(enemies.at(i));
    }
    for(int i = 0; i< walls.count(); i++)
    {
        scene->addItem(walls.at(i));


    }
    qDebug() << "d";

    scene->addItem(player);
   // button1->show();



}






