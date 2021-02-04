#include "barcograf.h"
#include <iostream>

using namespace std;


Barcograf::Barcograf(int Al, int An, int x, int y, float vo, int tipo)//contructor de los graficos de los barcos
{
//a cada barco (imagen), se le  asigna una imagen y con la clase barco se crea un objeto y se le asigna valores de ancho, alto, posicones x, y y un pontaje epecifico
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

void Barcograf::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)//pinta el barco en la escena
{
    painter->drawPixmap(-1*escala*barco->getAncho()/2,-1*escala*barco->getAlto()/2,*pixmap,0,0,2*escala*barco->getAncho(),2*escala*barco->getAlto());
    //cout <<"pintar"<<endl;
}

Barco* Barcograf::getBarco()//obtiene un objeto barco desde la clase barcograf
{
    return barco;
}

void Barcograf::setEscala(float s)//ajusta la escala de cada barco a la escena
{
    escala=s;
}

//asigna las posiciones x, y de los barcos en la escena
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
