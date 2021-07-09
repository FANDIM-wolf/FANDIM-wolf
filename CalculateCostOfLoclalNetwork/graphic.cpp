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

void Graphic::on_pushButton_clicked()
{
        int N = 231;
        QVector<double> x(N), y(N); //Array of coordinates of points

        //Process data for graphic
            int i=0;
            for (double X=1; X<=20; X+=1)//Пробегаем по всем точкам
            {
                x[i] = X;
                y[i] = X*X;//Формула нашей функции
                i++;
            }

        ui->widget->clearGraphs();//Если нужно, но очищаем все графики
        //Добавляем один график в widget
        ui->widget->addGraph();
        //Говорим, что отрисовать нужно график по нашим двум массивам x и y
        ui->widget->graph(0)->setData(x, y);

        //Подписываем оси Ox и Oy
        ui->widget->xAxis->setLabel("months");
        ui->widget->yAxis->setLabel("price");

        //Set field where we show points
        ui->widget->xAxis->setRange(1, 10);//for Ox
        ui->widget->yAxis->setRange(1, 10);//for Oy

        //И перерисуем график на нашем widget
        ui->widget->replot();
}

