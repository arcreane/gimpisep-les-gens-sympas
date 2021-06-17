#include <QCoreApplication>
#include <QApplication>
#include <QDebug>
#include "Headers/MainWindow.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    //qDebug() << "Hello World";

    MainWindow mainWindow;
    mainWindow.show();

    return QApplication::exec();
}
