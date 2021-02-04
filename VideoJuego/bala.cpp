#include "bala.h"
#include "iostream"

using namespace std;

Bala::Bala(float R, float vx, float vy, int x, int y)//constructor de la bala, asigna los distintos valores de los argumentos
{
    this->Radio=R;//this apunta al objeto al cual se hace la llamada de la función
    this->Vx=vx;
    this->Vy=vy;
    this->x=x;
    this->y=y;
    cout <<"x "<<x<<endl;
    cout <<"y "<<y<<endl;

}


float Bala::getX()//obtiene el valor de x que es la posicion
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

void Bala::movimiento(float t)//no lo utilizamos xd
{

}

void Bala::setX(float x)//asigna la posicion de x
{
    this->x=x;
}

void Bala::setY(float y)
{
    this->y=y;
}
