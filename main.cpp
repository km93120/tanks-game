#include "model.h"
#include "view.h"
#include "control.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Control * c  = new Control();
    Model * model = new Model();
    View * view = new View();
    c->setParams(model,view);



    view->showFullScreen();
    c->setFocus();

    return a.exec();
}
