#include "jugador.h"


Jugador::Jugador(QString nombre, int vidas, int nBarcos)
{
    this->nombre=nombre;
    this->vidas=vidas;

}

QString Jugador::getNombre()
{
    return nombre;
}

int Jugador::getVidas()
{
    return vidas;
}

void Jugador::impacto()
{
    vidas--;
}
