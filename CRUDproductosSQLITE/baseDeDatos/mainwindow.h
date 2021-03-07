#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlQuery>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_mostrarTabla_clicked();

    void on_cargar_prod_id_clicked();

    void on_actualizar_producto_clicked();

    void on_eliminarProd_clicked();

private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
