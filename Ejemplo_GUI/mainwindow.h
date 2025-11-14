#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QString>
#include <cuerpo.h>
#include <QGraphicsScene>
#include <QMainWindow>
#include <QKeyEvent>
#include <QTimer>
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
    void on_btn_Aceptar_clicked();
    void keyPressEvent(QKeyEvent *event);
    void ActualizarTiempo();



private:
    Ui::MainWindow *ui;
    Cuerpo * miCuerpo;
    QGraphicsScene *scene;
    QTimer *timer;
    int tiempoJuego;
};
#endif // MAINWINDOW_H
