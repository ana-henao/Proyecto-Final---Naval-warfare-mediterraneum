#ifndef JUGADOR_H
#define JUGADOR_H
#include <QString>
#include "barcograf.h"
#include<QVector>


class Jugador
{
private:
    QString nombre;
    int vidas;
    QVector<Barcograf *> barcos={};
    int nBarcos;
    int nJugador;
public:
    Jugador(QString nombre, int vidas,int nBarcos, int nJugador);
    QString getNombre();
    int getVidas();
    QVector<Barcograf *> getBarcos();
    void impacto();
    void disparar(int barco, float angulo, Jugador enemigo);
};

#endif // JUGADOR_H
