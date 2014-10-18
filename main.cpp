#include "calwidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CalWidget w;
    w.show();

    return a.exec();
}
