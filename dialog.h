#ifndef DIALOG_H
#define DIALOG_H

#include <QMainWindow>
#include <QFileSystemModel>
#include <QDialog>
#include <QtCore>
#include <QtGui>

QT_BEGIN_NAMESPACE
namespace Ui { class dialog; }
QT_END_NAMESPACE

class dialog : public QMainWindow
{
    Q_OBJECT

public:
    dialog(QWidget *parent = nullptr);
    ~dialog();

private slots:
    void on_treeView_clicked(const QModelIndex &index);

private:
    Ui::dialog *ui;
    QFileSystemModel *dirmodel;
    QFileSystemModel *filemodel;
};
#endif // DIALOG_H
