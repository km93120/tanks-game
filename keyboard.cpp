#include "keyboard.h"
#include <QDebug>

Keyboard::Keyboard(QWidget *parent) : QWidget(parent)
{
        setFocus();
}

void Keyboard::keyPressEvent(QKeyEvent *event)
{
    qDebug()<< event->key();

}
