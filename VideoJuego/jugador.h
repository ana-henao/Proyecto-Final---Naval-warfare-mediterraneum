#ifndef JUGADOR_H
#define JUGADOR_H
#include <QString>
#include <barco.h>
#include<QVector>

class Jugador
{
private:
    QString nombre;
    int vidas;
    QVector<Barco *> barcos={};
public:
    Jugador(QString nombre, int vidas,int nBarcos);
    QString getNombre();
    int getVidas();
    QVector<Barco*> getBarcos();
    void impacto();
};

#endif // JUGADOR_H
