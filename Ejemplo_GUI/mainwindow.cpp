#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    scene= new QGraphicsScene();
    tiempoJuego=0;
    scene->setSceneRect(0,0,630,400);
    ui->graphicsView->setScene(scene);
    timer = new QTimer();
    connect(timer,SIGNAL(timeout()),this,SLOT(ActualizarTiempo()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btn_Aceptar_clicked()
{

    int x=ui->le_x->text().toInt();
    int y=ui->le_y->text().toInt();
    miCuerpo= new Cuerpo(x,y,50,50);
    scene->addItem(miCuerpo);
    timer->start(1000);
}
void MainWindow::keyPressEvent(QKeyEvent *event)
{
    if(event->key()==Qt::Key_S)
        miCuerpo->MoverAbajo();
    else if(event->key()==Qt::Key_W)
        miCuerpo->MoverArriba();
    else if(event->key()==Qt::Key_D)
        miCuerpo->MoverDerecha();
    else if(event->key()==Qt::Key_A)
        miCuerpo->MoverIzquierda();
}

void MainWindow::ActualizarTiempo()
{
    tiempoJuego++;
    ui->lcdNumber->display(tiempoJuego);
}


