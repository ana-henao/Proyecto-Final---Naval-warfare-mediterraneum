#include "disparo.h"



Disparo::Disparo(int w_, int h_, int x, int y)
{
    this->w = w_;
    this->h = h_;
    this->posx = x;
    this->posy = y;
    pixmap=new QPixmap(":/pictures/bala-vida.png");
    setPos(x,y);
}

QRectF Disparo::boundingRect() const
{
     return QRectF(-1*w/2,-1*h/2,w,h);//puntos iniciales y ancho y alto de cuadro
}

void Disparo::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(-1*w/2,-1*h/2,*pixmap,0,0,2*w,2*h);
    //cout <<"pintar"<<endl;
}
