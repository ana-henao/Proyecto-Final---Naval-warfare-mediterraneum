#include "barcograf.h"
#include <iostream>

using namespace std;


Barcograf::Barcograf(int Al, int An, int x, int y, float vo)
{
    barco=new Barco(Al, An, x, y, vo);
    pixmap=new QPixmap(":/pictures/Balsa.png");
    setPos(x,y);

}

QRectF Barcograf::boundingRect() const
{
     return QRectF(-barco->getAncho()/2,-barco->getAlto()/2,barco->getAncho(),barco->getAlto());//puntos iniciales y ancho y alto de cuadro
}

void Barcograf::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(-barco->getAncho()/2,-barco->getAlto()/2,*pixmap,0,0,barco->getAncho(),barco->getAlto());
    cout <<"pintar"<<endl;
}

Barco* Barcograf::getBarco()
{
    return barco;
}
