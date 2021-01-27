#include "balamrua.h"


BalaMRUA::BalaMRUA(float R, float vx, float vy, int x, int y, float a): Bala(R,vx,vy,x,y){

    this->a=a;
}

void BalaMRUA::movimiento(float t)
{

}


void BalaMRUA::setAceleracion(float a)
{
    this->a=a;
}

float BalaMRUA::getAceleracion()
{
    return a;
}
