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


void MainWindow::on_btn_Aceptar_clicked()
{
    QString nombre=ui->le_nombre->text();

    if(nombre.isEmpty())
        ui->lbl_mensaje->setText("Ingrese el nombre por favor");
    else
        ui->lbl_mensaje->setText("Bienvenido "+nombre);
}


