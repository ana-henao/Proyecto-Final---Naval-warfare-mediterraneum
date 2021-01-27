#include "balagraf.h"
#include "iostream"
#include "math.h"
#include <cmath>


using namespace std;

Balagraf::Balagraf(float R,  float vx, float vy, int x, int y,float dato,int tipo)
{
    if(tipo==1){
        float vo=pow(pow(vx,2)+pow(vy,2),1/2);
        BalaParab *bala_=new BalaParab(R, vo, 0, 0, 0, dato);
        bala_->setVo(vx);
        bala=bala_;
    }
    else if(tipo==2){
        bala=new BalaCirc(R, vx, vy, x, y, dato);
    }else{
        bala=new BalaMRUA(R, vx, vy, x, y, dato);
    }


    pixmap=new QPixmap(":/pictures/bala.png");
    setPos(x,y);
    this->xo=x;
    this->yo=y;
}



Bala* Balagraf::getBala()
{
    return bala;
}


QRectF Balagraf::boundingRect() const
{
     return QRectF(-1*escala*bala->getR()/2,-1*escala*bala->getR()/2,escala*bala->getR(),escala*bala->getR());//puntos iniciales y ancho y alto de cuadro
}

void Balagraf::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    painter->drawPixmap(-1*escala*bala->getR()/2,-1*escala*bala->getR()/2,*pixmap,0,0,2*escala*bala->getR(),2*escala*bala->getR());
    //cout <<"pintar"<<endl;
}


void Balagraf::setEscala(float s)
{
    escala=s;
}

void Balagraf::actualizar(float x,float y)
{
    float x_=abs(this->xo);
    float y_=abs(this->yo);
    setPos(x-x_,-y+y_);
}
