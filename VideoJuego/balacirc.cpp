#include "balacirc.h"
#include <iostream>

using namespace std;

BalaCirc::BalaCirc(float R, float vx, float vy, int x, int y, float masa): Bala(R,vx,vy,x,y){

    this->Masa=masa;
    this->x=x;
    this->y=y;
}

void BalaCirc::movimiento(float dt_)
{
    float r = pow((pow((xcentral-x),2)+pow((ycentral-y),2)),1/2);
    float AX = G*Masa*(xcentral-x)/pow(r,2);
    float AY = G*Masa*(ycentral-y)/pow(r,2);
    //this->t+=0.1;
    if(t>4){
        t=-4;
        //this->t-=0.1;
    }else{
        this->t+=0.1;
    }
    x=x+(Vx*t);
    y=y+(Vy*t);
    Vx=Vx+(AX*t);
    Vy=Vy+(AY*t);
    //cout <<"x:"<<x<<endl;
    //cout <<"y:"<<y<<endl;
}

void BalaCirc::setMasa(float Masa)
{
    this->Masa=Masa;
}

float BalaCirc::getMasa()
{
    return Masa;
}

void BalaCirc::setXcentral(float xcentral)
{
    this->xcentral=xcentral;
}

void BalaCirc::setYcentral(float ycentral)
{
    this->ycentral=ycentral;
}


