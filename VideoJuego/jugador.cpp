#include "jugador.h"
#include<iostream>

using namespace std;


Jugador::Jugador(QString nombre, int disparos, int nBarcos,int nJugador)
{
    this->nombre=nombre;
    this->disparos=disparos;
    this->nBarcos=nBarcos;
    this->nJugador=nJugador;

    if(nBarcos==5){
        barcos.append(new Barcograf(68,30,-80,50,1.5,1));//balsa
        nombres_barcos.append("Balsa");
        barcos.append(new Barcograf(125,61,-50,-130,1.5,4));//vela
        nombres_barcos.append("Vela");
        barcos.append(new Barcograf(80,14,-200,-110,1.5,5));//cayak
        nombres_barcos.append("Cayak");
        barcos.append(new Barcograf(63,30,-280,70,1.5,3));//barcoP
        nombres_barcos.append("Barco Pequeño");
        barcos.append(new Barcograf(130,41,-180,50,1.5,2));//barcoH
        nombres_barcos.append("Barco Largo");

    }
    else if(nBarcos==4){
        barcos.append(new Barcograf(68,30,-80,50,1.5,1));//balsa
        nombres_barcos.append("Balsa");
        barcos.append(new Barcograf(125,61,-50,-130,1.5,4));//vela
        nombres_barcos.append("Vela");
        barcos.append(new Barcograf(80,14,-200,-110,1.5,5));//cayak
        nombres_barcos.append("Cayak");
        barcos.append(new Barcograf(63,30,-280,70,1.5,3));//barcoP
        nombres_barcos.append("Barco Pequeño");
    }
    else if(nBarcos==3){
        barcos.append(new Barcograf(80,14,-200,-110,1.5,5));//cayak
        nombres_barcos.append("Cayak");
        barcos.append(new Barcograf(63,30,-280,70,1.5,3));//barcoP
        nombres_barcos.append("Barco Pequeño");
        barcos.append(new Barcograf(68,30,-80,50,1.5,1));//balsa
        nombres_barcos.append("Balsa");
    }

    //cout << barcos.size()<<endl;
}

QString Jugador::getNombre()
{
    return nombre;
}

int Jugador::getDisparos()
{
    return disparos;
}

int Jugador::getPuntaje()
{
    return puntaje;
}

void Jugador::Quitar_disparo()
{
    this->disparos--;
}

void Jugador::setPuntaje(int puntaje)
{
    this->puntaje+=puntaje;
}


QVector<Barcograf *> Jugador::getBarcos()
{
    return barcos;
}

void Jugador::Reset()
{

}

QStringList Jugador::getNombresBarcos()
{
 return nombres_barcos;
}


