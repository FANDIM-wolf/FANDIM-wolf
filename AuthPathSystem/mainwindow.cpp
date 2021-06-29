#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    database=QSqlDatabase::addDatabase("QPSQL");
    database.setHostName("localhost");
    database.setDatabaseName("serverdb");
    database.setPassword("root");
    database.setUserName("postgres");
    if(database.open())
       {
        qDebug("open");
    }
    else{
        qDebug("no open");
    }
    query = new QSqlQuery(database);


}
MainWindow::~MainWindow()
{
    delete ui;
}

//recive data and insert in db
void MainWindow::on_pushButton_clicked()
{
        database.open();
        query = new QSqlQuery(database);
      query->prepare("INSERT INTO users (name) "
                  "VALUES (:name)");
      query->bindValue(":name", "Bart");
      query->exec();
      database.close();
}

