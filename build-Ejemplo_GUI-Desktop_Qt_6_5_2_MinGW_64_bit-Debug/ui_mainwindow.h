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
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLCDNumber>
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
    QLabel *lbl_Bienvenida;
    QLineEdit *le_x;
    QPushButton *btn_Aceptar;
    QGraphicsView *graphicsView;
    QLCDNumber *lcdNumber;
    QLineEdit *le_y;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        lbl_Bienvenida = new QLabel(centralwidget);
        lbl_Bienvenida->setObjectName("lbl_Bienvenida");
        lbl_Bienvenida->setGeometry(QRect(280, 30, 191, 51));
        QFont font;
        font.setPointSize(21);
        lbl_Bienvenida->setFont(font);
        le_x = new QLineEdit(centralwidget);
        le_x->setObjectName("le_x");
        le_x->setGeometry(QRect(730, 90, 51, 22));
        btn_Aceptar = new QPushButton(centralwidget);
        btn_Aceptar->setObjectName("btn_Aceptar");
        btn_Aceptar->setGeometry(QRect(680, 200, 91, 31));
        QFont font1;
        font1.setPointSize(11);
        btn_Aceptar->setFont(font1);
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(30, 90, 632, 402));
        lcdNumber = new QLCDNumber(centralwidget);
        lcdNumber->setObjectName("lcdNumber");
        lcdNumber->setGeometry(QRect(90, 40, 64, 23));
        le_y = new QLineEdit(centralwidget);
        le_y->setObjectName("le_y");
        le_y->setGeometry(QRect(730, 140, 51, 22));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(710, 90, 21, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(710, 140, 21, 16));
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
        lbl_Bienvenida->setText(QCoreApplication::translate("MainWindow", "Ejemplo GUI", nullptr));
        btn_Aceptar->setText(QCoreApplication::translate("MainWindow", "Aceptar", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Y", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
