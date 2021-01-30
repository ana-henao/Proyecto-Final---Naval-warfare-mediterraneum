#include "barcograf.h"
#include <iostream>

using namespace std;


Barcograf::Barcograf(int Al, int An, int x, int y, float vo, int tipo)
{

    if(tipo==1){
    pixmap=new QPixmap(":/pictures/Balsa.png");
    barco=new Barco(Al, An, x, y, vo,10);
    }
    else if (tipo==2) {
        pixmap=new QPixmap(":/pictures/Barco-H.png");
        barco=new Barco(Al, An, x, y, vo,5);
    }
    else if(tipo==3){
        pixmap=new QPixmap(":/pictures/Barco-pequeño.png");
        barco=new Barco(Al, An, x, y, vo,20);
    }
    else if(tipo==4){
        pixmap=new QPixmap(":/pictures/Barco-Vela.png");
        barco=new Barco(Al, An, x, y, vo,8);
    }
    else if(tipo==5){
        pixmap=new QPixmap(":/pictures/Cayak.png");
        barco=new Barco(Al, An, x, y, vo,15);
    }
    setPos(x,y);
}

QRectF Barcograf::boundingRect() const
{
     return QRectF(-1*escala*barco->getAncho()/2,-1*escala*barco->getAlto()/2,escala*barco->getAncho(),escala*barco->getAlto());//puntos iniciales y ancho y alto de cuadro
}

void Barcograf::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(-1*escala*barco->getAncho()/2,-1*escala*barco->getAlto()/2,*pixmap,0,0,2*escala*barco->getAncho(),2*escala*barco->getAlto());
    //cout <<"pintar"<<endl;
}

Barco* Barcograf::getBarco()
{
    return barco;
}

void Barcograf::setEscala(float s)
{
    escala=s;
}

void Barcograf::setX(int x)
{
    barco->setX(x);
    setPos(x,barco->getY());
}

void Barcograf::setY(int y)
{
    barco->setY(y);
    setPos(barco->getX(),y);
}
