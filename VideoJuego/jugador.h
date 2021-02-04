#ifndef JUGADOR_H
#define JUGADOR_H
#include <QString>
#include "barcograf.h"
#include<QVector>


class Jugador
{
private:
    QString nombre;
    int disparos;
    int puntaje=0;
    QVector<Barcograf *> barcos={};//vector que almacena la cantidad de barcos
    int nBarcos;
    int nJugador;
    QStringList nombres_barcos;//alamcena la cantidad de barcos

public:
    Jugador(QString nombre, int disparos,int nBarcos, int nJugador);
    QString getNombre();
    int getDisparos();
    int getPuntaje();
    void Quitar_disparo();
    void setPuntaje(int puntaje);
    QVector<Barcograf *> getBarcos();//vector que obtiene los nombres de los barcos
    void disparar(int barco, float angulo, Jugador enemigo);
    void Reset();
    QStringList getNombresBarcos();//almacena los nombres de los barcos
};

#endif // JUGADOR_H
