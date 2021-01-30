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
    QVector<Barcograf *> barcos={};
    int nBarcos;
    int nJugador;
    QStringList nombres_barcos;

public:
    Jugador(QString nombre, int disparos,int nBarcos, int nJugador);
    QString getNombre();
    int getDisparos();
    int getPuntaje();
    void Quitar_disparo();
    void setPuntaje(int puntaje);
    QVector<Barcograf *> getBarcos();
    void disparar(int barco, float angulo, Jugador enemigo);
    void Reset();
    QStringList getNombresBarcos();
};

#endif // JUGADOR_H
