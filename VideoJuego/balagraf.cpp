#include "balagraf.h"
#include "iostream"
#include "math.h"
#include <cmath>


using namespace std;

Balagraf::Balagraf(float R,  float vx, float vy, int x, int y,float dato,int tipo)
{
    if(x<0){
        pixmap=new QPixmap(":/pictures/bala.png");
    }else{
        pixmap=new QPixmap(":/pictures/balai.png");
    }

    if(tipo==1){

        float vo=pow(pow(vx,2)+pow(vy,2),1/2);//obtenemos el vector velocidad, sumando las componentes para ponerlas en la ecuacion
        BalaParab *bala_=new BalaParab(R, vo, 0, 0, 0, dato);
        bala_->setVo(vx);
        bala=bala_;
        setPos(x+30,y);//x+30, para que quede 30 pixeles mas corrido en la parte grafica
    }
    else if(tipo==2){
        BalaCirc *bala_=new BalaCirc(R, vx, vy, 4000, 5000, dato);
        bala_->setXcentral(0);
        bala_->setYcentral(0);
        bala_->setMasa(dato);
        bala=bala_;
        setPos(4000*0.05,5000*0.05);
    }else{

        float vo=pow(pow(vx,2)+pow(vy,2),1/2);
        BalaMRUA *bala_=new BalaMRUA(R, vo, 0, 0, 0, dato);
        bala_->setVo(vx);
        bala=bala_;
        setPos(x+30,y);

    }




   // cout << "x: "<<x<<endl;
   // cout << "y: "<<y<<endl;
    this->x=x;
    this->y=y;
    this->tipo=tipo;
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
    this->x=x;
    this->y=y;
    //cout<< "x "<<x<<endl;
    //cout<< "y "<<y<<endl;
    setPos(x,y);
}

float Balagraf::getX()
{
    return x;
}

float Balagraf::getY()
{
    return y;
}

int Balagraf::getTipo()
{
    return tipo;
}


