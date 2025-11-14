#ifndef CUERPO_H
#define CUERPO_H
#include <QGraphicsItem>
#include <QPainter>


class Cuerpo : public QGraphicsItem
{
    int x, y,w,h;
    int vel;

public:
    Cuerpo();
    Cuerpo(int x, int y, int w, int h );
    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
               QWidget *widget = nullptr);
    void MoverArriba();
    void MoverAbajo();
    void MoverDerecha();
    void MoverIzquierda();
};

#endif // CUERPO_H
