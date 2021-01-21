#include "jugador.h"
#include<iostream>

using namespace std;


Jugador::Jugador(QString nombre, int vidas, int nBarcos)
{
    this->nombre=nombre;
    this->vidas=vidas;
    this->nBarcos=nBarcos;

    //if(nBarcos==5){
        barcos.append(new Barcograf(300,80,-100,0,1.5));
    //}
    //cout << barcos.size()<<endl;
}

QString Jugador::getNombre()
{
    return nombre;
}

int Jugador::getVidas()
{
    return vidas;
}

QVector<Barcograf *> Jugador::getBarcos()
{
    return barcos;
}

void Jugador::impacto()
{
    vidas--;
}
