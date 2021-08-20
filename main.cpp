#include "mainwin.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QCoreApplication::setApplicationName( QString(APP_NAME) );
    MainWin w;
    w.setWindowIcon(QIcon(APP_ICON));
    w.show();

    return a.exec();
}
