#include "jugador.h"


Jugador::Jugador(QString nombre, int vidas, int nBarcos)
{
    this->nombre=nombre;
    this->vidas=vidas;
    this->nBarcos=nBarcos;

}

QString Jugador::getNombre()
{
    return nombre;
}

int Jugador::getVidas()
{
    return vidas;
}

QVector<Barcograf *> Jugador::getBarcos()
{
    return barcos;
}

void Jugador::impacto()
{
    vidas--;
}
