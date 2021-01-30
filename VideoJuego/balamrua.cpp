#include "balamrua.h"


BalaMRUA::BalaMRUA(float R, float vx, float vy, int x, int y, float a): Bala(R,vx,vy,x,y){

    this->a=a;
}

void BalaMRUA::movimiento(float t)
{
    this->t+=0.0001;
    Vx=this->a*this->t;
    this->x=x+Vx*this->t;
    this->y=y;
}


void BalaMRUA::setAceleracion(float a)
{
    this->a=a;
}

float BalaMRUA::getAceleracion()
{
    return a;
}

void BalaMRUA::setVo(float vo)
{
    this->vo=vo;
}
