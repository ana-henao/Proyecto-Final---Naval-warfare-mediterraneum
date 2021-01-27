#include "jugador.h"
#include<iostream>

using namespace std;


Jugador::Jugador(QString nombre, int vidas, int nBarcos,int nJugador)
{
    this->nombre=nombre;
    this->vidas=vidas;
    this->nBarcos=nBarcos;
    this->nJugador=nJugador;

    if(nBarcos==5){
        barcos.append(new Barcograf(68,30,-80,50,1.5,1));//balsa
        barcos.append(new Barcograf(125,61,-50,-130,1.5,4));//vela
        barcos.append(new Barcograf(80,14,-200,-110,1.5,5));//cayak
        barcos.append(new Barcograf(63,30,-280,70,1.5,3));//barcoP
        barcos.append(new Barcograf(130,41,-180,50,1.5,2));//barcoH


    }
    cout << barcos.size()<<endl;
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
