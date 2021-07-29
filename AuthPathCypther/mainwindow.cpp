#include "mainwindow.h"
#include "ui_mainwindow.h"
//result of void function
QString result_string_cypher;


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

//cypher function

QString cypher_text(QString input_text_to_cypher_it){

    for(int i = 0; i<=input_text_to_cypher_it.length() ; i++){
            if(input_text_to_cypher_it[i] ==
                'a' ){

                 input_text_to_cypher_it[i] = 'n';


            }

    }
    return input_text_to_cypher_it;

}
//uncypher function

QString uncypher_text(QString input_text_to_uncypher_it){

    for(int i = 0; i<=input_text_to_uncypher_it.length() ; i++){
            if(input_text_to_uncypher_it[i] ==
                'n' ){


                 input_text_to_uncypher_it[i] = 'a';
                 //add valut to result

            }

    }
    return input_text_to_uncypher_it;
}
void MainWindow::on_pushButton_clicked()
{   //get data
    QString input = ui->textEdit->toPlainText();
    //process data
    cypher_text(input);
    //show result
    ui->textEdit_2->setText(cypher_text(input));

}


void MainWindow::on_pushButton_2_clicked()
{
        //get data
        QString input = ui->textEdit->toPlainText();
        //process data
        uncypher_text(input);
        //show result
        ui->textEdit_2->setText(uncypher_text(input));




}

