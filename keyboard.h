#ifndef KEYBOARD_H
#define KEYBOARD_H

#include <QWidget>
#include <QKeyEvent>


class Keyboard : public QWidget
{
    Q_OBJECT
public:
    explicit Keyboard(QWidget *parent = nullptr);

protected:
    void keyPressEvent(QKeyEvent * event) override;

signals:

public slots:
};

#endif // KEYBOARD_H
