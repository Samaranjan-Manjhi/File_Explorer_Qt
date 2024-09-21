#include "dialog.h"

#include <QApplication>
#include <QFileSystemModel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    dialog w;
    w.resize(1050,560);
    w.setStyleSheet("background-color:lightGray;");
    w.show();
    return a.exec();
}
