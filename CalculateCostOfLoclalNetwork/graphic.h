#ifndef GRAPHIC_H
#define GRAPHIC_H

#include <QDialog>
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QSqlQuery>
#include <QString>
#include <QTableView>
#include <QSqlTableModel>
namespace Ui {
class Graphic;
}

class Graphic : public QDialog
{
    Q_OBJECT

public:
    explicit Graphic(QWidget *parent = nullptr);
    ~Graphic();

private:
    Ui::Graphic *ui;
    QSqlDatabase database;
    QSqlQuery *query ;
    QSqlTableModel *model;
};

#endif // GRAPHIC_H
