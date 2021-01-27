#include "balacirc.h"


BalaCirc::BalaCirc(float R, float vx, float vy, int x, int y, float masa): Bala(R,vx,vy,x,y){

    this->Masa=masa;
}

void BalaCirc::movimiento(float t)
{

}

void BalaCirc::setMasa(float Masa)
{
    this->Masa=Masa;
}

float BalaCirc::getMasa()
{
    return Masa;
}
