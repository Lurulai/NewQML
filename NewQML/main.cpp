#include "newqml.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    NewQML w;
    w.show();
    return a.exec();
}
