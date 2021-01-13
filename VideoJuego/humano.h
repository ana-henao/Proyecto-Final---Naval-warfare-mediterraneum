#ifndef HUMANO_H
#define HUMANO_H

#include "jugador.h"

class Humano: public Jugador
{
private:
    int nJugador;
public:
    Humano(QString nombre, int vidas,int nBarcos, int nJugador);;
    void disparar(int barco, float angulo);

};

#endif // HUMANO_H
