/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *btn_Aceptar;
    QLabel *lbl_Bienvenida;
    QLineEdit *le_nombre;
    QLabel *lbl_nombre;
    QLabel *lbl_mensaje;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        btn_Aceptar = new QPushButton(centralwidget);
        btn_Aceptar->setObjectName("btn_Aceptar");
        btn_Aceptar->setGeometry(QRect(290, 290, 91, 31));
        QFont font;
        font.setPointSize(11);
        btn_Aceptar->setFont(font);
        lbl_Bienvenida = new QLabel(centralwidget);
        lbl_Bienvenida->setObjectName("lbl_Bienvenida");
        lbl_Bienvenida->setGeometry(QRect(280, 30, 191, 51));
        QFont font1;
        font1.setPointSize(21);
        lbl_Bienvenida->setFont(font1);
        le_nombre = new QLineEdit(centralwidget);
        le_nombre->setObjectName("le_nombre");
        le_nombre->setGeometry(QRect(330, 220, 113, 22));
        lbl_nombre = new QLabel(centralwidget);
        lbl_nombre->setObjectName("lbl_nombre");
        lbl_nombre->setGeometry(QRect(170, 220, 151, 31));
        QFont font2;
        font2.setPointSize(13);
        lbl_nombre->setFont(font2);
        lbl_mensaje = new QLabel(centralwidget);
        lbl_mensaje->setObjectName("lbl_mensaje");
        lbl_mensaje->setGeometry(QRect(170, 380, 331, 21));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btn_Aceptar->setText(QCoreApplication::translate("MainWindow", "Aceptar", nullptr));
        lbl_Bienvenida->setText(QCoreApplication::translate("MainWindow", "Ejemplo GUI", nullptr));
        lbl_nombre->setText(QCoreApplication::translate("MainWindow", "Ingrese su nombre", nullptr));
        lbl_mensaje->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
