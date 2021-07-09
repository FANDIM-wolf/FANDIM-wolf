#include "graphic.h"
#include "ui_graphic.h"
#include "mainwindow.h"
Graphic::Graphic(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Graphic)
{
    /*
    Open data base to get statistic about orders
    */

    ui->setupUi(this);
    database=QSqlDatabase::addDatabase("QPSQL");
    database.setHostName("localhost");
    database.setDatabaseName("serverdb");
    database.setPort(5432);
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

    query->exec("SELECT name, price FROM visits WHERE price > 100");
    while (query->next()) {
         QString name = query->value(0).toString();
         int salary = query->value(1).toInt();
         qDebug() << name << salary;
       }
}

Graphic::~Graphic()
{
    delete ui;
}
