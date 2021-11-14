#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "adduserdialog.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPassword("");
    db.setDatabaseName("home");
    if(db.open())
           {
            qDebug("open");
            adduserdialog adduser_window;
            adduser_window.setModal(false);
            adduser_window.exec();
        }
        else{
            qDebug("no open");
        }



    db.close();



}

