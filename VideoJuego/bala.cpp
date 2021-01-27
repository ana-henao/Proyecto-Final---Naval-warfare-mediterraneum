#include "bala.h"


Bala::Bala(float R, float vx, float vy, int x, int y)
{
    this->Radio=R;
    this->Vx=vx;
    this->Vy=vy;
    this->x=x;
    this->y=y;

}


float Bala::getX()
{
    return x;
}

float Bala::getY()
{
    return y;
}

float Bala::getVx()
{
    return Vx;
}

float Bala::getVy()
{
    return Vy;
}

float Bala::getR()
{
    return Radio;
}

void Bala::movimiento(float t)
{

}
