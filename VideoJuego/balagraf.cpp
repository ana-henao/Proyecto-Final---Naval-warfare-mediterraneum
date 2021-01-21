#include "balagraf.h"


Balagraf::Balagraf(float R, float vo, float angulo)
{
    bala=new Bala(R, vo, angulo);
    pixmap=new QPixmap(":/pictures/bala.png");
}

Bala* Balagraf::getBala()
{
    return bala;
}

QRectF Balagraf::boundingRect() const
{
 return QRectF(-bala->getR(),-bala->getR(),bala->getR()*2,bala->getR()*2);
}

void Balagraf::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(-bala->getR(),-bala->getR(),*pixmap,0,0,bala->getR()*2,bala->getR()*2);
}
