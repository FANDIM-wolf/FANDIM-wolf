#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::paintEvent(QPaintEvent *event){
    Q_UNUSED(event);
    QPainter painter(this); // Create object of Painter
    // Set painter properties
    painter.setPen(QPen(Qt::black, 1, Qt::SolidLine, Qt::FlatCap));
    painter.drawLine(10,20,30,95);        // drawing code

    /* Проверяем, какой из радиобаттонов выбран
        * */
       if(ui->radioButton->isChecked()){
           painter.setPen(QPen(Qt::black, 1, Qt::SolidLine, Qt::FlatCap));
           painter.drawLine(10,20,30,95);        // drawing code
       } else if(ui->radioButton_2->isChecked()){
           painter.setPen(QPen(Qt::red, 1, Qt::SolidLine, Qt::FlatCap));
           painter.drawLine(10,20,30,95);        // drawing code
       } else if(ui->radioButton_3->isChecked()){
           painter.setPen(QPen(Qt::white, 1, Qt::SolidLine, Qt::FlatCap));
           painter.drawLine(10,20,30,95);        // drawing code

       } else {
           painter.setPen(QPen(Qt::white, 1, Qt::SolidLine, Qt::FlatCap));
           painter.drawLine(10,20,30,195);        // drawing code
       }
}

void MainWindow::on_graphicsView_rubberBandChanged(const QRect &viewportRect, const QPointF &fromScenePoint, const QPointF &toScenePoint)
{
    //nothing to do
}

void MainWindow::on_radioButton_clicked()
{
    repaint();
}

void MainWindow::on_radioButton_2_clicked()
{
    repaint();
}


void MainWindow::on_radioButton_3_clicked()
{
    repaint();
}

