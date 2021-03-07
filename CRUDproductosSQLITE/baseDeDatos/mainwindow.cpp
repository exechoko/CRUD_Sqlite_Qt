#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtSql/QtSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QMessageBox>
#include <QDebug>
#include <string>
#include <cstring>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Para todos los casos lo primero es instanciar el objeto QSqlDatabase indicando el gestor de base de datos a utilizar

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    //Abrimos la base de datos si falla mostramos el error
    //db.setDatabaseName("basededatos.sqlite");
    db.setDatabaseName("basededatos.db");

    if (!db.open()) {
        QMessageBox::warning(0, "Error", "No se conecto la base de datos.");

    }


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QSqlQuery query;// Insertar un nuevo contacto
    query.prepare("INSERT INTO productos (producto, stock, precio) "
                  "VALUES (:producto, :stock, :precio)");
    query.bindValue(":producto", ui->nomPro->text());
    query.bindValue(":stock", ui->stock->value());
    query.bindValue(":precio", ui->precio->value());
    query.exec();

    //limpia los valores
    ui->nomPro->setText("");
    ui->stock->setValue(0);
    ui->precio->setValue(0.00);
    QMessageBox::information(0,"Ingreso de producto", "Se ha ingresado correctamente.");

}

void MainWindow::on_mostrarTabla_clicked()
{
    //creamos la instancia consulta o query
    QSqlQuery query;

    //ejecutamos la consulta
    query.exec("SELECT * FROM productos");

    //invocamos las interfaces ui y el componente, ponemos filas por defecto 1
    ui->tableWidget->setRowCount(1);
    ui->tableWidget->setColumnCount(4);

    //hacemos las columnas expandibles
    ui->tableWidget->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);

    //Añadimos un nombre a cada columna
    ui->tableWidget->setHorizontalHeaderLabels(QString("ID;Producto;Stock;Precio").split(";"));

    //actualizar_vista_table(query);
    //creamos una variable para conocer el numero de fila mostrada
    int i = 0;

    //recorremos la consulta que realizamos antes
    while (query.next()) {
        //añadimos en cada columna un dato segun corresponda cada registro tiene
        //una posicion numerica en la tabla

        //qDebug() << q.lastError().text();
        //qDebug() << query.value(1).toString();

        //id
        ui->tableWidget->setItem(i, 0, new QTableWidgetItem(query.value(0).toString()));

        //producto
        ui->tableWidget->setItem(i, 1, new QTableWidgetItem(query.value(1).toString()));

        //stock
        ui->tableWidget->setItem(i, 2, new QTableWidgetItem(query.value(2).toString()));

        //precio
        ui->tableWidget->setItem(i, 3, new QTableWidgetItem(query.value(3).toString()));

        i++;

        //insertamos una nueva fila en el tablewidget
        ui->tableWidget->insertRow(i);
    }

    //tope del spin ID
    ui->spinID->setMaximum(i);
    ui->spinIDdelete->setMaximum(i);
}

void MainWindow::on_cargar_prod_id_clicked()
{
    int id = ui->spinID->value();

    QSqlQuery query;
    query.exec("SELECT * FROM productos");

    while (query.next()) {
        if (id == query.value(0).toInt()) {
            ui->nomActualiz->setText(query.value(1).toString());
            ui->stockActualiz->setValue(query.value(2).toInt());
            ui->precActualiz->setValue(query.value(3).toDouble());
            break;
        }
    }
}

void MainWindow::on_actualizar_producto_clicked()
{
    QString id, stock, prod, precio;

    id = ui->spinID->text();
    prod = ui->nomActualiz->text();
    precio = ui->precActualiz->text();
    stock = ui->stockActualiz->text();

    QSqlQuery query;// Insertar un nuevo contacto
    query.prepare("UPDATE productos SET producto = '"+prod+"', stock = '"+stock+"', precio = '"+precio+"' WHERE id = '"+id+"'");
    query.exec();

    //limpia los valores
    ui->nomActualiz->setText("");
    ui->stockActualiz->setValue(0);
    ui->precActualiz->setValue(0.00);
    QMessageBox::information(0,"Actualización de producto", "Se ha actualizado correctamente.");
}

void MainWindow::on_eliminarProd_clicked()
{
    QString id;
    id = ui->spinIDdelete->text();

    QSqlQuery query;
    query.prepare("DELETE FROM productos WHERE id = '"+id+"'");
    query.exec();
    QMessageBox::warning(0,"Eliminación de producto", "Se ha eliminado correctamente.");

}
