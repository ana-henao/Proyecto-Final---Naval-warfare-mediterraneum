#include "bala.h"


Bala::Bala(float R, float vo, float angulo)
{
    this->Radio=R;
    this->vo=vo;
    this->angulo=angulo;
}

void Bala::movimiento(bool enemigo)
{

    Vx = vo*cos((angulo)*pi/180);
    Vy = vo*sin((angulo)*pi/180);
    x = 0.0;
    y = 0.0;
    for(int t = 0; ; t++){
        x = Vx*t;
        y = y + Vy*t -(0.5*G*t*t);
//        for(int i=0; i<barcos.size();i++){
//            if(sqrt(pow((barcos[i]->getX() - x),2)+pow((barcos[i]->getY() - y),2)) < Radio){
//                if(y<0) y=0;
//                //enemigo.impacto();
//                 //imprimir impacto
//                break;
//            }
//        }

        if(y < 0){
            break;
        }
    }
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
