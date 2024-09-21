#include "dialog.h"
#include "ui_dialog.h"
#include <QStyle>

dialog::dialog(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::dialog)
{
    ui->setupUi(this);

    QString sPath = "F:/";

    dirmodel = new QFileSystemModel(this);
    dirmodel->setFilter(QDir::NoDotAndDotDot | QDir::AllDirs);
    dirmodel->setRootPath(sPath);
    ui->treeView->setModel(dirmodel);
    ui->treeView->setStyleSheet("background-color:lightblue;");

    filemodel = new QFileSystemModel(this);
    filemodel->setFilter(QDir::NoDotAndDotDot | QDir::Files | QDir::AllEntries);
    filemodel->setRootPath(sPath);
    ui->listView->setModel(filemodel);
    ui->listView->setStyleSheet("background-color:lightpink;");
}

dialog::~dialog()
{
    delete ui;
}

void dialog::on_treeView_clicked(const QModelIndex &index)
{
    QString sPath = dirmodel->fileInfo(index).absoluteFilePath();
    ui->listView->setRootIndex(filemodel->setRootPath(sPath));
}



