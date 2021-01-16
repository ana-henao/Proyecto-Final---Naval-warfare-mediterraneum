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

QVector<Barco *> Jugador::getBarcos()
{
    return barcos;
}

void Jugador::impacto()
{
    vidas--;
}
