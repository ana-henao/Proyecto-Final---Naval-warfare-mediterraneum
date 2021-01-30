#include "barco.h"
#include "iostream"

using namespace std;

Barco::Barco(int Al, int An, int x, int y, float vo, int p)
{
    this->alto=Al;
    this->ancho=An;
    this->x=x;
    this->y=y;
    this->vo=vo;
    this->puntaje=p;
}

void Barco::setAngulo(float a)
{
    this->angulo=a;
}

int Barco::getAlto()
{
    return alto;
}

int Barco::getAncho()
{
    return ancho;
}

int Barco::getX()
{
    return x;
}

int Barco::getY()
{
    return y;
}

float Barco::getVo()
{
    return vo;
}

float Barco::getAngulo()
{
    return angulo;
}

Balagraf *Barco::dispara(float R,float vx, float vy,float dato,int tipo)
{
    //cout <<"nuevo"<< endl;
    bala=new Balagraf(R,vx,vy,this->x,this->y,dato,tipo);
    return bala;
}

void Barco::setX(int x)
{
    this->x=x;
}

void Barco::setY(int y)
{
    this->y=y;
}

int Barco::getPuntaje()
{
    return puntaje;
}


