#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTableWidget>
#include <QLineEdit>
#include <QPushButton>
#include <QMessageBox>
#include "database.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void addRecord();
    void removeRecord();
    void findRecord();
    void saveFile();
    void loadFile();
private:
    Ui::MainWindow *ui;
    DataBase database;
    void refreshTable();
};
#endif // MAINWINDOW_H
