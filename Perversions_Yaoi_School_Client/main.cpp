#include <QtGui/QApplication>
#include "pmainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PMainWindow w;
    w.show();
    return a.exec();
}
