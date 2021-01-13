#include "humano.h"


Humano::Humano(QString nombre, int vidas, int nBarcos, int nJugador): Jugador(nombre, vidas, nBarcos){
    this->nJugador=nJugador;
}

void Humano::disparar(int barco, float angulo)
{

}
