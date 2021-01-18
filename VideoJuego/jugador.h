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
public:
    Jugador(QString nombre, int vidas,int nBarcos);
    QString getNombre();
    int getVidas();
    QVector<Barcograf *> getBarcos();
    void impacto();
};

#endif // JUGADOR_H
