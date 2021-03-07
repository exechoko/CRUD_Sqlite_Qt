/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.0.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label_2;
    QSpinBox *stock;
    QDoubleSpinBox *precio;
    QLabel *label;
    QLineEdit *nomPro;
    QLabel *label_11;
    QPushButton *pushButton;
    QFrame *line;
    QFrame *line_2;
    QFrame *line_3;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_4;
    QLabel *label_4;
    QLabel *label_5;
    QSpinBox *spinID;
    QLabel *label_7;
    QLineEdit *nomActualiz;
    QLabel *label_6;
    QSpinBox *stockActualiz;
    QLabel *label_8;
    QDoubleSpinBox *precActualiz;
    QPushButton *actualizar_producto;
    QPushButton *cargar_prod_id;
    QWidget *widget;
    QGridLayout *gridLayout_5;
    QLabel *label_9;
    QLabel *label_10;
    QSpinBox *spinIDdelete;
    QPushButton *eliminarProd;
    QWidget *widget1;
    QGridLayout *gridLayout_3;
    QPushButton *mostrarTabla;
    QTableWidget *tableWidget;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(624, 447);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(340, 20, 261, 142));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        stock = new QSpinBox(layoutWidget);
        stock->setObjectName(QString::fromUtf8("stock"));
        stock->setMaximum(9999);

        gridLayout->addWidget(stock, 2, 1, 1, 1);

        precio = new QDoubleSpinBox(layoutWidget);
        precio->setObjectName(QString::fromUtf8("precio"));
        precio->setMaximum(9999000.000000000000000);
        precio->setValue(0.000000000000000);

        gridLayout->addWidget(precio, 3, 1, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 2, Qt::AlignHCenter);

        nomPro = new QLineEdit(layoutWidget);
        nomPro->setObjectName(QString::fromUtf8("nomPro"));

        gridLayout->addWidget(nomPro, 1, 1, 1, 1);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 1, 0, 1, 1, Qt::AlignLeft);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_2->addWidget(pushButton, 1, 0, 1, 1);

        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(320, 340, 281, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(320, 160, 281, 31));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(310, 0, 20, 431));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(340, 190, 259, 141));
        gridLayout_4 = new QGridLayout(layoutWidget1);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_4->addWidget(label_4, 0, 0, 1, 4, Qt::AlignHCenter);

        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_4->addWidget(label_5, 1, 0, 1, 1);

        spinID = new QSpinBox(layoutWidget1);
        spinID->setObjectName(QString::fromUtf8("spinID"));
        spinID->setMaximum(9999);

        gridLayout_4->addWidget(spinID, 1, 1, 1, 1);

        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_4->addWidget(label_7, 2, 0, 1, 1);

        nomActualiz = new QLineEdit(layoutWidget1);
        nomActualiz->setObjectName(QString::fromUtf8("nomActualiz"));

        gridLayout_4->addWidget(nomActualiz, 2, 1, 1, 3);

        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_4->addWidget(label_6, 3, 0, 1, 1);

        stockActualiz = new QSpinBox(layoutWidget1);
        stockActualiz->setObjectName(QString::fromUtf8("stockActualiz"));

        gridLayout_4->addWidget(stockActualiz, 3, 1, 1, 1);

        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_4->addWidget(label_8, 3, 2, 1, 1);

        precActualiz = new QDoubleSpinBox(layoutWidget1);
        precActualiz->setObjectName(QString::fromUtf8("precActualiz"));
        precActualiz->setMaximum(9999000.000000000000000);

        gridLayout_4->addWidget(precActualiz, 3, 3, 1, 1);

        actualizar_producto = new QPushButton(layoutWidget1);
        actualizar_producto->setObjectName(QString::fromUtf8("actualizar_producto"));
        actualizar_producto->setFlat(false);

        gridLayout_4->addWidget(actualizar_producto, 4, 0, 1, 4);

        cargar_prod_id = new QPushButton(layoutWidget1);
        cargar_prod_id->setObjectName(QString::fromUtf8("cargar_prod_id"));

        gridLayout_4->addWidget(cargar_prod_id, 1, 2, 1, 2);

        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(340, 360, 261, 49));
        gridLayout_5 = new QGridLayout(widget);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_5->addWidget(label_9, 0, 0, 1, 3, Qt::AlignHCenter);

        label_10 = new QLabel(widget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_5->addWidget(label_10, 1, 0, 1, 1);

        spinIDdelete = new QSpinBox(widget);
        spinIDdelete->setObjectName(QString::fromUtf8("spinIDdelete"));
        spinIDdelete->setMaximum(9999);

        gridLayout_5->addWidget(spinIDdelete, 1, 1, 1, 1);

        eliminarProd = new QPushButton(widget);
        eliminarProd->setObjectName(QString::fromUtf8("eliminarProd"));

        gridLayout_5->addWidget(eliminarProd, 1, 2, 1, 1);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(22, 22, 281, 391));
        gridLayout_3 = new QGridLayout(widget1);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        mostrarTabla = new QPushButton(widget1);
        mostrarTabla->setObjectName(QString::fromUtf8("mostrarTabla"));

        gridLayout_3->addWidget(mostrarTabla, 0, 0, 1, 1);

        tableWidget = new QTableWidget(widget1);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        gridLayout_3->addWidget(tableWidget, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        actualizar_producto->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Precio", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Stock", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Ingresar productos", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Nombre", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Agregar producto", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Actualizar productos", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Nombre", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Stock", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Precio", nullptr));
        actualizar_producto->setText(QCoreApplication::translate("MainWindow", "Actualizar producto", nullptr));
        cargar_prod_id->setText(QCoreApplication::translate("MainWindow", "Cargar Prod.", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Eliminar productos", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "ID del prod.", nullptr));
        eliminarProd->setText(QCoreApplication::translate("MainWindow", "Eliminar", nullptr));
        mostrarTabla->setText(QCoreApplication::translate("MainWindow", "Mostrar Productos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
