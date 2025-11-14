#include "cuerpo.h"

Cuerpo::Cuerpo()
{

}

Cuerpo::Cuerpo(int x, int y, int w, int h)
{
    this->x=x;
    this->y=y;
    this->w=w;
    this->h=h;
    vel=3;
    setPos(x,y);
}

QRectF Cuerpo::boundingRect() const
{
    return QRect(x,y,w,h);
}

void Cuerpo::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->setBrush(Qt::red);
    painter->drawEllipse(boundingRect());
}
void Cuerpo::MoverAbajo()
{
    y=y+vel;
    setPos(x,y);
}

void Cuerpo::MoverArriba()
{
    y=y-vel;
    setPos(x,y);
}

void Cuerpo::MoverDerecha()
{
    x=x+vel;
    setPos(x,y);
}
void Cuerpo::MoverIzquierda()
{
    x=x-vel;
    setPos(x,y);
}


