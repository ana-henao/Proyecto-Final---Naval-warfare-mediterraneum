#include "bala.h"
#include "iostream"

using namespace std;

Bala::Bala(float R, float vx, float vy, int x, int y)
{
    this->Radio=R;
    this->Vx=vx;
    this->Vy=vy;
    this->x=x;
    this->y=y;
    cout <<"x "<<x<<endl;
    cout <<"y "<<y<<endl;

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

void Bala::setX(float x)
{
    this->x=x;
}

void Bala::setY(float y)
{
    this->y=y;
}
