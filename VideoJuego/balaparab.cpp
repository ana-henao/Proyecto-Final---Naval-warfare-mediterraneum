#include "balaparab.h"
#include "iostream"

using namespace std;


BalaParab::BalaParab(float R, float vx, float vy, int x, int y, float angulo): Bala(R,vx,vy,x,y){

    this->angulo=angulo;
}

void BalaParab::movimiento(float t)//ecuaciones de movimiento parabólco
{
    this->t+=0.001*t;
    Vx = vo*cos((angulo)*pi/180);
    Vy = vo*sin((angulo)*pi/180);
    x = x + Vx*this->t;
    y = y + Vy*this->t -(0.5*G*this->t*this->t);
}


//en POO se tien eun set y un get por cada objeto, no necesariamente se usa, pero es como una regla
void BalaParab::setAngulo(float an)
{
    this->angulo=an;
}

float BalaParab::getAngulo()
{
    return angulo;
}

void BalaParab::setVo(float vo)
{
    this->vo=vo;
}
