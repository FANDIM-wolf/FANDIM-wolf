#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("./ASP.db");
    if(database.open())
       {
        qDebug("open");
    }
    else{
        qDebug("no open");
    }
    query = new QSqlQuery(database);
    query->exec("CREATE TABLE IF NOT EXIST users(id INTEGER PRIMARY KEY NOT NULL ,name VARCHAR,password VARCHAR,phone INT);");
}

MainWindow::~MainWindow()
{
    delete ui;
}

//recive data and insert in db
void MainWindow::on_pushButton_clicked()
{


    QString user = ui->lineEdit->text();
    QString password = ui->lineEdit_2->text();
    QString email = ui->lineEdit_3->text();
    QString phone = ui->lineEdit_4->text();
    QSqlQuery query;
      query.prepare("INSERT INTO users (id, name,password,phone) "
                  "VALUES (:id, :name, :password,phone)");
      query.bindValue(":id", 1);
      query.bindValue(":name", "Bart");
      query.bindValue(":password", "Simpson");
      query.bindValue(":phone",8900);
      if (query.exec())
      {
          qDebug("exec");
      }

}

