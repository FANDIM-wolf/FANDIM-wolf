#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "maindialog.h"

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
   hide();
   main_dialog = new MainDialog(this);
   main_dialog->show();
   //MainDialog head_dialog;
   //head_dialog.setModal(true);
   //head_dialog.exec();

}

