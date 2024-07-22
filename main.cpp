#include "qtqq.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qtqq w;
    w.show();
    return a.exec();
}
